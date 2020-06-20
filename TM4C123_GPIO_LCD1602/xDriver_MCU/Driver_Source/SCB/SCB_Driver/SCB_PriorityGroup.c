/**
 *
 * @file SCB_PriorityGroup.c
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



#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_PriorityGroup.h>


SCB_nSTATUS SCB__enSetPriorityGroup(SCB_nPRIGROUP enGroup)
{
    SCB_nSTATUS enReturn=SCB_enERROR;
    uint32_t u32Reg=SCB_AIRCR_R;
    u32Reg&=~(SCB_AIRCR_R_VECTKEY_MASK|SCB_AIRCR_R_PRIGROUP_MASK);
    switch(enGroup)
    {
        case SCB_enPRIGROUP_XXX:
            u32Reg|=SCB_AIRCR_R_VECTKEY_WRITE|SCB_AIRCR_R_PRIGROUP_XXX;
            SCB_vBarrier();
            SCB_AIRCR_R=u32Reg;
            SCB_vBarrier();
            enReturn=SCB_enOK;
            break;
        case SCB_enPRIGROUP_XXY:
            u32Reg|=SCB_AIRCR_R_VECTKEY_WRITE|SCB_AIRCR_R_PRIGROUP_XXY;
            SCB_vBarrier();
            SCB_AIRCR_R=u32Reg;
            SCB_vBarrier();
            enReturn=SCB_enOK;
            break;
        case SCB_enPRIGROUP_XYY:
            u32Reg|=SCB_AIRCR_R_VECTKEY_WRITE|SCB_AIRCR_R_PRIGROUP_XYY;
            SCB_vBarrier();
            SCB_AIRCR_R=u32Reg;
            SCB_vBarrier();
            enReturn=SCB_enOK;
            break;
        case SCB_enPRIGROUP_YYY:
            u32Reg|=SCB_AIRCR_R_VECTKEY_WRITE|SCB_AIRCR_R_PRIGROUP_YYY;
            SCB_vBarrier();
            SCB_AIRCR_R=u32Reg;
            SCB_vBarrier();
            enReturn=SCB_enOK;
            break;
        default:
            break;
    }
    return enReturn;
}
SCB_nPRIGROUP SCB__enGetPriorityGroup(void)
{
    SCB_nPRIGROUP enReturn=SCB_enPRIGROUP_ERROR;
    uint32_t u32Reg=SCB_AIRCR_R;
    u32Reg&=SCB_AIRCR_R_PRIGROUP_MASK;
    u32Reg>>=SCB_AIRCR_R_PRIGROUP_BIT;
    enReturn=(SCB_nPRIGROUP)u32Reg;
    return enReturn;
}



