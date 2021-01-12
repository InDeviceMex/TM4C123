/**
 *
 * @file DoubleLinkList_Data.h
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
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKLIST_XHEADER_DOUBLELINKLIST_DATA_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKLIST_XHEADER_DOUBLELINKLIST_DATA_H_

#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/xHeader/DoubleLinkList_Struct.h>

 void*  DoubleLinkList__pvGetNodeDataPos(const DoubleLinkList_TypeDef* psList, uint32_t u32Position);
 void*  DoubleLinkList__pvGetNodeDataEnd(const DoubleLinkList_TypeDef* psList);
 void*  DoubleLinkList__pvGetNodeDataBegin(const DoubleLinkList_TypeDef* psList);






#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKLIST_XHEADER_DOUBLELINKLIST_DATA_H_ */