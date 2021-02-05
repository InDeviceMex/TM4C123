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
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_SleepMode.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

void SCB__vSetSleepMode(SCB_nSleepDeep enSleepMode)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SCR_OFFSET, (uint32_t) enSleepMode, SCB_SCR_SLEEPDEEP_MASK, SCB_SCR_R_SLEEPDEEP_BIT);

}

SCB_nSleepDeep SCB__enGetSleepMode(void)
{
    SCB_nSleepDeep enReturn = SCB_enSleepDeep_ERROR;
    uint32_t u32Reg = 0UL;

    u32Reg = MCU__u32ReadRegister(SCB_BASE, SCB_SCR_OFFSET, SCB_SCR_SLEEPDEEP_MASK, SCB_SCR_R_SLEEPDEEP_BIT);
    enReturn = (SCB_nSleepDeep) u32Reg;

    return enReturn;
}

void SCB__vSetSLEEPONEXIT(SCB_nSLEEPONEXIT enSleepMode)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SCR_OFFSET, (uint32_t) enSleepMode, SCB_SCR_SLEEPONEXIT_MASK, SCB_SCR_R_SLEEPONEXIT_BIT);
}

SCB_nSLEEPONEXIT SCB__enGetSLEEPONEXIT(void)
{
    SCB_nSLEEPONEXIT enReturn = SCB_enSLEEPONEXIT_ERROR;
    uint32_t u32Reg = 0UL;

    u32Reg = MCU__u32ReadRegister(SCB_BASE, SCB_SCR_OFFSET, SCB_SCR_SLEEPONEXIT_MASK, SCB_SCR_R_SLEEPONEXIT_BIT);
    enReturn = (SCB_nSLEEPONEXIT) u32Reg;

    return enReturn;
}
