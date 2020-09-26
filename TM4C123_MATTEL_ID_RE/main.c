

/**
 * main.c
 */

// ToDo Include
#include "SYSTICK.h"    //3
#include "NVIC.h"       //3
#include "SCB.h"        //3
#include "MPU.h"        //3
#include "FPU.h"        //3
#include "SYSCTL.h"     //5
#include "SYSEXC.h"     //6
#include "HIB.h"        //7
#include "FLASH.h"      //8
#include "EEPROM.h"     //8
#include "UDMA.h"       //9
#include "UDMA_CH.h"    //9
#include "GPIO.h"       //10
#include "TIMER.h"      //11
#include "WDT.h"        //12
#include "ADC.h"        //13
#include "UART.h"       //14
#include "SSI.h"        //15
#include "I2C.h"        //16


#include "COMP.h"       //19
#include "PWM.h"        //20
#include "QEI.h"        //21
#include "INTERRUPT.h"
#include <stdint.h>


// ToDo Definicions
#define COMMAND_TOTAL 29
#define BEEP_   0
#define BR_     1
#define FBR_    2
#define QBR_    3
#define TO_     4
#define FTO_    5
#define QTO_    6
#define TOFS_   7
#define FTOFS_  8
#define QTOFS_  9
#define TODSL_  10
#define FTODSL_ 11
#define QTODSL_ 12
#define TODSH_  13
#define FTODSH_ 14
#define QTODSH_ 15
#define TOFBS_  16
#define FTOFBS_ 17
#define QTOFBS_ 18
#define TOBS_   19
#define FTOBS_  20
#define QTOBS_  21
#define TOS_    22
#define FTOS_   23
#define QTOS_   24
#define HELP_   25
#define DEFAULTS_   26
#define RESET_   27
#define SOUNDS_ 28

//ToDO prototypes

int Compare_String(uint8_t* stringIn,uint8_t* stringOut);
void Compare_AllString(uint8_t* stringIn);
int List_Help(void);
void GPIO_Init(void);




//ToDo Variables

typedef struct
{
    uint32_t baudRate;
    uint32_t timeOut;
    uint32_t timeOutFinalSilence;
    uint32_t timeOutDigitSilenceLow;
    uint32_t timeOutDigitSilenceHigh;
    uint32_t timeOutFinalBeepSilence;
    uint32_t timeOutBeepSilence;
    uint32_t timeOutSilence;
    uint32_t timeOutSound;


}mattel_TypeDef;


#pragma DATA_SECTION(mattelFlashDefault, ".mattel")
const mattel_TypeDef mattelFlashDefault =
{
 115200,
 920,
 1380000,
 809600,
 901600,
 276000,
 138000,
 4000000,
 2000000,

};
#pragma DATA_SECTION(mattelFlash, ".mattel1")
const mattel_TypeDef mattelFlash =
{
 115200,
 920,
 1380000,
 809600,
 901600,
 276000,
 138000,
 4000000,
 2000000,
};

mattel_TypeDef mattelRAM =
{
 115200,
 920,
 1380000,
 809600,
 901600,
 276000,
 138000,
 4000000,
 2000000,
};


uint8_t        beep[30]                     ="BEEP";
uint8_t        sounds[30]                     ="SOUND";

uint8_t        baudRate[30]                 ="BR: ";
uint8_t        FbaudRate[30]                ="FBR: ";
uint8_t        QbaudRate[30]                ="BR?";

uint8_t        timeOut[30]                  ="TO: ";
uint8_t        FtimeOut[30]                 ="FTO: ";
uint8_t        QtimeOut[30]                 ="TO?";

uint8_t        timeOutFinalSilence[30]      ="TOFS: ";
uint8_t        FtimeOutFinalSilence[30]     ="FTOFS: ";
uint8_t        QtimeOutFinalSilence[30]     ="TOFS?";

uint8_t        timeOutDigitSilenceLow[30]   ="TODSL: ";
uint8_t        FtimeOutDigitSilenceLow[30]  ="FTODSL: ";
uint8_t        QtimeOutDigitSilenceLow[30]  ="TODSL?";

uint8_t        timeOutDigitSilenceHigh[30]  ="TODSH: ";
uint8_t        FtimeOutDigitSilenceHigh[30] ="FTODSH: ";
uint8_t        QtimeOutDigitSilenceHigh[30] ="TODSH?";

