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
#include <xDriver_MCU/WDT/App/Mode/WDT_Mode.h>

#include <stdlib.h>
#include <xDriver_MCU/WDT/App/Mode/xHeader/WDT_ModeStruct.h>
#include <xDriver_MCU/WDT/Driver/WDT_Driver.h>

WDT_nSTATUS WDT__enSetMode(WDT_nMODULE enModule, WDT_nMODE enMode)
{
    WDT_nSTATUS enReturn = WDT_enSTATUS_ERROR;
    WDT_MODE_Typedef* pstMode = WDT__pstCreateModeStruct(enMode);

    if(0UL != (uint32_t) pstMode )
    {
        if(WDT_enINTERRUPT_DISABLE == pstMode->enInterrupt )
        {
            WDT__vDisInterruptSource(enModule);
        }
        WDT__vSetStall(enModule, pstMode->enStall);
        WDT__vSetResetOutput(enModule, pstMode->enResetOutput);
        WDT__vSetInterruptSourceType(enModule, pstMode->enIntType);

        if(WDT_enINTERRUPT_ENABLE == pstMode->enInterrupt )
        {
            WDT__vEnInterruptSource(enModule);
        }

        WDT__vDeleteModeStruct(pstMode);
        enReturn = WDT_enSTATUS_OK;
    }
    return enReturn;
}

WDT_nSTATUS WDT__enSetModeStruct(WDT_nMODULE enModule, const WDT_MODE_Typedef* pstMode)
{
    WDT_nSTATUS enReturn = WDT_enSTATUS_ERROR;
    if((uint32_t) 0U != (uint32_t) pstMode )
    {
        if(WDT_enINTERRUPT_DISABLE == pstMode->enInterrupt )
        {
            WDT__vDisInterruptSource(enModule);
        }
        WDT__vSetStall(enModule, pstMode->enStall);
        WDT__vSetResetOutput(enModule, pstMode->enResetOutput);
        WDT__vSetInterruptSourceType(enModule, pstMode->enIntType);

        if(WDT_enINTERRUPT_ENABLE == pstMode->enInterrupt)
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

    WDT_nINT_TYPE enIntTypeVar = WDT_enINT_TYPE_UNDEF;
    WDT_nRESET enResetOutputVar = WDT_enRESET_UNDEF;
    WDT_nINTERRUPT enInterruptVar = WDT_enINTERRUPT_UNDEF;
    WDT_nSTALL enStallVar = WDT_enSTALL_UNDEF;

    uint32_t u32Reg = 0UL;

    WDT__enGetInterruptSource(enModule, &enInterruptVar);
    WDT__enGetStall(enModule, &enStallVar);
    WDT__enGetInterruptSourceType(enModule, &enIntTypeVar);
    WDT__enGetResetOutput(enModule, &enResetOutputVar);

    u32Reg = ((uint32_t) enInterruptVar << 0UL);
    u32Reg |= ((uint32_t) enStallVar << 8UL);
    u32Reg |= ((uint32_t) enIntTypeVar << 16UL);
    u32Reg |= ((uint32_t) enResetOutputVar << 24UL);

    enMode = (WDT_nMODE) u32Reg;
    return enMode;
}

void WDT__vGetMode(WDT_nMODULE enModule, WDT_MODE_Typedef* pstMode)
{
    if(0UL != (uint32_t) pstMode )
    {
        WDT__enGetInterruptSource(enModule, &(pstMode->enInterrupt));
        WDT__enGetStall(enModule, &(pstMode->enStall));
        WDT__enGetInterruptSourceType(enModule, &(pstMode->enIntType));
        WDT__enGetResetOutput(enModule, &(pstMode->enResetOutput));
    }
}

WDT_MODE_Typedef* WDT__pstGetMode(WDT_nMODULE enModule)
{
    WDT_MODE_Typedef* pstMode = (WDT_MODE_Typedef*) 0UL;
    #if defined (__TI_ARM__ )
    pstMode = (WDT_MODE_Typedef*) memalign((size_t) 4UL, (size_t) sizeof(WDT_MODE_Typedef) );
    #elif defined (__GNUC__ )
    pstMode = (WDT_MODE_Typedef*) malloc(sizeof(WDT_MODE_Typedef));
    #endif
    if(0UL != (uint32_t) pstMode )
    {
        WDT__enGetInterruptSource(enModule, & (pstMode->enInterrupt));
        WDT__enGetStall(enModule, & (pstMode->enStall));
        WDT__enGetInterruptSourceType(enModule, & (pstMode->enIntType));
        WDT__enGetResetOutput(enModule, & (pstMode->enResetOutput));
    }
    return pstMode;
}
