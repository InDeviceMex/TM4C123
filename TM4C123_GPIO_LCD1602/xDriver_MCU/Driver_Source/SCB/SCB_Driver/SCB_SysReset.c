/**
 *
 * @file SCB_SysReset.c
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


#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_SysReset.h>


inline void SCB__vReqSysReset(void)
{
    uint32_t u32Reg=SCB_AIRCR_R;
    if((u32Reg &SCB_AIRCR_R_VECTKEY_MASK)==SCB_AIRCR_R_VECTKEY_READ)
    {
        u32Reg&=~SCB_AIRCR_R_VECTKEY_MASK;
        u32Reg|=SCB_AIRCR_R_VECTKEY_WRITE|SCB_AIRCR_R_VECTRESET_NOUSE;
        SCB_vBarrier();
        SCB_AIRCR_R=u32Reg;
        SCB_vBarrier();

        while(1u)
        {
            __asm(" NOP");
        }

    }

}

inline void SCB__vReqSysReset_Peripheral(void)
{
    uint32_t u32Reg=SCB_AIRCR_R;
    if((u32Reg &SCB_AIRCR_R_VECTKEY_MASK)==SCB_AIRCR_R_VECTKEY_READ)
    {
        u32Reg&=~SCB_AIRCR_R_VECTKEY_MASK;
        u32Reg|=SCB_AIRCR_R_VECTKEY_WRITE|SCB_AIRCR_R_SYSRESETREQ_RESET;
        SCB_vBarrier();
        SCB_AIRCR_R=u32Reg;
        SCB_vBarrier();

        while(1u)
        {
            __asm(" NOP");
        }

    }

}

