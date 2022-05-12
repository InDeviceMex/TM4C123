/**
 *
 * @file CHashTable_Lookup.c
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
#include <xUtils/DataStructure/HashTable/ChainedHashTable/xHeader/CHashTable_Lookup.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Element/SLinkedList_Element.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/SLinkedList_List.h>


CHashTable_nSTATUS CHashTable__enLookup(const CHashTable_TypeDef* pstCHashTable, void** pvData)
{
    SLinkedList_TypeDef *pstList = (SLinkedList_TypeDef*) 0UL;
    SLinkedListElement_TypeDef *pstElement = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef *pstElementNext = (SLinkedListElement_TypeDef*) 0UL;
    void *pvElementData = (void*) 0UL;
    uint32_t u32BucketNum = 0UL;
    uint32_t u32BucketsSize = 0UL;
    CHashTable_nSTATUS enMatchResult = CHashTable_enSTATUS_ERROR;
    if(((uint32_t) 0UL != (uint32_t) pstCHashTable) && ((uint32_t) 0UL != (uint32_t) pvData)  )
    {
        u32BucketsSize = pstCHashTable->u32Buckets;
        u32BucketNum = pstCHashTable->pfu32HashFunction(* pvData);
        u32BucketNum %= u32BucketsSize;

        pstList = pstCHashTable->pstTable;
        pstList += u32BucketNum;
        pstElement = SLinkedList__pstGetHead(pstList);
        while((uint32_t) 0UL != (uint32_t) pstElement)
        {
            pvElementData = SLinkedList__pvGetElementData(pstElement);
            enMatchResult = (CHashTable_nSTATUS) pstCHashTable->pfu32Match((const void*)*pvData, (const void*)pvElementData);
            if(CHashTable_enSTATUS_OK == enMatchResult)
            {
                *pvData = pvElementData;
                break;
            }
            pstElementNext = SLinkedList__pstGetElementNextNode(pstElement);
            pstElement = pstElementNext;
        }
    }
    return enMatchResult;
}


void* CHashTable__pvLookup(const CHashTable_TypeDef* pstCHashTable, const void* const* pvData)
{
    SLinkedList_TypeDef *pstList = (SLinkedList_TypeDef*) 0UL;
    SLinkedListElement_TypeDef *pstElement = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef *pstElementNext = (SLinkedListElement_TypeDef*) 0UL;
    void *pvElementData = (void*) 0UL;
    void *pvElementReturn = (void*) 0UL;
    uint32_t u32BucketNum = 0UL;
    uint32_t u32BucketSize = 0UL;
    CHashTable_nSTATUS enMatchResult = CHashTable_enSTATUS_ERROR;
    if(((uint32_t) 0UL != (uint32_t) pstCHashTable) && ((uint32_t) 0UL != (uint32_t) pvData)  )
    {
        u32BucketSize = pstCHashTable->u32Buckets;
        u32BucketNum = pstCHashTable->pfu32HashFunction(* pvData);
        u32BucketNum %= u32BucketSize;

        pstList = pstCHashTable->pstTable;
        pstList += u32BucketNum;
        pstElement = SLinkedList__pstGetHead(pstList);
        while((uint32_t) 0UL != (uint32_t) pstElement)
        {
            pvElementData = SLinkedList__pvGetElementData(pstElement);
            enMatchResult = (CHashTable_nSTATUS) pstCHashTable->pfu32Match(*pvData, pvElementData);
            if(CHashTable_enSTATUS_OK == enMatchResult)
            {
                pvElementReturn = pvElementData;
                break;
            }
            pstElementNext = SLinkedList__pstGetElementNextNode(pstElement);
            pstElement = pstElementNext;
        }
    }
    return pvElementReturn;
}

