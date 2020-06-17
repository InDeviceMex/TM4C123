/*
 * EEPROM_Intrinsics.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Driver_Header/EEPROM/EEPROM.h>

uint32_t EEPROM_u32WorldCount=0;
uint32_t EEPROM_u32BlockCount=0; //block of 16World


EEPROM_nSTATUS EEPROM__enInit(void)
{
    EEPROM_nSTATUS enReturn =EEPROM_enOK;
    SYSCTL__vResetPeripheral(SYSCTL_enEEPROM);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enEEPROM);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enEEPROM);
    //NVIC__enSetEnableIRQ(NVIC_enSTIR_FLASH,NVIC_enPRI7);

    EEPROM_u32WorldCount = EEPROM_EESIZE_R & EEPROM_EESIZE_R_WORDCNT_MASK;
    EEPROM_u32BlockCount= (EEPROM_EESIZE_R & EEPROM_EESIZE_R_BLKCNT_MASK)>>EEPROM_EESIZE_R_BLKCNT_BIT;
    enReturn=EEPROM__enWait();
    return enReturn;

}


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
        enReturn =EEPROM_enERROR;
    }

    return enReturn;

}


EEPROM_nSTATUS EEPROM__enWait(void)
{
    uint32_t u32TimeOut = 500000;
    EEPROM_nSTATUS enReturn =EEPROM_enOK;
    while(EEPROM_EEDONE_R_WORKING_EN==(EEPROM_EEDONE_R & EEPROM_EEDONE_R_WORKING_MASK))
    {
        u32TimeOut--;
        if (u32TimeOut==0)
        {
            enReturn =EEPROM_enERROR;
            break;
        }
    }
    return enReturn;
}
