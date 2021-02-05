/**
 *
 * @file OAHashTable_Insert.c
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
#include <xUtils/DataStructure/HashTable/OpenAddressedHashTable/xHeader/OAHashTable_Insert.h>
#include <xUtils/DataStructure/HashTable/OpenAddressedHashTable/xHeader/OAHashTable_Lookup.h>
#include <xUtils/DataStructure/HashTable/OpenAddressedHashTable/xHeader/OAHashTable_Size.h>

OAHashTable_nSTATUS OAHashTable__enInsert(OAHashTable_TypeDef* psOAHashTable, void* pvData)
{
    void **pvElementData = (void**) 0UL;
    uint32_t u32PositionNum = 0UL;
    uint32_t u32Position2Num = 0UL;
    uint32_t u32PositionSize = 0UL;
    uint32_t u32SizeReg = 0UL;
    void* pvVacatedReg = (void*)0UL;
    void* pvTemp = (void*)0UL;
    uint32_t u32Iteration = 0UL;
    OAHashTable_nSTATUS enLookup= OAHashTable_enSTATUS_ERROR;
    OAHashTable_nSTATUS enStatus = OAHashTable_enSTATUS_ERROR;

    if(((uint32_t) 0UL != (uint32_t) psOAHashTable) && ((uint32_t) 0UL != (uint32_t) pvData)  )
    {
        u32PositionSize = psOAHashTable->u32Positions;
        u32SizeReg = OAHashTable__u32GetSize(psOAHashTable);
        if(u32SizeReg != u32PositionSize)
        {
            pvTemp = pvData;
            enLookup = OAHashTable__enLookup(psOAHashTable, &pvTemp);
            if(OAHashTable_enSTATUS_OK != enLookup)
            {
                pvVacatedReg = psOAHashTable->pvVacated;
                for(u32Iteration = 0UL; u32Iteration < u32PositionSize; u32Iteration++)
                {
                    u32PositionNum = psOAHashTable->pfu32HashFunction1(pvData);
                    u32Position2Num = psOAHashTable->pfu32HashFunction2(pvData);
                    u32Position2Num *= u32Iteration;
                    u32PositionNum += u32Position2Num;
                    u32PositionNum %= u32PositionSize;

                    pvElementData = psOAHashTable->pvTable;
                    pvElementData += u32PositionNum;
                    if(((uint32_t) 0UL == (uint32_t) (*pvElementData)) || ((uint32_t) (*pvElementData) == (uint32_t) pvVacatedReg))
                    {
                        enStatus = OAHashTable_enSTATUS_OK;
                        *pvElementData = pvTemp;
                        u32SizeReg++;
                        OAHashTable__vSetSize(psOAHashTable, u32SizeReg);
                        break;
                    }
                }
            }
            else
            {
                enStatus = OAHashTable_enSTATUS_EXIST;
            }
        }
    }
    return enStatus;
}