uint8_t        timeOutFinalBeepSilence[30]  ="TOFBS: ";
uint8_t        FtimeOutFinalBeepSilence[30] ="FTOFBS: ";
uint8_t        QtimeOutFinalBeepSilence[30] ="TOFBS?";

uint8_t        timeOutBeepSilence[30]       ="TOBS: ";
uint8_t        FtimeOutBeepSilence[30]      ="FTOBS: ";
uint8_t        QtimeOutBeepSilence[30]      ="TOBS?";

uint8_t        timeOutSilence[30]           ="TOS: ";
uint8_t        FtimeOutSilence[30]          ="FTOS: ";
uint8_t        QtimeOutSilence[30]          ="TOS?";


uint8_t        timeOutSound[30]           ="TOSD: ";
uint8_t        FtimeOutSound[30]          ="FTOSD: ";
uint8_t        QtimeOutSound[30]          ="TOSD?";

uint8_t        BEEPTime[30]                 ="BEEPT: ";
uint8_t        FBEEPTime[30]                ="FBEEPT: ";
uint8_t        QBEEPTime[30]                ="BEEPT?";


uint8_t        help[30]                     ="HELP";
uint8_t        defaults[30]                 ="DEFAULT";
uint8_t        reset[30]                 ="RESET";

uint8_t* command[COMMAND_TOTAL]=
{
 beep,

 baudRate,
 FbaudRate,
 QbaudRate,

 timeOut,
 FtimeOut,
 QtimeOut,

 timeOutFinalSilence,
 FtimeOutFinalSilence,
 QtimeOutFinalSilence,

 timeOutDigitSilenceLow,
 FtimeOutDigitSilenceLow,
 QtimeOutDigitSilenceLow,

 timeOutDigitSilenceHigh,
 FtimeOutDigitSilenceHigh,
 QtimeOutDigitSilenceHigh,

 timeOutFinalBeepSilence,
 FtimeOutFinalBeepSilence,
 QtimeOutFinalBeepSilence,

 timeOutBeepSilence,
 FtimeOutBeepSilence,
 QtimeOutBeepSilence,

 timeOutSilence,
 FtimeOutSilence,
 QtimeOutSilence,

 help,
 defaults,
 reset,
 sounds,
};



uint32_t FreqLeft=0;
// ToDo Main

