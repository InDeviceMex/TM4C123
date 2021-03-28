/**
 *
 * @file SSI_Config.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/App/xHeader/SSI_Config.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SSI/Driver/SSI_Driver.h>
#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Dependencies.h>

#define RX_LINE (0UL)
#define TX_LINE (1UL)
#define CLK_LINE (2UL)
#define FSS_LINE (3UL)

GPIO_nDIGITAL_FUNCTION SSI_enGpioInput[2UL] [(uint32_t) SSI_enMODULE_MAX][(uint32_t) 4UL] =
{
    {
        {GPIO_enSSI0Rx, GPIO_enSSI0Tx, GPIO_enSSI0Clk, GPIO_enSSI0Fss},
        {GPIO_enSSI1Rx, GPIO_enSSI1Tx, GPIO_enSSI1Clk, GPIO_enSSI1Fss},
        {GPIO_enSSI2Rx, GPIO_enSSI2Tx, GPIO_enSSI2Clk, GPIO_enSSI2Fss},
        {GPIO_enSSI3Rx, GPIO_enSSI3Tx, GPIO_enSSI3Clk, GPIO_enSSI3Fss},
    },
    {
        {GPIO_enSSI0Rx, GPIO_enSSI0Tx, GPIO_enSSI0Clk, GPIO_enSSI0Fss},
        {GPIO_enSSI1Rx_F0, GPIO_enSSI1Tx_F1, GPIO_enSSI1Clk_F2, GPIO_enSSI1Fss_F3},
        {GPIO_enSSI2Rx, GPIO_enSSI2Tx, GPIO_enSSI2Clk, GPIO_enSSI2Fss},
        {GPIO_enSSI3Rx, GPIO_enSSI3Tx, GPIO_enSSI3Clk, GPIO_enSSI3Fss},
    },
 };

SSI_nSTATUS SSI__enSetConfig(SSI_nMODULE enModule, SSI_nMODE enModeArg , const SSI_CONTROL_TypeDef* pstControlConfig, const SSI_FRAME_CONTROL_TypeDef* pstFrameControlConfig, uint32_t u32ClockArg, const SSI_LINE_TypeDef* pstLineConfig)
{
    SSI_nSTATUS enReturn = SSI_enSTATUS_ERROR;
    SSI_nENABLE enEnableModule = SSI_enENABLE_UNDEF;
    SSI_nMODULE enModuleFilter = SSI_enMODULE_0;
    SSI_nBUSY enBusyModule = SSI_enBUSY_UNDEF;
    uint32_t u32Line[4UL] = {0UL};

    if((0UL != (uint32_t) pstControlConfig) && (0UL != (uint32_t) pstFrameControlConfig)  && (0UL != (uint32_t) pstLineConfig))
    {
        enModuleFilter = (SSI_nMODULE) MCU__u32CheckParams((uint32_t) enModule, (uint32_t) SSI_enMODULE_MAX);
        enEnableModule = SSI__enGetEnable(enModuleFilter);
        if(SSI_enENABLE_START == enEnableModule)
        {
            SSI__vSetEnable(enModuleFilter, SSI_enENABLE_STOP);
            do
            {
                enBusyModule = SSI__enGetBusyState(enModuleFilter);
            }while (SSI_enBUSY_IDLE != enBusyModule);
        }
        u32Line[RX_LINE] = MCU__u32CheckParams((uint32_t) pstLineConfig->enRx, 2UL);
        u32Line[TX_LINE] = MCU__u32CheckParams((uint32_t) pstLineConfig->enTx, 2UL);
        u32Line[CLK_LINE] = MCU__u32CheckParams((uint32_t) pstLineConfig->enClk, 2UL);
        u32Line[FSS_LINE] = MCU__u32CheckParams((uint32_t) pstLineConfig->enFss, 2UL);

        if(SSI_enLINE_EN == pstControlConfig->enFssLine)
        {
            if(SSI_enMODE_MASTER == enModeArg)
            {
                GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[FSS_LINE]][(uint32_t) enModuleFilter][FSS_LINE], GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
            }
            else
            {
                GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[FSS_LINE]][(uint32_t) enModuleFilter][FSS_LINE], GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
            }
        }

        if(SSI_enLINE_EN == pstControlConfig->enRxLine)
        {
            GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[RX_LINE]][(uint32_t) enModuleFilter][RX_LINE], GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
        }
        if(SSI_enLINE_EN == pstControlConfig->enTxLine)
        {
            GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[TX_LINE]][(uint32_t) enModuleFilter][TX_LINE], GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
        }
        if(SSI_enLINE_EN == pstControlConfig->enClkLine)
        {
            if(SSI_enMODE_MASTER == enModeArg)
            {
                GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[CLK_LINE]][(uint32_t) enModuleFilter][CLK_LINE], GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
            }
            else
            {
                GPIO__enSetDigitalConfig(SSI_enGpioInput[u32Line[CLK_LINE]][(uint32_t) enModuleFilter][CLK_LINE], GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
            }
        }

        SSI__vSetLoopback(enModuleFilter, pstControlConfig->enLoopback);
        SSI__vSetEndTransmission(enModuleFilter, pstControlConfig->enEndOfTransmission);

        SSI__vSetClockAndFormatControlStructPointer(enModuleFilter, pstFrameControlConfig,u32ClockArg);

        SSI__vSetMode(enModuleFilter, enModeArg);

        if(SSI_enENABLE_START == enEnableModule)
        {
            SSI__vSetEnable(enModuleFilter, SSI_enENABLE_START);
        }
        enReturn = SSI_enSTATUS_OK;
    }
    return enReturn;
}


