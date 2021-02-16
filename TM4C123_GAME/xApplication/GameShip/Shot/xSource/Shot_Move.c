/**
 *
 * @file Shot_Move.c
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
 * @verbatim 12 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication/GameShip/Shot/xHeader/Shot_Move.h>

#include <xApplication/GameShip/Shot/xHeader/Shot_Constructor.h>
#include <xApplication/GameShip/Shot/xHeader/Shot_Erase.h>
#include <xApplication/GameShip/Shot/xHeader/Shot_Draw.h>
#include <xApplication/GameShip/Frame/Frame.h>
#include <xDriver_MCU/UART/App/GraphicTerminal/GraphicTerminal.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/DoubleLinkedList.h>
#include <stdlib.h>

uint32_t Shot__u32Move(Shot_TypeDef* psShotArg)
{
    uint32_t u32State = 0UL;
    Shot__vErase(psShotArg);
    psShotArg->u32Ypos--;
    if(psShotArg->u32Ypos <= FRAME_ROW_WORKING_INIT)
    {
        u32State = 1UL;
    }
    else
    {
        Shot__vDraw(psShotArg);
    }
    return u32State;
}

uint32_t Shot__u32CheckToLimit(DLinkedList_TypeDef* psShotDLinkedListArg)
{
    uint32_t u32DeletedCant = 0UL;
    uint32_t u32DeleteShot = 0UL;
    Shot_TypeDef* psShotGeneric = (Shot_TypeDef*) 0UL;
    DLinkedListElement_TypeDef* psShotIterator = (DLinkedListElement_TypeDef*) 0UL;
    DLinkedListElement_TypeDef* psShotIteratorTemp = (DLinkedListElement_TypeDef*) 0UL;
    DLinkedListElement_TypeDef* psShotDeletedPointer = (DLinkedListElement_TypeDef*) 0UL;
    static DLinkedListElement_TypeDef sShotDeleted = {0UL};
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    psShotDeletedPointer = &sShotDeleted;

    psShotIterator = DLinkedList__psGetHead(psShotDLinkedListArg);
    while(0UL != (uint32_t) psShotIterator)
    {
        psShotGeneric = (Shot_TypeDef*) DLinkedList__pvGetElementData(psShotIterator);
        u32DeleteShot = Shot__u32Move(psShotGeneric);
        if(1UL == u32DeleteShot)
        {
            psShotIteratorTemp = DLinkedList__psGetElementNextNode(psShotIterator);
            enStatus = DLinkedList__enRemove(psShotDLinkedListArg, psShotIterator, (void**) &psShotDeletedPointer);
            if(DLinkedList_enSTATUS_OK == enStatus)
            {
                u32DeletedCant++;
                Shot__vDestructor(psShotDeletedPointer);
            }
            psShotIterator = psShotIteratorTemp;
        }
        else
        {
            psShotIterator = DLinkedList__psGetElementNextNode(psShotIterator);
        }
    }
    return u32DeletedCant;
}
