/**
 *
 * @file CircularDoubleLinkList_ElementPreviousNode.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARDOUBLELINKLIST_ELEMENTPREVIOUSNODE_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARDOUBLELINKLIST_ELEMENTPREVIOUSNODE_H_

#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/xHeader/CircularDoubleLinkList_Struct.h>


CircularDoubleLinkListElement_TypeDef* CircularDoubleLinkList__psGetElementPreviousNode(const CircularDoubleLinkListElement_TypeDef* const psElement);
void CircularDoubleLinkList__vSetElementPreviousNode( CircularDoubleLinkListElement_TypeDef* psElement,  CircularDoubleLinkListElement_TypeDef* psPreviousElement);






#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARDOUBLELINKLIST_ELEMENTPREVIOUSNODE_H_ */
