/*
 * TIMERInterrupt.c
 *
 *  Created on: 22 jun. 2018
 *      Author: InDev
 */



#include "TIMER.h"

uint32_t timeOut0A=920; //tiempo en us

uint32_t timeOut0AFinalSilence=0; //tiempo en us
uint32_t timeOut0AOVFinalSilence=0; //tiempo en ciclos

uint32_t timeOut0ADigitSilenceLow=0; //tiempo en us
uint32_t timeOut0AOVDigitSilenceLow=0; //tiempo en ciclos
uint32_t timeOut0ADigitSilenceHigh=0; //tiempo en us
uint32_t timeOut0AOVDigitSilenceHigh=0; //tiempo en ciclos

uint32_t timeOut0AFinalBeepSilence=0; //tiempo en us
uint32_t timeOut0AOVFinalBeepSilence=0; //tiempo en ciclos

uint32_t timeOut0ABeepSilence=0; //tiempo en us
uint32_t timeOut0AOVBeepSilence=0; //tiempo en ciclos

uint64_t timeOut0AOV_ID=0; //cuenta la cantidad de ciclos de "timeOut0A" donde no se ha detectado sonido
uint64_t timeOut0AOV=0; //cuenta la cantidad de ciclos de "timeOut0A" donde no se ha detectado sonido
uint64_t Count1A=0;    //conteo de señales capatadas
uint64_t Init0A=0;     //bandera utilizada para empezar a contar beep
uint64_t BEEP=0;         //guarda el valor de beep
uint64_t BEEPCount=0;    //indica cuantos cifras tiene el Beep
uint64_t firstSilence=0;  //indica cuando aparece el primer silencio para la siguiente cifra de BEEP
uint64_t finalSilence=0;  //el tiempo necesario para un silencio final
uint64_t sound=0;         //bandera para sumar el BEEP solo una vez
uint64_t finish=0;       //indica el final del BEEP

float BEEPFreq[30]={0};         //bandera para sumar el BEEP solo una vez
uint64_t BEEPFreqCount=0;       //indica el final del BEEP
float BEEPTimeA0[30]={0};         //bandera para sumar el BEEP solo una vez
uint64_t BEEPTimeA0Count=0;       //indica el final del BEEP

uint64_t BEEPCountProm=0;    //indica cuantos cifras tiene el Beep
uint64_t BEEOVProm=0;    //indica cuantos cifras tiene el Beep
float     BEEPFreqProm=0;       //indica el final del BEEP
uint64_t BEEPFreqCountAct=0;       //indica el final del BEEP
uint64_t BEEPFreqCountAnt=0;       //indica el final del BEEP

volatile int32_t FreqCount=0;
volatile float Frequency[4096];

volatile int32_t FreqCountLeft=0;
volatile float FreqPromObtained=0;
uint32_t mode=0;


