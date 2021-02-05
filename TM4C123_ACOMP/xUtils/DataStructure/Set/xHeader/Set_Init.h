/**
 *
 * @file Set_Init.h
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
 * @verbatim 13 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_SET_XHEADER_SET_INIT_H_
#define XUTILS_DATASTRUCTURE_SET_XHEADER_SET_INIT_H_

#include <xUtils/DataStructure/Set/xHeader/Set_Struct.h>

Set_TypeDef* Set__psInit(uint32_t (*pfu32MatchArg) (const void *pcvKey1, const void *pcvKey2),void (*pfvDestroyElementDataArg) (void *DataContainer));
Set_nSTATUS Set__enInit(Set_TypeDef* psSet ,uint32_t (*pfu32MatchArg) (const void *pcvKey1, const void *pcvKey2), void (*pfvDestroyElementDataArg) (void *DataContainer));

#endif /* XUTILS_DATASTRUCTURE_SET_XHEADER_SET_INIT_H_ */
