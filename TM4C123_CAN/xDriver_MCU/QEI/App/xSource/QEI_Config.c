/**
 *
 * @file QEI_Config.c
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/QEI/App/xHeader/QEI_Config.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/QEI/Driver/QEI_Driver.h>
#include <xDriver_MCU/QEI/Peripheral/xHeader/QEI_Dependencies.h>

#define PHA_SIGNAL (0UL)
#define PHB_SIGNAL (1UL)
#define IDX_SIGNAL (2UL)

GPIO_nDIGITAL_FUNCTION QEI_enGpioInput[2UL] [(uint32_t) QEI_enMODULE_MAX][(uint32_t) 3UL] =
{
    {
        {GPIO_enPhA0, GPIO_enPhB0, GPIO_enIDX0},
        {GPIO_enPhA1, GPIO_enPhB1, GPIO_enPhB1},
    },
    {
        {GPIO_enPhA0_F0, GPIO_enPhB0_F1, GPIO_enIDX0_F4},
        {GPIO_enPhA1, GPIO_enPhB1, GPIO_enPhB1},
    },
 };

QEI_nSTATUS QEI__enSetConfig(QEI_nMODULE enModule, const QEI_CONTROL_TypeDef* pstControlConfig, const QEI_SIGNAL_TypeDef* pstSignalConfig, uint32_t u32InitialPosArg, uint32_t u32MaxPositionArg, uint32_t u32TimerLoad)
{
    QEI_nSTATUS enReturn = QEI_enSTATUS_ERROR;
    QEI_nMODULE enModuleFilter = QEI_enMODULE_0;
    uint32_t u32Signal[3UL] = {0UL};

    if((0UL != (uint32_t) pstControlConfig) && (0UL != (uint32_t) pstSignalConfig))
    {
        enModuleFilter = (QEI_nMODULE) MCU__u32CheckParams((uint32_t) enModule, (uint32_t) QEI_enMODULE_MAX);
        u32Signal[PHA_SIGNAL] = MCU__u32CheckParams((uint32_t) pstSignalConfig->enPhA, 2UL);
        u32Signal[PHB_SIGNAL] = MCU__u32CheckParams((uint32_t) pstSignalConfig->enPhB, 2UL);
        u32Signal[IDX_SIGNAL] = MCU__u32CheckParams((uint32_t) pstSignalConfig->enIDX, 2UL);

        if(QEI_enRESET_INDEX == pstControlConfig->enResetMode)
        {
            GPIO__enSetDigitalConfig(QEI_enGpioInput[u32Signal[IDX_SIGNAL]][(uint32_t) enModuleFilter][IDX_SIGNAL], GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
        }
        GPIO__enSetDigitalConfig(QEI_enGpioInput[u32Signal[PHA_SIGNAL]][(uint32_t) enModuleFilter][PHA_SIGNAL], GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
        GPIO__enSetDigitalConfig(QEI_enGpioInput[u32Signal[PHB_SIGNAL]][(uint32_t) enModuleFilter][PHB_SIGNAL], GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);

        if(QEI_enINVERT_ENA == pstSignalConfig->enPhAInvert)
        {
            QEI__vSetInvertSignals(enModuleFilter, QEI_enSIGNAL_PhA, QEI_enINVERT_ENA);
        }
        else
        {
            QEI__vSetInvertSignals(enModuleFilter, QEI_enSIGNAL_PhA, QEI_enINVERT_DIS);
        }

        if(QEI_enINVERT_ENA == pstSignalConfig->enPhBInvert)
        {
            QEI__vSetInvertSignals(enModuleFilter, QEI_enSIGNAL_PhB, QEI_enINVERT_ENA);
        }
        else
        {
            QEI__vSetInvertSignals(enModuleFilter, QEI_enSIGNAL_PhB, QEI_enINVERT_DIS);
        }

        if(QEI_enINVERT_ENA == pstSignalConfig->enIDXInvert)
        {
            QEI__vSetInvertSignals(enModuleFilter, QEI_enSIGNAL_INDEX, QEI_enINVERT_ENA);
        }
        else
        {
            QEI__vSetInvertSignals(enModuleFilter, QEI_enSIGNAL_INDEX, QEI_enINVERT_DIS);
        }

        QEI__vSetStall(enModuleFilter, pstControlConfig->enStall);
        QEI__vSetResetMode(enModuleFilter, pstControlConfig->enResetMode);
        QEI__vSetSwapSignals(enModuleFilter, pstControlConfig->enSwapSignals);
        QEI__vSetSignalMode(enModuleFilter, pstControlConfig->enSignalMode);
        QEI__vSetVelocityEnable(enModuleFilter, pstControlConfig->enVelocity);
        QEI__vSetInputFilter(enModuleFilter, pstControlConfig->enInputFilter);
        if(QEI_enMODE_QUADRATURE == pstControlConfig->enSignalMode)
        {
            QEI__vSetCaptureMode(enModuleFilter, pstControlConfig->enCaptureMode);
        }
        if(QEI_enVELOCITY_ENA == pstControlConfig->enVelocity)
        {
            QEI__vSetVelocityPredivide(enModuleFilter, pstControlConfig->enVelocityPrediv);
        }
        if(QEI_enINPUT_FILTER_ENA == pstControlConfig->enInputFilter)
        {
            QEI__vSetInputFilterCount(enModuleFilter, pstControlConfig->enInputFilterCount);
        }

        QEI__vSetEnable(enModuleFilter, pstControlConfig->enEnableModule);

        QEI__vSetPosition(enModuleFilter, u32InitialPosArg);
        QEI__vSetMaxPosition(enModuleFilter, u32MaxPositionArg);
        QEI__vSetLoadTimer(enModuleFilter, u32TimerLoad);
        enReturn = QEI_enSTATUS_OK;
    }
    return enReturn;
}





