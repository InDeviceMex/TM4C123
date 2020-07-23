/**
 *
 * @file WDT.c
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
 * @verbatim 19 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL_Peripheral/SYSCTL_Peripheral.h>
#include <xDriver_MCU/Driver_Header/NVIC/NVIC_Peripheral/NVIC_Peripheral.h>
#include <xDriver_MCU/Driver_Header/WDT/WDT.h>

int32_t WDT0_Init(void);
void WDTHandler(void);
void NmiSR(void);

int32_t WDT0_Init(void)
{

    /*SYSCTL_RCGCWD_RCGCWDT0_BB=1;
    SYSCTL_RCGCWD_RCGCWDT1_BB=1;
    WDT0_WDTLOAD_R=0x00300000u;
    WDT0_WDTTEST_STALL_BB=1;
    WDT0_WDTCTL_INTTYPE_BB=0;
    WDT0_WDTCTL_RESEN_BB=0;
    WDT0_WDTCTL_INTEN_BB=1;
*/
   // WDT0_WDTLOCK_R= WDT0_WDTLOCK_KEY;


  /*  NVIC_EN0->NVIC_WDT01=1;
    NVIC_PRI->NVIC_WDT01=4;
*/
    return 1;
}


void WDTHandler(void)
{
 static int32_t i=0;
 i++;

  //  if(WDT0_WDTMIS_WDTMIS_BB)
  //  {
    //    WDT0_WDTICR_R=1u;
        //WDT0_WDTLOAD_R=0x000F0000;
   // }
  //  if(WDT1_WDTMIS_WDTMIS_BB)
   // {
     //   WDT1_WDTICR_R=1;
       // WDT1_WDTLOAD_R=0xFFFF0000;
  //  }
}

void NmiSR(void)
{

  //  if(WDT0_WDTMIS_WDTMIS_BB)
  //  {
    //    WDT0_WDTICR_R=1u;
       // WDT0_WDTLOAD_R=0xFFFF0000;
   // }
   // if(WDT1_WDTMIS_WDTMIS_BB)
    //{
      //  WDT1_WDTICR_R=1;
    //}
    //
    // Enter an infinite loop.
    //
   // while(1)
    //{
    //}
}



