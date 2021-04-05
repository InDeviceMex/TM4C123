/**
 *
 * @file OS_Kernel_Threads.h
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
 * @verbatim Mar 23, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 23, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XOS_KERNEL_XHEADER_OS_KERNEL_THREADS_H_
#define XOS_KERNEL_XHEADER_OS_KERNEL_THREADS_H_

#include <xUtils/Standard/Standard.h>

typedef void(*OS_ThreadFunction_TypeDef)(void * pvParameters) ;

uint32_t OS_Kernel_AddThreads(OS_ThreadFunction_TypeDef pfvThread,const char* const pcName, uint32_t u32StackSize, void *pvParamters, uint32_t u32Priority);

#endif /* XOS_KERNEL_XHEADER_OS_KERNEL_THREADS_H_ */
