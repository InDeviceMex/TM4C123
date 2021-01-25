/**
 *
 * @file ACMP_InterruptSource.c
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
 * @verbatim 4 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/xHeader/ACMP_InterruptSource.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Primitives/ACMP_Primitives.h>

void ACMP__vEnInterruptSource(ACMP_nMODULEMASK enModuleMask)
{
    uint32_t u32Reg=0U;

    uint32_t u32ModuleMask= (uint32_t) enModuleMask;
    if((uint32_t)ACMP_enMODULEMASK_ALL<u32ModuleMask)
    {
        u32ModuleMask=(uint32_t)ACMP_enMODULEMASK_ALL;
    }
    ACMP__vSetReady();

    u32Reg=ACMP->ACINTEN;
    u32Reg|=u32ModuleMask;
    ACMP->ACINTEN=u32Reg;
}

void ACMP__vDisInterruptSource(ACMP_nMODULEMASK enModuleMask)
{
    uint32_t u32Reg=0U;

    uint32_t u32ModuleMask= (uint32_t) enModuleMask;
    if((uint32_t)ACMP_enMODULEMASK_ALL<u32ModuleMask)
    {
        u32ModuleMask=(uint32_t)ACMP_enMODULEMASK_ALL;
    }
    ACMP__vSetReady();

    u32Reg=ACMP->ACINTEN;
    u32Reg&=~u32ModuleMask;
    ACMP->ACINTEN=u32Reg;
}

void ACMP__vClearInterruptSource(ACMP_nMODULEMASK enModuleMask)
{
    uint32_t u32ModuleMask= (uint32_t) enModuleMask;
    if((uint32_t)ACMP_enMODULEMASK_ALL<u32ModuleMask)
    {
        u32ModuleMask=(uint32_t)ACMP_enMODULEMASK_ALL;
    }
    ACMP__vSetReady();

    ACMP->ACMIS = u32ModuleMask;
}

ACMP_nINT_STATUS ACMP__enStatusInterruptSource(ACMP_nMODULEMASK enModuleMask)
{
    ACMP_nINT_STATUS enInt=ACMP_enINT_STATUS_UNDEF;
    uint32_t u32Reg=0U;
    ACMP_nREADY enReady=ACMP_enNOREADY;
    uint32_t u32ModuleMask= (uint32_t) enModuleMask;
    if((uint32_t)ACMP_enMODULEMASK_ALL<u32ModuleMask)
    {
        u32ModuleMask=(uint32_t)ACMP_enMODULEMASK_ALL;
    }
    enReady=ACMP__enIsReady();

    if(ACMP_enREADY == enReady)
    {
        u32Reg = ACMP->ACRIS;
        u32Reg&=u32ModuleMask;

        if((uint32_t)ACMP_enINT_NOOCCUR == u32Reg)
        {
            enInt=ACMP_enINT_NOOCCUR;
        }
        else
        {
            enInt=ACMP_enINT_OCCUR;
        }
    }
    return enInt;
}


