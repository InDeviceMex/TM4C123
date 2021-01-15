

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

uint32_t MAIN_u32MatchSet(const void *pcvKey1, const void *pcvKey2);
void MAIN_vIrqCOMP1_INT1(void);
int32_t main (void);

int32_t main(void)
{
    Queue_TypeDef* psQueue = (Queue_TypeDef*)0UL;
    Set_TypeDef* psSet1 = (Set_TypeDef*)0UL;
    Set_TypeDef* psSet2 = (Set_TypeDef*)0UL;
    Set_TypeDef* psSetNew = (Set_TypeDef*)0UL;
    SetMember_TypeDef* psSetMember = (SetMember_TypeDef*)0UL;
    volatile Queue_nSTATUS enStatus =Queue_enSTATUS_ERROR;
    uint32_t u32CompState1= 0UL ;
    uint32_t u32CompState[10] = {0u};
    uint32_t u32LenghtMember = 0UL;
    uint32_t u32Lenght = 0UL;
    uint32_t u32Iteration = 0UL;
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

    psSet1 = Set__psInit(&MAIN_u32MatchSet, (void  (*)(void *DataContainer))0UL);
    psSet2 = Set__psInit(&MAIN_u32MatchSet, (void  (*)(void *DataContainer))0UL);

    Set__enInsert(psSet1, (void*)1);
    Set__enInsert(psSet1, (void*)1);
    Set__enInsert(psSet1, (void*)2);
    Set__enInsert(psSet1, (void*)2);
    Set__enInsert(psSet1, (void*)4);

    Set__enInsert(psSet2, (void*)4);
    Set__enInsert(psSet2, (void*)5);
    Set__enInsert(psSet2, (void*)3);
    Set__enInsert(psSet2, (void*)2);
    Set__enInsert(psSet2, (void*)6);

    psSetNew = Set__psDifference(psSet1, psSet2);
    u32Lenght= 0UL;
    u32LenghtMember = Set__u32GetAllMember((const Set_TypeDef* )psSet1,  (const void**)ppvData, 10);
    u32Lenght +=sprintf__u32User(&cNokiaBuffer[u32Lenght],"Data: ");
    for(u32Iteration = 0UL; u32Iteration < u32LenghtMember; u32Iteration++)
    {
        u32Lenght += sprintf__u32User(&cNokiaBuffer[u32Lenght],"%u ", *ppvData);
        ppvData+= 1UL;
    }

    u32LenghtMember = Set__u32GetAllMember((const Set_TypeDef* )psSet2,  (const void**)ppvData, 10);
    u32Lenght +=sprintf__u32User(&cNokiaBuffer[u32Lenght],"Data: ");
    for(u32Iteration = 0UL; u32Iteration < u32LenghtMember; u32Iteration++)
    {
        u32Lenght += sprintf__u32User(&cNokiaBuffer[u32Lenght],"%u ", *ppvData);
        ppvData+= 1UL;
    }


    u32LenghtMember = Set__u32GetAllMember((const Set_TypeDef* )psSetNew,  (const void**)ppvData, 10);
    u32Lenght +=sprintf__u32User(&cNokiaBuffer[u32Lenght],"Data: ");
    for(u32Iteration = 0UL; u32Iteration < u32LenghtMember; u32Iteration++)
    {
        u32Lenght += sprintf__u32User(&cNokiaBuffer[u32Lenght],"%u ", *ppvData);
        ppvData+= 1UL;
    }

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

uint32_t MAIN_u32MatchSet(const void *pcvKey1, const void *pcvKey2)
{
    Set_nSTATUS enComparison = Set_enSTATUS_ERROR;
    uint32_t u32Value1 = (uint32_t)pcvKey1;
    uint32_t u32Value2 = (uint32_t)pcvKey2;

    if(u32Value1 == u32Value2)
    {
        enComparison = Set_enSTATUS_OK;
    }

    return (uint32_t)enComparison;
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




