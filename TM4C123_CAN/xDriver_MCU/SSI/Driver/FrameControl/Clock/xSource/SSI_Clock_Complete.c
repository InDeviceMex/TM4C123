/**
 *
 * @file SSI_Clock_Complete.c
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
#include <xDriver_MCU/SSI/Driver/FrameControl/Clock/xHeader/SSI_Clock_Complete.h>

#include <xDriver_MCU/SSI/Driver/FrameControl/Clock/xHeader/SSI_Clock_Register.h>
#include <xDriver_MCU/SSI/Driver/xHeader/SSI_ClockConfig.h>
#include <xDriver_MCU/SSI/Driver/Control/xHeader/SSI_Mode.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

void SSI__vSetClock(SSI_nMODULE enModule, uint32_t u32ClockArg)
{
    SSI_nCLOCK enSsiClock = SSI_enCLOCK_UNDEF;
    SSI_nMODE enSsiMode = SSI_enMODE_UNDEF;
    uint32_t u32CurrentClock = 16000000UL;
    uint32_t u32ClockReg = 0UL;
    uint32_t u32EvenPrediver = 2UL;
    uint32_t u32Divisor = 0UL;

    enSsiClock = SSI__enGetClockConfig(enModule);
    if(SSI_enCLOCK_SYSCLK == enSsiClock)
    {
        u32CurrentClock = SYSCTL__u32GetClock();
    }

    enSsiMode = SSI__enGetMode(enModule);

    if(SSI_enMODE_MASTER == enSsiMode)
    {
        if(u32ClockArg > (u32CurrentClock / 2UL))
        {
            u32ClockArg = u32CurrentClock / 2UL;
        }
        if(u32ClockArg > 25000000UL)
        {
            u32ClockArg = 25000000UL;
        }
    }
    else
    {
        if(u32ClockArg > (u32CurrentClock / 12UL))
        {
            u32ClockArg = u32CurrentClock / 12UL;
        }
        if(u32ClockArg > 6670000UL)
        {
            u32ClockArg = 6670000UL;
        }
    }

    do
    {
        if(256UL > u32Divisor)
        {
            u32Divisor++;
        }
        else
        {
            u32EvenPrediver += 2UL;
            u32Divisor = 1UL;
            if(u32EvenPrediver > 254UL)
            {
                break;
            }
        }
        u32ClockReg = u32CurrentClock;
        u32ClockReg /= u32Divisor;
        u32ClockReg /= u32EvenPrediver;
    }while(u32ClockReg > u32ClockArg);

    u32Divisor --;
    SSI__vSetClockEvenPrescalerPart(enModule, u32EvenPrediver);
    SSI__vSetClockDivisorPart(enModule, u32Divisor);
}

uint32_t SSI__u32GetClock(SSI_nMODULE enModule)
{
    SSI_nCLOCK enSsiClock = SSI_enCLOCK_UNDEF;
    uint32_t u32CurrentClock = 16000000UL;
    uint32_t u32EvenPrediver = 0UL;
    uint32_t u32Divisor = 1UL;

    enSsiClock = SSI__enGetClockConfig(enModule);
    if(SSI_enCLOCK_SYSCLK == enSsiClock)
    {
        u32CurrentClock = SYSCTL__u32GetClock();
    }
    u32EvenPrediver = SSI__u32GetClockEvenPrescalerPart(enModule);
    u32Divisor = SSI__u32GetClockDivisorPart(enModule);
    u32Divisor++;
    u32CurrentClock /= u32Divisor;
    if(0UL != u32EvenPrediver)
    {
        u32CurrentClock /= u32EvenPrediver;
    }
    return u32CurrentClock;
}
