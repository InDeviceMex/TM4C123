/*
 * EEPROM.c
 *
 *  Created on: 30/03/2020
 *      Author: vyldram
 */

#include "EEPROM.h"

uint32_t EEPROM_u32WorldCount=0;
uint32_t EEPROM_u32BlockCount=0;/*block of 16World*/


EEPROM_nSTATUS EEPROM__enInit(void)
{
    EEPROM_nSTATUS enReturn =EEPROM_enOK;
    SYSCTL__vResetPeripheral(SYSCTL_enEEPROM);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enEEPROM);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enEEPROM);
    /*NVIC__enSetEnableIRQ(NVIC_enSTIR_FLASH,NVIC_enPRI7);*/

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

EEPROM_nSTATUS EEPROM__enWriteWorld(uint32_t u32Data,uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn =EEPROM_enERROR;
    uint32_t u32MaxAddress= (EEPROM_u32WorldCount<<2);
    uint32_t u32Block =(u32Address>>6);/*u32Address/16*/
    uint32_t u32Offset =(u32Address>>2)&0xF;/*First 16 worlds*/
    if((u32MaxAddress )> u32Address )
    {
        EEPROM_EEBLOCK_R=u32Block;
        EEPROM_EEOFFSET_R=u32Offset;
        EEPROM_EERDWR_R=u32Data;
        enReturn=EEPROM__enWait();
    }

    return enReturn;
}


EEPROM_nSTATUS EEPROM__enWriteHalfWorld(uint16_t u16Data,uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn =EEPROM_enERROR;
    uint32_t u32MaxAddress= (EEPROM_u32WorldCount<<2);
    uint32_t u32Block =(u32Address>>6);/*u32Address/16*/
    uint32_t u32Offset =(u32Address>>2)&0xF;/*First 16 worlds*/
    uint32_t u32Pos=(u32Address>>1)&1;

    volatile uint32_t u32DataAux=0;
    volatile uint16_t* pu16DataAux=0;
    if((u32MaxAddress )> u32Address )
    {
        EEPROM_EEBLOCK_R=u32Block;
        EEPROM_EEOFFSET_R=u32Offset;
        u32DataAux=EEPROM_EERDWR_R;
        enReturn=EEPROM__enWait();

        if(EEPROM_enOK ==enReturn)
        {
            pu16DataAux=(uint16_t*)&u32DataAux+u32Pos;
            *pu16DataAux=u16Data;

            EEPROM_EERDWR_R=u32DataAux;
            enReturn=EEPROM__enWait();
        }
    }

    return enReturn;
}

EEPROM_nSTATUS EEPROM__enWriteByte(uint8_t u8Data,uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn =EEPROM_enERROR;
    uint32_t u32MaxAddress= (EEPROM_u32WorldCount<<2);
    uint32_t u32Block =(u32Address>>6);/*u32Address/16*/
    uint32_t u32Offset =(u32Address>>2)&0xF;/*First 16 worlds*/
    uint32_t u32Pos=(u32Address)&0x3;

    volatile uint32_t u32DataAux=0;
    volatile uint8_t* pu8DataAux=0;
    if((u32MaxAddress )> u32Address )
    {
        EEPROM_EEBLOCK_R=u32Block;
        EEPROM_EEOFFSET_R=u32Offset;
        u32DataAux=EEPROM_EERDWR_R;
        enReturn=EEPROM__enWait();

        if(EEPROM_enOK ==enReturn)
        {
            pu8DataAux=(uint8_t*)&u32DataAux+u32Pos;
            *pu8DataAux=u8Data;

            EEPROM_EERDWR_R=u32DataAux;
            enReturn=EEPROM__enWait();
        }
    }

    return enReturn;
}


EEPROM_nSTATUS EEPROM__enReadWorld(uint32_t* pu32Data,uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn =EEPROM_enERROR;
    uint32_t u32MaxAddress= (EEPROM_u32WorldCount<<2);
    uint32_t u32Block =(u32Address>>6);/*u32Address/16*/
    uint32_t u32Offset =(u32Address>>2)&0xF;/*First 16 worlds*/
    if((u32MaxAddress )> u32Address )
    {
        EEPROM_EEBLOCK_R=u32Block;
        EEPROM_EEOFFSET_R=u32Offset;
        *pu32Data = EEPROM_EERDWR_R;
        enReturn=EEPROM__enWait();
    }

    return enReturn;
}


EEPROM_nSTATUS EEPROM__enReadHalfWorld(uint16_t* pu16Data,uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn =EEPROM_enERROR;
    uint32_t u32MaxAddress= (EEPROM_u32WorldCount<<2);
    uint32_t u32Block =(u32Address>>6);/*u32Address/16*/
    uint32_t u32Offset =(u32Address>>2)&0xF;/*First 16 worlds*/
    uint32_t u32Pos=(u32Address>>1)&1;

    volatile uint32_t u32DataAux=0;
    volatile uint16_t* pu16DataAux=0;
    if((u32MaxAddress )> u32Address )
    {
        EEPROM_EEBLOCK_R=u32Block;
        EEPROM_EEOFFSET_R=u32Offset;
        u32DataAux=EEPROM_EERDWR_R;
        enReturn=EEPROM__enWait();

        if(EEPROM_enOK ==enReturn)
        {
            pu16DataAux=(uint16_t*)&u32DataAux+u32Pos;
            *pu16Data=*pu16DataAux;
        }
    }

    return enReturn;
}

