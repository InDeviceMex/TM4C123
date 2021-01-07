/**
 *
 * @file SingleLinkList_Size.h
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
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKLIST_INTRINSICS_LIST_XHEADER_SINGLELINKLIST_SIZE_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKLIST_INTRINSICS_LIST_XHEADER_SINGLELINKLIST_SIZE_H_

#include <xUtils/DataStructure/SingleLinkList/Intrinsics/xHeader/SingleLinkList_Struct.h>

uint32_t SingleLinkList__u32GetSize(const SingleLinkList_TypeDef* const psList);
void SingleLinkList__vSetSize(SingleLinkList_TypeDef*  psList, uint32_t u32SizeArg);

#endif /* XUTILS_DATASTRUCTURE_SINGLELINKLIST_INTRINSICS_LIST_XHEADER_SINGLELINKLIST_SIZE_H_ */
