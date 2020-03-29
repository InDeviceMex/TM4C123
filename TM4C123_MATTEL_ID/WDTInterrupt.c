/*
 * WDTInterrupt.c
 *
 *  Created on: 22 jun. 2018
 *      Author: InDev
 */


#include "WDT.h"

void WDTHandler(void)
{
 static int32_t i=0;
 i++;

    if(WDT0_WDTMIS_WDTMIS_BB)
    {
        WDT0_WDTICR_R=1;
        //WDT0_WDTLOAD_R=0x000F0000;
    }
  //  if(WDT1_WDTMIS_WDTMIS_BB)
   // {
     //   WDT1_WDTICR_R=1;
       // WDT1_WDTLOAD_R=0xFFFF0000;
  //  }
}

void NmiSR(void)
{

    if(WDT0_WDTMIS_WDTMIS_BB)
    {
        WDT0_WDTICR_R=1;
       // WDT0_WDTLOAD_R=0xFFFF0000;
    }
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



