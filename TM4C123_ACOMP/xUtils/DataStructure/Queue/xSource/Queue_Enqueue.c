/**
 *
 * @file Queue_Enqueue.c
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
#include <xUtils/DataStructure/Queue/xHeader/Queue_Enqueue.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Add.h>

Queue_nSTATUS Queue__enEnqueue(Queue_TypeDef* psQueue, void* pvData)
{
    Queue_nSTATUS enStatus = Queue_enSTATUS_ERROR;
    SLinkedListElement_TypeDef* psNewElement = (SLinkedListElement_TypeDef*) 0UL ;
    psNewElement = SLinkedList__psAddEnd((SLinkedList_TypeDef*) psQueue, pvData);
    if(0UL != (uint32_t) psNewElement)
    {
        enStatus = Queue_enSTATUS_OK;
    }
    return enStatus;
}


