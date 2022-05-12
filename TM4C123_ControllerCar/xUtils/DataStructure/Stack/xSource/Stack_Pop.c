/**
 *
 * @file Stack_Pop.c
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
#include <xUtils/DataStructure/Stack/xHeader/Stack_Pop.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Remove.h>

Stack_nSTATUS Stack__enPop(Stack_TypeDef* pstStack, void** pvData)
{
    return (Stack_nSTATUS ) SLinkedList__enRemoveBegin((SLinkedList_TypeDef*) pstStack, pvData);
}


