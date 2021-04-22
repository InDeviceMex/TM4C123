/**
 *
 * @file WDT_InterruptRoutine_Vector_NMI.c
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
 * @verbatim 23 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/WDT_InterruptRoutine_Vector_NMI.h>

#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/WDT_InterruptRoutine_Source.h>
#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Dependencies.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

void WDT_NMI__vIRQVectorHandler_Dummy(void)
{

}

void WDT_NMI__vIRQVectorHandler(void)
{
    volatile uint32_t u32RegType = 0U;
    volatile uint32_t u32Reg0 = 0U;
    volatile uint32_t u32Reg1 = 0U;
    volatile uint32_t u32RegWrite1 = 0U;

    if((uint32_t) 0U != (SYSCTL_PRWD_R & SYSCTL_PRWD_R_WDT0_MASK ) )
    {
        u32RegType = WDT->MODULE[(uint32_t) WDT_enMODULE_0].CTL;
        u32RegType &= WDT_CTL_R_INTTYPE_MASK;
        if(WDT_CTL_R_INTTYPE_NMI == u32RegType)
        {
            u32Reg0 = WDT0_RIS_R;
            u32Reg0 &= WDT_RIS_R_RIS_MASK;

            if((uint32_t) WDT_enINT_STATUS_OCCUR == u32Reg0 )
            {
                WDT0_ICR_R = (uint32_t) WDT_enINT_STATUS_OCCUR;
                WDT__vIRQSourceHandler[(uint32_t) WDT_enINT_TYPE_NMI][(uint32_t) WDT_enMODULE_0]();
            }
        }
    }

    if((uint32_t) 0U != (SYSCTL_PRWD_R & SYSCTL_PRWD_R_WDT1_MASK ) )
    {
        u32RegType = WDT->MODULE[(uint32_t) WDT_enMODULE_1].CTL;
        u32RegType &= WDT_CTL_R_INTTYPE_MASK;

        if(WDT_CTL_R_INTTYPE_NMI == u32RegType)
        {
            u32Reg1 = WDT1_RIS_R;
            u32Reg1 &= WDT_RIS_R_RIS_MASK;
            if((uint32_t) WDT_enINT_STATUS_OCCUR == u32Reg1 )
            {
                WDT1_ICR_R = (uint32_t) WDT_enINT_STATUS_OCCUR;
                do
                {
                    u32RegWrite1 = WDT1_CTL_R;
                    u32RegWrite1 &= WDT_CTL_R_WRC_MASK;
                }while(WDT_CTL_R_WRC_PROGRESS == u32RegWrite1 );
                WDT__vIRQSourceHandler[(uint32_t) WDT_enINT_TYPE_NMI][(uint32_t) WDT_enMODULE_1]();
            }
        }
    }
}
