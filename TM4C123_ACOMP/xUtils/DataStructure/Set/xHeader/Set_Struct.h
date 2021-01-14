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

#include <xUtils/DataStructure/SingleLinkList/Intrinsics/xHeader/SingleLinkList_Struct.h>

typedef enum
{
    Set_enSTATUS_OK,
    Set_enSTATUS_ERROR,
}Set_nSTATUS;

typedef SingleLinkList_TypeDef Set_TypeDef;
typedef SingleLinkListElement_TypeDef SetMember_TypeDef;




#endif /* XUTILS_DATASTRUCTURE_SET_XHEADER_SET_STRUCT_H_ */
