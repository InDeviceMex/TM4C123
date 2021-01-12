/**
 *
 * @file CircularSingleLinkList_ElementData.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARSINGLELINKLIST_ELEMENTDATA_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARSINGLELINKLIST_ELEMENTDATA_H_

#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/xHeader/CircularSingleLinkList_Struct.h>

void* CircularSingleLinkList__pvGetElementData(const CircularSingleLinkListElement_TypeDef* const psElement);
void CircularSingleLinkList__vSetElementData( CircularSingleLinkListElement_TypeDef* psElement, void* pvDataArg);






#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARSINGLELINKLIST_ELEMENTDATA_H_ */
