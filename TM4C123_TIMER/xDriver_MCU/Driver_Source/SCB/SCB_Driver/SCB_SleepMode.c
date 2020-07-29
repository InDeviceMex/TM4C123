/**
 *
 * @file SCB_SleepMode.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_SleepMode.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB_Peripheral/SCB_Peripheral.h>

SCB_nSTATUS SCB__enSetSleepMode(SCB_nSleepDeep enSleepMode)
{
    SCB_nSTATUS enReturn=SCB_enERROR;
    switch(enSleepMode)
    {
        case SCB_enSleepDeep_Sleep:
            SCB_SCR_R&=~SCB_SCR_R_SLEEPDEEP_MASK;
            enReturn=SCB_enOK;
            break;
        case SCB_enSleepDeep_DeepSleep:
            SCB_SCR_R|=SCB_SCR_R_SLEEPDEEP_MASK;
            enReturn=SCB_enOK;
            break;
        default:
            break;
    }

    return enReturn;
}
SCB_nSleepDeep SCB__enGetSleepMode(void)
{
    SCB_nSleepDeep enReturn=SCB_enSleepDeep_ERROR;
    uint32_t u32Reg=SCB_SCR_R;
    u32Reg&=SCB_SCR_R_SLEEPDEEP_MASK;
    u32Reg>>=SCB_SCR_R_SLEEPDEEP_BIT;
    enReturn=(SCB_nSleepDeep)u32Reg;
    return enReturn;
}
SCB_nSTATUS SCB__enSetSLEEPONEXIT(SCB_nSLEEPONEXIT enSleepMode)
{
    SCB_nSTATUS enReturn=SCB_enERROR;
    switch(enSleepMode)
    {
        case SCB_enSLEEPONEXIT_NOSLEEP:
            SCB_SCR_R&=~SCB_SCR_R_SLEEPONEXIT_MASK;
            enReturn=SCB_enOK;
            break;
        case SCB_enSLEEPONEXIT_SLEEP:
            SCB_SCR_R|=SCB_SCR_R_SLEEPONEXIT_MASK;
            enReturn=SCB_enOK;
            break;
        default:
            break;
    }

    return enReturn;
}
SCB_nSLEEPONEXIT SCB__enGetSLEEPONEXIT(void)
{
    SCB_nSLEEPONEXIT enReturn=SCB_enSLEEPONEXIT_ERROR;
    uint32_t u32Reg=SCB_SCR_R;
    u32Reg&=SCB_SCR_R_SLEEPONEXIT_MASK;
    u32Reg>>=SCB_SCR_R_SLEEPONEXIT_BIT;
    enReturn=(SCB_nSLEEPONEXIT)u32Reg;
    return enReturn;
}
