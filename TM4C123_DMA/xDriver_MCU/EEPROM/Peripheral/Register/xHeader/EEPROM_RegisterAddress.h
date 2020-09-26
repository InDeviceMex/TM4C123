/**
 *
 * @file EEPROM_RegisterAddress.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define EEPROM_BASE            ((uint32_t)0x400AF000u)
#define EEPROM_BITBANDING_BASE ((uint32_t)0x42000000u)
#define EEPROM_OFFSET          ((uint32_t)0x000AF000u)


#define EEPROM_EESIZE_OFFSET     ((uint32_t)0x0000u)
#define EEPROM_EEBLOCK_OFFSET    ((uint32_t)0x0004u)
#define EEPROM_EEOFFSET_OFFSET   ((uint32_t)0x0008u)
#define EEPROM_EERDWR_OFFSET     ((uint32_t)0x0010u)
#define EEPROM_EERDWRINC_OFFSET  ((uint32_t)0x0014u)
#define EEPROM_EEDONE_OFFSET     ((uint32_t)0x0018u)
#define EEPROM_EESUPP_OFFSET     ((uint32_t)0x001Cu)
#define EEPROM_EEUNLOCK_OFFSET   ((uint32_t)0x0020u)
#define EEPROM_EEPROT_OFFSET     ((uint32_t)0x0030u)
#define EEPROM_EEPASS0_OFFSET    ((uint32_t)0x0034u)
#define EEPROM_EEPASS1_OFFSET    ((uint32_t)0x0038u)
#define EEPROM_EEPASS2_OFFSET    ((uint32_t)0x003Cu)
#define EEPROM_EEINT_OFFSET      ((uint32_t)0x0040u)
#define EEPROM_EEHIDE_OFFSET     ((uint32_t)0x0050u)
#define EEPROM_EEDBGME_OFFSET    ((uint32_t)0x0080u)
#define EEPROM_EEPROMPP_OFFSET   ((uint32_t)0x0FC0u)

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERADDRESS_H_ */
