/**
 *
 * @file WDT_ModeStruct.c
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
 * @verbatim 24 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Driver_Header/WDT/WDT_App/WDT_Mode/WDT_ModeStruct.h>

#include <stdlib.h>
#include <xDriver_MCU/Driver_Header/WDT/WDT_Peripheral/WDT_Peripheral.h>

void WDT__vCreateModeStructPointer(WDT_nMODE enMode,WDT_MODE_Typedef* psMode)
{

    if(psMode!=0)
    {
        psMode->enInterrupt=(WDT_nINTERRUPT)((uint32_t)enMode&1u);
        psMode->enStall=(WDT_nSTALL)(((uint32_t)enMode>>8u)&1u);
        psMode->enIntType=(WDT_nINT_TYPE)(((uint32_t)enMode>>16u)&1u);
        psMode->enResetOutput=(WDT_nRESET)(((uint32_t)enMode>>24u)&1u);
    }
}

WDT_MODE_Typedef* WDT__psCreateModeStruct(WDT_nMODE enMode)
{
    WDT_MODE_Typedef* psMode=0;
    #if defined ( __TI_ARM__ )
    psMode = (WDT_MODE_Typedef*) memalign((size_t)4,(size_t)sizeof(WDT_MODE_Typedef)*sizeof(uint32_t));
    #elif defined ( __GNUC__ )
    psMode = (WDT_MODE_Typedef*) malloc((size_t)sizeof(WDT_MODE_Typedef)*sizeof(uint32_t));
    #endif
    if(psMode!=0)
    {
        psMode->enInterrupt=(WDT_nINTERRUPT)((uint32_t)enMode&1u);
        psMode->enStall=(WDT_nSTALL)(((uint32_t)enMode>>8u)&1u);
        psMode->enIntType=(WDT_nINT_TYPE)(((uint32_t)enMode>>16u)&1u);
        psMode->enResetOutput=(WDT_nRESET)(((uint32_t)enMode>>24u)&1u);
    }
    return psMode;
}

void WDT__vDeleteModeStruct(WDT_MODE_Typedef* psMode)
{
    free(psMode);
}



