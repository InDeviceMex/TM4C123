/**
 *
 * @file CHashTable_Struct.h
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
#ifndef XUTILS_DATASTRUCTURE_HASHTABLE_CHAINEDHASHTABLE_XHEADER_CHASHTABLE_STRUCT_H_
#define XUTILS_DATASTRUCTURE_HASHTABLE_CHAINEDHASHTABLE_XHEADER_CHASHTABLE_STRUCT_H_

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/xHeader/SLinkedList_Struct.h>

typedef enum
{
    CHashTable_enSTATUS_OK,
    CHashTable_enSTATUS_ERROR,
}CHashTable_nSTATUS;

typedef struct CHashTable {

    uint32_t u32Buckets;
    uint32_t (*pfu32HashFunction)(const void *pcvKey);
    uint32_t  (*pfu32Match)(const void *pcvKey1, const void *pcvKey2);
    void  (*pfvDestroyElementData)(void *DataContainer);
    void  (*pfvDestroy)(void* Hash);
    uint32_t u32Size;
    SLinkedList_TypeDef *psTable;
} CHashTable_TypeDef;

#endif /* XUTILS_DATASTRUCTURE_HASHTABLE_CHAINEDHASHTABLE_XHEADER_CHASHTABLE_STRUCT_H_ */
