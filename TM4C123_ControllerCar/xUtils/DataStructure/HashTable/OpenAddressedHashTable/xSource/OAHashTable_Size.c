/**
 *
 * @file OAHashTable_Size.c
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
#include <xUtils/DataStructure/HashTable/OpenAddressedHashTable/xHeader/OAHashTable_Size.h>

uint32_t OAHashTable__u32GetSize(const OAHashTable_TypeDef* const pstOAHashTable)
{
    uint32_t u32SizeReg = 0UL;
    u32SizeReg = pstOAHashTable->u32Size;
    return u32SizeReg;

}

void OAHashTable__vSetSize(OAHashTable_TypeDef*  pstOAHashTable, uint32_t u32SizeArg)
{
    pstOAHashTable->u32Size = u32SizeArg;
}



