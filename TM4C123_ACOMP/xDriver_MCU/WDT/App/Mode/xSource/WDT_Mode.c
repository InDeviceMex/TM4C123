/**
 *
 * @file WDT_Mode.c
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
#include <xDriver_MCU/WDT/App/Mode/WDT_Mode.h>
#include <xDriver_MCU/WDT/App/Mode/xHeader/WDT_ModeStruct.h>
#include <xDriver_MCU/WDT/Driver/WDT_Driver.h>


WDT_nSTATUS WDT__enSetMode(WDT_nMODULE enModule, WDT_nMODE enMode)
{
    WDT_nSTATUS enReturn = WDT_enSTATUS_ERROR;
    WDT_MODE_Typedef* psMode = WDT__psCreateModeStruct(enMode);

    if((uint32_t) 0U != (uint32_t) psMode )
    {
        if(WDT_enINTERRUPT_DISABLE == psMode->enInterrupt )
        {
            WDT__vDisInterruptSource(enModule);
        }
        WDT__vSetStall(enModule, psMode->enStall);
        WDT__vSetResetOutput(enModule, psMode->enResetOutput);
        WDT__vSetInterruptSourceType(enModule, psMode->enIntType);

        if(WDT_enINTERRUPT_ENABLE == psMode->enInterrupt )
        {
            WDT__vEnInterruptSource(enModule);
        }

        WDT__vDeleteModeStruct(psMode);
        enReturn = WDT_enSTATUS_OK;
    }
    return enReturn;
}

WDT_nSTATUS WDT__enSetModeStruct(WDT_nMODULE enModule, const WDT_MODE_Typedef* psMode)
{
    WDT_nSTATUS enReturn = WDT_enSTATUS_ERROR;
    if((uint32_t) 0U != (uint32_t) psMode )
    {
        if(WDT_enINTERRUPT_DISABLE == psMode->enInterrupt )
        {
            WDT__vDisInterruptSource(enModule);
        }
        WDT__vSetStall(enModule, psMode->enStall);
        WDT__vSetResetOutput(enModule, psMode->enResetOutput);
        WDT__vSetInterruptSourceType(enModule, psMode->enIntType);

        if(WDT_enINTERRUPT_ENABLE == psMode->enInterrupt)
        {
            WDT__vEnInterruptSource(enModule);
        }
        enReturn = WDT_enSTATUS_OK;
    }

    return enReturn;
}

WDT_nMODE WDT__enGetMode(WDT_nMODULE enModule)
{
    WDT_nMODE enMode = WDT_enMODE_UNDEF;

    WDT_nINT_TYPE       enIntTypeVar = WDT_enINT_TYPE_UNDEF;
    WDT_nRESET          enResetOutputVar = WDT_enRESET_UNDEF;
    WDT_nINTERRUPT      enInterruptVar = WDT_enINTERRUPT_UNDEF;
    WDT_nSTALL          enStallVar = WDT_enSTALL_UNDEF;

    uint32_t u32Reg = 0U;

    WDT__enGetInterruptSource(enModule, &enInterruptVar);
    WDT__enGetStall(enModule, &enStallVar);
    WDT__enGetInterruptSourceType(enModule, &enIntTypeVar);
    WDT__enGetResetOutput(enModule, &enResetOutputVar);

    u32Reg = ( (uint32_t) enInterruptVar << 0U);
    u32Reg |= ( (uint32_t) enStallVar << 8U);
    u32Reg |= ( (uint32_t) enIntTypeVar << 16U);
    u32Reg |= ( (uint32_t) enResetOutputVar << 24U);

    enMode = (WDT_nMODE) u32Reg;

    return enMode;
}

void WDT__vGetMode(WDT_nMODULE enModule, WDT_MODE_Typedef* psMode)
{
    if((uint32_t) 0U != (uint32_t) psMode )
    {
        WDT__enGetInterruptSource(enModule, & (psMode->enInterrupt));
        WDT__enGetStall(enModule, & (psMode->enStall));
        WDT__enGetInterruptSourceType(enModule, & (psMode->enIntType));
        WDT__enGetResetOutput(enModule, & (psMode->enResetOutput));
    }

}


WDT_MODE_Typedef* WDT__psGetMode(WDT_nMODULE enModule)
{
    WDT_MODE_Typedef* psMode = (WDT_MODE_Typedef*) 0U;
    #if defined (__TI_ARM__ )
    psMode = (WDT_MODE_Typedef*) memalign((size_t) 4, (size_t) sizeof(WDT_MODE_Typedef) );
    #elif defined (__GNUC__ )
    psMode = (WDT_MODE_Typedef*) malloc(sizeof(WDT_MODE_Typedef));
    #endif
    if((uint32_t) 0U != (uint32_t) psMode )
    {
        WDT__enGetInterruptSource(enModule, & (psMode->enInterrupt));
        WDT__enGetStall(enModule, & (psMode->enStall));
        WDT__enGetInterruptSourceType(enModule, & (psMode->enIntType));
        WDT__enGetResetOutput(enModule, & (psMode->enResetOutput));
    }
    return psMode;
}



