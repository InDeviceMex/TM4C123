/**
 *
 * @file HIB_Wait.c
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
 * @verbatim 23 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/HIB/Driver/Intrinsics/Primitives/xHeader/HIB_Wait.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/Primitives/xHeader/HIB_Ready.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

#define HIB_TIMEOUT_MAX (9000000UL)

HIB_nSTATUS HIB__enGetStatus (void)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_ERROR;
    HIB_nREADY enReady = HIB_enNOREADY;
    uint32_t u32Reg = 0UL;
    enReady = HIB__enIsReady();
    if(HIB_enREADY == enReady)
    {
        enReturn = HIB_enSTATUS_OK;
        u32Reg = MCU__u32ReadRegister(HIB_BASE, HIB_HIBCTL_OFFSET, HIB_HIBCTL_WRC_MASK, HIB_HIBCTL_R_WRC_BIT);
        if(HIB_HIBCTL_WRC_BUSY == u32Reg)
        {
            enReturn = HIB_enSTATUS_BUSY;
        }
    }
    return enReturn;
}

HIB_nSTATUS HIB__enWait (void)
{
    uint32_t u32TimeOut = HIB_TIMEOUT_MAX;
    HIB_nSTATUS enReturn = HIB_enSTATUS_ERROR;
    HIB_nREADY enReady = HIB_enNOREADY;
    enReady = HIB__enIsReady();
    if(HIB_enREADY == enReady)
    {
        do
        {
            enReturn = HIB__enGetStatus();
            u32TimeOut--;
        }while((HIB_enSTATUS_BUSY == enReturn) && (0UL != u32TimeOut));
    }
    return enReturn;
}