//todo Interrupt WT0A
void WTIMER0AHandler(void)
{
    if(GPWTM0_GPTMMIS_TATOMIS_BB)
    {
        GPWTM0_GPTMICR_TATOCINT_BB=1;
        if(mode==0)
        {
        timeOut0AOV++; //siempre que pasa el tieOut aumenta en 1
        timeOut0AOV_ID++;
        if((timeOut0AOV<=50) &&( sound==0) ) //si el timeOut es menor a 50 y no se ha sumado el BEEP
        {
            GPIOA_AHB_GPIODAT_DAT5_BB=GPIOA_AHB_GPIODAT_DAT5_LOW;
            sound=1; //bandera para no volver a sumar el BEEP
            BEEP++; //suma el BEEP
            finalSilence=0; //reinicia bandera de silencios porque se encontro sonido
            firstSilence=0;
            timeOut0AOV_ID=0;
        }
        else
        {
            if((timeOut0AOV<timeOut0AOVFinalSilence)) //no se ha encontrado el silencio total
            {

                if((timeOut0AOV>timeOut0AOVDigitSilenceLow)&&(timeOut0AOV<timeOut0AOVDigitSilenceHigh)) //se encontro el primer silencio del BEEP
                {
                    GPIOA_AHB_GPIODAT_DAT2_BB=GPIOA_AHB_GPIODAT_DAT2_HIGH;
                    firstSilence=1;

                }
                else if((timeOut0AOV>timeOut0AOVFinalBeepSilence)) //600
                {
                    GPIOA_AHB_GPIODAT_DAT4_BB=GPIOA_AHB_GPIODAT_DAT4_HIGH;
                    finalSilence=1;
                }
                else if((timeOut0AOV>timeOut0AOVBeepSilence))
                {
                        sound=0;

                }
                else if((timeOut0AOV>51))
                {
                    GPIOA_AHB_GPIODAT_DAT5_BB=GPIOA_AHB_GPIODAT_DAT5_HIGH;
                }
                else if((timeOut0AOV==51))
                {
                    if(BEEPCountProm!=0)
                    {
                    BEEPFreqProm/=BEEPCountProm;
                    BEEPFreq[BEEPFreqCount]=BEEPFreqProm;
                    }

                    BEEPTimeA0[BEEPTimeA0Count]=timeOut0AOV_ID*timeOut0A;

                    BEEPFreqProm=0;
                    BEEPCountProm=0;
                    BEEPFreqCountAct=0;       //indica el final del BEEP
                    BEEPFreqCountAnt=0;       //indica el final del BEEP
                    BEEPFreqCount++;
                    BEEPTimeA0Count++;

                    timeOut0AOV_ID=0;

                }
            }
            else //se encontro el silencio total
            {

                GPIOA_AHB_GPIODAT_DAT4_BB=GPIOA_AHB_GPIODAT_DAT4_HIGH;
                Finish_Variables();
            }
        }
       }
        else if(mode==1)
        {

        }

    }
}


//todo Interrupt WT0B
void WTIMER0BHandler(void)
{
    if(GPWTM0_GPTMMIS_TBTOMIS_BB)
    {
        GPWTM0_GPTMICR_TBTOCINT_BB=1;
        if(mode==0)
        {
        Finish_Variables();
        }
        else if(mode==1)
        {
            if(BEEPCountProm)
            {
                BEEPFreqProm/=BEEPCountProm;
                FreqPromObtained=BEEPFreqProm;
            }
            FreqCountLeft=FreqCount;
            Finish_Variables();
            finish=2;
        }
    }
}

//todo Interrupt WT1A
void WTIMER1AHandler(void)
{
    float frequency=0;
    if(GPWTM1_GPTMMIS_CAEMIS_BB)
    {
        GPWTM1_GPTMICR_CAECINT_BB=1;
        if(mode==0)
        {
        if((Count1A>40) && (Init0A==0))
        {
            WTIMER0B_DisInterrupt();
            GPIOA_AHB_GPIODAT_DAT4_BB=GPIOA_AHB_GPIODAT_DAT4_LOW;
            GPIOA_AHB_GPIODAT_DAT5_BB=GPIOA_AHB_GPIODAT_DAT5_LOW;
            GPIOA_AHB_GPIODAT_DAT3_BB=GPIOA_AHB_GPIODAT_DAT3_LOW;
            GPIOA_AHB_GPIODAT_DAT2_BB=GPIOA_AHB_GPIODAT_DAT2_LOW;
            Restart_Variables();
            Init0A=1;

            WTIMER0A_Interrupt();
        }
        BEEPFreqCountAct=GPWTM1_GPTMTAR->TAR;
        if(BEEOVProm)
        {
            frequency=(float)(4294967295); //operacion para obtener la frecuencia del pulso
            frequency*=BEEOVProm;
            frequency+=BEEPFreqCountAct;
            frequency-=(BEEPFreqCountAnt);

         }
         else
         {
             frequency=BEEPFreqCountAct-BEEPFreqCountAnt;
         }
        frequency=(float)CPUClockS/frequency;
        BEEPFreqProm+=frequency;
        BEEPCountProm++;

        BEEOVProm=0;
        BEEPFreqCountAnt=BEEPFreqCountAct;

        GPIOA_AHB_GPIODAT_DAT4_BB=GPIOA_AHB_GPIODAT_DAT4_LOW;
        GPIOA_AHB_GPIODAT_DAT2_BB=GPIOA_AHB_GPIODAT_DAT2_LOW;
        if((finalSilence==1)&&(firstSilence==0))
        {
            Finish_Variables();
        }

        if((finalSilence==1)&&(firstSilence==1))
        {
            if(BEEPCount<1)
            BEEP*=10;

        }
        finalSilence=0;
        firstSilence=0;
        timeOut0AOV=0;
        Count1A++;
        }
        else if(mode==1)
        {
            BEEPFreqCountAct=GPWTM1_GPTMTAR->TAR;
            if(BEEOVProm)
            {
                frequency=(float)(4294967295); //operacion para obtener la frecuencia del pulso
                frequency*=BEEOVProm;
                frequency+=BEEPFreqCountAct;
                frequency-=(BEEPFreqCountAnt);

             }
             else
             {
                 frequency=BEEPFreqCountAct-BEEPFreqCountAnt;
             }
            frequency=(float)CPUClockS/frequency;
            BEEPFreqProm+=frequency;
            BEEPCountProm++;
            if(FreqCount<4096)
            {
                Frequency[FreqCount]=frequency;
                FreqCount++;
            }
            BEEOVProm=0;
            BEEPFreqCountAnt=BEEPFreqCountAct;
        }

    }
}

