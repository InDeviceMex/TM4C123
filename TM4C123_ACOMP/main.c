

/**
 * main.c
 */

/*Standard Libraries*/
#include <xUtils/Standard/Standard.h>
#include "stdlib.h"
#include "stdarg.h"
#include "math.h"
#include <string.h>

/*MCU Drivers*/
#include <xDriver_MCU.h>

/*Utils Libraries*/
#include <xUtils/Conversion/Conversion.h>
#include <xUtils/DataStructure/DataStructure.h>
#include <xApplication/Printf/Generic/xHeader/Printf.h>

uint8_t NokiaBuffer[64*(48/8)] ={0u};
char cNokiaBuffer[64*(48/8)] ={0u};
/*Local functions*/
void MAIN_vIrqCOMP1_INT1(void);
int32_t main (void);

int32_t main(void)
{
    Queue_TypeDef* psQueue = (Queue_TypeDef*)0UL;
    volatile Queue_nSTATUS enStatus =Queue_enSTATUS_ERROR;
    uint32_t u32CompState1= 0UL ;
    uint32_t u32CompState[10] = {0u};
    uint32_t u32Lenght = 0UL;
    void *pvData = (void*)0UL;
    void **ppvData = (void**)u32CompState;
    MPU__vInit();
    SCB__vInit();
    FLASH__enInit();
    SYSEXC__vInit((SYSEXC_nINT)((uint32_t)SYSEXC_enINT_INVALID|(uint32_t)SYSEXC_enINT_DIV0|
          (uint32_t)SYSEXC_enINT_OVERFLOW|(uint32_t)SYSEXC_enINT_UNDERFLOW),SYSEXC_enPRI7);

    SYSCTL__enInit();/* system clock 80MHz*/
    EEPROM__enInit();
    SysTick__enInitUs(1000.0f,SCB_enSHPR0);

    psQueue = Queue__psInit((void  (*)(void *DataContainer))0UL);

    pvData = Queue__pvPeek(psQueue);
    u32Lenght = Queue__u32GetSize(psQueue);
    enStatus = Queue__enDequeue(psQueue, ppvData);
    enStatus = Queue__enEnqueue(psQueue, (void*)1);
    enStatus = Queue__enEnqueue(psQueue, (void*)4);
    enStatus = Queue__enEnqueue(psQueue, (void*)5);
    pvData = Queue__pvPeek(psQueue);
    enStatus = Queue__enDequeue(psQueue, ppvData);
    enStatus = Queue__enDequeue(psQueue, ppvData);
    enStatus = Queue__enDequeue(psQueue, ppvData);
    enStatus = Queue__enDequeue(psQueue, ppvData);

    ACMP__vSetReady();
    GPIO__vSetAnalogFunction(GPIO_enC1P);
    GPIO__vSetAnalogFunction(GPIO_enC1M);

    GPIO__enSetDigitalConfig(GPIO_enGPIOF1,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF2,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF3,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);


    ACMP__vRegisterIRQVectorHandler(&ACMP1__vIRQVectorHandler, ACMP_enMODULE_1);
    ACMP__vRegisterIRQSourceHandler(&MAIN_vIrqCOMP1_INT1, ACMP_enMODULE_1);

    ACMP->ACCTL1 =0x00000000U;
    ACMP->ACCTL1_Bit.ISEN = ACMP_ACCTL_ISEN_EITHER;

    ACMP__vEnInterruptVector(ACMP_enMODULE_1, ACMP_enPRI7);
    ACMP__vEnInterruptSource(ACMP_enMODULEMASK_1);
    SysTick__vDelayUs(1000.0f);

    u32CompState1= ACMP_BITBANDING_ACSTAT1_OVAL;
   if(u32CompState1 == ACMP_ACSTAT_OVAL_HIGH) /*Rising*/
   {
       GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_3, GPIO_enPIN_3);
       GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, 0u);
   }
   else/*Falling*/
   {
       GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_3, 0U);
       GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, GPIO_enPIN_2);
   }
    while(1u)
    {
  /*      u32CompState= ACMP_BITBANDING_ACSTAT1_OVAL;
        if(u32CompState == ACMP_ACSTAT_OVAL_HIGH)
        {
            GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, 0u);
        }
        else
        {
            GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, GPIO_enPIN_2);
        }
    */
    }
}
void MAIN_vIrqCOMP1_INT1(void)
{
    uint32_t u32CompState = 0u;

   u32CompState= ACMP_BITBANDING_ACSTAT1_OVAL;
   if(u32CompState == ACMP_ACSTAT_OVAL_HIGH) /*Rising*/
   {
       GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_3, GPIO_enPIN_3);
       GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, 0u);
   }
   else/*Falling*/
   {
       GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_3, 0U);
       GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, GPIO_enPIN_2);
   }
}




