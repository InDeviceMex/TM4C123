/**
 *
 * @file TIMER_StructPeripheral_Bitbanding_Control_64.h
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
 * @verbatim 4 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date Author Version Description
 * 4 jul. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_CONTROL_64_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_CONTROL_64_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister_Bitbanding/xHeader/TIMER_StructRegister_Bitbanding_Control.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t GPTMCFG [32UL];
        BITBANDING_GPTMCFG_TypeDef GPTMCFG_Bit;
    };
    const uint32_t reserved1 [1007UL * 32UL];
    union
    {
        volatile uint32_t GPTMPP [32UL];
        BITBANDING_GPTMPP_TypeDef GPTMPP_Bit;
    };
    const uint32_t reserved2 [15UL * 32UL];
}GPWTM_BITBANDING_CTL_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_CONTROL_64_H_ */
