/**
 *
 * @file Set_Size.h
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
 * @verbatim 14 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_SET_XHEADER_SET_SIZE_H_
#define XUTILS_DATASTRUCTURE_SET_XHEADER_SET_SIZE_H_

#include <xUtils/DataStructure/Set/xHeader/Set_Struct.h>

uint32_t Set__u32GetSize(const Set_TypeDef* const psSet);
Set_nSTATUS Set__enIsEmpty(const Set_TypeDef* const psSet);





#endif /* XUTILS_DATASTRUCTURE_SET_XHEADER_SET_SIZE_H_ */
