/**
 *
 * @file EEPROM_BlockCount.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */


/**
 * Include Files
 */
#include <EEPROM/Driver/Intrinsics/xHeader/EEPROM_BlockCount.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

/**
 * Max Number of 16 World Blocks (16*32bits) inside the EEPROM peripheral
 */
static uint32_t EEPROM_u32BlockCount = 0;


uint32_t EEPROM__u32GetBlockCount (void)
{
    return (uint32_t) EEPROM_u32BlockCount;
}

void EEPROM__vInitBlockCount(void)
{
    EEPROM_u32BlockCount = (EEPROM_EESIZE_R & EEPROM_EESIZE_R_BLKCNT_MASK) >> EEPROM_EESIZE_R_BLKCNT_BIT;
}



