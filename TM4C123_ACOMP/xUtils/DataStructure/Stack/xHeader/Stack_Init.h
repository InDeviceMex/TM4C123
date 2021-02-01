/**
 *
 * @file Stack_Init.h
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
#ifndef XUTILS_DATASTRUCTURE_STACK_XHEADER_STACK_INIT_H_
#define XUTILS_DATASTRUCTURE_STACK_XHEADER_STACK_INIT_H_


#include <xUtils/DataStructure/Stack/xHeader/Stack_Struct.h>

Stack_TypeDef* Stack__psInit( void (*pfvDestroyElementDataArg) (void *DataContainer));
Stack_nSTATUS Stack__enInit( Stack_TypeDef* psStack ,void (*pfvDestroyElementDataArg) (void *DataContainer));



#endif /* XUTILS_DATASTRUCTURE_STACK_XHEADER_STACK_INIT_H_ */
