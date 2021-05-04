/**
 *
 * @file Stack_Size.h
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
 * @verbatim 12 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_STACK_XHEADER_STACK_SIZE_H_
#define XUTILS_DATASTRUCTURE_STACK_XHEADER_STACK_SIZE_H_


#include <xUtils/DataStructure/Stack/xHeader/Stack_Struct.h>

uint32_t Stack__u32GetSize(const Stack_TypeDef* const pstStack);
Stack_nSTATUS Stack__enIsEmpty(const Stack_TypeDef* const pstStack);



#endif /* XUTILS_DATASTRUCTURE_STACK_XHEADER_STACK_SIZE_H_ */
