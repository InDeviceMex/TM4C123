/*
 * FPU.c
 *
 *  Created on: 23 jun. 2018
 *      Author: InDev
 */



#include "FPU.h"


int32_t FPU_Init(void)
{
    FPU_CPAC->CP10=FPU_CPAC_CP10_FULL;
    FPU_CPAC->CP11=FPU_CPAC_CP11_FULL;
    return 1;
}
