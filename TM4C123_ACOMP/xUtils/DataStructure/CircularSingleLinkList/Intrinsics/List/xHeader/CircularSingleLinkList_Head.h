/**
 *
 * @file CircularSingleLinkList_Head.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_INTRINSICS_LIST_XHEADER_CIRCULARSINGLELINKLIST_HEAD_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_INTRINSICS_LIST_XHEADER_CIRCULARSINGLELINKLIST_HEAD_H_

#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/xHeader/CircularSingleLinkList_Struct.h>

CircularSingleLinkListElement_TypeDef* CircularSingleLinkList__psGetHead(const CircularSingleLinkList_TypeDef*  const psList);
void CircularSingleLinkList__vSetHead(CircularSingleLinkList_TypeDef* psList, CircularSingleLinkListElement_TypeDef* psHeadArg);
CircularSingleLinkList_nSTATUS CircularSingleLinkList__enIsHead(const CircularSingleLinkList_TypeDef* const psList, const CircularSingleLinkListElement_TypeDef* const psElement);






#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_INTRINSICS_LIST_XHEADER_CIRCULARSINGLELINKLIST_HEAD_H_ */
