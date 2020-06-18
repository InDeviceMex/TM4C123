/*
 * SYSTICK_Frequency.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */





#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_Driver/SYSTICK_Frequency.h>


float SysTick__fGetFrequency(void)
{
    float fReg=0.0;
    uint32_t u32FreeCount= SysTick__u32GetFreeCount();
    if(u32FreeCount!=0)
    {
        float fTickFrec = SysTick__fGetTickFreq();
        fReg=fTickFrec;
        fReg/=u32FreeCount;
    }
    return (float)(fReg);

}
