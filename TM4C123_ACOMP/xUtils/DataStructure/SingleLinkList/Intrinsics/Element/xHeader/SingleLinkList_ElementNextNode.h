/**
 *
 * @file SingleLinkList_ElementNextNode.h
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
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKLIST_INTRINSICS_ELEMENT_XHEADER_SINGLELINKLIST_ELEMENTNEXTNODE_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKLIST_INTRINSICS_ELEMENT_XHEADER_SINGLELINKLIST_ELEMENTNEXTNODE_H_

#include <xUtils/DataStructure/SingleLinkList/Intrinsics/xHeader/SingleLinkList_Struct.h>


SingleLinkListElement_TypeDef* SingleLinkList__psGetElementNextNode(const SingleLinkListElement_TypeDef* const psElement);
void SingleLinkList__vSetElementNextNode( SingleLinkListElement_TypeDef* psElement,  SingleLinkListElement_TypeDef* psNextElement);





#endif /* XUTILS_DATASTRUCTURE_SINGLELINKLIST_INTRINSICS_ELEMENT_XHEADER_SINGLELINKLIST_ELEMENTNEXTNODE_H_ */
