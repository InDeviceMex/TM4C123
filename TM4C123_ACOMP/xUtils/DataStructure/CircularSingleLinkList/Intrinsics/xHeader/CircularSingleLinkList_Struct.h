/**
 *
 * @file CircularSingleLinkList_Struct.h
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
 * @verbatim 9 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_INTRINSICS_XHEADER_CIRCULARSINGLELINKLIST_STRUCT_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_INTRINSICS_XHEADER_CIRCULARSINGLELINKLIST_STRUCT_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    CircularSingleLinkList_enSTATUS_OK,
    CircularSingleLinkList_enSTATUS_ERROR
}CircularSingleLinkList_nSTATUS;

typedef struct CircularSingleLinkListElement
{
        void* pvDataContainer;
        struct CircularSingleLinkListElement *psNextNode;
}CircularSingleLinkListElement_TypeDef;

typedef struct CircularSingleLinkList
{
        uint32_t u32Size;
        uint32_t  (*pfu32Match)(const void *pcvKey1, const void *pcvKey2);
        void  (*pfvDestroyElementData)(void *DataContainer);
        void  (*pfvDestroy)(void* List);
        CircularSingleLinkListElement_TypeDef *psHead;
        CircularSingleLinkListElement_TypeDef *psTail;
}CircularSingleLinkList_TypeDef;




#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_INTRINSICS_XHEADER_CIRCULARSINGLELINKLIST_STRUCT_H_ */
