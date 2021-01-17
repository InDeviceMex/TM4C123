/**
 *
 * @file CHashTable_Destroy.c
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
#include <xUtils/DataStructure/HashTable/ChainedHashTable/xHeader/CHashTable_Destroy.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Destroy.h>
#include <stdlib.h>


void CHashTable__vDestroy( CHashTable_TypeDef* psCHashTable)
{
    uint32_t u32BuckNum = 0UL;
    uint32_t u32BucketsCant = 0UL;
    SLinkedList_TypeDef* psList = (SLinkedList_TypeDef*)0UL;
    void  (*pfvHashDestroy)(void* Hash)  = (void  (*)(void* Hash))0UL;

    if((uint32_t)0UL != (uint32_t)psCHashTable)
    {
        u32BucketsCant = psCHashTable->u32Buckets;
        pfvHashDestroy =  psCHashTable->pfvDestroy;

        psList = psCHashTable->psTable;
        for (u32BuckNum = 0UL; u32BuckNum< u32BucketsCant; u32BuckNum++)
        {
            SLinkedList__vDestroy(psList);
            psList += 1UL;
        }

        free(psCHashTable->psTable);

        psCHashTable->psTable = (SLinkedList_TypeDef *)  0UL;
        psCHashTable->pfu32Match = (uint32_t  (*)(const void *pcvKey1, const void *pcvKey2)) 0UL;
        psCHashTable->pfvDestroy = (void  (*)(void* List)) 0UL;
        psCHashTable->pfvDestroyElementData = (void  (*)(void* DataContainer)) 0UL;
        psCHashTable->pfu32HashFunction = (uint32_t (*)(const void *pcvKey)) 0UL;
        psCHashTable->u32Buckets = 0UL;
        psCHashTable->u32Size = 0UL;

        if((uint32_t) 0UL != (uint32_t)(pfvHashDestroy))
        {
            pfvHashDestroy(psCHashTable);
            psCHashTable = (CHashTable_TypeDef*) 0UL;
        }
    }
}