int32_t main(void)
{
    uint32_t CPUFreq=0;
    uint32_t i=0,j=0;
    uint32_t BEEPU=0,BEEPD=0;
    SYSCTL_Init();//configurar a 80MHz
    CPUFreq=SYSCTL_ClockGet(); //obtiene la frec actual del Procesador
    FPU_Init(); //habilita el uso del co-procesador de FPU
    Enable_Interrupts();//Habilita Interrupcines
    GPIO_Init(); //ininializa el puerto A para debug

    mattelRAM.baudRate=mattelFlash.baudRate;
    mattelRAM.timeOut=mattelFlash.timeOut; //los valores que se tiene guardados en flash se le asigna al valor en RAM
    mattelRAM.timeOutBeepSilence=mattelFlash.timeOutBeepSilence; //los valores que se tiene guardados en flash se le asigna al valor en RAM
    mattelRAM.timeOutDigitSilenceHigh=mattelFlash.timeOutDigitSilenceHigh;
    mattelRAM.timeOutDigitSilenceLow=mattelFlash.timeOutDigitSilenceLow; //los valores que se tiene guardados en flash se le asigna al valor en RAM
    mattelRAM.timeOutFinalBeepSilence=mattelFlash.timeOutFinalBeepSilence;
    mattelRAM.timeOutFinalSilence=mattelFlash.timeOutFinalSilence; //los valores que se tiene guardados en flash se le asigna al valor en RAM
    mattelRAM.timeOutSilence=mattelFlash.timeOutSilence; //los valores que se tiene guardados en flash se le asigna al valor en RAM
    mattelRAM.timeOutSound=mattelFlash.timeOutSound; //los valores que se tiene guardados en flash se le asigna al valor en RAM


    Change_timeOut0ABeepSilence(mattelRAM.timeOutBeepSilence);
    Change_timeOut0AFinalBeepSilence(mattelRAM.timeOutFinalBeepSilence);
    Change_timeOut0ADigitSilenceHigh( mattelRAM.timeOutDigitSilenceHigh);
    Change_timeOut0ADigitSilenceLow( mattelRAM.timeOutDigitSilenceLow);
    Change_timeOut0AFinalSilence( mattelRAM.timeOutFinalSilence);
    Change_TimeOut0A(mattelRAM.timeOut);

    UART0_Init(mattelRAM.baudRate);// inicializa UART con los baudios en FLASH
    UART0_Printf( "\n\r ***********************************************************************\n\r"
            "                                MATTEL APPLICATION                                      \n\r"
            "                                    MODEL FHG51                                          \n\r"
            "                                    MODEL FHF35                                          \n\r"
            "                                                                              \n\r"
            "                                                                              \n\r"
            "                               TM4C123 CONFIGURATION                                     \n\r"
            "                    CPU FREQUENCY                  %d Hz                                  \n\r"
            "                    BAUDRATE                       %d Baud                                \n\r"
            "                    TIMEOUT                        %d us                                  \n\r"
            "                    TIMEOUT FINAL BEEP SILENCE     %d us                                  \n\r"
            "                    TIMEOUT FINAL SILENCE          %d us                                  \n\r"
            "                    TIMEOUT BEEP  SILENCE          %d us                                  \n\r"
            "                    TIMEOUT DIGIT SILENCE HIGH     %d us                                  \n\r"
            "                    TIMEOUT DIGIT SILENCE LOW      %d us                                  \n\r"
            "                    TIMEOUT SILENCE                %d us                                  \n\r"
            "                    TIMEOUT SOUND                  %d us                                  \n\r"
            "                                                                              \n\r>"
            ,CPUFreq,(uint32_t)mattelRAM.baudRate,(uint32_t)mattelRAM.timeOut,(uint32_t)mattelRAM.timeOutFinalBeepSilence, (uint32_t)mattelRAM.timeOutFinalSilence,
            (uint32_t)mattelRAM.timeOutBeepSilence,(uint32_t)mattelRAM.timeOutDigitSilenceHigh,(uint32_t)mattelRAM.timeOutDigitSilenceLow
            ,(uint32_t)mattelRAM.timeOutSilence,(uint32_t)mattelRAM.timeOutSound); // mensaje de inicio

   // List_Help(); // manda llamar la ayuda
    while(1)
    {
        if(UART0StringData)
        {
            Compare_AllString(UART0Fifo);
            UART0StringData=0;
        }


        if(finish==1)
        {
            WTIMER0A_DisInterrupt();
            WTIMER0B_DisInterrupt();
            WTIMER1A_DisInterrupt();
            finish=10;
            UART0_Printf("ID: %d \n\r>", (int)BEEP);
            BEEPU=BEEP%10;
            BEEPD=BEEP/10;
            for(i=0; i<BEEPD; i++)
            {
            UART0_Printf("ID FREQ PROM%d0: %f Hz\n\r>",(int) i+1, (float)BEEPFreq[i]);
            UART0_Printf("ID TIME%d0:      %f us\n\r>",(int) i+1, (float)BEEPTimeA0[i]);
            }
            for(i=0; i<BEEPU; i++)
            {
            UART0_Printf("ID FREQ PROM%d:  %f Hz\n\r>",(int)i+1, (float)BEEPFreq[i]);
            UART0_Printf("ID TIME%d:       %f us\n\r>",(int) i+1,(float) BEEPTimeA0[i]);
            }
            UART0_Printf("END \n\r>");

        }
        if(finish==2)
        {

            WTIMER0A_DisInterrupt();
            WTIMER0B_DisInterrupt();
            WTIMER1A_DisInterrupt();
            finish=10;
            UART0_Printf("FREQ PROM SOUND: %f \n\r>", (float)FreqPromObtained);
            FreqPromObtained=0;
            UART0_Printf("PULSES DETECTED: %d \n\r>", (uint32_t)FreqCountLeft);
            for(i=0; i<FreqCountLeft; i++)
            {
            UART0_Printf("FREQ %d: %f Hz\n\r>",(int) i+1, (float)Frequency[i]);
            for(j=0; j<1000; j++);
            }
            FreqCountLeft=0;
            UART0_Printf("END \n\r>");
        }
    }
}




