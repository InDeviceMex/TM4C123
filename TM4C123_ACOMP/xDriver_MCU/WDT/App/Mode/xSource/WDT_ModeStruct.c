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
#include <stdlib.h>
#include <xDriver_MCU/WDT/App/Mode/xHeader/WDT_ModeStruct.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

void WDT__vCreateModeStructPointer(WDT_nMODE enMode, WDT_MODE_Typedef* psMode)
{

    if( (uint32_t) 0U != (uint32_t) psMode )
    {
        psMode->enInterrupt = (WDT_nINTERRUPT) ((uint32_t)enMode & 1U);
        psMode->enStall = (WDT_nSTALL) (( (uint32_t) enMode >> 8U) & 1U );
        psMode->enIntType = (WDT_nINT_TYPE) (( (uint32_t) enMode >> 16U ) & 1U);
        psMode->enResetOutput = (WDT_nRESET) (( (uint32_t) enMode >> 24U ) & 1U);
    }
}

WDT_MODE_Typedef* WDT__psCreateModeStruct(WDT_nMODE enMode)
{
    WDT_MODE_Typedef* psMode = (WDT_MODE_Typedef*) 0U;
    #if defined ( __TI_ARM__ )
    psMode = (WDT_MODE_Typedef*) memalign((size_t) 4U, (size_t) sizeof(WDT_MODE_Typedef));
    #elif defined ( __GNUC__ )
    psMode = (WDT_MODE_Typedef*) malloc((size_t)sizeof(WDT_MODE_Typedef));
    #endif
    if( (uint32_t) 0U != (uint32_t) psMode )
    {
        psMode->enInterrupt = (WDT_nINTERRUPT) ( (uint32_t) enMode & 1U);
        psMode->enStall = (WDT_nSTALL) (( (uint32_t) enMode >> 8U ) & 1U);
        psMode->enIntType = (WDT_nINT_TYPE) (( (uint32_t) enMode >> 16U ) & 1U);
        psMode->enResetOutput = (WDT_nRESET) (( (uint32_t) enMode >> 24U ) & 1U);
    }
    return psMode;
}

void WDT__vDeleteModeStruct(WDT_MODE_Typedef* psMode)
{
    free(psMode);
}



