/**
 *
 * @file DoubleLinkList_Remove.h
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
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKLIST_XHEADER_DOUBLELINKLIST_REMOVE_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKLIST_XHEADER_DOUBLELINKLIST_REMOVE_H_

#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/xHeader/DoubleLinkList_Struct.h>

 DoubleLinkList_nSTATUS DoubleLinkList__enRemove(DoubleLinkList_TypeDef* psList,DoubleLinkListElement_TypeDef* psElement, void** pvData);
 DoubleLinkList_nSTATUS DoubleLinkList__enRemoveNext(DoubleLinkList_TypeDef* psList,const DoubleLinkListElement_TypeDef* psElement, void** pvData);
 DoubleLinkList_nSTATUS DoubleLinkList__enRemovePrevious(DoubleLinkList_TypeDef* psList, const DoubleLinkListElement_TypeDef* psElement, void** pvData);
 DoubleLinkList_nSTATUS DoubleLinkList__enRemoveBegin(DoubleLinkList_TypeDef* psList, void** pvData);
 DoubleLinkList_nSTATUS DoubleLinkList__enRemoveEnd(DoubleLinkList_TypeDef* psList, void** pvData);
 DoubleLinkList_nSTATUS  DoubleLinkList__enRemovePos(DoubleLinkList_TypeDef* psList,uint32_t u32Position, void** pvData);





#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKLIST_XHEADER_DOUBLELINKLIST_REMOVE_H_ */