// ToDo List help
int List_Help(void)
{
    int returned=0;
    returned=UART0_Printf
                (       "                                                                      \n\r"
                        "                                                                      \n\r"
                        "  DETECT BEEP                                                         \n\r"
                        "  Detect BEEP Number (1-99)                                           \n\r"
                        "  *command:     BEEP                                                  \n\r"
                        "   response:    >BEEP                                                 \n\r"
                        "                                                                      \n\r"
                        "                 BEEP=22                      AUDIO                   \n\r"
                        "          2                  2          |       NA     |              \n\r"
                        "      1   +   1          1   +   1      |       NA     |              \n\r"
                        "     ___     ___        ___     ___      __    _    ___               \n\r"
                        "    |   |   |   |      |   |   |   |    |  |  | |  |   |              \n\r"
                        "    |   |   |   |      |   |   |   |    |  |  | |  |   |              \n\r"
                        "  __|   |___|   |______|   |___|   |____|  |__| |__|   |______________\n\r"
                        "          ^         ^                 ^                       ^       \n\r"
                        "          |         |                 |                       |       \n\r"
                        " |BEEP SILENCE| |DIGIT SILENCE|  |FINAL BEEP SILENCE|  |FINAL SILENCE|\n\r\n\r"





                        "  BAUD RATE     \n\r"
                        "  *command:     BR: \'X\'\n\r"
                        "   actual:      BR: %d\n\r"
                        "   response:    >BAUD RATE .... \'X\' Baud\n\r"
                        "  *command:     FBR: \'X\'\n\r"
                        "   actual:      FBR: %d\n\r"
                        "   response:    >FLASH BAUD RATE .... \'X\' Baud\n\r"
                        "  *command:     BR?\n\r"
                        "   response:    >BAUD RATE .... \'X\' Baud\n\r\n\r"




                        "  TIME OUT      \n\r"
                        "  *command:     TO: \'X\'\n\r"
                        "   actual:      TO: %d\n\r"
                        "   response:    >TIME OUT .... \'X\' us\n\r"
                        "  *command:     FTO: \'X\'\n\r"
                        "   actual:      FTO: %d\n\r"
                        "   response:    >FLASH TIME OUT .... \'X\' us\n\r"
                        "  *command:     TO?\n\r"
                        "   response:    >TIME OUT .... \'X\' us\n\r\n\r"




                        "  TIME OUT FINAL SILENCE      \n\r"
                        "  *command:     TOFS: \'X\'\n\r"
                        "   actual:      TOFS: %d\n\r"
                        "   response:    >TIME OUT FINAL SILENCE .... \'X\' us\n\r"
                        "  *command:     FTOFS: \'X\'\n\r"
                        "   actual:      FTOFS: %d\n\r"
                        "   response:    >FLASH TIME OUT FINAL SILENCE .... \'X\' us\n\r"
                        "  *command:     TOFS?\n\r"
                        "   response:    >TIME OUT FINAL SILENCE .... \'X\' us\n\r\n\r"




                        "  TIME OUT DIGIT SILENCE LOW    \n\r"
                        "  *command:     TODSL: \'X\'\n\r"
                        "   actual:      TODSL: %d\n\r"
                        "   response:    >TIME OUT DIGIT SILENCE LOW .... \'X\' us\n\r"
                        "  *command:     FTODSL: \'X\'\n\r"
                        "   actual:      FTODSL: %d\n\r"
                        "   response:    >FLASH TIME OUT DIGIT SILENCE LOW .... \'X\' us\n\r"
                        "  *command:     TODSL?\n\r"
                        "   response:    >TIME OUT DIGIT SILENCE LOW .... \'X\' us\n\r\n\r"




                        "  TIME OUT DIGIT SILENCE HIGH    \n\r"
                        "  *command:     TODSH: \'X\'\n\r"
                        "   actual:      TODSH: %d\n\r"
                        "   response:    >TIME OUT DIGIT SILENCE HIGH .... \'X\' us\n\r"
                        "  *command:     FTODSH: \'X\'\n\r"
                        "   actual:      FTODSH: %d\n\r"
                        "   response:    >FLASH TIME OUT DIGIT SILENCE HIGH .... \'X\' us\n\r"
                        "  *command:     TODSH?\n\r"
                        "   response:    >TIME OUT DIGIT SILENCE HIGH .... \'X\' us\n\r\n\r"



                        "  TIME OUT FINAL BEEP SILENCE      \n\r"
                        "  *command:     TOFBS: \'X\'\n\r"
                        "   actual:      TOFBS: %d\n\r"
                        "   response:    >TIME OUT FINAL BEEP SILENCE .... \'X\' us\n\r"
                        "  *command:     FTOFBS: \'X\'\n\r"
                        "   actual:      FTOFBS: %d\n\r"
                        "   response:    >FLASH TIME OUT FINAL BEEP SILENCE  .... \'X\' us\n\r"
                        "  *command:     TOFBS?\n\r"
                        "   response:    >TIME OUT FINAL BEEP SILENCE .... \'X\' us\n\r\n\r"



                        "  TIME OUT BEEP SILENCE      \n\r"
                        "  *command:     TOBS: \'X\'\n\r"
                        "   actual:      TOBS: %d\n\r"
                        "   response:    >TIME OUT BEEP SILENCE .... \'X\' us\n\r"
                        "  *command:     FTOBS: \'X\'\n\r"
                        "   actual:      FTOBS: %d\n\r"
                        "   response:    >FLASH TIME OUT BEEP SILENCE  .... \'X\' us\n\r"
                        "  *command:     TOBS?\n\r"
                        "   response:    >TIME OUT BEEP SILENCE .... \'X\' us\n\r\n\r>"



                        "  TIME OUT SILENCE      \n\r"
                        "  *command:     TOS: \'X\'\n\r"
                        "   actual:      TOS: %d\n\r"
                        "   response:    >TIME OUT SILENCE .... \'X\' us\n\r"
                        "  *command:     FTOS: \'X\'\n\r"
                        "   actual:      FTOS: %d\n\r"
                        "   response:    >FLASH TIME OUT SILENCE  .... \'X\' us\n\r"
                        "  *command:     TOS?\n\r"
                        "   response:    >TIME OUT SILENCE .... \'X\' us\n\r\n\r"


                        "  TIME OUT SOUND      \n\r"
                        "  *command:     TOSD: \'X\'\n\r"
                        "   actual:      TOSD: %d\n\r"
                        "   response:    >TIME OUT SOUND .... \'X\' us\n\r"
                        "  *command:     FTOSD: \'X\'\n\r"
                        "   actual:      FTOSD: %d\n\r"
                        "   response:    >FLASH TIME OUT SOUND  .... \'X\' us\n\r"
                        "  *command:     TOSD?\n\r"
                        "   response:    >TIME OUT SOUND .... \'X\' us\n\r\n\r>"

                        ,(uint32_t)mattelRAM.baudRate,(uint32_t)mattelFlash.baudRate,(uint32_t)mattelRAM.timeOut,(uint32_t)mattelFlash.timeOut
                        ,(uint32_t)mattelRAM.timeOutFinalSilence,(uint32_t)mattelFlash.timeOutFinalSilence,(uint32_t)mattelRAM.timeOutDigitSilenceLow,(uint32_t)mattelFlash.timeOutDigitSilenceLow
                        ,(uint32_t)mattelRAM.timeOutDigitSilenceHigh,(uint32_t)mattelFlash.timeOutDigitSilenceHigh,(uint32_t)mattelRAM.timeOutFinalBeepSilence,(uint32_t)mattelFlash.timeOutFinalBeepSilence
                        ,(uint32_t)mattelRAM.timeOutBeepSilence,(uint32_t)mattelFlash.timeOutBeepSilence,(uint32_t)mattelRAM.timeOutSilence,(uint32_t)mattelFlash.timeOutSilence
                        ,(uint32_t)mattelRAM.timeOutSound,(uint32_t)mattelFlash.timeOutSound);

    return returned;


}



