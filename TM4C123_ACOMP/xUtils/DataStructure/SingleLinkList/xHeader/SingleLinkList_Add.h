/**
 *
 * @file SingleLinkList_Add.h
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
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKLIST_XHEADER_SINGLELINKLIST_ADD_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKLIST_XHEADER_SINGLELINKLIST_ADD_H_

#include <xUtils/DataStructure/SingleLinkList/Intrinsics/xHeader/SingleLinkList_Struct.h>

 SingleLinkListElement_TypeDef* SingleLinkList__psAddNext(SingleLinkList_TypeDef* psList, SingleLinkListElement_TypeDef* psElement, void* pvData);
 SingleLinkListElement_TypeDef*  SingleLinkList__psAddEnd(SingleLinkList_TypeDef* psList, void* pvData);
 SingleLinkListElement_TypeDef*  SingleLinkList__psAddBegin(SingleLinkList_TypeDef* psList, void* pvData);
 SingleLinkListElement_TypeDef*  SingleLinkList__psAddPos(SingleLinkList_TypeDef* psList, uint32_t u32Position, void* pvData);



#endif /* XUTILS_DATASTRUCTURE_SINGLELINKLIST_XHEADER_SINGLELINKLIST_ADD_H_ */
