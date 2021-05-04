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

uint32_t Shot__u32Move(Shot_TypeDef* pstShotArg)
{
    uint32_t u32State = 0UL;
    Shot__vErase(pstShotArg);
    pstShotArg->u32Ypos--;
    if(pstShotArg->u32Ypos <= FRAME_ROW_WORKING_INIT)
    {
        u32State = 1UL;
    }
    else
    {
        Shot__vDraw(pstShotArg);
    }
    return u32State;
}

uint32_t Shot__u32CheckToLimit(DLinkedList_TypeDef* pstShotDLinkedListArg)
{
    uint32_t u32DeletedCant = 0UL;
    uint32_t u32DeleteShot = 0UL;
    Shot_TypeDef* pstShotGeneric = (Shot_TypeDef*) 0UL;
    DLinkedListElement_TypeDef* pstShotIterator = (DLinkedListElement_TypeDef*) 0UL;
    DLinkedListElement_TypeDef* pstShotIteratorTemp = (DLinkedListElement_TypeDef*) 0UL;
    DLinkedListElement_TypeDef* pstShotDeletedPointer = (DLinkedListElement_TypeDef*) 0UL;
    static DLinkedListElement_TypeDef stShotDeleted = {0UL};
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    pstShotDeletedPointer = &stShotDeleted;

    pstShotIterator = DLinkedList__pstGetHead(pstShotDLinkedListArg);
    while(0UL != (uint32_t) pstShotIterator)
    {
        pstShotGeneric = (Shot_TypeDef*) DLinkedList__pvGetElementData(pstShotIterator);
        u32DeleteShot = Shot__u32Move(pstShotGeneric);
        if(1UL == u32DeleteShot)
        {
            pstShotIteratorTemp = DLinkedList__pstGetElementNextNode(pstShotIterator);
            enStatus = DLinkedList__enRemove(pstShotDLinkedListArg, pstShotIterator, (void**) &pstShotDeletedPointer);
            if(DLinkedList_enSTATUS_OK == enStatus)
            {
                u32DeletedCant++;
                Shot__vDestructor(pstShotDeletedPointer);
            }
            pstShotIterator = pstShotIteratorTemp;
        }
        else
        {
            pstShotIterator = DLinkedList__pstGetElementNextNode(pstShotIterator);
        }
    }
    return u32DeletedCant;
}