EEPROM_nSTATUS EEPROM__enReadByte(uint8_t* pu8Data,uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn =EEPROM_enERROR;
    uint32_t u32MaxAddress= (EEPROM_u32WorldCount<<2);
    uint32_t u32Block =(u32Address>>6);/*u32Address/16*/
    uint32_t u32Offset =(u32Address>>2)&0xF;/*First 16 worlds*/
    uint32_t u32Pos=(u32Address)&0x3;

    volatile uint32_t u32DataAux=0;
    volatile uint8_t* pu8DataAux=0;
    if((u32MaxAddress )> u32Address )
    {
        EEPROM_EEBLOCK_R=u32Block;
        EEPROM_EEOFFSET_R=u32Offset;
        u32DataAux=EEPROM_EERDWR_R;
        enReturn=EEPROM__enWait();

        if(EEPROM_enOK ==enReturn)
        {
            pu8DataAux=(uint8_t*)&u32DataAux+u32Pos;
            *pu8Data=*pu8DataAux;
        }
    }

    return enReturn;
}



EEPROM_nSTATUS EEPROM__enWriteWorldBlock(uint32_t* pu32Data,uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn =EEPROM_enERROR;
    uint32_t u32MaxAddress= (EEPROM_u32WorldCount<<2);
    uint32_t u32Block =(u32Address>>6);/*u32Address/16*/
    uint32_t u32Offset =(u32Address>>2)&0xF;/*First 16 worlds*/
    if((u32MaxAddress )> u32Address )
    {
        EEPROM_EEBLOCK_R=u32Block;
        EEPROM_EEOFFSET_R=u32Offset;
        do
        {
            EEPROM_EERDWR_R=*pu32Data;
            pu32Data++;
            enReturn=EEPROM__enWait();
        }while(EEPROM_EEOFFSET_R!=0);
    }

    return enReturn;
}


EEPROM_nSTATUS EEPROM__enWriteMultiWorld(uint32_t* pu32Data,uint32_t u32Address,uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn =EEPROM_enOK;
    uint32_t u32MaxAddress= (EEPROM_u32WorldCount<<2);
    while(((u32MaxAddress )> u32Address) && (u16Count>0) && (enReturn==EEPROM_enOK))
    {
        enReturn=EEPROM__enWriteWorld(*pu32Data,u32Address);
        pu32Data++;
        u32Address+=4;
        u16Count--;
    }

    return enReturn;
}

EEPROM_nSTATUS EEPROM__enReadMultiWorld(uint32_t* pu32Data,uint32_t u32Address,uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn =EEPROM_enOK;
    uint32_t u32MaxAddress= (EEPROM_u32WorldCount<<2);
    while(((u32MaxAddress )> u32Address) && (u16Count>0) && (enReturn==EEPROM_enOK))
    {
        enReturn=EEPROM__enReadWorld(pu32Data,u32Address);
        pu32Data++;
        u32Address+=4;
        u16Count--;
    }

    return enReturn;
}


EEPROM_nSTATUS EEPROM__enWriteMultiHalfWorld(uint16_t* pu16Data,uint32_t u32Address,uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn =EEPROM_enOK;
    uint32_t u32MaxAddress= (EEPROM_u32WorldCount<<2);
    while(((u32MaxAddress )> u32Address) && (u16Count>0) && (enReturn==EEPROM_enOK))
    {
        enReturn=EEPROM__enWriteHalfWorld(*pu16Data,u32Address);
        pu16Data++;
        u32Address+=2;
        u16Count--;
    }

    return enReturn;
}


EEPROM_nSTATUS EEPROM__enReadMultiHalfWorld(uint16_t* pu16Data,uint32_t u32Address,uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn =EEPROM_enOK;
    uint32_t u32MaxAddress= (EEPROM_u32WorldCount<<2);
    while(((u32MaxAddress )> u32Address) && (u16Count>0) && (enReturn==EEPROM_enOK))
    {
        enReturn=EEPROM__enReadHalfWorld(pu16Data,u32Address);
        pu16Data++;
        u32Address+=2;
        u16Count--;
    }

    return enReturn;
}
EEPROM_nSTATUS EEPROM__enWriteMultiByte(uint8_t* pu8Data,uint32_t u32Address,uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn =EEPROM_enOK;
    uint32_t u32MaxAddress= (EEPROM_u32WorldCount<<2);
    while(((u32MaxAddress )> u32Address) && (u16Count>0) && (enReturn==EEPROM_enOK))
    {
        enReturn=EEPROM__enWriteByte(*pu8Data,u32Address);
        pu8Data++;
        u32Address+=1;
        u16Count--;
    }

    return enReturn;
}

EEPROM_nSTATUS EEPROM__enReadMultiByte(uint8_t* pu8Data,uint32_t u32Address,uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn =EEPROM_enOK;
    uint32_t u32MaxAddress= (EEPROM_u32WorldCount<<2);
    while(((u32MaxAddress )> u32Address) && (u16Count>0) && (enReturn==EEPROM_enOK))
    {
        enReturn=EEPROM__enReadByte(pu8Data,u32Address);
        pu8Data++;
        u32Address+=1;
        u16Count--;
    }

    return enReturn;
}


