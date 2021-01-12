/**
 *
 * @file CircularCircularDoubleLinkList_Remove.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_XHEADER_CIRCULARDOUBLELINKLIST_REMOVE_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_XHEADER_CIRCULARDOUBLELINKLIST_REMOVE_H_

#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/xHeader/CircularDoubleLinkList_Struct.h>

 CircularDoubleLinkList_nSTATUS CircularDoubleLinkList__enRemove(CircularDoubleLinkList_TypeDef* psList,CircularDoubleLinkListElement_TypeDef* psElement, void** pvData);
 CircularDoubleLinkList_nSTATUS CircularDoubleLinkList__enRemoveNext(CircularDoubleLinkList_TypeDef* psList,const CircularDoubleLinkListElement_TypeDef* psElement, void** pvData);
 CircularDoubleLinkList_nSTATUS CircularDoubleLinkList__enRemovePrevious(CircularDoubleLinkList_TypeDef* psList, const CircularDoubleLinkListElement_TypeDef* psElement, void** pvData);
 CircularDoubleLinkList_nSTATUS CircularDoubleLinkList__enRemoveBegin(CircularDoubleLinkList_TypeDef* psList, void** pvData);
 CircularDoubleLinkList_nSTATUS CircularDoubleLinkList__enRemoveEnd(CircularDoubleLinkList_TypeDef* psList, void** pvData);
 CircularDoubleLinkList_nSTATUS  CircularDoubleLinkList__enRemovePos(CircularDoubleLinkList_TypeDef* psList,uint32_t u32Position, void** pvData);





#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_XHEADER_CIRCULARDOUBLELINKLIST_REMOVE_H_ */
