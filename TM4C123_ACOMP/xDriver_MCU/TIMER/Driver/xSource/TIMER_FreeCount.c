/**
 *
 * @file TIMER_FreeCount.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 27 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_FreeCount.h>

#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_CountGeneric.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_AltMode.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_CountDir.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_SubMode.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_SnapShot.h>
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_Configuration.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>

TIMER_nSTATUS TIMER__enGetFreeCount(TIMER_nMODULE enModule, uint64_t* pu64FreeCount)
{
    TIMER_nSTATUS enStatus = TIMER_enSTATUS_UNDEF;

    TIMER_nCONFIG enConfigVar = TIMER_enCONFIG_UNDEF;

    TIMER_nSUB_MODE enSubModeVar = TIMER_enSUB_MODE_UNDEF;
    TIMER_nALT_MODE enAltModeVar = TIMER_enALT_MODE_UNDEF;
    TIMER_nCOUNT_DIR enDirectionVar = TIMER_enCOUNT_DIR_UNDEF;

    TIMER_Count64_TypeDef sFreeCount64Config = {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};
    TIMER_Count32_TypeDef sFreeCount32Config = {0UL, 0UL, 0UL, 0UL};

    static uint32_t TimerValue = 0UL;
    static uint32_t u32TimerValue = 0UL;
    uint32_t u32ModuleSize = 0UL;
    uint32_t u32SubModule = 0UL;
    uint32_t u32ModuleNumber = 0UL;

    TIMER__vGetSubParams(enModule, &u32ModuleSize, &u32SubModule, &u32ModuleNumber);
    u32SubModule &= 0x1UL;

    if(0UL != (uint32_t) pu64FreeCount)
    {
        enConfigVar = TIMER__enGetConfiguration(enModule);
        if(TIMER_enCONFIG_UNDEF != enConfigVar)
        {
            enStatus = TIMER_enSTATUS_OK;
            if((uint32_t) TIMER_enSIZE_32 == (uint32_t) u32ModuleSize)
            {
                switch (enConfigVar)
                {
                    case TIMER_enCONFIG_WIDE:
                    case TIMER_enCONFIG_RTC:
                        sFreeCount32Config.u32CountRegister = GPTM_GPTMTAV_OFFSET;
                        sFreeCount32Config.u32CountMask = 0xFFFFFFFFUL;
                        sFreeCount32Config.u32CountShiftRight = 0UL;
                        sFreeCount32Config.pu32CountValue = &TimerValue;

                        TIMER_enGet1Count32Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &sFreeCount32Config);
                        *pu64FreeCount = (uint64_t) TimerValue;
                    break;

                    case TIMER_enCONFIG_INDIVIDUAL:
                        enSubModeVar = TIMER__enGetSubMode(enModule);
                        enAltModeVar = TIMER__enGetAltMode(enModule);
                        enDirectionVar = TIMER__enGetCountDir(enModule);

                        sFreeCount32Config.u32CountRegister = GPTM_GPTMTAV_OFFSET + (4UL * u32SubModule);
                        sFreeCount32Config.u32CountMask = 0xFFFFFFUL;
                        sFreeCount32Config.u32CountShiftRight = 0UL;
                        sFreeCount32Config.pu32CountValue = &TimerValue;
                        TIMER_enGet1Count32Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &sFreeCount32Config);

                        /*One shot or Periodic*/
                        if((TIMER_enALT_MODE_CC == enAltModeVar) && (TIMER_enSUB_MODE_CAPTURE != enSubModeVar) && (TIMER_enCOUNT_DIR_DOWN == enDirectionVar))
                        {
                            u32TimerValue = TimerValue;
                            u32TimerValue >>= 16UL;
                            u32TimerValue &= 0xFFUL;

                            TimerValue &= 0xFFFFULL;
                            TimerValue <<= 8UL;
                            TimerValue |= u32TimerValue;
                        }
                        *pu64FreeCount = (uint64_t)TimerValue;
                    break;
                    default:
                    break;
                }
            }
            else
            {
                switch (enConfigVar)
                {
                    case TIMER_enCONFIG_WIDE:

                        sFreeCount64Config.u32CountHighRegister = GPTM_GPTMTBV_OFFSET;
                        sFreeCount64Config.u32CountHighMask = 0xFFFFFFFFUL;
                        sFreeCount64Config.u32CountHighShiftRight = 0UL;
                        sFreeCount64Config.u32CountHighShiftLeft = 32UL;

                        sFreeCount64Config.u32CountLowRegister = GPTM_GPTMTAV_OFFSET;
                        sFreeCount64Config.u32CountLowMask = 0xFFFFFFFFUL;
                        sFreeCount64Config.u32CountLowShiftRight = 0UL;
                        sFreeCount64Config.u32CountLowShiftLeft = 0UL;

                        sFreeCount64Config.pu64CountValue = pu64FreeCount;

                        TIMER_enGetCount64Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &sFreeCount64Config);
                    break;

                    case TIMER_enCONFIG_RTC:
                        *pu64FreeCount = TIMER_u64GetFreeCount_RTC((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber);
                    break;


                    case TIMER_enCONFIG_INDIVIDUAL:
                        enSubModeVar = TIMER__enGetSubMode(enModule);
                        enAltModeVar = TIMER__enGetAltMode(enModule);
                        enDirectionVar = TIMER__enGetCountDir(enModule);

                        sFreeCount64Config.u32CountHighShiftRight = 0UL;
                        sFreeCount64Config.u32CountLowShiftRight = 0UL;
                        sFreeCount64Config.u32CountLowShiftLeft = 0UL;
                        sFreeCount64Config.pu64CountValue = pu64FreeCount;
                        /*Prescaler*/
                        /*One shot and periodic Down, no PWM no Capture*/
                        if((TIMER_enALT_MODE_CC == enAltModeVar) && (TIMER_enSUB_MODE_CAPTURE != enSubModeVar) && (TIMER_enCOUNT_DIR_DOWN == enDirectionVar))
                        {
                            sFreeCount64Config.u32CountHighRegister = GPTM_GPTMTAV_OFFSET + (4UL * u32SubModule);
                            sFreeCount64Config.u32CountHighMask = 0xFFFFFFFFUL;
                            sFreeCount64Config.u32CountHighShiftLeft = 16UL;

                            sFreeCount64Config.u32CountLowRegister = GPTM_GPTMTAPV_OFFSET + (4UL * u32SubModule);
                            sFreeCount64Config.u32CountLowMask = 0xFFFFUL;
                        }
                        /*Time Extension*/
                        /*PWM, capture, One shot UP or periodic UP*/
                        else
                        {
                            sFreeCount64Config.u32CountHighRegister = GPTM_GPTMTAPV_OFFSET + (4UL * u32SubModule);
                            sFreeCount64Config.u32CountHighMask = 0xFFFFUL;
                            sFreeCount64Config.u32CountHighShiftLeft = 32UL;

                            sFreeCount64Config.u32CountLowRegister = GPTM_GPTMTAV_OFFSET + (4UL * u32SubModule);
                            sFreeCount64Config.u32CountLowMask = 0xFFFFFFFFUL;
                        }
                        TIMER_enGetCount64Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &sFreeCount64Config);
                    break;
                    default:
                    break;
                }
            }
        }
    }
    return enStatus;
}

