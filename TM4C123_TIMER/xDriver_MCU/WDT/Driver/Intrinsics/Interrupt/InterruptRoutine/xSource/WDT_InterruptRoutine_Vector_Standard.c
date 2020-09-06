/**
 *
 * @file WDT_InterruptRoutine_Vector_Standard.c
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

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/WDT_InterruptRoutine_Vector_Standard.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/WDT_InterruptRoutine_Source.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

void WDT_Standard__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg0=0u;
    volatile uint32_t u32Reg1=0u;
    volatile uint32_t u32RegWrite1=0u;

    if(SYSCTL_PRWD_R_WDT0_EN == (SYSCTL_PRWD_R &SYSCTL_PRWD_R_WDT0_MASK))
    {
        u32Reg0=WDT0_WDTMIS_R;
        u32Reg0&= WDT_WDTMIS_R_WDTMIS_MASK;
        if( (uint32_t)WDT_enINT_STATUS_OCCUR == u32Reg0 )
        {
            WDT0_WDTICR_R=(uint32_t)WDT_enINT_STATUS_OCCUR;
            WDT__vIRQSourceHandler[(uint32_t)WDT_enINT_TYPE_STANDARD][(uint32_t)WDT_enMODULE_0]();
        }
    }

    if(SYSCTL_PRWD_R_WDT1_EN == (SYSCTL_PRWD_R &SYSCTL_PRWD_R_WDT1_MASK))
    {
        u32Reg1=WDT1_WDTMIS_R;
        u32Reg1&= WDT_WDTMIS_R_WDTMIS_MASK;
        if( (uint32_t)WDT_enINT_STATUS_OCCUR == u32Reg1)
        {
            WDT1_WDTICR_R=(uint32_t)WDT_enINT_STATUS_OCCUR;
            do
            {
                u32RegWrite1=WDT1_WDTCTL_R;
                u32RegWrite1&=WDT_WDTCTL_R_WRC_MASK;
            }while(WDT_WDTCTL_R_WRC_PROGRESS == u32RegWrite1);
            WDT__vIRQSourceHandler[(uint32_t)WDT_enINT_TYPE_STANDARD][(uint32_t)WDT_enMODULE_1]();
        }
    }
}


