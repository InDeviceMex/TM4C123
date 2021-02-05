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


void OAHashTable__vDestroy(OAHashTable_TypeDef* psOAHashTable)
{
    uint32_t u32PosNum = 0UL;
    uint32_t u32PositionsCant = 0UL;
    void* pvVacatedReg = (void*)0UL;
    void** psList = (void**)0UL;
    void (*pfvHashDestroy) (void* Hash) = (void (*) (void* Hash))0UL;
    void (*pfvHashDestroyElement) (void* DataContainer) = (void (*) (void* DataContainer))0UL;

    if((uint32_t) 0UL != (uint32_t) psOAHashTable)
    {
        u32PositionsCant = psOAHashTable->u32Positions;
        pfvHashDestroy = psOAHashTable->pfvDestroy;
        pfvHashDestroyElement = psOAHashTable->pfvDestroyElementData;
        psList = psOAHashTable->pvTable;
        pvVacatedReg = psOAHashTable->pvVacated;
        if((uint32_t) 0UL != (uint32_t) pfvHashDestroyElement)
        {
            for (u32PosNum = 0UL; u32PosNum< u32PositionsCant; u32PosNum++)
            {
                if (((uint32_t) 0UL != (uint32_t) (*psList)) && ((uint32_t) (*psList) != (uint32_t) pvVacatedReg))
                {
                    pfvHashDestroyElement(psList);
                }
                psList += 1UL;
            }
        }

        free(psOAHashTable->pvTable);

        psOAHashTable->pvTable = (void* *)  0UL;
        psOAHashTable->pfu32Match = (uint32_t (*) (const void *pcvKey1, const void *pcvKey2)) 0UL;
        psOAHashTable->pfvDestroy = (void (*) (void* List)) 0UL;
        psOAHashTable->pfvDestroyElementData = (void (*) (void* DataContainer)) 0UL;
        psOAHashTable->pfu32HashFunction1 = (uint32_t (*) (const void *pcvKey)) 0UL;
        psOAHashTable->pfu32HashFunction2 = (uint32_t (*) (const void *pcvKey)) 0UL;
        psOAHashTable->u32Positions = 0UL;
        psOAHashTable->u32Size = 0UL;

        if((uint32_t) 0UL != (uint32_t) (pfvHashDestroy))
        {
            pfvHashDestroy(psOAHashTable);
            psOAHashTable = (OAHashTable_TypeDef*) 0UL;
        }
    }
}


