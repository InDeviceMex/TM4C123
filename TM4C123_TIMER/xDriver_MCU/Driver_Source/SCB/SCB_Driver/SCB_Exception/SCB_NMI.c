/**
 *
 * @file SCB_NMI.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */




#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_Exception/SCB_NMI.h>

#include <xDriver_MCU/Driver_Header/SCB/SCB_Peripheral/SCB_Peripheral.h>

inline void SCB_NMI__vSetPending(void)
{
    SCB_ICSR_R|=SCB_ICSR_R_NMIPENDSET_SET;
}
