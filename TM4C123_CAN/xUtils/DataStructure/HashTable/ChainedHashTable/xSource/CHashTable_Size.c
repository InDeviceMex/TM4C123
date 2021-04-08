/**
 *
 * @file CHashTable_Size.c
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
 * @verbatim 16 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/HashTable/ChainedHashTable/xHeader/CHashTable_Size.h>

uint32_t CHashTable__u32GetSize(const CHashTable_TypeDef* const psCHashTable)
{
    uint32_t u32SizeReg = 0UL;
    u32SizeReg = psCHashTable->u32Size;
    return u32SizeReg;

}

void CHashTable__vSetSize(CHashTable_TypeDef*  psCHashTable, uint32_t u32SizeArg)
{
    psCHashTable->u32Size = u32SizeArg;
}



