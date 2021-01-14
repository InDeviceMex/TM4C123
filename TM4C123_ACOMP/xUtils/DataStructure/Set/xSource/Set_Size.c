/**
 *
 * @file Set_Size.c
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
#include <xUtils/DataStructure/Set/xHeader/Set_Size.h>
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/List/xHeader/SingleLinkList_Size.h>

uint32_t Set__u32GetSize(const Set_TypeDef* const psSet)
{
    return SingleLinkList__u32GetSize((const SingleLinkList_TypeDef*) psSet);
}

Set_nSTATUS Set__enIsEmpty(const Set_TypeDef* const psSet)
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    uint32_t u32SizeReg = 0UL;
    u32SizeReg = SingleLinkList__u32GetSize((const SingleLinkList_TypeDef*) psSet);

    if(u32SizeReg == 0UL)
    {
        enStatus = Set_enSTATUS_OK;
    }

    return enStatus;
}


