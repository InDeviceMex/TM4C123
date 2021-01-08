

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
    SingleLinkList_TypeDef* psLinkList1 = (SingleLinkList_TypeDef*)0UL;
    SingleLinkListElement_TypeDef* psNewElement = (SingleLinkListElement_TypeDef*) 0UL;
    uint32_t u32CompState = 0u;
    uint32_t u32Lenght = 0u;
    uint32_t *pu32Lenght = 0u;
    MPU__vInit();
    SCB__vInit();
    FLASH__enInit();
    SYSEXC__vInit((SYSEXC_nINT)((uint32_t)SYSEXC_enINT_INVALID|(uint32_t)SYSEXC_enINT_DIV0|
          (uint32_t)SYSEXC_enINT_OVERFLOW|(uint32_t)SYSEXC_enINT_UNDERFLOW),SYSEXC_enPRI7);

    SYSCTL__enInit();/* system clock 80MHz*/
    EEPROM__enInit();
    SysTick__enInitUs(1000.0f,SCB_enSHPR0);

    psLinkList1 = SingleLinkList__psInit((void  (*)(void *DataContainer))0UL);

/*SingleLinkList__psAddBegin(psLinkList1, (void*)&u32CompState);
    SingleLinkList__psAddEnd(psLinkList1,(void*)&u32Lenght);
    psNewElement = SingleLinkList__psAddBegin(psLinkList1,(void*)&NokiaBuffer);
    SingleLinkList__psAddNext(psLinkList1, psNewElement, (void*)&NokiaBuffer);
*/
    SingleLinkList__psAddPos(psLinkList1,0UL, (void*)&u32CompState); /*28*/
    SingleLinkList__psAddPos(psLinkList1,1UL, (void*)&u32CompState);/*38*/
    SingleLinkList__psAddPos(psLinkList1,2UL,  (void*)&u32CompState);/*48*/
    SingleLinkList__psAddPos(psLinkList1,3UL,  (void*)&u32CompState);/*58*/
    SingleLinkList__psAddPos(psLinkList1,4UL,  (void*)&u32CompState);/*68*/
    SingleLinkList__psAddPos(psLinkList1,5UL,  (void*)&u32CompState);/*78*/
    SingleLinkList__psAddPos(psLinkList1,2UL,  (void*)&u32CompState);/*88*/
    SingleLinkList__psAddPos(psLinkList1,6UL,  (void*)&u32CompState);/*98*/

    SingleLinkList__enReverse(psLinkList1);


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

    u32Lenght = sprintf__u32User(cNokiaBuffer, "%s%-d%s%f","Esta es la prueba de fuego: \n\rInteger: ", 42,"\n\rFloat: ",33.456f);
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




