/**
 *
 * @file SingleLinkList_Struct.h
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
 * @verbatim 6 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKLIST_INTRINSICS_XHEADER_SINGLELINKLIST_STRUCT_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKLIST_INTRINSICS_XHEADER_SINGLELINKLIST_STRUCT_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    SingleLinkList_enSTATUS_OK,
    SingleLinkList_enSTATUS_ERROR
}SingleLinkList_nSTATUS;

typedef struct SingleLinkListElement
{
        void* pvDataContainer;
        struct SingleLinkListElement *psNextNode;
}SingleLinkListElement_TypeDef;

typedef struct SingleLinkList
{
        uint32_t u32Size;
        uint32_t  (*pfu32Match)(const void *pcvKey1, const void *pcvKey2);
        void  (*pfvDestroyElementData)(void *DataContainer);
        void  (*pfvDestroy)(void* List);
        SingleLinkListElement_TypeDef *psHead;
        SingleLinkListElement_TypeDef *psTail;
}SingleLinkList_TypeDef;



#endif /* XUTILS_DATASTRUCTURE_SINGLELINKLIST_INTRINSICS_XHEADER_SINGLELINKLIST_STRUCT_H_ */
