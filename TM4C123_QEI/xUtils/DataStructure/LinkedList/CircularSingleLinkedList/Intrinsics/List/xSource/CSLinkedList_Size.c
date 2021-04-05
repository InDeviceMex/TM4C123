/**
 *
 * @file CSLinkedList_Size.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/List/xHeader/CSLinkedList_Size.h>
#include <stdlib.h>


uint32_t CSLinkedList__u32GetSize(const CSLinkedList_TypeDef* const psList)
{
    uint32_t u32SizeReg = 0UL;
    u32SizeReg = psList->u32Size;
    return u32SizeReg;

}

void CSLinkedList__vSetSize(CSLinkedList_TypeDef*  psList, uint32_t u32SizeArg)
{
    psList->u32Size = u32SizeArg;
}




