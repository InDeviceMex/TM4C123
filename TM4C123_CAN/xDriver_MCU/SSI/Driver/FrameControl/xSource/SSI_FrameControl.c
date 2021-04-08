/**
 *
 * @file SSI_FrameControl.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/SSI/Driver/FrameControl/SSI_FrameControl.h>

void SSI__vSetFormatControl(SSI_nMODULE enModule, SSI_nFORMAT enFormatArg, SSI_nLENGTH enLengthDataArg, SSI_nCLOCK_PHASE enClockPhaseArg, SSI_nCLOCK_POLARITY enClockPolarityArg)
{
    SSI__vSetDataLength(enModule, enLengthDataArg);
    SSI__vSetFormat(enModule, enFormatArg);
    SSI__vSetClockPhase(enModule, enClockPhaseArg);
    SSI__vSetClockPolarity(enModule, enClockPolarityArg);
}

void SSI__vSetFormatControlStruct(SSI_nMODULE enModule, const SSI_FRAME_CONTROL_TypeDef sFormatControl)
{
    SSI__vSetDataLength(enModule, sFormatControl.enLengthData);
    SSI__vSetFormat(enModule, sFormatControl.enFormat);
    SSI__vSetClockPhase(enModule, sFormatControl.enClockPhase);
    SSI__vSetClockPolarity(enModule, sFormatControl.enClockPolarity);
}

void SSI__vSetFormatControlStructPointer(SSI_nMODULE enModule, const SSI_FRAME_CONTROL_TypeDef* psFormatControl)
{
    if((uint32_t) 0UL != (uint32_t) psFormatControl)
    {
        SSI__vSetDataLength(enModule, psFormatControl->enLengthData);
        SSI__vSetFormat(enModule, psFormatControl->enFormat);
        SSI__vSetClockPhase(enModule, psFormatControl->enClockPhase);
        SSI__vSetClockPolarity(enModule, psFormatControl->enClockPolarity);
    }
}

void SSI__vSetClockAndFormatControl(SSI_nMODULE enModule, SSI_nFORMAT enFormatArg, SSI_nLENGTH enLengthDataArg, SSI_nCLOCK_PHASE enClockPhaseArg, SSI_nCLOCK_POLARITY enClockPolarityArg, uint32_t u32ClockArg)
{
    SSI__vSetClock(enModule, u32ClockArg);
    SSI__vSetFormatControl(enModule, enFormatArg, enLengthDataArg, enClockPhaseArg, enClockPolarityArg);
}

void SSI__vSetClockAndFormatControlStruct(SSI_nMODULE enModule, const SSI_FRAME_CONTROL_TypeDef sFormatControl, uint32_t u32ClockArg)
{
    SSI__vSetClock(enModule, u32ClockArg);
    SSI__vSetFormatControlStruct(enModule, sFormatControl);
}

void SSI__vSetClockAndFormatControlStructPointer(SSI_nMODULE enModule, const SSI_FRAME_CONTROL_TypeDef* psFormatControl, uint32_t u32ClockArg)
{
        SSI__vSetClock(enModule, u32ClockArg);
        SSI__vSetFormatControlStructPointer(enModule, psFormatControl);
}
