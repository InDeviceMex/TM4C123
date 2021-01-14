/**
 *
 * @file Stack_Size.c
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
 * @verbatim 12 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/Stack/xHeader/Stack_Size.h>
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/List/xHeader/SingleLinkList_Size.h>

uint32_t Stack__u32GetSize(const Stack_TypeDef* const psStack)
{
    return SingleLinkList__u32GetSize((const SingleLinkList_TypeDef*) psStack);
}

Stack_nSTATUS Stack__enIsEmpty(const Stack_TypeDef* const psStack)
{
    Stack_nSTATUS enStatus = Stack_enSTATUS_ERROR;
    uint32_t u32SizeReg = 0UL;
    u32SizeReg = SingleLinkList__u32GetSize((const SingleLinkList_TypeDef*) psStack);

    if(u32SizeReg == 0UL)
    {
        enStatus = Stack_enSTATUS_OK;
    }

    return enStatus;
}

