/**
 *
 * @file SingleLinkList_Node.h
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
 * @verbatim 7 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKLIST_XHEADER_SINGLELINKLIST_NODE_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKLIST_XHEADER_SINGLELINKLIST_NODE_H_

#include <xUtils/DataStructure/SingleLinkList/Intrinsics/xHeader/SingleLinkList_Struct.h>

 uint32_t SingleLinkList__u32GetNNode(const SingleLinkList_TypeDef* psList, const void** pvData,uint32_t u32Nodes, uint32_t MaxLength);
 uint32_t SingleLinkList__u32GetAllNode(const SingleLinkList_TypeDef* psList, const void** pvData, uint32_t MaxLength);

 SingleLinkListElement_TypeDef*  SingleLinkList__psGetNodePos(const SingleLinkList_TypeDef* psList, uint32_t u32Position);
 SingleLinkListElement_TypeDef*  SingleLinkList__psGetNodeEnd(const SingleLinkList_TypeDef* psList);
 SingleLinkListElement_TypeDef*  SingleLinkList__psGetNodeBegin(const SingleLinkList_TypeDef* psList);

#endif /* XUTILS_DATASTRUCTURE_SINGLELINKLIST_XHEADER_SINGLELINKLIST_NODE_H_ */
