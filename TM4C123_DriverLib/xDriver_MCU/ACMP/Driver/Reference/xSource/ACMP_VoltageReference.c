/**
 *
 * @file ACMP_VoltageReference.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim Apr 2, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 2, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Driver/Reference/xHeader/ACMP_VoltageReference.h>

#include <xDriver_MCU/ACMP/Driver/Reference/xHeader/ACMP_ReferenceEnable.h>
#include <xDriver_MCU/ACMP/Driver/Reference/xHeader/ACMP_ReferenceEncoder.h>
#include <xDriver_MCU/ACMP/Driver/Reference/xHeader/ACMP_ReferenceRange.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

float32_t ACMP__fSetVoltageReference(ACMP_nMODULE enModule, float32_t fVoltageReferencePorcentage)
{
    float32_t fVoltageProcentage1 = 0.0f;
    float32_t fVoltageProcentage2 = 0.0f;
    float32_t fVoltageProcentageDecimal1 = 0.0f;
    float32_t fVoltageProcentageDecimal2 = 0.0f;
    float32_t fVoltageCurrent = 0.0f;
    uint32_t u32VoltageProcentageInteger1 = 0UL;
    uint32_t u32VoltageProcentageInteger2 = 0UL;
    uint32_t u32VoltageStep = 0UL;
    ACMP_nREFERENCE_RANGE enVoltageRange = ACMP_enREFERENCE_RANGE_HIGH;
    if(74.82f < fVoltageReferencePorcentage)
    {
        fVoltageReferencePorcentage = 74.82f;
    }

    if(fVoltageReferencePorcentage >= 23.81f)
    {
        /*Low range formula*/
        fVoltageProcentage1 = fVoltageReferencePorcentage;
        fVoltageProcentage1 -= 100.0f/4.2f;
        fVoltageProcentage1 *= 29.4f;
        fVoltageProcentage1 /= 100.0f;

        u32VoltageProcentageInteger1 = (uint32_t) fVoltageProcentage1;
        fVoltageProcentageDecimal1 = fVoltageProcentage1;
        fVoltageProcentageDecimal1 -= (float32_t) u32VoltageProcentageInteger1;
        if(0.5f < fVoltageProcentageDecimal1)
        {
            fVoltageProcentage1 += 0.5f;

            u32VoltageProcentageInteger1 = (uint32_t) fVoltageProcentage1;
            fVoltageProcentageDecimal1 = 1.0f - fVoltageProcentageDecimal1;
        }

        /*High Range formula*/
        fVoltageProcentage2 = fVoltageReferencePorcentage;
        fVoltageProcentage2 *= 22.12f;
        fVoltageProcentage2 /= 100.0f;

        u32VoltageProcentageInteger2 = (uint32_t) fVoltageProcentage2;
        fVoltageProcentageDecimal2 = fVoltageProcentage2;
        fVoltageProcentageDecimal2 -= (float32_t) u32VoltageProcentageInteger2;
        if(0.5f < fVoltageProcentageDecimal2)
        {
            fVoltageProcentage2 += 0.5f;

            u32VoltageProcentageInteger2 = (uint32_t) fVoltageProcentage2;
            fVoltageProcentageDecimal2 = 1.0f - fVoltageProcentageDecimal2;
        }


        if(fVoltageProcentageDecimal2 > fVoltageProcentageDecimal1)
        {
            u32VoltageStep = u32VoltageProcentageInteger1;
            enVoltageRange = ACMP_enREFERENCE_RANGE_HIGH;
        }
        else
        {
            u32VoltageStep = u32VoltageProcentageInteger2;
            enVoltageRange = ACMP_enREFERENCE_RANGE_LOW;
        }
    }
    else if(fVoltageReferencePorcentage > 0.0f)
    {
        /*High Range formula*/
        fVoltageProcentage2 = fVoltageReferencePorcentage;
        fVoltageProcentage2 *= 22.12f;
        fVoltageProcentage2 /= 100.0f;
        fVoltageProcentage2 += 0.5f;

        u32VoltageProcentageInteger2 = (uint32_t) fVoltageProcentage2;

        u32VoltageStep = u32VoltageProcentageInteger2;
        enVoltageRange = ACMP_enREFERENCE_RANGE_LOW;
    }
    else
    {
        u32VoltageStep = 0UL;
        enVoltageRange = ACMP_enREFERENCE_RANGE_LOW;
    }

    if(ACMP_ACREFCTL_VREF_MASK >=  u32VoltageStep)
    {
        ACMP__vSetReferenceRange(enModule, enVoltageRange);
        ACMP__vSetReferenceEncoder(enModule, u32VoltageStep);
        ACMP__vSetReferenceEnable(enModule, ACMP_enREFERENCE_ENA);
    }
    else
    {
        ACMP__vSetReferenceRange(enModule, ACMP_enREFERENCE_RANGE_HIGH);
        ACMP__vSetReferenceEncoder(enModule, 0UL);
        ACMP__vSetReferenceEnable(enModule, ACMP_enREFERENCE_DIS);
    }
    fVoltageCurrent =  ACMP__fGetVoltageReference(enModule);
    return fVoltageCurrent;
}

float32_t ACMP__fGetVoltageReference(ACMP_nMODULE enModule)
{
    float32_t fVoltagePorcentage = 0.0f;
    float32_t fVoltagePorcentageInit = 0.0f;
    uint32_t u32EncoderValueReg = 0xFFFFFFFFUL;
    ACMP_nREFERENCE_RANGE enVoltageRange = ACMP_enREFERENCE_RANGE_UNDEF;
    ACMP_nREFERENCE enVoltageEnable = ACMP_enREFERENCE_UNDEF;

    enVoltageEnable = ACMP__enGetReferenceEnable(enModule);
    if(ACMP_enREFERENCE_UNDEF != enVoltageEnable)
    {
        u32EncoderValueReg = ACMP__u32GetReferenceEncoder(enModule);
        enVoltageRange = ACMP__enGetReferenceRange(enModule);
        if(ACMP_enREFERENCE_RANGE_LOW == enVoltageRange)
        {
            fVoltagePorcentage = (float32_t) u32EncoderValueReg;
            fVoltagePorcentage *= 100.0f;
            fVoltagePorcentage /= 22.12f;
        }
        else
        {
            fVoltagePorcentageInit = 100.0f;
            fVoltagePorcentageInit /= 4.2f;

            fVoltagePorcentage = (float32_t) u32EncoderValueReg;
            fVoltagePorcentage *= 100.0f;
            fVoltagePorcentage /= 29.4f;

            fVoltagePorcentage += fVoltagePorcentageInit;
        }
    }

    return fVoltagePorcentage;
}




