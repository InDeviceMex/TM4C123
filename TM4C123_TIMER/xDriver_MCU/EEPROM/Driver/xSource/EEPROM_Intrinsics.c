/**
 * Include Files
 */
#include <EEPROM/Driver/xHeader/EEPROM_Intrinsics.h>
#include <stdint.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>




/**
 * Static Global variables
 */

/**
 * Max Number of World (32bits) inside the EEPROM peripheral
 */
static uint32_t EEPROM_u32WorldCount = 0;

/**
 * Max Number of 16 World Blocks (16*32bits) inside the EEPROM peripheral
 */
static uint32_t EEPROM_u32BlockCount = 0;





/**
 *
 * Local Definitions
 */
#define EEPROM_TIMEOUT_MAX (500000u)




/**
 *  Global Functions
 */

uint32_t EEPROM__u32GetWorldCount (void)
{
    return ((uint32_t) EEPROM_u32WorldCount);
}

void EEPROM__vInitWorldCount (void)
{
    EEPROM_u32WorldCount = EEPROM_EESIZE_R & EEPROM_EESIZE_R_WORDCNT_MASK;
}

uint32_t EEPROM__u32GetBlockCount (void)
{
    return (uint32_t) EEPROM_u32BlockCount;
}

void EEPROM__vInitBlockCount(void)
{
    EEPROM_u32BlockCount = (EEPROM_EESIZE_R & EEPROM_EESIZE_R_BLKCNT_MASK) >> EEPROM_EESIZE_R_BLKCNT_BIT;
}

EEPROM_nSTATUS EEPROM__enGetStatus (void)
{
    EEPROM_nSTATUS enReturn = EEPROM_enOK;
    if(EEPROM_EEDONE_R_WORKING_EN == (EEPROM_EEDONE_R & EEPROM_EEDONE_R_WORKING_MASK))
    {
        enReturn = EEPROM_enBUSY;
    }

    return (EEPROM_nSTATUS) enReturn;

}

EEPROM_nSTATUS EEPROM__enWait (void)
{
    uint32_t u32TimeOut = EEPROM_TIMEOUT_MAX;
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;

    do
    {
        enReturn = EEPROM__enGetStatus();
        u32TimeOut--;
    }while((EEPROM_enBUSY == (EEPROM_nSTATUS) enReturn) && ((uint32_t)0 != u32TimeOut));
    return (EEPROM_nSTATUS) enReturn;
}
/* End File*/
