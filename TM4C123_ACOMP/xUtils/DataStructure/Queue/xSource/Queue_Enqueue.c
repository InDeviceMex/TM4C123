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
#include <xUtils/DataStructure/SingleLinkList/xHeader/SingleLinkList_Add.h>

Queue_nSTATUS Queue__enEnqueue(const Queue_TypeDef* const psQueue, void* pvData)
{
    Queue_nSTATUS enStatus = Queue_enSTATUS_ERROR;
    SingleLinkListElement_TypeDef* psNewElement = (SingleLinkListElement_TypeDef*) 0UL ;
    psNewElement =  SingleLinkList__psAddEnd((SingleLinkList_TypeDef*) psQueue, pvData);
    if(0UL != (uint32_t)psNewElement)
    {
        enStatus = Queue_enSTATUS_OK;
    }
    return enStatus;
}


