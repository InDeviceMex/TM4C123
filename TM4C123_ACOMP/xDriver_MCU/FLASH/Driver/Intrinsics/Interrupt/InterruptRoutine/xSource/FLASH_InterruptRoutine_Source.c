/**
 *
 * @file FLASH_InterruptRoutine_Source.c
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
#include <xDriver_MCU/FLASH/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/FLASH_InterruptRoutine_Source.h>

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(FLASH_vIRQSourceHandler_Dummy, ".ramcode")

static void FLASH_vIRQSourceHandler_Dummy(void);

#elif defined (__GNUC__ )

static void FLASH_vIRQSourceHandler_Dummy(void) __attribute__((section(".ramcode")));

#endif

void (*FLASH__vIRQSourceHandler[(uint32_t) FLASH_enINTERRUPT_MAX]) (void)=
{&FLASH_vIRQSourceHandler_Dummy,
 &FLASH_vIRQSourceHandler_Dummy,
 &FLASH_vIRQSourceHandler_Dummy,
 &FLASH_vIRQSourceHandler_Dummy,
 &FLASH_vIRQSourceHandler_Dummy,
 &FLASH_vIRQSourceHandler_Dummy,
 &FLASH_vIRQSourceHandler_Dummy};

static void FLASH_vIRQSourceHandler_Dummy(void)
{
    while(1UL){}
}
