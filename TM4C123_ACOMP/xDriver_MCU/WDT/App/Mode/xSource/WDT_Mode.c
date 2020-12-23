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
    WDT_nSTATUS enReturn = WDT_enERROR;
    WDT_MODE_Typedef* psMode = WDT__psCreateModeStruct(enMode);

    if( (uint32_t) 0U != (uint32_t) psMode )
    {
        if( WDT_enINTERRUPT_DISABLE == psMode->enInterrupt )
        {
            WDT__vDisInterruptSource(enModule);
        }
        WDT__vSetStall(enModule, psMode->enStall);
        WDT__vSetResetOutput(enModule, psMode->enResetOutput);
        WDT__vSetInterruptSourceType(enModule, psMode->enIntType);

        if( WDT_enINTERRUPT_ENABLE == psMode->enInterrupt )
        {
            WDT__vEnInterruptSource(enModule);
        }

        WDT__vDeleteModeStruct(psMode);
        enReturn = WDT_enOK;
    }
    return enReturn;
}

WDT_nSTATUS WDT__enSetModeStruct(WDT_nMODULE enModule, const WDT_MODE_Typedef* psMode)
{
    WDT_nSTATUS enReturn = WDT_enERROR;
    if( (uint32_t) 0U != (uint32_t) psMode )
    {
        if( WDT_enINTERRUPT_DISABLE == psMode->enInterrupt )
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
        enReturn = WDT_enOK;
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

    enInterruptVar = WDT__enGetInterruptSource(enModule);
    enStallVar = WDT__enGetStall(enModule);
    enIntTypeVar = WDT__enGetInterruptSourceType(enModule);
    enResetOutputVar = WDT__enGetResetOutput(enModule);

    u32Reg = ( (uint32_t) enInterruptVar <<0U);
    u32Reg |= ( (uint32_t) enStallVar <<8U);
    u32Reg |= ( (uint32_t) enIntTypeVar <<16U);
    u32Reg |= ( (uint32_t) enResetOutputVar <<24U);

    enMode = (WDT_nMODE) u32Reg;

    return enMode;
}

void WDT__vGetMode(WDT_nMODULE enModule, WDT_MODE_Typedef* psMode)
{

    psMode->enInterrupt = WDT__enGetInterruptSource(enModule);
    psMode->enStall = WDT__enGetStall(enModule);
    psMode->enIntType = WDT__enGetInterruptSourceType(enModule);
    psMode->enResetOutput = WDT__enGetResetOutput(enModule);

}


WDT_MODE_Typedef* WDT__psGetMode(WDT_nMODULE enModule)
{
    WDT_MODE_Typedef* psMode = (WDT_MODE_Typedef*) 0U;
    #if defined ( __TI_ARM__ )
    psMode = (WDT_MODE_Typedef*) memalign((size_t) 4,(size_t) sizeof(WDT_MODE_Typedef) * sizeof(uint32_t));
    #elif defined ( __GNUC__ )
    psMode = (WDT_MODE_Typedef*) malloc(sizeof(WDT_MODE_Typedef) * sizeof(uint32_t));
    #endif
    if( (uint32_t) 0U != (uint32_t) psMode )
    {
        psMode->enInterrupt = WDT__enGetInterruptSource(enModule);
        psMode->enStall = WDT__enGetStall(enModule);
        psMode->enIntType = WDT__enGetInterruptSourceType(enModule);
        psMode->enResetOutput = WDT__enGetResetOutput(enModule);
    }
    return psMode;
}



