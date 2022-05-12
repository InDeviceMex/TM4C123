/**
 *
 * @file Commands_Init.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 16 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xCarModules/Commands/xHeader/Commands_Init.h>

void Commands__vInit(UART_nMODULE enUARTModuleArg, uint32_t u32BaudRateArg)
{
    UART_CONTROL_TypeDef enBluetothControl =
     {
         UART_enEOT_ALL,
         UART_enLOOPBACK_DIS,
         UART_enLINE_ENA,
         UART_enLINE_ENA,
         UART_enRTS_MODE_SOFT,
         UART_enCTS_MODE_SOFT,
     };

     UART_LINE_CONTROL_TypeDef enBluetothLineControl =
     {
      UART_enFIFO_ENA,
      UART_enSTOP_ONE,
      UART_enPARITY_DIS,
      UART_enPARITY_TYPE_EVEN,
      UART_enPARITY_STICK_DIS ,
      UART_enLENGTH_8BITS,
     };

     UART_LINE_TypeDef enBluetothLine =
     {
      UART_enLINE_SELECT_PRIMARY,
      UART_enLINE_SELECT_PRIMARY,
      UART_enLINE_SELECT_PRIMARY,
      UART_enLINE_SELECT_PRIMARY,
     };

     GPIO__vSetReady(BLUETOTH_RX_PORT);
     GPIO__vSetReady(BLUETOTH_TX_PORT);
     UART__vSetReady(enUARTModuleArg);

     UART__vSetEnable(enUARTModuleArg, UART_enENABLE_STOP);
     UART__enSetConfig(enUARTModuleArg, UART_enMODE_NORMAL,
                       &enBluetothControl, &enBluetothLineControl,
                       u32BaudRateArg, &enBluetothLine);
     UART__vSetEnable(enUARTModuleArg, UART_enENABLE_START);
}
