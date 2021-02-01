/**
 *
 * @file OAHashTable_Struct.h
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
#ifndef XUTILS_DATASTRUCTURE_HASHTABLE_OPENADDRESSEDHASHTABLE_XHEADER_OAHASHTABLE_STRUCT_H_
#define XUTILS_DATASTRUCTURE_HASHTABLE_OPENADDRESSEDHASHTABLE_XHEADER_OAHASHTABLE_STRUCT_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    OAHashTable_enSTATUS_OK,
    OAHashTable_enSTATUS_ERROR,
    OAHashTable_enSTATUS_EXIST,
}OAHashTable_nSTATUS;

typedef struct OAHashTable {

    uint32_t u32Positions;
    void*  pvVacated;
    uint32_t (*pfu32HashFunction1) (const void *pcvKey);
    uint32_t (*pfu32HashFunction2) (const void *pcvKey);
    uint32_t    (*pfu32Match) (const void *pcvKey1, const void *pcvKey2);
    void (*pfvDestroyElementData) (void *DataContainer);
    void (*pfvDestroy) (void* Hash);
    uint32_t u32Size;
    void ** pvTable;
} OAHashTable_TypeDef;




#endif /* XUTILS_DATASTRUCTURE_HASHTABLE_OPENADDRESSEDHASHTABLE_XHEADER_OAHASHTABLE_STRUCT_H_ */
