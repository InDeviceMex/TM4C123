/**
 *
 * @file CircularSingleLinkList_Init.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_XHEADER_CIRCULARSINGLELINKLIST_INIT_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_XHEADER_CIRCULARSINGLELINKLIST_INIT_H_


#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/xHeader/CircularSingleLinkList_Struct.h>

CircularSingleLinkList_TypeDef* CircularSingleLinkList__psInit( void  (*pfvDestroyElementDataArg)(void *DataContainer));
CircularSingleLinkList_nSTATUS CircularSingleLinkList__enInit( CircularSingleLinkList_TypeDef* psList ,void  (*pfvDestroyElementDataArg)(void *DataContainer));





#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_XHEADER_CIRCULARSINGLELINKLIST_INIT_H_ */
