/**
 *
 * @file CircularDoubleLinkList_Add.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_XHEADER_CIRCULARDOUBLELINKLIST_ADD_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_XHEADER_CIRCULARDOUBLELINKLIST_ADD_H_

#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/xHeader/CircularDoubleLinkList_Struct.h>

 CircularDoubleLinkListElement_TypeDef* CircularDoubleLinkList__psAddNext(CircularDoubleLinkList_TypeDef* psList, CircularDoubleLinkListElement_TypeDef* psElement, void* pvData);
 CircularDoubleLinkListElement_TypeDef* CircularDoubleLinkList__psAddPrevious(CircularDoubleLinkList_TypeDef* psList, CircularDoubleLinkListElement_TypeDef* psElement, void* pvData);
 CircularDoubleLinkListElement_TypeDef*  CircularDoubleLinkList__psAddEnd(CircularDoubleLinkList_TypeDef* psList, void* pvData);
 CircularDoubleLinkListElement_TypeDef*  CircularDoubleLinkList__psAddBegin(CircularDoubleLinkList_TypeDef* psList, void* pvData);
 CircularDoubleLinkListElement_TypeDef*  CircularDoubleLinkList__psAddPos(CircularDoubleLinkList_TypeDef* psList, uint32_t u32Position, void* pvData);




#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_XHEADER_CIRCULARDOUBLELINKLIST_ADD_H_ */
