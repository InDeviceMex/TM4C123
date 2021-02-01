/**
 *
 * @file Stack_Init.c
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

#include <xUtils/DataStructure/Stack/xHeader/Stack_Init.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Init.h>

Stack_TypeDef* Stack__psInit( void    (*pfvDestroyElementDataArg) (void *DataContainer))
{
    return (Stack_TypeDef*)SLinkedList__psInit(  pfvDestroyElementDataArg);
}

Stack_nSTATUS Stack__enInit( Stack_TypeDef* psStack ,void    (*pfvDestroyElementDataArg) (void *DataContainer))
{
    return (Stack_nSTATUS) SLinkedList__enInit( (SLinkedList_TypeDef*) psStack ,pfvDestroyElementDataArg);
}
