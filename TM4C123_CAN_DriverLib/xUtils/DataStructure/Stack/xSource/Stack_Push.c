/**
 *
 * @file Stack_Push.c
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

#include <xUtils/DataStructure/Stack/xHeader/Stack_Push.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Add.h>

Stack_nSTATUS Stack__enPush(Stack_TypeDef* pstStack, void* pvData)
{
    Stack_nSTATUS enStatus = Stack_enSTATUS_ERROR;
    SLinkedListElement_TypeDef* pstNewElement = (SLinkedListElement_TypeDef*) 0UL ;
    pstNewElement = SLinkedList__pstAddBegin((SLinkedList_TypeDef*) pstStack, pvData);
    if(0UL != (uint32_t) pstNewElement)
    {
        enStatus = Stack_enSTATUS_OK;
    }
    return enStatus;
}