//todo Interrupt WT1B
void WTIMER1BHandler(void)
{

    if(GPWTM1_GPTMMIS_TBTOMIS_BB)
    {
        GPWTM1_GPTMICR_TBTOCINT_BB=1;
        if(mode==0)
        {
        BEEOVProm++;
        }
        else if(mode==1)
        {

            BEEOVProm++;
        }
    }

}

//todo finish variables
int32_t Finish_Variables(void)
{
    Disable_Interrupts();
    WTIMER0A_DisInterrupt();
    WTIMER0B_DisInterrupt();
    WTIMER1A_DisInterrupt();
    Enable_Interrupts();

    timeOut0AOV_ID=0;
    timeOut0AOV=0;
    Count1A=0;
    Init0A=0;
    BEEPCount=0;
    firstSilence=0;
    finalSilence=0;
    sound=0;
    FreqCount=0;
    BEEPTimeA0Count=0;       //indica el final del BEEP
    BEEPFreqProm=0;
    BEEPCountProm=0;
    BEEPFreqCount=0;
    BEEOVProm=0;
    BEEPFreqCountAct=0;
    BEEPFreqCountAnt=0;
    FreqCount=0;

    finish=1;
    return 1;
}


//todo restart variables
int32_t Restart_Variables(void)
{
    timeOut0AOV_ID=0;
     timeOut0AOV=0;
     Count1A=0;
     Init0A=0;
     BEEP=0;
     BEEPCount=0;
     firstSilence=0;
     finalSilence=0;
     sound=0;
     finish=0;
     FreqCount=0;
     BEEPTimeA0Count=0;       //indica el final del BEEP
     BEEPFreqProm=0;
     BEEPCountProm=0;
     BEEPFreqCount=0;
     BEEOVProm=0;
     BEEPFreqCountAct=0;
     BEEPFreqCountAnt=0;
     FreqCount=0;
    return 1;
}


//Todo Change TimeOut0A

int32_t Change_TimeOut0A(uint32_t time)
{
    timeOut0A= time;
    timeOut0AOVFinalSilence    =timeOut0AFinalSilence/timeOut0A;
    timeOut0AOVDigitSilenceLow =timeOut0ADigitSilenceLow/timeOut0A;
    timeOut0AOVDigitSilenceHigh=timeOut0ADigitSilenceHigh/timeOut0A;
    timeOut0AOVFinalBeepSilence=timeOut0AFinalBeepSilence/timeOut0A;
    timeOut0AOVBeepSilence     =timeOut0ABeepSilence/timeOut0A;
    return 1;
}



