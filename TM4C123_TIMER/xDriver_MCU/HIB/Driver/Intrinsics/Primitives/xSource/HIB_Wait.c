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
#include <stdint.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/Primitives/xHeader/HIB_Ready.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/Primitives/xHeader/HIB_Wait.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

#define HIB_TIMEOUT_MAX (10000u)

HIB_nSTATUS HIB__enGetStatus (void)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_ERROR;
    HIB_nREADY enReady= HIB_enNOREADY;
    enReady = HIB__enIsReady();
    if(HIB_enREADY == enReady)
    {
        enReturn = HIB_enSTATUS_OK;
        if(HIB_HIBCTL_R_WRC_BUSY == (HIB_HIBCTL_R & HIB_HIBCTL_R_WRC_MASK))
        {
            enReturn = HIB_enSTATUS_BUSY;
        }
    }
    return (HIB_nSTATUS) enReturn;

}

HIB_nSTATUS HIB__enWait (void)
{
    uint32_t u32TimeOut = HIB_TIMEOUT_MAX;
    HIB_nSTATUS enReturn = HIB_enSTATUS_ERROR;
    HIB_nREADY enReady= HIB_enNOREADY;
    enReady = HIB__enIsReady();
    if(HIB_enREADY == enReady)
    {
        do
        {
            enReturn = HIB__enGetStatus();
            u32TimeOut--;
        }while((HIB_enSTATUS_BUSY == (HIB_nSTATUS) enReturn) && ((uint32_t)0 != u32TimeOut));
    }
    return (HIB_nSTATUS) enReturn;
}
