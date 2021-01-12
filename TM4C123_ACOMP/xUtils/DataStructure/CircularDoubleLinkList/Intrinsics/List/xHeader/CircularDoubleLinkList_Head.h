/**
 *
 * @file CircularDoubleLinkList_Head.h
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
 * @verbatim 11 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_INTRINSICS_LIST_XHEADER_CIRCULARDOUBLELINKLIST_HEAD_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_INTRINSICS_LIST_XHEADER_CIRCULARDOUBLELINKLIST_HEAD_H_

#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/xHeader/CircularDoubleLinkList_Struct.h>

CircularDoubleLinkListElement_TypeDef* CircularDoubleLinkList__psGetHead(const CircularDoubleLinkList_TypeDef*  const psList);
void CircularDoubleLinkList__vSetHead(CircularDoubleLinkList_TypeDef* psList, CircularDoubleLinkListElement_TypeDef* psHeadArg);
CircularDoubleLinkList_nSTATUS CircularDoubleLinkList__enIsHead(const CircularDoubleLinkList_TypeDef* const psList, const CircularDoubleLinkListElement_TypeDef* const psElement);





#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_INTRINSICS_LIST_XHEADER_CIRCULARDOUBLELINKLIST_HEAD_H_ */
