/**
 *
 * @file OAHashTable_Destroy.c
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
#include <xUtils/DataStructure/HashTable/OpenAddressedHashTable/xHeader/OAHashTable_Destroy.h>
#include <stdlib.h>


void OAHashTable__vDestroy(OAHashTable_TypeDef* pstOAHashTable)
{
    uint32_t u32PosNum = 0UL;
    uint32_t u32PositionsCant = 0UL;
    void* pvVacatedReg = (void*)0UL;
    void** pstList = (void**)0UL;
    void (*pfvHashDestroy) (void* Hash) = (void (*) (void* Hash))0UL;
    void (*pfvHashDestroyElement) (void* DataContainer) = (void (*) (void* DataContainer))0UL;

    if((uint32_t) 0UL != (uint32_t) pstOAHashTable)
    {
        u32PositionsCant = pstOAHashTable->u32Positions;
        pfvHashDestroy = pstOAHashTable->pfvDestroy;
        pfvHashDestroyElement = pstOAHashTable->pfvDestroyElementData;
        pstList = pstOAHashTable->pvTable;
        pvVacatedReg = pstOAHashTable->pvVacated;
        if((uint32_t) 0UL != (uint32_t) pfvHashDestroyElement)
        {
            for (u32PosNum = 0UL; u32PosNum< u32PositionsCant; u32PosNum++)
            {
                if (((uint32_t) 0UL != (uint32_t) (*pstList)) && ((uint32_t) (*pstList) != (uint32_t) pvVacatedReg))
                {
                    pfvHashDestroyElement(pstList);
                }
                pstList += 1UL;
            }
        }

        free(pstOAHashTable->pvTable);

        pstOAHashTable->pvTable = (void* *)  0UL;
        pstOAHashTable->pfu32Match = (uint32_t (*) (const void *pcvKey1, const void *pcvKey2)) 0UL;
        pstOAHashTable->pfvDestroy = (void (*) (void* List)) 0UL;
        pstOAHashTable->pfvDestroyElementData = (void (*) (void* DataContainer)) 0UL;
        pstOAHashTable->pfu32HashFunction1 = (uint32_t (*) (const void *pcvKey)) 0UL;
        pstOAHashTable->pfu32HashFunction2 = (uint32_t (*) (const void *pcvKey)) 0UL;
        pstOAHashTable->u32Positions = 0UL;
        pstOAHashTable->u32Size = 0UL;

        if((uint32_t) 0UL != (uint32_t) (pfvHashDestroy))
        {
            pfvHashDestroy(pstOAHashTable);
            pstOAHashTable = (OAHashTable_TypeDef*) 0UL;
        }
    }
}


