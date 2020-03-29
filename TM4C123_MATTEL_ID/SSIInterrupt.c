/*
 * SSIInterrupt.c
 *
 *  Created on: 22 jun. 2018
 *      Author: InDev
 */


#include "SSI.h"


void SSI0Handler (void)
{
    if(SSI0_SSIMIS_TXMIS_BB)
    {
        if(SSI0_SSICR1_EOT_BB) //fultimo bit tranmitido
        {
            //SSI0Transmit=1;
           // PA3_DATA_R_AHB=1;
        }
        else //fifo a mitad o menos
        {

        }
    }
    if(SSI0_SSIMIS_RXMIS_BB)
    {
        SSI0Fifo[SSI0FifoCount]=SSI0->SSIDR_Bit.DATA;
        SSI0FifoCount++;
        SSI0FifoCount&=0xFF;
    }
    if(SSI0_SSIMIS_RTMIS_BB)
     {
        SSI0_SSIICR_RTIC_BB=1;
        while(SSI0_SSISR_RNE_BB)
        {
            SSI0Fifo[SSI0FifoCount]=SSI0->SSIDR_Bit.DATA;
            SSI0FifoCount++;
            SSI0FifoCount&=0xFF;
        }
     }
    if(SSI0_SSIMIS_RORMIS_BB)
     {
         SSI0_SSIICR_RORIC_BB=1;
         SSI0FifoLost++;
     }
}



void SSI1Handler (void)
{
    if(SSI1_SSIMIS_TXMIS_BB)
    {
        if(SSI1_SSICR1_EOT_BB) //fultimo bit tranmitido
        {
            //SSI1Transmit=1;
           // PF3_DATA_R_AHB=1;
        }
        else //fifo a mitad o menos
        {

        }
    }
    if(SSI1_SSIMIS_RXMIS_BB)
    {
        SSI1Fifo[SSI1FifoCount]=SSI1->SSIDR_Bit.DATA;
        SSI1FifoCount++;
        SSI1FifoCount&=0xFF;
    }
    if(SSI1_SSIMIS_RTMIS_BB)
     {
        SSI1_SSIICR_RTIC_BB=1;
        while(SSI1_SSISR_RNE_BB)
        {
            SSI1Fifo[SSI1FifoCount]=SSI1->SSIDR_Bit.DATA;
            SSI1FifoCount++;
            SSI1FifoCount&=0xFF;
        }
     }
    if(SSI1_SSIMIS_RORMIS_BB)
     {
         SSI1_SSIICR_RORIC_BB=1;
         SSI1FifoLost++;
     }
}


void SSI2Handler (void)
{
    if(SSI2_SSIMIS_TXMIS_BB)
    {
        if(SSI2_SSICR1_EOT_BB) //fultimo bit tranmitido
        {
            //SSI2Transmit=1;
           // PB5_DATA_R_AHB=1;
        }
        else //fifo a mitad o menos
        {

        }
    }
    if(SSI2_SSIMIS_RXMIS_BB)
    {
        SSI2Fifo[SSI2FifoCount]=SSI2->SSIDR_Bit.DATA;
        SSI2FifoCount++;
        SSI2FifoCount&=0xFF;
    }
    if(SSI2_SSIMIS_RTMIS_BB)
     {
        SSI2_SSIICR_RTIC_BB=1;
        while(SSI2_SSISR_RNE_BB)
        {
            SSI2Fifo[SSI2FifoCount]=SSI2->SSIDR_Bit.DATA;
            SSI2FifoCount++;
            SSI2FifoCount&=0xFF;
        }
     }
    if(SSI2_SSIMIS_RORMIS_BB)
     {
         SSI2_SSIICR_RORIC_BB=1;
         SSI2FifoLost++;
     }
}


void SSI3Handler (void)
{
    if(SSI3_SSIMIS_TXMIS_BB)
    {
        if(SSI3_SSICR1_EOT_BB) //fultimo bit tranmitido
        {
            //SSI3Transmit=1;
           // PD1_DATA_R_AHB=1;
        }
        else //fifo a mitad o menos
        {

        }
    }
    if(SSI3_SSIMIS_RXMIS_BB)
    {
        SSI3Fifo[SSI3FifoCount]=SSI3->SSIDR_Bit.DATA;
        SSI3FifoCount++;
        SSI3FifoCount&=0xFF;
    }
    if(SSI3_SSIMIS_RTMIS_BB)
     {
        SSI3_SSIICR_RTIC_BB=1;
        while(SSI3_SSISR_RNE_BB)
        {
            SSI3Fifo[SSI3FifoCount]=SSI3->SSIDR_Bit.DATA;
            SSI3FifoCount++;
            SSI3FifoCount&=0xFF;
        }
     }
    if(SSI3_SSIMIS_RORMIS_BB)
     {
         SSI3_SSIICR_RORIC_BB=1;
         SSI3FifoLost++;
     }
}
