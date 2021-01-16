/**
 *
 * @file CHashTable_Init.h
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
#ifndef XUTILS_DATASTRUCTURE_HASHTABLE_CHAINEDHASHTABLE_XHEADER_CHASHTABLE_INIT_H_
#define XUTILS_DATASTRUCTURE_HASHTABLE_CHAINEDHASHTABLE_XHEADER_CHASHTABLE_INIT_H_

#include <xUtils/DataStructure/HashTable/ChainedHashTable/xHeader/CHashTable_Struct.h>


CHashTable_nSTATUS CHashTable__enInit( CHashTable_TypeDef* psCHashTable ,uint32_t u32BucketsNum,uint32_t  (*pfu32FunctionArg)(const void *pcvKey),
                                                           uint32_t  (*pfu32MatchArg)(const void *pcvKey1, const void *pcvKey2), void  (*pfvDestroyElementDataArg)(void *DataContainer));

CHashTable_TypeDef* CHashTable__psInit(uint32_t u32BucketsNum,uint32_t  (*pfu32FunctionArg)(const void *pcvKey),
                                                       uint32_t (*pfu32MatchArg)(const void *pcvKey1, const void *pcvKey2),void  (*pfvDestroyElementDataArg)(void *DataContainer));




#endif /* XUTILS_DATASTRUCTURE_HASHTABLE_CHAINEDHASHTABLE_XHEADER_CHASHTABLE_INIT_H_ */
