/**
 *
 * @file FLASH_InterruptSource.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/FLASH/Driver/Intrinsics/Interrupt/xHeader/FLASH_InterruptSource.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>

void FLASH__vEnInterruptSource(FLASH_nINT enInterruptParam)
{
    uint32_t u32Reg=0;
    enInterruptParam&=(uint32_t)FLASH_enINT_ALL;
    u32Reg=FLASH_FCIM_R;
    u32Reg|=(uint32_t)enInterruptParam;
    FLASH_FCIM_R=u32Reg;
}

void FLASH__vDisInterruptSource(FLASH_nINT enInterruptParam)
{
    uint32_t u32Reg=0;
    enInterruptParam&=(uint32_t)FLASH_enINT_ALL;
    u32Reg=FLASH_FCIM_R;
    u32Reg&=~(uint32_t)enInterruptParam;
    FLASH_FCIM_R=u32Reg;
}


void FLASH__vClearInterruptSource(FLASH_nINT enInterruptParam)
{
  enInterruptParam&=(uint32_t)FLASH_enINT_ALL;
    FLASH_FCMISC_R=(uint32_t)enInterruptParam;

}

FLASH_nINT_STATUS FLASH__enStatusInterruptSource(FLASH_nINT enInterruptParam)
{
    FLASH_nINT_STATUS enStatus= FLASH_enINT_STATUS_UNDEF;
    uint32_t u32Reg=0;
    enInterruptParam&=(uint32_t)FLASH_enINT_ALL;

    u32Reg=FLASH_FCRIS_R;
    u32Reg&=(uint32_t)enInterruptParam;
    if(u32Reg!=0u)
    {
        enStatus= FLASH_enINT_OCCUR;
    }
    else
    {
        enStatus= FLASH_enINT_NOOCCUR;
    }

    return enStatus;
}


