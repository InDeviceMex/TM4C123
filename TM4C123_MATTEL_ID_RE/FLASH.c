/*
 * FLASH.c
 *
 *  Created on: 5 feb. 2018
 *      Author: InDev
 */


#include "FLASH.h"



int32_t FLASH_Write(int32_t data, int32_t address)
{
    int32_t timeout=50000;
    if(address>FLASH_LIMIT)
        return 0;
    if((*(uint32_t*)address)==0xFFFFFFFF)
    {
        FLASH_FMD->DATA=data;
        FLASH_FMA->OFFSET=address;
        FLASH_FMC_R=FLASH_FMC_R_WRKEY_KEY1|FLASH_FMC_R_WRITE_WRITE;
        while(FLASH_FMC_WRITE_BB)
        {
            if(timeout==0)
                return 0;
            timeout--;
        }
        return 1;
    }
    return 0;
}


int32_t FLASH_ErasePage(int32_t address)
{
    int32_t timeout=50000;
    if(address>FLASH_LIMIT)
        return 0;
    FLASH_FMA->OFFSET=address;
    FLASH_FMC_R=FLASH_FMC_R_WRKEY_KEY1|FLASH_FMC_R_ERASE_ERASE;
    while(FLASH_FMC_ERASE_BB)
    {
        if(timeout==0)
            return 0;
        timeout--;
    }
    return 1;
}

int32_t FLASH_ErasePagePos(int32_t page)
{
    int32_t address= page*1024;
    int32_t timeout=50000;
    if(address>FLASH_LIMIT)
        return 0;
    FLASH_FMA->OFFSET=address;
    FLASH_FMC_R=FLASH_FMC_R_WRKEY_KEY1|FLASH_FMC_R_ERASE_ERASE;
    while(FLASH_FMC_ERASE_BB)
    {
        if(timeout==0)
            return 0;
        timeout--;
    }
    return 1;
}



int32_t FLASH_Erase(void)
{
    int32_t timeout=5000000;
    FLASH_FMC_R=FLASH_FMC_R_WRKEY_KEY1|FLASH_FMC_R_MERASE_MERASE;
    while(FLASH_FMC_MERASE_BB)
    {
        if(timeout==0)
            return 0;
        timeout--;
    }
    return 1;
}


int32_t FLASH_WriteBuf(int32_t* data,int32_t* pos,int32_t cant, int32_t address)
{
    int32_t timeout=50000;
    if(address>(FLASH_LIMIT-80))
        return 0;
    if(cant>32)
        return 0;
    while(cant)
    {
        if(*pos>31)
            return 0;
        if((*(uint32_t*)(address+(4*(*pos))))==0xFFFFFFFF)
            FLASH_FWBn->FWB[*pos]=*data;
        (*pos)++;
        data++;
        cant--;
    }
    FLASH_FMA->OFFSET=address;
    FLASH_FMC2_R=FLASH_FMC2_R_WRKEY_KEY1|FLASH_FMC2_R_WRBUF_WRITE;
    while(FLASH_FMC2_WRBUF_BB)
    {
        if(timeout==0)
            return 0;
        timeout--;
    }
    return 1;
}

