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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/xHeader/SLinkedList_Size.h>

uint32_t Stack__u32GetSize(const Stack_TypeDef* const psStack)
{
    return SLinkedList__u32GetSize((const SLinkedList_TypeDef*) psStack);
}

Stack_nSTATUS Stack__enIsEmpty(const Stack_TypeDef* const psStack)
{
    Stack_nSTATUS enStatus = Stack_enSTATUS_ERROR;
    uint32_t u32SizeReg = 0UL;
    u32SizeReg = SLinkedList__u32GetSize((const SLinkedList_TypeDef*) psStack);

    if(u32SizeReg == 0UL)
    {
        enStatus = Stack_enSTATUS_OK;
    }

    return enStatus;
}

