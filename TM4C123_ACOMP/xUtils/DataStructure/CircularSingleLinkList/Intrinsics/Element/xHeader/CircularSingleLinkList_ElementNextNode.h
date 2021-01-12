/**
 *
 * @file CircularSingleLinkList_ElementNextNode.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARSINGLELINKLIST_ELEMENTNEXTNODE_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARSINGLELINKLIST_ELEMENTNEXTNODE_H_


#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/xHeader/CircularSingleLinkList_Struct.h>


CircularSingleLinkListElement_TypeDef* CircularSingleLinkList__psGetElementNextNode(const CircularSingleLinkListElement_TypeDef* const psElement);
void CircularSingleLinkList__vSetElementNextNode( CircularSingleLinkListElement_TypeDef* psElement,  CircularSingleLinkListElement_TypeDef* psNextElement);




#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARSINGLELINKLIST_ELEMENTNEXTNODE_H_ */
