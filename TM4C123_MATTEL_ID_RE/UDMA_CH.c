/*
 * UDMA_CH.c
 *
 *  Created on: 19 feb. 2018
 *      Author: InDev
 */

#include "UDMA_CH.h"

#pragma DATA_SECTION(udmaCH, ".dma")
#pragma DATA_SECTION(udmaCHalt, ".dmaalt")
volatile uint32_t udmaCH[32*4];
volatile uint32_t udmaCHalt[32*4];





