/**
 *
 * @file CHashTable_Remove.c
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
 * @verbatim 15 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/HashTable/ChainedHashTable/xHeader/CHashTable_Remove.h>
#include <xUtils/DataStructure/HashTable/ChainedHashTable/xHeader/CHashTable_Lookup.h>
#include <xUtils/DataStructure/HashTable/ChainedHashTable/xHeader/CHashTable_Size.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Add.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/SLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Element/SLinkedList_Element.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Remove.h>

CHashTable_nSTATUS CHashTable__enRemove(CHashTable_TypeDef* psCHashTable, void** pvData)
{
    SLinkedList_TypeDef *psList = (SLinkedList_TypeDef*) 0UL;
    SLinkedListElement_TypeDef *psElement = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef *psPreviousElement = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef *psElementNext = (SLinkedListElement_TypeDef*) 0UL;
    void *pvElementData = (void*) 0UL;

    uint32_t u32BucketNum = 0UL;
    uint32_t u32BucketsSize = 0UL;
    uint32_t u32SizeReg = 0UL;
    CHashTable_nSTATUS enMatchResult = CHashTable_enSTATUS_ERROR;
    SLinkedList_nSTATUS enRemoveResult = SLinkedList_enSTATUS_ERROR;

    if(((uint32_t)0UL != (uint32_t)psCHashTable) && ((uint32_t)0UL != (uint32_t)pvData) )
    {
        u32BucketsSize = psCHashTable->u32Buckets;
        u32BucketNum = psCHashTable->pfu32HashFunction(*pvData);
        u32BucketNum %= u32BucketsSize;

        psList = psCHashTable->psTable;
        psList += u32BucketNum;
        psElement = SLinkedList__psGetHead(psList);
        while((uint32_t)0UL != psElement)
        {
            pvElementData = SLinkedList__pvGetElementData(psElement);
            enMatchResult = (CHashTable_nSTATUS) psCHashTable->pfu32Match((const void*)*pvData,(const void*)pvElementData);
            if(CHashTable_enSTATUS_OK == enMatchResult)
            {
                enRemoveResult = SLinkedList__enRemoveNext(psList, psPreviousElement, pvData);
                if( SLinkedList_enSTATUS_OK== enRemoveResult)
                {
                    u32SizeReg = CHashTable__u32GetSize(psCHashTable);
                    u32SizeReg--;
                    CHashTable__vSetSize(psCHashTable, u32SizeReg);
                    break;
                }
                else
                {
                    enMatchResult = CHashTable_enSTATUS_ERROR;
                    break;
                }
            }
            psPreviousElement = psElement;
            psElementNext = SLinkedList__psGetElementNextNode(psElement);
            psElement = psElementNext;
        }
    }
    return enMatchResult;
}


