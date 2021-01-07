/**
 *
 * @file SingleLinkList_ElementData.h
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
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKLIST_INTRINSICS_ELEMENT_XHEADER_SINGLELINKLIST_ELEMENTDATA_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKLIST_INTRINSICS_ELEMENT_XHEADER_SINGLELINKLIST_ELEMENTDATA_H_

#include <xUtils/DataStructure/SingleLinkList/Intrinsics/xHeader/SingleLinkList_Struct.h>

void* SingleLinkList__pvGetElementData(const SingleLinkListElement_TypeDef* const psElement);
void SingleLinkList__vSetElementData( SingleLinkListElement_TypeDef* psElement, void* pvDataArg);




#endif /* XUTILS_DATASTRUCTURE_SINGLELINKLIST_INTRINSICS_ELEMENT_XHEADER_SINGLELINKLIST_ELEMENTDATA_H_ */
