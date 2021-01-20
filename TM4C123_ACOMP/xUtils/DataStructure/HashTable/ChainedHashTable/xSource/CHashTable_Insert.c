/**
 *
 * @file CHashTable_Insert.c
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
#include <xUtils/DataStructure/HashTable/ChainedHashTable/xHeader/CHashTable_Insert.h>
#include <xUtils/DataStructure/HashTable/ChainedHashTable/xHeader/CHashTable_Lookup.h>
#include <xUtils/DataStructure/HashTable/ChainedHashTable/xHeader/CHashTable_Size.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Add.h>

CHashTable_nSTATUS CHashTable__enInsert(CHashTable_TypeDef* psCHashTable, void* pvData)
{
    SLinkedList_TypeDef *psList = (SLinkedList_TypeDef*) 0UL;
    SLinkedListElement_TypeDef *psElement = (SLinkedListElement_TypeDef*) 0UL;

    void *pvDataTemp = (void*) 0UL;
    uint32_t u32BucketNum = 0UL;
    uint32_t u32BucketsSize = 0UL;
    uint32_t u32SizeReg = 0UL;
    CHashTable_nSTATUS enMatchResult = CHashTable_enSTATUS_ERROR;

    if((uint32_t)0UL != (uint32_t)psCHashTable)
    {
        pvDataTemp = (void*)pvData;
        enMatchResult = CHashTable__enLookup(psCHashTable, &pvDataTemp);
        if(CHashTable_enSTATUS_ERROR != enMatchResult)
        {
            u32BucketsSize = psCHashTable->u32Buckets;
            u32BucketNum = psCHashTable->pfu32HashFunction(pvData);
            u32BucketNum %= u32BucketsSize;
            psList = psCHashTable->psTable;
            psList += u32BucketNum;
            psElement = SLinkedList__psAddBegin(psList, pvData);
            if((uint32_t)0UL != (uint32_t)psElement)
            {
                u32SizeReg = CHashTable__u32GetSize(psCHashTable);
                u32SizeReg++;
                CHashTable__vSetSize(psCHashTable, u32SizeReg);
                enMatchResult = CHashTable_enSTATUS_OK;
            }
        }
        else
        {
            enMatchResult = CHashTable_enSTATUS_EXIST;
        }
    }
    return enMatchResult;
}

