/**
 *
 * @file WDT_InterruptRoutine.c
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
 * @verbatim 22 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Driver_Header/WDT/WDT_Driver/WDT_Intrinsics/WDT_Interrupt/WDT_InterruptRoutine/WDT_InterruptRoutine.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/WDT/WDT_Peripheral/WDT_Peripheral.h>
#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL_Peripheral/SYSCTL_Peripheral.h>

void (*WDT__ISR[2]) (void)={&WDT__vISR,&WDT_NMI__vISR_Dummy};

void WDT__vISR(void)
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
            WDT__MODULE[0]();
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
            WDT__MODULE[1]();
        }
    }
}



void WDT_NMI__vISR_Dummy(void)
{

}

void WDT_NMI__vISR(void)
{
    volatile uint32_t u32RegType=0;
    volatile uint32_t u32Reg0=0u;
    volatile uint32_t u32Reg1=0u;
    volatile uint32_t u32RegWrite1=0u;

    if(SYSCTL_PRWD_R_WDT0_EN == (SYSCTL_PRWD_R &SYSCTL_PRWD_R_WDT0_MASK))
    {
        u32RegType = WDT->W[0].WDTCTL;
        u32RegType &= WDT_WDTCTL_R_INTTYPE_MASK;
        if(WDT_WDTCTL_R_INTTYPE_NMI == u32RegType)
        {
            u32Reg0=WDT0_WDTRIS_R;
            u32Reg0&= WDT_WDTRIS_R_WDTRIS_MASK;


            if( (uint32_t)WDT_enINT_STATUS_OCCUR == u32Reg0 )
            {
                WDT0_WDTICR_R=(uint32_t)WDT_enINT_STATUS_OCCUR;
                WDT__MODULE[0]();
            }
        }
    }

    if(SYSCTL_PRWD_R_WDT1_EN == (SYSCTL_PRWD_R &SYSCTL_PRWD_R_WDT1_MASK))
    {
        u32RegType = WDT->W[1].WDTCTL;
        u32RegType &= WDT_WDTCTL_R_INTTYPE_MASK;
        if(WDT_WDTCTL_R_INTTYPE_NMI == u32RegType)
        {
            u32Reg1=WDT1_WDTRIS_R;
            u32Reg1&= WDT_WDTRIS_R_WDTRIS_MASK;
            if( (uint32_t)WDT_enINT_STATUS_OCCUR == u32Reg1)
            {
                WDT1_WDTICR_R=(uint32_t)WDT_enINT_STATUS_OCCUR;
                do
                {
                    u32RegWrite1=WDT1_WDTCTL_R;
                    u32RegWrite1&=WDT_WDTCTL_R_WRC_MASK;
                }while(WDT_WDTCTL_R_WRC_PROGRESS == u32RegWrite1);
                WDT__MODULE[1]();
            }
        }
    }
}
