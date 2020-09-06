/**
 *
 * @file HIB_InterruptSource.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */


#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/Interrupt/xHeader/HIB_InterruptSource.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/Primitives/HIB_Primitives.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

HIB_nSTATUS HIB__enEnInterruptSource(HIB_nINT enInterrupt)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_OK;
    uint32_t u32Reg=0;
    enInterrupt&=(uint32_t)HIB_enINT_ALL;
    HIB__vSetReady();
    if((uint32_t) HIB_enINT_WC != (enInterrupt & (uint32_t)HIB_enINT_WC))
    {
        enReturn =HIB__enWait();

    }
    if(HIB_enSTATUS_OK == enReturn)
    {
        u32Reg=HIB_HIBIM_R;
        u32Reg|=(uint32_t)enInterrupt;
        HIB_HIBIM_R=u32Reg;
    }

    return (HIB_nSTATUS) enReturn;
}




HIB_nSTATUS HIB__enDisInterruptSource(HIB_nINT enInterrupt)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_OK;
    uint32_t u32Reg=0;
    enInterrupt&=(uint32_t)HIB_enINT_ALL;
    HIB__vSetReady();
    if((uint32_t) HIB_enINT_WC != (enInterrupt & (uint32_t)HIB_enINT_WC))
    {
        enReturn =HIB__enWait();

    }
    if(HIB_enSTATUS_OK == enReturn)
    {
        u32Reg=HIB_HIBIM_R;
        u32Reg&=~(uint32_t)enInterrupt;
        HIB_HIBIM_R=u32Reg;
    }

    return (HIB_nSTATUS) enReturn;
}


HIB_nSTATUS HIB__enClearInterruptSource(HIB_nINT enInterrupt)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_OK;
    enInterrupt&=(uint32_t)HIB_enINT_ALL;
    HIB__vSetReady();
    if((uint32_t) HIB_enINT_WC != (enInterrupt & (uint32_t)HIB_enINT_WC))
    {
        enReturn =HIB__enWait();

    }
    if(HIB_enSTATUS_OK == enReturn)
    {
        HIB_HIBIC_R=(uint32_t)enInterrupt;
    }

    return (HIB_nSTATUS) enReturn;
}


HIB_nINT_STATUS HIB__enStatusInterruptSource(HIB_nINT enInterrupt)
{
    HIB_nINT_STATUS enStatus= HIB_enINT_STATUS_UNDEF;
    HIB_nREADY enReady = HIB_enNOREADY;
    uint32_t u32Reg=0;
    enInterrupt&=(uint32_t)HIB_enINT_ALL;

    enReady = HIB__enIsReady();
    if(HIB_enREADY == enReady)
    {
        u32Reg=HIB_HIBRIS_R;
        u32Reg&=(uint32_t)enInterrupt;
        if(u32Reg!=0u)
        {
            enStatus= HIB_enINT_OCCUR;
        }
        else
        {
            enStatus= HIB_enINT_NOOCCUR;
        }
    }
    return enStatus;
}