//todo Compare All
void Compare_AllString(uint8_t* stringIn)
{
    int32_t i=0;
    int32_t find=0;
    int32_t cant=0;
    int64_t auxhelp=0;
    while(cant<COMMAND_TOTAL)
    {
        if(Compare_String(stringIn,command[cant]))
        {
            switch(cant)
            {

                case BEEP_:
                    Restart_Variables();
                    Init_WTIMER1A_Time();
                    Init_WTIMER0B_us(mattelRAM.timeOutSilence,0);
                    Init_WTIMER0A_us(mattelRAM.timeOut);
                    WTIMER0B_Interrupt();
                    GPIOA_AHB_GPIODAT_DAT5_BB=GPIOA_AHB_GPIODAT_DAT5_HIGH;
                    GPIOA_AHB_GPIODAT_DAT4_BB=GPIOA_AHB_GPIODAT_DAT4_HIGH;
                    GPIOA_AHB_GPIODAT_DAT3_BB=GPIOA_AHB_GPIODAT_DAT3_HIGH;
                    GPIOA_AHB_GPIODAT_DAT2_BB=GPIOA_AHB_GPIODAT_DAT2_HIGH;
                    UART0_Printf("BEEP\n\r>");
                case BR_:
                    find=1;
                    if(String_To_Int((int8_t*)(stringIn+4),&auxhelp))
                    {
                        mattelRAM.baudRate=auxhelp;
                        UART0_Printf("BAUD RATE .... %u Baud\n\r>",mattelRAM.baudRate);
                        for(i=0; i<30000; i++);
                        UART0_Init(mattelRAM.baudRate);
                    }
                    break;
                case FBR_:
                    find=1;
                    if(String_To_Int((int8_t*)(stringIn+5),&auxhelp))
                    {
                        mattelRAM.baudRate=auxhelp;
                        FLASH_ErasePage((int)(&mattelFlash));
                        auxhelp=0;
                        FLASH_WriteBuf((int*)&mattelRAM,(int*)&auxhelp,20,(int) &mattelFlash);
                        UART0_Printf("FLASH BAUD RATE .... %u Baud\n\r>",mattelRAM.baudRate);
                        for(i=0; i<30000; i++);
                        UART0_Init(mattelRAM.baudRate);
                    }
                    break;
                case QBR_:
                    find=1;
                    UART0_Printf("BAUD RATE .... %u Baud\n\r>",mattelRAM.baudRate);

                    break;
                case TO_:
                    find=1;
                    if(String_To_Int((int8_t*)(stringIn+4),&auxhelp))
                    {
                        mattelRAM.timeOut=auxhelp;
                        UART0_Printf("TIME OUT .... %u us\n\r>",mattelRAM.timeOut);
                        Init_WTIMER0A_us(mattelRAM.timeOut);
                    }
                    break;
                case FTO_:
                    find=1;
                    if(String_To_Int((int8_t*)(stringIn+5),&auxhelp))
                    {
                        mattelRAM.timeOut=auxhelp;
                        FLASH_ErasePage((int)(&mattelFlash));
                        auxhelp=0;
                        FLASH_WriteBuf((int*)&mattelRAM,(int*)&auxhelp,20,(int) &mattelFlash);
                        UART0_Printf("FLASH TIME OUT .... %u us\n\r>",mattelRAM.timeOut);
                        Init_WTIMER0A_us(mattelRAM.timeOut);
                    }
                    break;
                case QTO_:
                    find=1;
                    UART0_Printf("TIME OUT .... %u us\n\r>",mattelRAM.timeOut);
                    break;
                case HELP_:
                    List_Help();
                    break;
               case RESET_:

                   find=1;
                   UART0_Printf("RESETING ...\n\r");
                   for(i=0; i<30000; i++);
                   SCB_APINT_R=SCB_APINT_R_VECTKEY_WRITE|SCB_APINT_R_SYSRESREQ_RESET;
                   break;

               case DEFAULTS_:
                   find=1;
                   mattelRAM.baudRate=mattelFlashDefault.baudRate;
                   mattelRAM.timeOut=mattelFlashDefault.timeOut; //los valores que se tiene guardados en flash se le asigna al valor en RAM
                   mattelRAM.timeOutBeepSilence=mattelFlashDefault.timeOutBeepSilence; //los valores que se tiene guardados en flash se le asigna al valor en RAM
                   mattelRAM.timeOutDigitSilenceHigh=mattelFlashDefault.timeOutDigitSilenceHigh;
                   mattelRAM.timeOutDigitSilenceLow=mattelFlashDefault.timeOutDigitSilenceLow; //los valores que se tiene guardados en flash se le asigna al valor en RAM
                   mattelRAM.timeOutFinalBeepSilence=mattelFlashDefault.timeOutFinalBeepSilence;
                   mattelRAM.timeOutFinalSilence=mattelFlashDefault.timeOutFinalSilence; //los valores que se tiene guardados en flash se le asigna al valor en RAM
                   mattelRAM.timeOutSilence=mattelFlashDefault.timeOutSilence; //los valores que se tiene guardados en flash se le asigna al valor en RAM
                   mattelRAM.timeOutSound=mattelFlashDefault.timeOutSound; //los valores que se tiene guardados en flash se le asigna al valor en RAM


                   Change_timeOut0ABeepSilence(mattelRAM.timeOutBeepSilence);
                   Change_timeOut0AFinalBeepSilence(mattelRAM.timeOutFinalBeepSilence);
                   Change_timeOut0ADigitSilenceHigh( mattelRAM.timeOutDigitSilenceHigh);
                   Change_timeOut0ADigitSilenceLow( mattelRAM.timeOutDigitSilenceLow);
                   Change_timeOut0AFinalSilence( mattelRAM.timeOutFinalSilence);
                   Change_TimeOut0A(mattelRAM.timeOut);

                   UART0_Printf("BAUD RATE .... %u Baud\n\r>",mattelRAM.baudRate);
                   UART0_Printf("DEFAULT  .... Complete\n\r>");

                   for(i=0; i<30000; i++);
                   UART0_Init(mattelRAM.baudRate);// inicializa UART con los baudios en FLASH

                   break;
               case SOUNDS_:
                   FreqLeft=0;
                   FreqCountLeft=0;
                   FreqPromObtained=0;
                   Restart_Variables();
                     Init_WTIMER1A_Time();
                     Init_WTIMER0B_us(mattelRAM.timeOutSound,1);
                     Init_WTIMER0A_us(mattelRAM.timeOut);
                     WTIMER0B_Interrupt();
                     GPIOA_AHB_GPIODAT_DAT5_BB=GPIOA_AHB_GPIODAT_DAT5_HIGH;
                     GPIOA_AHB_GPIODAT_DAT4_BB=GPIOA_AHB_GPIODAT_DAT4_HIGH;
                     GPIOA_AHB_GPIODAT_DAT3_BB=GPIOA_AHB_GPIODAT_DAT3_HIGH;
                     GPIOA_AHB_GPIODAT_DAT2_BB=GPIOA_AHB_GPIODAT_DAT2_HIGH;
                     UART0_Printf("SOUND\n\r>");

                default:
                    break;

            }
        }
        if(find)
            cant=COMMAND_TOTAL+1;
        else
            cant++;
    }
//    if(cant==COMMAND_TOTAL)
//    {
//        UART0_Printf("COMMAND NO RECOGNIZED\n\r>");
//    }
}



