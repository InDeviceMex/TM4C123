

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
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

/*Utils Libraries*/
#include <xUtils/Math/Math.h>
#include <xUtils/Conversion/Conversion.h>
#include <xUtils/DataStructure/DataStructure.h>
#include <xApplication/Printf/Printf.h>

/*Applications*/
#include <xApplication/EDUMKII/EDUMKII.h>
#include <xApplication/GameShip/GameShip.h>

#define ASTEROID_CANT (5UL)

void MAIN_vUART0Init(void);
void MAIN_vInitEDUMKII(void);
void MAIN_vInitSystem(void);
int32_t main (void);

uint32_t u32MicrophoneValue = 0UL;
int32_t main(void)
{
    EDUMKII_nJOYSTICK enJoystickSelectValue = (EDUMKII_nJOYSTICK) 0UL;
    EDUMKII_nBUTTON enButtonState = EDUMKII_enBUTTON_NO;
    EDUMKII_nBUTTON_STATE enButton1State = EDUMKII_enBUTTON_STATE_NOPRESS;
    EDUMKII_nBUTTON_STATE enButton2State = EDUMKII_enBUTTON_STATE_NOPRESS;
    int32_t s32AccelerometerXValue = 0UL;
    int32_t s32AccelerometerYValue = 0UL;
    int32_t s32AccelerometerZValue = 0UL;
    uint32_t u32JoystickXValue = 0UL;
    uint32_t u32JoystickYValue = 0UL;

    uint32_t u32GameOver = 0UL;

    Ship_TypeDef* psShip1 = 0UL;

    DLinkedListElement_TypeDef* psShotIterator = 0UL;
    DLinkedListElement_TypeDef* psShotIteratorTemp = 0UL;
    DLinkedList_TypeDef* psShotList = 0UL;
    Shot_TypeDef* psShotGeneric = 0UL;
    Shot_TypeDef* psShotNew = 0UL;
    Shot_TypeDef** psShotDeletedPointer = 0UL;
    static Shot_TypeDef* psShotDeleted = 0UL;
    uint32_t u32DeleteShot = 0UL;
    uint32_t u32ShotPosX = 0UL;
    uint32_t u32ShotPosY = 0UL;

    uint32_t u32AsteroidPos = 0UL;
    DLinkedListElement_TypeDef* psAsteroidIterator = 0UL;
    DLinkedListElement_TypeDef* psAsteroidIteratorTemp = 0UL;
    DLinkedList_TypeDef* psAsteroidList = 0UL;
    Asteroid_TypeDef* psAsteroidGeneric = 0UL;
    Asteroid_TypeDef* psAsteroidNew = 0UL;
    Asteroid_TypeDef** psAsteroidDeletedPointer = 0UL;
    static Asteroid_TypeDef* psAsteroidDeleted = 0UL;
    uint32_t u32AsteroidPosX = 0UL;
    uint32_t u32AsteroidPosY = 0UL;
    uint32_t u32AsteroidCant = 0UL;

    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_OK;
    psShotDeletedPointer = &psShotDeleted;
    psAsteroidDeletedPointer = &psAsteroidDeleted;

    MAIN_vInitSystem();
    MAIN_vInitEDUMKII();
    GraphTerm__vClearScreen(UART_enMODULE_0);
    GraphTerm__vHideCursor(UART_enMODULE_0);
    /*GraphTerm__vSetFontColor(UART_enMODULE_0, 0xFFUL, 0UL,0UL );*/
    GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 0UL,
     "Button1:  , Button2:  \n\r"
     "JoystickX:     , JoystickY:     , Select:  \n\r"
     "AccelX:      , AccelY:      , AccelZ:      \n\r"
     "Microphone:     \n\r\n\r");

    psShotList = DLinkedList__psInit(&Ship__vDestructor);
    psAsteroidList = DLinkedList__psInit(&Asteroid__vDestructor);
    psShip1 = Ship__psConstructor(42UL, 40UL, 3UL, 3UL);


    for(u32AsteroidPos = 0UL; u32AsteroidPos< ASTEROID_CANT;u32AsteroidPos++ )
    {
        u32AsteroidPosX = Asteroid__u32GetRandPosX();
        u32AsteroidPosY = Asteroid__u32GetRandPosY();
        psAsteroidNew = Asteroid__psConstructor(u32AsteroidPosX, u32AsteroidPosY);
        if(0UL != (uint32_t) psAsteroidNew)
        {
            psAsteroidIteratorTemp = DLinkedList__psAddEnd(psAsteroidList,  (void*) psAsteroidNew);
            if(0UL != (uint32_t) psAsteroidIteratorTemp)
            {
                u32AsteroidCant++;
            }
        }
    }
    Ship__vDraw(psShip1);
    Frame__vDraw();
    Ship__vDrawLifes(psShip1);
    while(1UL)
    {
        SysTick__vDelayUs(90000.0f);
        enButtonState = EDUMKII_Button_enRead(EDUMKII_enBUTTON_ALL);
        EDUMKII_Joystick_vSample( &u32JoystickXValue, &u32JoystickYValue, &enJoystickSelectValue);
        EDUMKII_Accelerometer_vSample( &s32AccelerometerXValue, &s32AccelerometerYValue, &s32AccelerometerZValue);
        EDUMKII_Microphone_vSample( &u32MicrophoneValue);

        enButton1State = (EDUMKII_nBUTTON_STATE) ((uint32_t) enButtonState & (uint32_t) EDUMKII_enBUTTON_1);
        enButton2State = (EDUMKII_nBUTTON_STATE) (((uint32_t) enButtonState & (uint32_t) EDUMKII_enBUTTON_2) >> 1UL);

        if(EDUMKII_enBUTTON_STATE_PRESS == enButton2State)
        {
            u32GameOver = 0UL;
            Ship__vErase(psShip1);
            Ship__vSetLifes(psShip1, 3UL);
            Ship__vSetSubLifes(psShip1, 3UL);
            Ship__vSetXPos(psShip1, 42UL);
            Ship__vSetYPos(psShip1, 40UL);
            Ship__vMove(psShip1);
        }



        if(EDUMKII_enJOYSTICK_PRESS == enJoystickSelectValue)
        {
        }
        else
        {
        }

        GraphTerm__u32Printf(UART_enMODULE_0, 9UL, 0UL,"%1u", enButton1State);
        GraphTerm__u32Printf(UART_enMODULE_0, 21UL, 0UL,"%1u", enButton2State);
        GraphTerm__u32Printf(UART_enMODULE_0, 11UL, 1UL,"%4u", u32JoystickXValue);
        GraphTerm__u32Printf(UART_enMODULE_0, 28UL, 1UL,"%4u", u32JoystickYValue);
        GraphTerm__u32Printf(UART_enMODULE_0, 42UL, 1UL,"%1u", enJoystickSelectValue);
        GraphTerm__u32Printf(UART_enMODULE_0, 8UL, 2UL,"%+5d", s32AccelerometerXValue);
        GraphTerm__u32Printf(UART_enMODULE_0, 22UL, 2UL,"%+5d", s32AccelerometerYValue);
        GraphTerm__u32Printf(UART_enMODULE_0, 36UL, 2UL,"%+5d", s32AccelerometerZValue);
        GraphTerm__u32Printf(UART_enMODULE_0, 12UL, 3UL,"%4u", u32MicrophoneValue);

        if(0UL == u32GameOver)
        {
            if(EDUMKII_enBUTTON_STATE_PRESS == enButton1State)
            {
                u32ShotPosX = Ship__u32GetXPos(psShip1);
                u32ShotPosX *= 2UL;
                u32ShotPosX += Ship__u32GetWidth(psShip1);
                u32ShotPosX /= 2UL;
                u32ShotPosY = Ship__u32GetYPos(psShip1);
                u32ShotPosY *= 2UL;
                u32ShotPosY += Ship__u32GetHeight(psShip1);
                u32ShotPosY /= 2UL;
                psShotNew =  Shot__psConstructor(u32ShotPosX, u32ShotPosY);
                if(0UL != (uint32_t) psShotNew)
                {
                    DLinkedList__psAddEnd(psShotList, (void*)psShotNew);
                }
            }

            psShotIterator = DLinkedList__psGetHead(psShotList);
            while((uint32_t) psShotIterator != 0UL)
            {
                psShotGeneric = (Shot_TypeDef*) DLinkedList__pvGetElementData(psShotIterator);
                u32DeleteShot = Shot__u32Move(psShotGeneric);
                if(1UL == u32DeleteShot)
                {
                    psShotIteratorTemp = DLinkedList__psGetElementNextNode(psShotIterator);
                    enStatus = DLinkedList__enRemove(psShotList, psShotIterator, (void**) psShotDeletedPointer);
                    {
                        Shot__vDestructor(*psShotDeletedPointer);
                    }
                    psShotIterator = psShotIteratorTemp;
                }
                else
                {
                    psShotIterator = DLinkedList__psGetElementNextNode(psShotIterator);
                }
            }

            psAsteroidIterator = DLinkedList__psGetHead(psAsteroidList);
            while((uint32_t) psAsteroidIterator != 0UL)
            {
                psAsteroidGeneric = (Asteroid_TypeDef*) DLinkedList__pvGetElementData(psAsteroidIterator);
                Asteroid__vMove(psAsteroidGeneric);
                Asteroid__vCollision(psAsteroidGeneric, psShip1);
                psAsteroidIterator = DLinkedList__psGetElementNextNode(psAsteroidIterator);
            }

            psAsteroidIterator = DLinkedList__psGetHead(psAsteroidList);
            while((uint32_t) psAsteroidIterator != 0UL)
            {
                psAsteroidGeneric = (Asteroid_TypeDef*) DLinkedList__pvGetElementData(psAsteroidIterator);
                u32AsteroidPosX = Asteroid__u32GetXPos(psAsteroidGeneric);
                u32AsteroidPosY = Asteroid__u32GetYPos(psAsteroidGeneric);
                psShotIterator = DLinkedList__psGetHead(psShotList);
                while((uint32_t) psShotIterator != 0UL)
                {
                    psShotIteratorTemp = DLinkedList__psGetElementNextNode(psShotIterator);
                    psShotGeneric = (Shot_TypeDef*) DLinkedList__pvGetElementData(psShotIterator);
                    u32ShotPosX = Shot__u32GetXPos(psShotGeneric);
                    u32ShotPosY = Shot__u32GetYPos(psShotGeneric);

                    if(((u32AsteroidPosX == u32ShotPosX) && ((u32AsteroidPosY + 1UL) == u32ShotPosY)) ||
                        ((u32AsteroidPosX == u32ShotPosX) && (u32AsteroidPosY == u32ShotPosY)))
                    {
                        GraphTerm__u32Printf(UART_enMODULE_0, u32ShotPosX, u32ShotPosY, " ");
                        enStatus = DLinkedList__enRemove(psShotList, psShotIterator, (void**) psShotDeletedPointer);
                        if(DLinkedList_enSTATUS_OK == enStatus)
                        {
                            Shot__vDestructor(*psShotDeletedPointer);
                        }

                        GraphTerm__u32Printf(UART_enMODULE_0, u32AsteroidPosX, u32AsteroidPosY, " ");
                        enStatus = DLinkedList__enRemove(psAsteroidList, psAsteroidIterator, (void**) psAsteroidDeletedPointer);
                        {
                            u32AsteroidCant--;
                            Asteroid__vDestructor(*psAsteroidDeletedPointer);
                        }

                        if(30UL > u32AsteroidCant)
                        {
                            u32AsteroidPosX = Asteroid__u32GetRandPosX();
                            u32AsteroidPosY = Asteroid__u32GetRandPosY();
                            psAsteroidNew = Asteroid__psConstructor(u32AsteroidPosX, u32AsteroidPosY);
                            if(0UL != (uint32_t) psAsteroidNew)
                            {
                                DLinkedList__psAddEnd(psAsteroidList,  (void*) psAsteroidNew);
                                if(DLinkedList_enSTATUS_OK == enStatus)
                                {
                                    u32AsteroidCant++;
                                }
                            }
                        }

                        if(30UL > u32AsteroidCant)
                        {
                            u32AsteroidPosX = Asteroid__u32GetRandPosX();
                            u32AsteroidPosY = Asteroid__u32GetRandPosY();
                            psAsteroidNew = Asteroid__psConstructor(u32AsteroidPosX, u32AsteroidPosY);
                            if(0UL != (uint32_t) psAsteroidNew)
                            {
                                DLinkedList__psAddEnd(psAsteroidList,  (void*) psAsteroidNew);
                                if(DLinkedList_enSTATUS_OK == enStatus)
                                {
                                    u32AsteroidCant++;
                                }
                            }
                        }
                        psShotIterator = psShotIteratorTemp;
                    }
                    else
                    {
                        psShotIterator = DLinkedList__psGetElementNextNode(psShotIterator);
                    }
                }
                psAsteroidIterator = DLinkedList__psGetElementNextNode(psAsteroidIterator);
            }

            u32GameOver = Ship__u32Destroy(psShip1);
            Ship__vMove(psShip1);
        }
    }
}

