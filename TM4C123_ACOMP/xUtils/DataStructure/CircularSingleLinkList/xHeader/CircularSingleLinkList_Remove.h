/**
 *
 * @file CircularSingleLinkList_Remove.h
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
 * @verbatim 10 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_XHEADER_CIRCULARSINGLELINKLIST_REMOVE_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_XHEADER_CIRCULARSINGLELINKLIST_REMOVE_H_

#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/xHeader/CircularSingleLinkList_Struct.h>

 CircularSingleLinkList_nSTATUS CircularSingleLinkList__enRemoveNext(CircularSingleLinkList_TypeDef* psList,CircularSingleLinkListElement_TypeDef* psElement, void** pvData);
 CircularSingleLinkList_nSTATUS CircularSingleLinkList__enRemove(CircularSingleLinkList_TypeDef* psList,CircularSingleLinkListElement_TypeDef* psElement, void** pvData);
 CircularSingleLinkList_nSTATUS CircularSingleLinkList__enRemoveBegin(CircularSingleLinkList_TypeDef* psList, void** pvData);
 CircularSingleLinkList_nSTATUS CircularSingleLinkList__enRemoveEnd(CircularSingleLinkList_TypeDef* psList, void** pvData);
 CircularSingleLinkList_nSTATUS  CircularSingleLinkList__enRemovePos(CircularSingleLinkList_TypeDef* psList,uint32_t u32Position, void** pvData);

#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_XHEADER_CIRCULARSINGLELINKLIST_REMOVE_H_ */
