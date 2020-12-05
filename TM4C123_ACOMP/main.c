

/**
 * main.c
 */

/*Standard Libraries*/
#include <xUtils/Standard/Standard.h>
#include "stdlib.h"
#include "stdarg.h"
/*MCU Drivers*/
#include <xDriver_MCU.h>


/*Utils Libraries*/
#include <xUtils/Conversion/Conversion.h>

/*Local functions*/
void MAIN_vIrqCOMP1_INT1(void);
void MAIN_vIrqCOMP1_INT2(void);
int32_t main (void);

int32_t main(void)
{
    volatile uint32_t u32CompState = 0u;
    MPU__vInit();
    SCB__vInit();
    FLASH__enInit();
    SYSEXC__vInit((SYSEXC_nINT)((uint32_t)SYSEXC_enINT_INVALID|(uint32_t)SYSEXC_enINT_DIV0|
          (uint32_t)SYSEXC_enINT_OVERFLOW|(uint32_t)SYSEXC_enINT_UNDERFLOW),SYSEXC_enPRI7);

    SYSCTL__enInit();/* system clock 80MHz*/
    EEPROM__enInit();
    SysTick__enInitUs(1000.0f,SCB_enSHPR0);

    ACMP__vSetReady();
    GPIO__vSetAnalogFunction(GPIO_enC1P);
    GPIO__vSetAnalogFunction(GPIO_enC1M);

    GPIO__enSetDigitalConfig(GPIO_enC1o,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF2,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF3,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);


    ACMP__vRegisterIRQVectorHandler(&ACMP1__vIRQVectorHandler, ACMP_enMODULE_1);
    ACMP__vRegisterIRQSourceHandler(&MAIN_vIrqCOMP1_INT1, ACMP_enMODULE_1);

    ACMP->ACCTL1 =0x00000000U;
    ACMP->ACCTL1_Bit.ISEN = ACMP_ACCTL_ISEN_FALLING;

    ACMP__vEnInterruptVector(ACMP_enMODULE_1, ACMP_enPRI7);
    ACMP__vEnInterruptSource(ACMP_enMODULEMASK_1);
    SysTick__vDelayUs(1000.0f);
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
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_3, GPIO_enPIN_3);
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, 0u);
    ACMP->ACCTL1_Bit.ISEN = ACMP_ACCTL_ISEN_RISING;
    ACMP__vRegisterIRQSourceHandler(&MAIN_vIrqCOMP1_INT2, ACMP_enMODULE_1);
}

void MAIN_vIrqCOMP1_INT2(void)
{
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_3, 0u);
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, GPIO_enPIN_2);
    ACMP->ACCTL1_Bit.ISEN = ACMP_ACCTL_ISEN_FALLING;
    ACMP__vRegisterIRQSourceHandler(&MAIN_vIrqCOMP1_INT1, ACMP_enMODULE_1);
}



