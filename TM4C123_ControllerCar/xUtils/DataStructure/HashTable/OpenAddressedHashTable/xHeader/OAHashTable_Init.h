/**
 *
 * @file OAHashTable_Init.h
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
#ifndef XUTILS_DATASTRUCTURE_HASHTABLE_OPENADDRESSEDHASHTABLE_XHEADER_OAHASHTABLE_INIT_H_
#define XUTILS_DATASTRUCTURE_HASHTABLE_OPENADDRESSEDHASHTABLE_XHEADER_OAHASHTABLE_INIT_H_

#include <xUtils/DataStructure/HashTable/OpenAddressedHashTable/xHeader/OAHashTable_Struct.h>

OAHashTable_nSTATUS OAHashTable__enInit(OAHashTable_TypeDef* pstOAHashTable, uint32_t u32PositionsNum, uint32_t (*pfu32Function1Arg) (const void *pcvKey),
                                         uint32_t (*pfu32Function2Arg) (const void *pcvKey),uint32_t (*pfu32MatchArg) (const void *pcvKey1, const void *pcvKey2), void (*pfvDestroyElementDataArg) (void *DataContainer));

OAHashTable_TypeDef* OAHashTable__pstInit(uint32_t u32PositionsNum, uint32_t (*pfu32Function1Arg) (const void *pcvKey),
                                         uint32_t (*pfu32Function2Arg) (const void *pcvKey),uint32_t (*pfu32MatchArg) (const void *pcvKey1, const void *pcvKey2), void (*pfvDestroyElementDataArg) (void *DataContainer));





#endif /* XUTILS_DATASTRUCTURE_HASHTABLE_OPENADDRESSEDHASHTABLE_XHEADER_OAHASHTABLE_INIT_H_ */