//Todo Get TimeOut0A
int32_t Get_TimeOut0A(uint32_t* time)
{
    *time=timeOut0A;
    return 1;
}


//Todo Change timeOut0AFinalSilence

int32_t Change_timeOut0AFinalSilence(uint32_t time)
{
    timeOut0AFinalSilence=time;
    timeOut0AOVFinalSilence    =timeOut0AFinalSilence/timeOut0A;
    return 1;
}


//Todo Get timeOut0AFinalSilence
int32_t Get_timeOut0AFinalSilence(uint32_t* time)
{
    *time=timeOut0AFinalSilence;
    return timeOut0AOVFinalSilence;

}

//Todo Change timeOut0ADigitSilenceLow

int32_t Change_timeOut0ADigitSilenceLow(uint32_t time)
{
    timeOut0ADigitSilenceLow=time;
    timeOut0AOVDigitSilenceLow    =timeOut0ADigitSilenceLow/timeOut0A;
    return 1;
}



//Todo Get timeOut0ADigitSilenceLow

int32_t Get_timeOut0ADigitSilenceLow(uint32_t* time)
{
    *time=timeOut0ADigitSilenceLow;
    return timeOut0AOVDigitSilenceLow;

}
//Todo Change timeOut0ADigitSilenceHigh


int32_t Change_timeOut0ADigitSilenceHigh(uint32_t time)
{
    timeOut0ADigitSilenceHigh=time;
    timeOut0AOVDigitSilenceHigh    =timeOut0ADigitSilenceHigh/timeOut0A;
    return 1;
}

//Todo Get timeOut0ADigitSilenceHigh

int32_t Get_timeOut0ADigitSilenceHigh(uint32_t* time)
{
    *time=timeOut0ADigitSilenceHigh;
    return timeOut0AOVDigitSilenceHigh;

}

//Todo Change timeOut0AFinalBeepSilence


int32_t Change_timeOut0AFinalBeepSilence(uint32_t time)
{
    timeOut0AFinalBeepSilence=time;
    timeOut0AOVFinalBeepSilence    =timeOut0AFinalBeepSilence/timeOut0A;
    return 1;
}



//Todo Get timeOut0AFinalBeepSilence

int32_t Get_timeOut0AFinalBeepSilence(uint32_t* time)
{
    *time=timeOut0AFinalBeepSilence;
    return timeOut0AOVFinalBeepSilence;

}
//Todo Change timeOut0ABeepSilence


int32_t Change_timeOut0ABeepSilence(uint32_t time)
{
    timeOut0ABeepSilence=time;
    timeOut0AOVBeepSilence    =timeOut0ABeepSilence/timeOut0A;
    return 1;
}

//Todo Get timeOut0ABeepSilence

int32_t Get_timeOut0ABeepSilence(uint32_t* time)
{
    *time=timeOut0ABeepSilence;
    return timeOut0AOVBeepSilence;

}

//ToDO END































void TIMER0AHandler(void)
{

}
void TIMER0BHandler(void)
{

}
void TIMER1AHandler(void)
{

}
void TIMER1BHandler(void)
{

}

void TIMER2AHandler(void)
{

}
void TIMER2BHandler(void)
{

}
void TIMER3AHandler(void)
{

}
void TIMER3BHandler(void)
{

}
void TIMER4AHandler(void)
{

}
void TIMER4BHandler(void)
{

}
void TIMER5AHandler(void)
{

}
void TIMER5BHandler(void)
{

}






void WTIMER2AHandler(void)
{

}
void WTIMER2BHandler(void)
{

}
void WTIMER3AHandler(void)
{

}
void WTIMER3BHandler(void)
{

}
void WTIMER4AHandler(void)
{

}
void WTIMER4BHandler(void)
{

}
void WTIMER5AHandler(void)
{

}
void WTIMER5BHandler(void)
{

}
