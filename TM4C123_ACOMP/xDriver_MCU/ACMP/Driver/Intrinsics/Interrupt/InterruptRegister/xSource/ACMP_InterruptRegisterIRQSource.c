/**
 *
 * @file ACMP_InterruptRegisterIRQSource.c
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
 * @verbatim 4 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/ACMP_InterruptRegisterIRQSource.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ACMP_InterruptRoutine_Source.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>


void ACMP__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),ACMP_nMODULE enModule)
{
    uint32_t u32IrqSourceHandler=0U;
    uint32_t u32Module=(uint32_t)enModule;
    if((uint32_t)pfIrqSourceHandler !=0U)
    {
        if(u32Module>(uint32_t)ACMP_enMODULE_MAX)
        {
            u32Module=(uint32_t)ACMP_enMODULE_MAX;
        }
        u32IrqSourceHandler=((uint32_t)pfIrqSourceHandler|(uint32_t)1U);
        ACMP__vIRQSourceHandler[u32Module]=(void (*) (void))u32IrqSourceHandler;
    }
}


