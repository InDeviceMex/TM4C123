/**
 *
 * @file OAHashTable_Size.h
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
#ifndef XUTILS_DATASTRUCTURE_HASHTABLE_OPENADDRESSEDHASHTABLE_XHEADER_OAHASHTABLE_SIZE_H_
#define XUTILS_DATASTRUCTURE_HASHTABLE_OPENADDRESSEDHASHTABLE_XHEADER_OAHASHTABLE_SIZE_H_

#include <xUtils/DataStructure/HashTable/OpenAddressedHashTable/xHeader/OAHashTable_Struct.h>

uint32_t OAHashTable__u32GetSize(const OAHashTable_TypeDef* const psOAHashTable);
void OAHashTable__vSetSize(OAHashTable_TypeDef*  psOAHashTable, uint32_t u32SizeArg);




#endif /* XUTILS_DATASTRUCTURE_HASHTABLE_OPENADDRESSEDHASHTABLE_XHEADER_OAHASHTABLE_SIZE_H_ */
