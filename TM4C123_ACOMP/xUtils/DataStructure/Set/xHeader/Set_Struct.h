/**
 *
 * @file Set_Struct.h
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
 * @verbatim 13 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_SET_XHEADER_SET_STRUCT_H_
#define XUTILS_DATASTRUCTURE_SET_XHEADER_SET_STRUCT_H_

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/xHeader/SLinkedList_Struct.h>

typedef enum
{
    Set_enSTATUS_OK,
    Set_enSTATUS_EXIST,
    Set_enSTATUS_ERROR,
}Set_nSTATUS;

typedef SLinkedList_TypeDef Set_TypeDef;
typedef SLinkedListElement_TypeDef SetMember_TypeDef;




#endif /* XUTILS_DATASTRUCTURE_SET_XHEADER_SET_STRUCT_H_ */
