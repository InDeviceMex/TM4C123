/**
 *
 * @file Stack_Peek.c
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
#include <xUtils/DataStructure/Stack/xHeader/Stack_Peek.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Data.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Node.h>

void * Stack__pvPeek(const Stack_TypeDef* const psStack)
{
    return SLinkedList__pvGetNodeDataBegin((const SLinkedList_TypeDef*)psStack);
}

uint32_t Stack__u32GetNMember(const Stack_TypeDef* psStack, const void** pvData, uint32_t u32Members, uint32_t u32MaxSize)
{
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t)0UL != (uint32_t)psStack) && ((uint32_t)0UL != (uint32_t)pvData )&& (0UL != u32Members )&& (0UL != u32MaxSize ))
    {
        u32SizeReg = SLinkedList__u32GetNNode((const SLinkedList_TypeDef*)psStack, pvData, u32Members, u32MaxSize);
    }
    return u32SizeReg;
}

uint32_t Stack__u32GetAllMember(const Stack_TypeDef* psStack, const void** pvData, uint32_t u32MaxSize)
{
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t)0UL != (uint32_t)psStack) && ((uint32_t)0UL != (uint32_t)pvData ) && ((uint32_t)0UL != u32MaxSize ))
    {
        u32SizeReg = SLinkedList__u32GetAllNode((const SLinkedList_TypeDef*)psStack, pvData, u32MaxSize);
    }
    return u32SizeReg;
}