void TIMER__vSetFreeRunningCount(TIMER_nMODULE enModule, uint64_t u64Count)
{
    TIMER_nCONFIG enConfigVar = TIMER_enCONFIG_UNDEF;

    TIMER_nSUB_MODE enSubModeVar = TIMER_enSUB_MODE_UNDEF;
    TIMER_nALT_MODE enAltModeVar = TIMER_enALT_MODE_UNDEF;
    TIMER_nCOUNT_DIR enDirectionVar = TIMER_enCOUNT_DIR_UNDEF;

    TIMER_Count64_TypeDef sFreeCount64Config = {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};
    TIMER_Count32_TypeDef sFreeCount32Config = {0UL, 0UL, 0UL, 0UL};

    static uint64_t u64TimerValue = 0ULL;
    static uint32_t TimerValue = 0UL;
    uint32_t u32ModuleSize = 0UL;
    uint32_t u32SubModule = 0UL;
    uint32_t u32ModuleNumber = 0UL;

    TIMER__vGetSubParams(enModule, &u32ModuleSize, &u32SubModule, &u32ModuleNumber);
    u32SubModule &= 0x1UL;

    TIMER__vSetReady((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber);
    enConfigVar = TIMER__enGetConfiguration(enModule);
    if(TIMER_enCONFIG_UNDEF != enConfigVar)
    {
        if((uint32_t) TIMER_enSIZE_32 == (uint32_t) u32ModuleSize)
        {
            switch (enConfigVar)
            {
                case TIMER_enCONFIG_WIDE:
                case TIMER_enCONFIG_RTC:
                    TimerValue = (uint32_t) u64Count;
                    sFreeCount32Config.u32CountRegister = GPTM_GPTMTAV_OFFSET;
                    sFreeCount32Config.u32CountMask = 0xFFFFFFFFUL;
                    sFreeCount32Config.u32CountShiftRight = 0UL;
                    sFreeCount32Config.pu32CountValue = &TimerValue;
                    TIMER_vSet1Count32Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &sFreeCount32Config);
                break;

                case TIMER_enCONFIG_INDIVIDUAL:
                    enSubModeVar = TIMER__enGetSubMode(enModule);
                    enAltModeVar = TIMER__enGetAltMode(enModule);
                    enDirectionVar = TIMER__enGetCountDir(enModule);

                    TimerValue = (uint32_t) u64Count;
                    sFreeCount32Config.u32CountRegister = GPTM_GPTMTAV_OFFSET + (4UL * u32SubModule);
                    sFreeCount32Config.u32CountMask = 0xFFFFUL;
                    sFreeCount32Config.u32CountShiftRight = 0UL;
                    sFreeCount32Config.pu32CountValue = &TimerValue;
                    /*One shot or Periodic*/
                    if((TIMER_enALT_MODE_CC == enAltModeVar) && (TIMER_enSUB_MODE_CAPTURE != enSubModeVar) && (TIMER_enCOUNT_DIR_DOWN == enDirectionVar))
                    {
                        sFreeCount32Config.u32CountShiftRight = 8UL;
                    }
                    TIMER_vSet1Count32Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &sFreeCount32Config);
                break;
                default:
                break;
            }
        }
        else
        {
            switch (enConfigVar)
            {
                case TIMER_enCONFIG_WIDE:
                case TIMER_enCONFIG_RTC:
                    u64TimerValue = u64Count;
                    sFreeCount64Config.u32CountHighRegister = GPTM_GPTMTBV_OFFSET;
                    sFreeCount64Config.u32CountHighMask = 0xFFFFFFFFUL;
                    sFreeCount64Config.u32CountHighShiftRight = 32UL;
                    sFreeCount64Config.u32CountHighShiftLeft = 0UL;

                    sFreeCount64Config.u32CountLowRegister = GPTM_GPTMTAV_OFFSET;
                    sFreeCount64Config.u32CountLowMask = 0xFFFFFFFFUL;
                    sFreeCount64Config.u32CountLowShiftRight = 0UL;
                    sFreeCount64Config.u32CountLowShiftLeft = 0UL;

                    sFreeCount64Config.pu64CountValue = &u64TimerValue;

                    TIMER_vSet2Count32Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &sFreeCount64Config);
                break;
                case TIMER_enCONFIG_INDIVIDUAL:
                    enSubModeVar = TIMER__enGetSubMode(enModule);
                    enAltModeVar = TIMER__enGetAltMode(enModule);
                    enDirectionVar = TIMER__enGetCountDir(enModule);

                    sFreeCount32Config.u32CountRegister = GPTM_GPTMTAV_OFFSET + (4UL * u32SubModule);
                    sFreeCount32Config.u32CountMask = 0xFFFFFFFFUL;
                    sFreeCount32Config.u32CountShiftRight = 0UL;
                    sFreeCount32Config.pu32CountValue = &TimerValue;

                    /*Prescaler*/
                    /*One shot and periodic Down, no PWM no Capture*/
                    if((TIMER_enALT_MODE_CC == enAltModeVar) && (TIMER_enSUB_MODE_CAPTURE != enSubModeVar) && (TIMER_enCOUNT_DIR_DOWN == enDirectionVar))
                    {
                        u64Count >>= 16UL;
                    }
                    u64Count &= 0xFFFFFFFFUL;
                    TimerValue = (uint32_t) u64Count;
                    TIMER_vSet1Count32Generic((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, &sFreeCount32Config);
                break;

                default:
                break;
            }
        }
    }
}
