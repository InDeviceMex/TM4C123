/**
 *
 * @file DoubleLinkList_Init.h
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
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKLIST_XHEADER_DOUBLELINKLIST_INIT_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKLIST_XHEADER_DOUBLELINKLIST_INIT_H_


#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/xHeader/DoubleLinkList_Struct.h>

DoubleLinkList_TypeDef* DoubleLinkList__psInit( void  (*pfvDestroyElementDataArg)(void *DataContainer));
DoubleLinkList_nSTATUS DoubleLinkList__enInit( DoubleLinkList_TypeDef* psList ,void  (*pfvDestroyElementDataArg)(void *DataContainer));






#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKLIST_XHEADER_DOUBLELINKLIST_INIT_H_ */
