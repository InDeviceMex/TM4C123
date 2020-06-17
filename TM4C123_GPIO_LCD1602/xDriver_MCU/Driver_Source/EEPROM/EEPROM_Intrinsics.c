/**
 * @file EEPROM_Intrinsics.c
 * @brief This files is part of EEPROM Peripheral Driver.
 * This File contains all the basics functions of EEPROM Fucntionality
 * @date 16 jun. 2020
 * @author Vyldram
 * @copyright InDeviceMex 2020
 * @remarks File required to obtain the Full functionality.
 */
#include <xDriver_MCU/Driver_Header/EEPROM/EEPROM_Driver/EEPROM_Intrinsics.h>

uint32_t EEPROM_u32WorldCount=0;
uint32_t EEPROM_u32BlockCount=0; //block of 16World

uint32_t EEPROM__u32GetWorldCount(void)
{
    return EEPROM_u32WorldCount;
}


uint32_t EEPROM__u32GetBlockCount(void)
{
    return EEPROM_u32BlockCount;
}


EEPROM_nSTATUS EEPROM__enGetStatus(void)
{
    EEPROM_nSTATUS enReturn =EEPROM_enOK;
    if(EEPROM_EEDONE_R_WORKING_EN==(EEPROM_EEDONE_R & EEPROM_EEDONE_R_WORKING_MASK))
    {
        enReturn =EEPROM_enBUSY;
    }

    return enReturn;

}


EEPROM_nSTATUS EEPROM__enWait(void)
{
    uint32_t u32TimeOut = 500000;
    EEPROM_nSTATUS enReturn =EEPROM_enERROR;

    do
    {
        enReturn=EEPROM__enGetStatus();
        u32TimeOut--;
    }while((EEPROM_enBUSY == enReturn) && (0!=u32TimeOut));
    return enReturn;
}
