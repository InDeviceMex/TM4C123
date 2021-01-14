/**
 *
 * @file Set_Member.h
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
#ifndef XUTILS_DATASTRUCTURE_SET_XHEADER_SET_MEMBER_H_
#define XUTILS_DATASTRUCTURE_SET_XHEADER_SET_MEMBER_H_

#include <xUtils/DataStructure/Set/xHeader/Set_Struct.h>

Set_nSTATUS Set__enIsMember(const Set_TypeDef* psSet, const void* pvData);
SetMember_TypeDef* Set__psIsMember(const Set_TypeDef* psSet, const void* pvData);




#endif /* XUTILS_DATASTRUCTURE_SET_XHEADER_SET_MEMBER_H_ */