//toDo Compare String
int Compare_String(uint8_t* stringIn,uint8_t* stringOut)
{
    while((*stringIn!=0)&&(*stringOut!=0))
    {
        if((*stringIn!=*stringOut) &&((*stringIn+32)!=*stringOut)&&((*stringIn-32)!=*stringOut))
            return 0;
        stringIn++;
        stringOut++;
    }
    if((*(stringIn)==*(stringOut))|| ((*(stringIn-1)==' ')&&(*(stringOut)==0)))
        return 1;
    else
        return 0;
}


//toDo GPIO Init
void GPIO_Init(void)
{
    SYSCTL_RCGCGPIO_RCGCGPIOA_BB=SYSCTL_RCGCGPIO_RCGCGPIOA_EN;
    while(SYSCTL_PRGPIO_PRGPIOA_BB==SYSCTL_PRGPIO_PRGPIOA_NORDY);
    GPIOA_AHB->GPIOLOCK=GPIOA_AHB_GPIOLOCK_LOCK_KEY;
    GPIOA_AHB_GPIOCR_R=0xFF;


    GPIOA_AHB_GPIODEN_R=0xFF;

    GPIOA_AHB_GPIODIR_R=0xFF;

    GPIOA_AHB_GPIOPCTL_R=0;

    GPIOA_AHB_GPIODAT_R=0;

//NVIC_PRI0->NVIC_GPIOA=1;
//NVIC_EN0->NVIC_GPIOA=NVIC_EN0_NVIC_GPIOA_EN;

}







