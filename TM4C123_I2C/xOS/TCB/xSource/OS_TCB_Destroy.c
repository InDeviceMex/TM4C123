/**
 *
 * @file OS_TCB_Destroy.c
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
#include <xOS/TCB/xHeader/OS_TCB_Destroy.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Destroy.h>

void OS_TCB__vDestroy(OS_TCB_TypeDef* psTCB)
{
    SLinkedList__vDestroy( (SLinkedList_TypeDef*) psTCB);
}





