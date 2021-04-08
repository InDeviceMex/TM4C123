/**
 *
 * @file OS_TCB_Init.c
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
#include <xOS/TCB/xHeader/OS_TCB_Init.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Init.h>

OS_TCB_TypeDef* OS_TCB__psInit(void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    return (OS_TCB_TypeDef*)SLinkedList__psInit(pfvDestroyElementDataArg);
}

OS_TCB_nSTATUS OS_TCB__enInit(OS_TCB_TypeDef* psTCB, void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    return (OS_TCB_nSTATUS) SLinkedList__enInit( (SLinkedList_TypeDef*) psTCB, pfvDestroyElementDataArg);
}

