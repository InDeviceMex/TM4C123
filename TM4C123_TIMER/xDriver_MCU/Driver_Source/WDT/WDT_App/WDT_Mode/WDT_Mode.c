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
#include <xDriver_MCU/Driver_Header/WDT/WDT_App/WDT_Mode/WDT_Mode.h>

#include <stdlib.h>
#include <xDriver_MCU/Driver_Header/WDT/WDT_App/WDT_Mode/WDT_ModeStruct.h>
#include <xDriver_MCU/Driver_Header/WDT/WDT_Driver/WDT_Driver.h>


WDT_nSTATUS WDT__enSetMode(WDT_nMODULE enModule, WDT_nMODE enMode)
{
    WDT_nSTATUS enReturn=WDT_enERROR;
    WDT_MODE_Typedef* psMode=WDT__psCreateModeStruct(enMode);

    if(psMode!=0)
    {
        if(WDT_enINTERRUPT_DISABLE == psMode->enInterrupt)
        {
            WDT__vDisInterrupt(enModule);
        }
        WDT__vSetStall(enModule,psMode->enStall);
        WDT__vSetResetOutput(enModule,psMode->enResetOutput);
        WDT__vSetInterruptType(enModule,psMode->enIntType);

        if(WDT_enINTERRUPT_ENABLE == psMode->enInterrupt)
        {

            WDT__vEnInterrupt(enModule);
        }

        WDT__vDeleteModeStruct(psMode);
        enReturn = WDT_enOK;
    }
    return enReturn;
}

WDT_nSTATUS WDT__enSetModeStruct(WDT_nMODULE enModule, const WDT_MODE_Typedef* psMode)
{
    WDT_nSTATUS enReturn=WDT_enERROR;
    if(psMode!=0)
    {
        if(WDT_enINTERRUPT_DISABLE == psMode->enInterrupt)
        {
            WDT__vDisInterrupt(enModule);
        }
        WDT__vSetStall(enModule,psMode->enStall);
        WDT__vSetResetOutput(enModule,psMode->enResetOutput);
        WDT__vSetInterruptType(enModule,psMode->enIntType);

        if(WDT_enINTERRUPT_ENABLE == psMode->enInterrupt)
        {

            WDT__vEnInterrupt(enModule);
        }
        enReturn = WDT_enOK;
    }

    return enReturn;
}

WDT_nMODE WDT__enGetMode(WDT_nMODULE enModule)
{
    WDT_nMODE enMode=WDT_enMODE_UNDEF;

    WDT_nINT_TYPE       enIntType=WDT_enINT_TYPE_UNDEF;
    WDT_nRESET          enResetOutput=WDT_enRESET_UNDEF;
    WDT_nINTERRUPT      enInterrupt=WDT_enINTERRUPT_UNDEF;
    WDT_nSTALL          enStall=WDT_enSTALL_UNDEF;

    uint32_t u32Reg=0;

    enInterrupt  =WDT__enGetInterrupt(enModule);
    enStall      =WDT__enGetStall(enModule);
    enIntType    =WDT__enGetInterruptType(enModule);
    enResetOutput=WDT__enGetResetOutput(enModule);
      u32Reg = ((uint32_t)enInterrupt     <<0u);
    u32Reg|= ((uint32_t)enStall         <<8u);
    u32Reg|= ((uint32_t)enIntType       <<16u);
    u32Reg|= ((uint32_t)enResetOutput   <<24u);

    enMode = (WDT_nMODE)u32Reg;

    return enMode;
}

void WDT__vGetMode(WDT_nMODULE enModule, WDT_MODE_Typedef* psMode)
{

    psMode->enInterrupt  =WDT__enGetInterrupt(enModule);
    psMode->enStall      =WDT__enGetStall(enModule);
    psMode->enIntType    =WDT__enGetInterruptType(enModule);
    psMode->enResetOutput=WDT__enGetResetOutput(enModule);

}


WDT_MODE_Typedef* WDT__psGetMode(WDT_nMODULE enModule)
{
    WDT_MODE_Typedef* psMode=0;
    #if defined ( __TI_ARM__ )
    psMode = (WDT_MODE_Typedef*) memalign((size_t)4,(size_t)sizeof(WDT_MODE_Typedef)*sizeof(uint32_t));
    #elif defined ( __GNUC__ )
    psMode = (WDT_MODE_Typedef*) malloc(sizeof(WDT_MODE_Typedef)*sizeof(uint32_t));
    #endif
    if(0!= psMode)
    {
        psMode->enInterrupt  =WDT__enGetInterrupt(enModule);
        psMode->enStall      =WDT__enGetStall(enModule);
        psMode->enIntType    =WDT__enGetInterruptType(enModule);
        psMode->enResetOutput=WDT__enGetResetOutput(enModule);
    }
    return psMode;
}



