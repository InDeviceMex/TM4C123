/**
 *
 * @file DoubleLinkList_Add.h
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
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKLIST_XHEADER_DOUBLELINKLIST_ADD_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKLIST_XHEADER_DOUBLELINKLIST_ADD_H_

#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/xHeader/DoubleLinkList_Struct.h>

 DoubleLinkListElement_TypeDef* DoubleLinkList__psAddNext(DoubleLinkList_TypeDef* psList, DoubleLinkListElement_TypeDef* psElement, void* pvData);
 DoubleLinkListElement_TypeDef* DoubleLinkList__psAddPrevious(DoubleLinkList_TypeDef* psList, DoubleLinkListElement_TypeDef* psElement, void* pvData);
 DoubleLinkListElement_TypeDef*  DoubleLinkList__psAddEnd(DoubleLinkList_TypeDef* psList, void* pvData);
 DoubleLinkListElement_TypeDef*  DoubleLinkList__psAddBegin(DoubleLinkList_TypeDef* psList, void* pvData);
 DoubleLinkListElement_TypeDef*  DoubleLinkList__psAddPos(DoubleLinkList_TypeDef* psList, uint32_t u32Position, void* pvData);



#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKLIST_XHEADER_DOUBLELINKLIST_ADD_H_ */
