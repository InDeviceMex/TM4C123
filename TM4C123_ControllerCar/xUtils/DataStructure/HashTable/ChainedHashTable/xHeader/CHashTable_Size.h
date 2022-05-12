/**
 *
 * @file CHashTable_Size.h
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
#ifndef XUTILS_DATASTRUCTURE_HASHTABLE_CHAINEDHASHTABLE_XHEADER_CHASHTABLE_SIZE_H_
#define XUTILS_DATASTRUCTURE_HASHTABLE_CHAINEDHASHTABLE_XHEADER_CHASHTABLE_SIZE_H_

#include <xUtils/DataStructure/HashTable/ChainedHashTable/xHeader/CHashTable_Struct.h>

uint32_t CHashTable__u32GetSize(const CHashTable_TypeDef* const pstCHashTable);
void CHashTable__vSetSize(CHashTable_TypeDef*  pstCHashTable, uint32_t u32SizeArg);

#endif /* XUTILS_DATASTRUCTURE_HASHTABLE_CHAINEDHASHTABLE_XHEADER_CHASHTABLE_SIZE_H_ */
