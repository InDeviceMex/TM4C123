/*
 * INTERRUPT.c
 *
 *  Created on: 1 jun. 2018
 *      Author: InDev
 */


#include "INTERRUPT.h"



void Enable_Interrupts(void)
{
    __asm( " CPSIE  I \n"
           " BX     LR \n");
}

void Disable_Interrupts(void)
{
    __asm( " CPSID  I \n"
           " BX     LR \n");
}


void Wait_For_Interrupts(void)
{
    __asm( " WFI \n"
           " BX     LR \n");
}
