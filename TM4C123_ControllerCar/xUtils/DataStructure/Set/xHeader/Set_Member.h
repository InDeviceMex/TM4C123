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

uint32_t Set__u32GetNMember(const Set_TypeDef* pstSet, const void** pvData, uint32_t u32Members, uint32_t u32MaxSize);
uint32_t Set__u32GetAllMember(const Set_TypeDef* pstSet, const void** pvData, uint32_t u32MaxSize);
SetMember_TypeDef* Set__pstGetMember(const Set_TypeDef* pstSet, uint32_t u32Position, const void** pvData);
SetMember_TypeDef* Set__pstGetMemberHead(const Set_TypeDef* pstSet, const void** pvData);
SetMember_TypeDef* Set__pstGetMemberNext(const SetMember_TypeDef* pstMember, const void** pvData);

Set_nSTATUS Set__enIsMember(const Set_TypeDef* pstSet, const void* pvData);
SetMember_TypeDef* Set__pstIsMember(const Set_TypeDef* pstSet, const void* pvData);




#endif /* XUTILS_DATASTRUCTURE_SET_XHEADER_SET_MEMBER_H_ */
