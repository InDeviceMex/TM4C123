/**
 *
 * @file OAHashTable_Lookup.h
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
#ifndef XUTILS_DATASTRUCTURE_HASHTABLE_OPENADDRESSEDHASHTABLE_XHEADER_OAHASHTABLE_LOOKUP_H_
#define XUTILS_DATASTRUCTURE_HASHTABLE_OPENADDRESSEDHASHTABLE_XHEADER_OAHASHTABLE_LOOKUP_H_

#include <xUtils/DataStructure/HashTable/OpenAddressedHashTable/xHeader/OAHashTable_Struct.h>

OAHashTable_nSTATUS OAHashTable__enLookup(const OAHashTable_TypeDef* psOAHashTable, void** pvData);
void* OAHashTable__pvLookup(const OAHashTable_TypeDef* psOAHashTable, const void* const* pvData);




#endif /* XUTILS_DATASTRUCTURE_HASHTABLE_OPENADDRESSEDHASHTABLE_XHEADER_OAHASHTABLE_LOOKUP_H_ */
