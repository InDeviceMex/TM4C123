/**
 *
 * @file HIB_ControlGeneric.c
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
 * @verbatim 11 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <stdint.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/xHeader/HIB_ControlGeneric.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/Primitives/HIB_Primitives.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

HIB_nSTATUS HIB__enEnControlGeneric(uint32_t u32Mask)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_OK;
    uint32_t u32Reg =0u;

    HIB__vSetReady();
    u32Reg = HIB_HIBCTL_R;
    u32Reg&= HIB_HIBCTL_R_CLK32EN_MASK;
    if((uint32_t)HIB_HIBCTL_R_CLK32EN_EN == u32Reg)
    {
        enReturn = HIB__enWait();
        if(HIB_enSTATUS_OK == enReturn)
        {
            u32Reg=HIB_HIBCTL_R;
            u32Reg|=u32Mask;
            HIB_HIBCTL_R=u32Reg;
        }
        enReturn = HIB__enWait();
    }
    else
    {
        enReturn = HIB_enSTATUS_ERROR;
    }
    return (HIB_nSTATUS) enReturn;
}

HIB_nSTATUS HIB__enDisControlGeneric(uint32_t u32Mask)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_OK;
    uint32_t u32Reg =0u;

    HIB__vSetReady();
    u32Reg = HIB_HIBCTL_R;
    u32Reg&= HIB_HIBCTL_R_CLK32EN_MASK;
    if((uint32_t)HIB_HIBCTL_R_CLK32EN_EN == u32Reg)
    {

        enReturn = HIB__enWait();
        if(HIB_enSTATUS_OK == enReturn)
        {
            u32Reg=HIB_HIBCTL_R;
            u32Reg&=~u32Mask;
            HIB_HIBCTL_R=u32Reg;
        }
    }
    else
    {
        enReturn = HIB_enSTATUS_ERROR;
    }
    return (HIB_nSTATUS) enReturn;
}


HIB_nSTATUS HIB__enSetControlGeneric(uint32_t u32ControlGeneric,uint32_t u32Mask, uint32_t u32Bit)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_OK;
    uint32_t u32Reg=0;
    uint32_t u32RegAux=0;
    HIB__vSetReady();
    enReturn = HIB__enWait();
    if(HIB_enSTATUS_OK == enReturn)
    {
        u32Reg=HIB_HIBCTL_R;
        u32Reg&=~(u32Mask<<u32Bit);
        u32RegAux =((uint32_t)u32ControlGeneric&u32Mask) ;
        u32RegAux<<=(u32Bit);
        u32Reg|=u32RegAux;
        HIB_HIBCTL_R=u32Reg;
    }
    return (HIB_nSTATUS) enReturn;
}

uint32_t HIB__u32GetControlGeneric(uint32_t u32Mask, uint32_t u32Bit)
{
    uint32_t u32Reg=0;
    uint32_t u32ControlGeneric=0xFF;
    HIB_nREADY enReady= HIB_enNOREADY;
    enReady=HIB__enIsReady();
    if(HIB_enREADY == enReady)
    {
        u32Reg=HIB_HIBCTL_R;
        u32Reg>>=u32Bit;
        u32Reg&=(u32Mask);
        u32ControlGeneric=(uint32_t)(u32Reg);
    }
    return u32ControlGeneric;
}


