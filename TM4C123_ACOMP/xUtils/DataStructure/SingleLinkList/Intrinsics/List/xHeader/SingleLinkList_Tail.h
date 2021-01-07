/**
 *
 * @file SingleLinkList_Tail.h
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
 * @verbatim 6 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKLIST_INTRINSICS_LIST_XHEADER_SINGLELINKLIST_TAIL_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKLIST_INTRINSICS_LIST_XHEADER_SINGLELINKLIST_TAIL_H_

#include <xUtils/DataStructure/SingleLinkList/Intrinsics/xHeader/SingleLinkList_Struct.h>

SingleLinkListElement_TypeDef* SingleLinkList__psGetTail(const SingleLinkList_TypeDef*  const psList);
void SingleLinkList__vSetTail(SingleLinkList_TypeDef* psList, SingleLinkListElement_TypeDef* psTailArg);
SingleLinkList_nSTATUS SingleLinkList__enIsTail(const SingleLinkListElement_TypeDef* const psElement);

#endif /* XUTILS_DATASTRUCTURE_SINGLELINKLIST_INTRINSICS_LIST_XHEADER_SINGLELINKLIST_TAIL_H_ */
