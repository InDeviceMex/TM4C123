/**
 *
 * @file FLASH_StructPeripheral.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTREGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTREGISTER_H_

#include <stdint.h>

typedef volatile struct
{
    volatile uint32_t OFFSET    :18;
    const    uint32_t reserved  :14;
}FMA_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA   :32;
}FMD_TypeDef;

typedef volatile struct
{
    volatile uint32_t WRITE   :1;
    volatile uint32_t ERASE   :1;
    volatile uint32_t MERASE  :1;
    volatile uint32_t COMT    :1;
    const    uint32_t reserved:12;
    volatile uint32_t WRKEY   :16;
}FMC_TypeDef;

typedef volatile struct
{
    volatile const uint32_t ARIS     :1;
    volatile const uint32_t PRIS     :1;
    volatile const uint32_t ERIS     :1;
    const    uint32_t       reserved :6;
    volatile const uint32_t VOLTRIS  :1;
    volatile const uint32_t INVDRIS  :1;
    volatile const uint32_t ERRIS    :1;
    const    uint32_t       reserved1:1;
    volatile const uint32_t PROGRIS  :1;
    const    uint32_t       reserved2:18;
}FCRIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t AMASK     :1;
    volatile uint32_t PMASK     :1;
    volatile uint32_t EMASK     :1;
    const    uint32_t reserved  :6;
    volatile uint32_t VOLTMASK  :1;
    volatile uint32_t INVDMASK  :1;
    volatile uint32_t ERMASK    :1;
    const    uint32_t reserved1 :1;
    volatile uint32_t PROGMASK  :1;
    const    uint32_t reserved2 :18;
}FCIM_TypeDef;

typedef volatile struct
{
    volatile uint32_t AMISC     :1;
    volatile uint32_t PMISC     :1;
    volatile uint32_t EMISC     :1;
    const    uint32_t reserved  :6;
    volatile uint32_t VOLTMISC  :1;
    volatile uint32_t INVDMISC  :1;
    volatile uint32_t ERMISC    :1;
    const    uint32_t reserved1 :1;
    volatile uint32_t PROGMISC  :1;
    const    uint32_t reserved2 :18;
}FCMISC_TypeDef;

typedef volatile struct
{
    volatile uint32_t WRBUF   :1;
    const    uint32_t reserved:15;
    volatile uint32_t WRKEY   :16;
}FMC2_TypeDef;

typedef volatile struct
{
    volatile uint32_t FWB0   :1;
    volatile uint32_t FWB1   :1;
    volatile uint32_t FWB2   :1;
    volatile uint32_t FWB3   :1;
    volatile uint32_t FWB4   :1;
    volatile uint32_t FWB5   :1;
    volatile uint32_t FWB6   :1;
    volatile uint32_t FWB7   :1;
    volatile uint32_t FWB8   :1;
    volatile uint32_t FWB9   :1;
    volatile uint32_t FWB10   :1;
    volatile uint32_t FWB11   :1;
    volatile uint32_t FWB12   :1;
    volatile uint32_t FWB13   :1;
    volatile uint32_t FWB14   :1;
    volatile uint32_t FWB15   :1;
    volatile uint32_t FWB16   :1;
    volatile uint32_t FWB17   :1;
    volatile uint32_t FWB18   :1;
    volatile uint32_t FWB19   :1;
    volatile uint32_t FWB20   :1;
    volatile uint32_t FWB21   :1;
    volatile uint32_t FWB22   :1;
    volatile uint32_t FWB23   :1;
    volatile uint32_t FWB24   :1;
    volatile uint32_t FWB25   :1;
    volatile uint32_t FWB26   :1;
    volatile uint32_t FWB27   :1;
    volatile uint32_t FWB28   :1;
    volatile uint32_t FWB29   :1;
    volatile uint32_t FWB30   :1;
    volatile uint32_t FWB31   :1;
}FWBVAL_TypeDef;

typedef volatile struct
{
    volatile uint32_t FWB[32];
}FWBn_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA   :32;
}FWB_TypeDef;

typedef volatile struct
{
volatile const uint32_t SIZE      :16;
const    uint32_t       reserved  :16;
}FSIZE_TypeDef;

typedef volatile struct
{
volatile const uint32_t SIZE      :16;
const    uint32_t       reserved  :16;
}SSIZE_TypeDef;

typedef volatile struct
{
volatile const uint32_t SAFERTOS :1;
const    uint32_t       reserved :31;
}ROMSWMAP_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTREGISTER_H_ */
