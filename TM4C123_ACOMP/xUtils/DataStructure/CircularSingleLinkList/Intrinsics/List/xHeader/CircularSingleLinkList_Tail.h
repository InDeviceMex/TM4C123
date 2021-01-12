/**
 *
 * @file CircularSingleLinkList_Tail.h
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
 * @verbatim 9 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_INTRINSICS_LIST_XHEADER_CIRCULARSINGLELINKLIST_TAIL_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_INTRINSICS_LIST_XHEADER_CIRCULARSINGLELINKLIST_TAIL_H_

#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/xHeader/CircularSingleLinkList_Struct.h>

CircularSingleLinkListElement_TypeDef* CircularSingleLinkList__psGetTail(const CircularSingleLinkList_TypeDef*  const psList);
void CircularSingleLinkList__vSetTail(CircularSingleLinkList_TypeDef* psList, CircularSingleLinkListElement_TypeDef* psTailArg);
CircularSingleLinkList_nSTATUS CircularSingleLinkList__enIsTail(const CircularSingleLinkList_TypeDef*  const psList, const CircularSingleLinkListElement_TypeDef* const psElement);




#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_INTRINSICS_LIST_XHEADER_CIRCULARSINGLELINKLIST_TAIL_H_ */
