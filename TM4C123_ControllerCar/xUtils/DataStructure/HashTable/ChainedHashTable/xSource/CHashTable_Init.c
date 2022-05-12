/**
 *
 * @file CHashTable_Init.c
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
#include <xUtils/DataStructure/HashTable/ChainedHashTable/xHeader/CHashTable_Init.h>
#include <xUtils/DataStructure/HashTable/ChainedHashTable/xHeader/CHashTable_Destroy.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Init.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Destroy.h>
#include <stdlib.h>

CHashTable_nSTATUS CHashTable__enInit(CHashTable_TypeDef* pstCHashTable, uint32_t u32BucketsNum, uint32_t (*pfu32FunctionArg) (const void *pcvKey),
                                                                       uint32_t (*pfu32MatchArg) (const void *pcvKey1, const void *pcvKey2), void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    SLinkedList_nSTATUS enLinkedStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedList_TypeDef* pstList = (SLinkedList_TypeDef*)0UL;
    uint32_t u32Position = 0UL;

    if((uint32_t) 0UL != (uint32_t) pstCHashTable)
    {
        pstCHashTable->u32Size = 0UL;
        pstCHashTable->pfu32HashFunction = pfu32FunctionArg;
        pstCHashTable->pfu32Match = pfu32MatchArg;
        pstCHashTable->pfvDestroy = (void (*) (void* List))0UL;
        pstCHashTable->pfvDestroyElementData = pfvDestroyElementDataArg;

    #if defined (__TI_ARM__ )
        pstCHashTable->pstTable = (SLinkedList_TypeDef*) memalign((size_t) 4, (size_t) (u32BucketsNum * sizeof(SLinkedList_TypeDef)));
    #elif defined (__GNUC__ )
        pstCHashTable->pstTable = (SLinkedList_TypeDef*) malloc((size_t) (u32BucketsNum * sizeof(SLinkedList_TypeDef)));
    #endif
        if((uint32_t) 0UL != (uint32_t) (pstCHashTable->pstTable))
        {
            enLinkedStatus = SLinkedList_enSTATUS_OK;

            pstList = pstCHashTable->pstTable;
            for(u32Position = 0UL; u32Position<u32BucketsNum; u32Position++)
            {
                enLinkedStatus = SLinkedList__enInit(pstList, pfvDestroyElementDataArg);
                if(SLinkedList_enSTATUS_OK != enLinkedStatus)
                {
                    break;
                }
                pstList += 1UL;
            }
            pstCHashTable->u32Buckets = u32Position;
            if(SLinkedList_enSTATUS_OK != enLinkedStatus)
            {
                CHashTable__vDestroy(pstCHashTable);
            }
        }
    }
    return (CHashTable_nSTATUS) enLinkedStatus;
}

CHashTable_TypeDef* CHashTable__pstInit(uint32_t u32BucketsNum, uint32_t (*pfu32FunctionArg) (const void *pcvKey),
                                                                       uint32_t (*pfu32MatchArg) (const void *pcvKey1, const void *pcvKey2),void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    CHashTable_TypeDef *pstCHashTable = 0;
    SLinkedList_TypeDef* pstList = (SLinkedList_TypeDef*)0UL;
    SLinkedList_nSTATUS enLinkedStatus = SLinkedList_enSTATUS_ERROR;
    uint32_t u32Position = 0UL;

#if defined (__TI_ARM__ )
    pstCHashTable = (CHashTable_TypeDef*) memalign((size_t) 4, (size_t) sizeof(CHashTable_TypeDef));
#elif defined (__GNUC__ )
    pstCHashTable = (CHashTable_TypeDef*) malloc(sizeof(CHashTable_TypeDef));
#endif
    if((uint32_t) 0UL != (uint32_t) pstCHashTable)
    {
        pstCHashTable->u32Size = 0UL;
        pstCHashTable->pfu32HashFunction = pfu32FunctionArg;
        pstCHashTable->pfu32Match = pfu32MatchArg;
        pstCHashTable->pfvDestroy = (void (*) (void* List))0UL;
        pstCHashTable->pfvDestroyElementData = pfvDestroyElementDataArg;

    #if defined (__TI_ARM__ )
        pstCHashTable->pstTable = (SLinkedList_TypeDef*) memalign((size_t) 4, (size_t) (u32BucketsNum * sizeof(SLinkedList_TypeDef)));
    #elif defined (__GNUC__ )
        pstCHashTable->pstTable = (SLinkedList_TypeDef*) malloc((size_t) (u32BucketsNum * sizeof(SLinkedList_TypeDef)));
    #endif
        if((uint32_t) 0UL != (uint32_t) (pstCHashTable->pstTable))
        {
            enLinkedStatus = SLinkedList_enSTATUS_OK;
            pstList = pstCHashTable->pstTable;
            for(u32Position = 0UL; u32Position<u32BucketsNum; u32Position++)
            {
                enLinkedStatus = SLinkedList__enInit(pstList, pfvDestroyElementDataArg);
                if(SLinkedList_enSTATUS_OK != enLinkedStatus)
                {
                    break;
                }
                pstList += 1UL;
            }
            pstCHashTable->u32Buckets = u32Position;
            if(SLinkedList_enSTATUS_OK != enLinkedStatus)
            {
                CHashTable__vDestroy(pstCHashTable);
            }
        }
        else
        {
            CHashTable__vDestroy(pstCHashTable);
        }
    }
    return pstCHashTable;
}


