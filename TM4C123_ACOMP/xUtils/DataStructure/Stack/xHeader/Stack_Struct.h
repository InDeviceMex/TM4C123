/**
 *
 * @file Stack_Struct.h
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
#ifndef XUTILS_DATASTRUCTURE_STACK_XHEADER_STACK_STRUCT_H_
#define XUTILS_DATASTRUCTURE_STACK_XHEADER_STACK_STRUCT_H_

#include <xUtils/DataStructure/SingleLinkList/Intrinsics/xHeader/SingleLinkList_Struct.h>

typedef enum
{
    Stack_enSTATUS_OK,
    Stack_enSTATUS_ERROR,
    Stack_enSTATUS_FULL,
    Stack_enSTATUS_EMPTY,
}Stack_nSTATUS;

typedef SingleLinkList_TypeDef Stack_TypeDef;


#endif /* XUTILS_DATASTRUCTURE_STACK_XHEADER_STACK_STRUCT_H_ */