void MAIN_vInitSystem(void)
{
    uint32_t u32Clock = 0UL;
    MPU__vInit();
    NVIC__vDeInitInterrupts();
    SYSCTL__vDeInitClockGates();
    MCU__vEnGlobalInterrupt();
    SCB__vInit();
    FLASH__enInit();
    SYSEXC__vInit((SYSEXC_nINT) ((uint32_t) SYSEXC_enINT_INVALID | (uint32_t) SYSEXC_enINT_DIV0 | (uint32_t) SYSEXC_enINT_OVERFLOW | (uint32_t) SYSEXC_enINT_UNDERFLOW),SYSEXC_enPRI7);
    SYSCTL__enInit();/* system clock 80MHz*/
    EEPROM__enInit();
    u32Clock = SYSCTL__u32GetClock();
    SysTick__enInitUs(((float32_t) u32Clock / 80000.0f),SCB_enSHPR0);
    GPIO__vInit();
    TIMER__vInit();
    DMA__vInit();
    ADC__vInit();
    UART__vInit();

    MAIN_vUART0Init();
}

void MAIN_vInitEDUMKII(void)
{
    EDUMKII_Button_vInit(EDUMKII_enBUTTON_ALL);
    EDUMKII_Led_vInitPWM(EDUMKII_enLED_ALL);
    EDUMKII_Joystick_vInit();
    EDUMKII_Buzzer_vInit();
    EDUMKII_Accelerometer_vInit();
    EDUMKII_Microphone_vInit();
}

void MAIN_vUART0Init(void)
{
    UART_CONTROL_TypeDef enUart0Control =
    {
        UART_enEOT_ALL,
        UART_enLOOPBACK_DIS,
        UART_enLINE_EN,
        UART_enLINE_EN,
        UART_enRTS_MODE_SOFT,
        UART_enCTS_MODE_SOFT,
    };
    UART_LINE_CONTROL_TypeDef enUart0LineControl =
    {
     UART_enFIFO_ENA,
     UART_enSTOP_TWO,
     UART_enPARITY_ENA,
     UART_enPARITY_TYPE_EVEN,
     UART_enPARITY_STICK_DIS ,
     UART_enLENGTH_8BITS,
    };

    UART_LINE_TypeDef enUart0Line =
    {
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
    };
    UART__vSetEnable(UART_enMODULE_0, UART_enENABLE_STOP);
    UART__enSetConfig(UART_enMODULE_0, UART_enMODE_NORMAL, &enUart0Control, &enUart0LineControl, 1000000UL, &enUart0Line );
    UART__vSetEnable(UART_enMODULE_0, UART_enENABLE_START);

}
