/**
 *
 * @file CircularSingleLinkList_Data.h
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
 * @verbatim 10 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_XHEADER_CIRCULARSINGLELINKLIST_DATA_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_XHEADER_CIRCULARSINGLELINKLIST_DATA_H_


#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/xHeader/CircularSingleLinkList_Struct.h>

void*  CircularSingleLinkList__pvGetNodeDataPos(const CircularSingleLinkList_TypeDef* psList, uint32_t u32Position);
void*  CircularSingleLinkList__pvGetNodeDataEnd(const CircularSingleLinkList_TypeDef* psList);
void*  CircularSingleLinkList__pvGetNodeDataBegin(const CircularSingleLinkList_TypeDef* psList);





#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_XHEADER_CIRCULARSINGLELINKLIST_DATA_H_ */
