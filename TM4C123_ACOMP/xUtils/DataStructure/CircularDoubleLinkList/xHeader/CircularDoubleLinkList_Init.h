/**
 *
 * @file CircularDoubleLinkList_Init.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_XHEADER_CIRCULARDOUBLELINKLIST_INIT_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_XHEADER_CIRCULARDOUBLELINKLIST_INIT_H_

#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/xHeader/CircularDoubleLinkList_Struct.h>

CircularDoubleLinkList_TypeDef* CircularDoubleLinkList__psInit( void  (*pfvDestroyElementDataArg)(void *DataContainer));
CircularDoubleLinkList_nSTATUS CircularDoubleLinkList__enInit( CircularDoubleLinkList_TypeDef* psList ,void  (*pfvDestroyElementDataArg)(void *DataContainer));





#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_XHEADER_CIRCULARDOUBLELINKLIST_INIT_H_ */
