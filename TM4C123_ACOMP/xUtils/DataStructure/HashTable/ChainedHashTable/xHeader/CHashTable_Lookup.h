/**
 *
 * @file CHashTable_Lookup.h
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
#ifndef XUTILS_DATASTRUCTURE_HASHTABLE_CHAINEDHASHTABLE_XHEADER_CHASHTABLE_LOOKUP_H_
#define XUTILS_DATASTRUCTURE_HASHTABLE_CHAINEDHASHTABLE_XHEADER_CHASHTABLE_LOOKUP_H_

#include <xUtils/DataStructure/HashTable/ChainedHashTable/xHeader/CHashTable_Struct.h>

CHashTable_nSTATUS CHashTable__enLookup(const CHashTable_TypeDef* psCHashTable, uint32_t u32Position, const void** pvData);

#endif /* XUTILS_DATASTRUCTURE_HASHTABLE_CHAINEDHASHTABLE_XHEADER_CHASHTABLE_LOOKUP_H_ */
