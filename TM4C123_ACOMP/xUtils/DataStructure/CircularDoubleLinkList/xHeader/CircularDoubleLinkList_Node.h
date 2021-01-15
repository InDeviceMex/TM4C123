/**
 *
 * @file CircularDoubleLinkList_Node.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_XHEADER_CIRCULARDOUBLELINKLIST_NODE_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_XHEADER_CIRCULARDOUBLELINKLIST_NODE_H_


#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/xHeader/CircularDoubleLinkList_Struct.h>

 uint32_t CircularDoubleLinkList__u32GetAllNode(const CircularDoubleLinkList_TypeDef* psList, const void** pvData, uint32_t MaxLength);
 uint32_t CircularDoubleLinkList__u32GetAllNodeBackward(const CircularDoubleLinkList_TypeDef* psList, const void** pvData, uint32_t MaxLength);
 uint32_t CircularDoubleLinkList__u32GetNNode(const CircularDoubleLinkList_TypeDef* psList, const void** pvData,uint32_t u32Nodes, uint32_t MaxLength);
 uint32_t CircularDoubleLinkList__u32GetNNodeBackward(const CircularDoubleLinkList_TypeDef* psList, const void** pvData,uint32_t u32Nodes, uint32_t MaxLength);

 CircularDoubleLinkListElement_TypeDef*  CircularDoubleLinkList__psGetNodePos(const CircularDoubleLinkList_TypeDef* psList, uint32_t u32Position);
 CircularDoubleLinkListElement_TypeDef*  CircularDoubleLinkList__psGetNodeEnd(const CircularDoubleLinkList_TypeDef* psList);
 CircularDoubleLinkListElement_TypeDef*  CircularDoubleLinkList__psGetNodeBegin(const CircularDoubleLinkList_TypeDef* psList);





#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_XHEADER_CIRCULARDOUBLELINKLIST_NODE_H_ */
