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
#include <xUtils/DataStructure/SingleLinkList/xHeader/SingleLinkList_Add.h>

Stack_nSTATUS Stack__enPush(const Stack_TypeDef* const psStack, void* pvData)
{
    Stack_nSTATUS enStatus = Stack_enSTATUS_ERROR;
    SingleLinkListElement_TypeDef* psNewElement = (SingleLinkListElement_TypeDef*) 0UL ;
    psNewElement =  SingleLinkList__psAddBegin((SingleLinkList_TypeDef*) psStack, pvData);
    if(0UL != (uint32_t)psNewElement)
    {
        enStatus = Stack_enSTATUS_OK;
    }
    return enStatus;
}

