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
#include <xUtils/DataStructure/SingleLinkList/xHeader/SingleLinkList_Remove.h>

Stack_nSTATUS Stack__enPop(Stack_TypeDef* psStack, void** pvData)
{
    return (Stack_nSTATUS ) SingleLinkList__enRemoveBegin((SingleLinkList_TypeDef*) psStack, pvData);
}


