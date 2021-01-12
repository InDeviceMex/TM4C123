/**
 *
 * @file CircularSingleLinkList_Add.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_XHEADER_CIRCULARSINGLELINKLIST_ADD_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_XHEADER_CIRCULARSINGLELINKLIST_ADD_H_

#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/xHeader/CircularSingleLinkList_Struct.h>

 CircularSingleLinkListElement_TypeDef* CircularSingleLinkList__psAddNext(CircularSingleLinkList_TypeDef* psList, CircularSingleLinkListElement_TypeDef* psElement, void* pvData);
 CircularSingleLinkListElement_TypeDef*  CircularSingleLinkList__psAddEnd(CircularSingleLinkList_TypeDef* psList, void* pvData);
 CircularSingleLinkListElement_TypeDef*  CircularSingleLinkList__psAddBegin(CircularSingleLinkList_TypeDef* psList, void* pvData);
 CircularSingleLinkListElement_TypeDef*  CircularSingleLinkList__psAddPos(CircularSingleLinkList_TypeDef* psList, uint32_t u32Position, void* pvData);






#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_XHEADER_CIRCULARSINGLELINKLIST_ADD_H_ */