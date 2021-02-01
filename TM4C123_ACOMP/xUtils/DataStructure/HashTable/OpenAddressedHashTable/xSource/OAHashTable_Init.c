/**
 *
 * @file OAHashTable_Init.c
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
 * @verbatim 19 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/HashTable/OpenAddressedHashTable/xHeader/OAHashTable_Init.h>
#include <xUtils/DataStructure/HashTable/OpenAddressedHashTable/xHeader/OAHashTable_Destroy.h>
#include <stdlib.h>

static char OAHashTable_cVacated = 0;

OAHashTable_nSTATUS OAHashTable__enInit( OAHashTable_TypeDef* psOAHashTable ,uint32_t u32PositionsNum,uint32_t    (*pfu32Function1Arg) (const void *pcvKey),
                                         uint32_t    (*pfu32Function2Arg) (const void *pcvKey),uint32_t    (*pfu32MatchArg) (const void *pcvKey1, const void *pcvKey2), void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    OAHashTable_nSTATUS enHashStatus = OAHashTable_enSTATUS_ERROR;
    uint32_t u32Position = 0UL;
    void** pvTableReg = (void**)0UL;

    if((uint32_t) 0UL != (uint32_t) psOAHashTable)
    {
        psOAHashTable->pvVacated = (void*) & OAHashTable_cVacated;
        psOAHashTable->u32Size= 0UL;
        psOAHashTable->pfu32HashFunction1 = pfu32Function1Arg;
        psOAHashTable->pfu32HashFunction2 = pfu32Function2Arg;
        psOAHashTable->pfu32Match = pfu32MatchArg;
        psOAHashTable->pfvDestroy = &free;
        psOAHashTable->pfvDestroyElementData = pfvDestroyElementDataArg;

    #if defined ( __TI_ARM__ )
        psOAHashTable->pvTable = (void**) memalign((size_t) 4,(size_t) (u32PositionsNum * sizeof(void*)));
    #elif defined ( __GNUC__ )
        psOAHashTable->pvTable = (void**) malloc((size_t) (u32PositionsNum * sizeof(void*)));
    #endif
        if((uint32_t) 0UL != (uint32_t) (psOAHashTable->pvTable))
        {
            enHashStatus = OAHashTable_enSTATUS_OK;

            pvTableReg = psOAHashTable->pvTable;
            for(u32Position = 0UL; u32Position<u32PositionsNum; u32Position++)
            {
                *pvTableReg = (void*)0UL;
                pvTableReg += 1UL;
            }
            psOAHashTable->u32Positions = u32Position;
        }
    }
    return (OAHashTable_nSTATUS) enHashStatus;
}

OAHashTable_TypeDef* OAHashTable__psInit( uint32_t u32PositionsNum,uint32_t    (*pfu32Function1Arg) (const void *pcvKey),
                                         uint32_t    (*pfu32Function2Arg) (const void *pcvKey),uint32_t    (*pfu32MatchArg) (const void *pcvKey1, const void *pcvKey2), void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    OAHashTable_TypeDef *psOAHashTable = 0;
    void** pvTableReg = (void**)0UL;
    uint32_t u32Position = 0UL;

#if defined ( __TI_ARM__ )
    psOAHashTable = (OAHashTable_TypeDef*) memalign((size_t) 4,(size_t) sizeof(OAHashTable_TypeDef));
#elif defined ( __GNUC__ )
    psOAHashTable = (OAHashTable_TypeDef*) malloc(sizeof(OAHashTable_TypeDef));
#endif
    if((uint32_t) 0UL != (uint32_t) psOAHashTable)
    {
        psOAHashTable->pvVacated = (void*) & OAHashTable_cVacated;
        psOAHashTable->u32Size= 0UL;
        psOAHashTable->pfu32HashFunction1 = pfu32Function1Arg;
        psOAHashTable->pfu32HashFunction2 = pfu32Function2Arg;
        psOAHashTable->pfu32Match = pfu32MatchArg;
        psOAHashTable->pfvDestroy = &free;
        psOAHashTable->pfvDestroyElementData = pfvDestroyElementDataArg;

    #if defined ( __TI_ARM__ )
        psOAHashTable->pvTable = (void**) memalign((size_t) 4,(size_t) (u32PositionsNum * sizeof(void*)));
    #elif defined ( __GNUC__ )
        psOAHashTable->pvTable = (void**) malloc((size_t) (u32PositionsNum * sizeof(void*)));
    #endif
        if((uint32_t) 0UL != (uint32_t) (psOAHashTable->pvTable))
        {
            pvTableReg = psOAHashTable->pvTable;
            for(u32Position = 0UL; u32Position<u32PositionsNum; u32Position++)
            {
                *pvTableReg = (void*)0UL;
                pvTableReg += 1UL;
            }
            psOAHashTable->u32Positions = u32Position;
        }
        else
        {
            OAHashTable__vDestroy(psOAHashTable);
        }
    }
    return psOAHashTable;
}



