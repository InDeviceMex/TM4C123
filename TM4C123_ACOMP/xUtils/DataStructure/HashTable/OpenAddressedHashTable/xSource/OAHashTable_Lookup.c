/**
 *
 * @file OAHashTable_Lookup.c
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
#include <xUtils/DataStructure/HashTable/OpenAddressedHashTable/xHeader/OAHashTable_Lookup.h>

OAHashTable_nSTATUS OAHashTable__enLookup(const OAHashTable_TypeDef* psOAHashTable, void** pvData)
{
    void **pvElementData = (void**) 0UL;
    uint32_t u32PositionNum = 0UL;
    uint32_t u32Position2Num = 0UL;
    uint32_t u32PositionSize = 0UL;
    uint32_t u32Iteration = 0UL;
    OAHashTable_nSTATUS enMatchResult = OAHashTable_enSTATUS_ERROR;

    if(((uint32_t) 0UL != (uint32_t) psOAHashTable) && ((uint32_t) 0UL != (uint32_t) pvData)  )
    {
        u32PositionSize = psOAHashTable->u32Positions;
        for(u32Iteration = 0UL; u32Iteration < u32PositionSize; u32Iteration++)
        {
            u32PositionNum = psOAHashTable->pfu32HashFunction1(* pvData);
            u32Position2Num = psOAHashTable->pfu32HashFunction2(*pvData);
            u32Position2Num *= u32Iteration;
            u32PositionNum += u32Position2Num;
            u32PositionNum %= u32PositionSize;

            pvElementData = psOAHashTable->pvTable;
            pvElementData += u32PositionNum;
            if((uint32_t) 0UL == (uint32_t) (*pvElementData))
            {
                break;
            }
            else
            {
                enMatchResult = (OAHashTable_nSTATUS) psOAHashTable->pfu32Match((*pvElementData), *pvData);
                if(OAHashTable_enSTATUS_OK == enMatchResult)
                {
                    *pvData = *pvElementData;
                    break;
                }
            }
        }
    }
    return enMatchResult;
}


void* OAHashTable__pvLookup(const OAHashTable_TypeDef* psOAHashTable, const void* const* pvData)
{
    void **pvElementData = (void**) 0UL;
    void *pvElementReturn = (void*) 0UL;
    uint32_t u32PositionNum = 0UL;
    uint32_t u32Position2Num = 0UL;
    uint32_t u32PositionSize = 0UL;
    uint32_t u32Iteration = 0UL;
    OAHashTable_nSTATUS enMatchResult = OAHashTable_enSTATUS_ERROR;

    if(((uint32_t) 0UL != (uint32_t) psOAHashTable) && ((uint32_t) 0UL != (uint32_t) pvData)  )
    {
        u32PositionSize = psOAHashTable->u32Positions;
        for(u32Iteration = 0UL; u32Iteration < u32PositionSize; u32Iteration++)
        {
            u32PositionNum = psOAHashTable->pfu32HashFunction1(* pvData);
            u32Position2Num = psOAHashTable->pfu32HashFunction2(*pvData);
            u32Position2Num *= u32Iteration;
            u32PositionNum += u32Position2Num;
            u32PositionNum %= u32PositionSize;

            pvElementData = psOAHashTable->pvTable;
            pvElementData += u32PositionNum;
            if((uint32_t) 0UL == (uint32_t) (*pvElementData))
            {
                break;
            }
            else
            {
                enMatchResult = (OAHashTable_nSTATUS) psOAHashTable->pfu32Match((*pvElementData), *pvData);
                if(OAHashTable_enSTATUS_OK == enMatchResult)
                {
                    pvElementReturn = *pvElementData;
                    break;
                }
            }
        }
    }
    return pvElementReturn;
}


