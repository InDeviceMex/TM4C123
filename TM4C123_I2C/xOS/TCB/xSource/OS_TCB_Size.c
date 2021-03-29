/**
 *
 * @file OS_TCB_Size.c
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
 * @verbatim Mar 23, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 23, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xOS/TCB/xHeader/OS_TCB_Size.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/xHeader/SLinkedList_Size.h>

uint32_t OS_TCB__u32GetSize(const OS_TCB_TypeDef* const psTCB)
{
    return SLinkedList__u32GetSize((const SLinkedList_TypeDef*) psTCB);
}

OS_TCB_nSTATUS OS_TCB__enIsEmpty(const OS_TCB_TypeDef* const psTCB)
{
    OS_TCB_nSTATUS enStatus = OS_TCB_enSTATUS_ERROR;
    uint32_t u32SizeReg = 0UL;
    u32SizeReg = SLinkedList__u32GetSize((const SLinkedList_TypeDef*) psTCB);

    if(u32SizeReg == 0UL)
    {
        enStatus = OS_TCB_enSTATUS_OK;
    }

    return enStatus;
}





