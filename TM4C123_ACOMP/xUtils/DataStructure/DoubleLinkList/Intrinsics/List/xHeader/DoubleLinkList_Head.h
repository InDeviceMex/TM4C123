/**
 *
 * @file DoubleLinkList_Head.h
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
 * @verbatim 8 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKLIST_INTRINSICS_LIST_XHEADER_DOUBLELINKLIST_HEAD_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKLIST_INTRINSICS_LIST_XHEADER_DOUBLELINKLIST_HEAD_H_

#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/xHeader/DoubleLinkList_Struct.h>

DoubleLinkListElement_TypeDef* DoubleLinkList__psGetHead(const DoubleLinkList_TypeDef*  const psList);
void DoubleLinkList__vSetHead(DoubleLinkList_TypeDef* psList, DoubleLinkListElement_TypeDef* psHeadArg);
DoubleLinkList_nSTATUS DoubleLinkList__enIsHead(const DoubleLinkList_TypeDef* const psList, const DoubleLinkListElement_TypeDef* const psElement);






#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKLIST_INTRINSICS_LIST_XHEADER_DOUBLELINKLIST_HEAD_H_ */
