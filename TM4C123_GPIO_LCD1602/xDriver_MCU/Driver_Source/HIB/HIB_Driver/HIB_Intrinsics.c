/*
 * HIB_Intrinsics.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */


#include <xDriver_MCU/Driver_Header/HIB/HIB_Driver/HIB_Intrinsics.h>

static HIB_nREADY HIB_enStatus =HIB_enBUSY;
static HIB_nREADY HIB_enCount=HIB_enBUSY;



void HIB__enSetGlobalStatus(HIB_nREADY enStatus)
{
    HIB_enStatus=enStatus;
}

HIB_nREADY HIB__enGetGlobalStatus(void)
{
    return (HIB_nREADY) HIB_enStatus;
}


void HIB__enSetGlobalCountStatus(HIB_nREADY enStatus)
{
    HIB_enCount=enStatus;
}

HIB_nREADY HIB__enGetGlobalCountStatus(void)
{
    return (HIB_nREADY) HIB_enCount;
}
