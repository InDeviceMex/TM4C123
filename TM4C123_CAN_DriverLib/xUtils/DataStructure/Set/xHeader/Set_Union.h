/**
 *
 * @file Set_Union.h
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
#ifndef XUTILS_DATASTRUCTURE_SET_XHEADER_SET_UNION_H_
#define XUTILS_DATASTRUCTURE_SET_XHEADER_SET_UNION_H_

#include <xUtils/DataStructure/Set/xHeader/Set_Struct.h>

Set_nSTATUS Set__enUnion(Set_TypeDef* pstNewSet, Set_TypeDef* pstSet1, const Set_TypeDef* pstSet2);
Set_TypeDef* Set__pstUnion(Set_TypeDef* pstSet1, const Set_TypeDef* pstSet2);

#endif /* XUTILS_DATASTRUCTURE_SET_XHEADER_SET_UNION_H_ */
