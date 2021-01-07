/**
 *
 * @file SingleLinkList_Init.h
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
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKLIST_XHEADER_SINGLELINKLIST_INIT_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKLIST_XHEADER_SINGLELINKLIST_INIT_H_

#include <xUtils/DataStructure/SingleLinkList/Intrinsics/xHeader/SingleLinkList_Struct.h>

SingleLinkList_TypeDef* SingleLinkList__psInit( void  (*pfvDestroyElementDataArg)(void *DataContainer));
SingleLinkList_nSTATUS SingleLinkList__enInit( SingleLinkList_TypeDef* psList ,void  (*pfvDestroyElementDataArg)(void *DataContainer));


#endif /* XUTILS_DATASTRUCTURE_SINGLELINKLIST_XHEADER_SINGLELINKLIST_INIT_H_ */
