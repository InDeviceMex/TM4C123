/**
 *
 * @file DoubleLinkList_Node.h
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
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKLIST_XHEADER_DOUBLELINKLIST_NODE_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKLIST_XHEADER_DOUBLELINKLIST_NODE_H_

#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/xHeader/DoubleLinkList_Struct.h>

 uint32_t DoubleLinkList__u32GetAllNode(const DoubleLinkList_TypeDef* psList, const void** pvData, uint32_t MaxLength);
 uint32_t DoubleLinkList__u32GetAllNodeBackward(const DoubleLinkList_TypeDef* psList, const void** pvData, uint32_t MaxLength);
 uint32_t DoubleLinkList__u32GetNNodeBackward(const DoubleLinkList_TypeDef* psList, const void** pvData,uint32_t u32Nodes, uint32_t MaxLength);
 uint32_t DoubleLinkList__u32GetNNode(const DoubleLinkList_TypeDef* psList, const void** pvData,uint32_t u32Nodes, uint32_t MaxLength);

 DoubleLinkListElement_TypeDef*  DoubleLinkList__psGetNodePos(const DoubleLinkList_TypeDef* psList, uint32_t u32Position);
 DoubleLinkListElement_TypeDef*  DoubleLinkList__psGetNodeEnd(const DoubleLinkList_TypeDef* psList);
 DoubleLinkListElement_TypeDef*  DoubleLinkList__psGetNodeBegin(const DoubleLinkList_TypeDef* psList);




#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKLIST_XHEADER_DOUBLELINKLIST_NODE_H_ */
