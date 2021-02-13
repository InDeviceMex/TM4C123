/**
 *
 * @file Set_Difference.h
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
 * @verbatim 14 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_SET_XHEADER_SET_DIFFERENCE_H_
#define XUTILS_DATASTRUCTURE_SET_XHEADER_SET_DIFFERENCE_H_

#include <xUtils/DataStructure/Set/xHeader/Set_Struct.h>

Set_nSTATUS Set__enDifference(Set_TypeDef* psNewSet, Set_TypeDef* psSet1, const Set_TypeDef* psSet2);
Set_TypeDef* Set__psDifference(Set_TypeDef* psSet1, const Set_TypeDef* psSet2);

#endif /* XUTILS_DATASTRUCTURE_SET_XHEADER_SET_DIFFERENCE_H_ */
