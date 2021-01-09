/**
 *
 * @file SingleLinkList_Data.h
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
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKLIST_XHEADER_SINGLELINKLIST_DATA_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKLIST_XHEADER_SINGLELINKLIST_DATA_H_

#include <xUtils/DataStructure/SingleLinkList/Intrinsics/xHeader/SingleLinkList_Struct.h>

 void*  SingleLinkList__pvGetNodeDataPos(const SingleLinkList_TypeDef* psList, uint32_t u32Position);
 void*  SingleLinkList__pvGetNodeDataEnd(const SingleLinkList_TypeDef* psList);
 void*  SingleLinkList__pvGetNodeDataBegin(const SingleLinkList_TypeDef* psList);




#endif /* XUTILS_DATASTRUCTURE_SINGLELINKLIST_XHEADER_SINGLELINKLIST_DATA_H_ */
