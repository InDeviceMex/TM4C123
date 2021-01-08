/**
 *
 * @file DoubleLinkList_ElementNextNode.h
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
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKLIST_INTRINSICS_ELEMENT_XHEADER_DOUBLELINKLIST_ELEMENTNEXTNODE_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKLIST_INTRINSICS_ELEMENT_XHEADER_DOUBLELINKLIST_ELEMENTNEXTNODE_H_

#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/xHeader/DoubleLinkList_Struct.h>


DoubleLinkListElement_TypeDef* DoubleLinkList__psGetElementNextNode(const DoubleLinkListElement_TypeDef* const psElement);
void DoubleLinkList__vSetElementNextNode( DoubleLinkListElement_TypeDef* psElement,  DoubleLinkListElement_TypeDef* psNextElement);





#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKLIST_INTRINSICS_ELEMENT_XHEADER_DOUBLELINKLIST_ELEMENTNEXTNODE_H_ */
