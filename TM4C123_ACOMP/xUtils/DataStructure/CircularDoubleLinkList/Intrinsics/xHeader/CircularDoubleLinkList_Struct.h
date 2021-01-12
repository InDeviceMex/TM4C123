/**
 *
 * @file CircularDoubleLinkList_Struct.h
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
 * @verbatim 11 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_INTRINSICS_XHEADER_CIRCULARDOUBLELINKLIST_STRUCT_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_INTRINSICS_XHEADER_CIRCULARDOUBLELINKLIST_STRUCT_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    CircularDoubleLinkList_enSTATUS_OK,
    CircularDoubleLinkList_enSTATUS_ERROR
}CircularDoubleLinkList_nSTATUS;

typedef struct CircularDoubleLinkListElement
{
        void* pvDataContainer;
        struct CircularDoubleLinkListElement *psPreviousNode;
        struct CircularDoubleLinkListElement *psNextNode;
}CircularDoubleLinkListElement_TypeDef;

typedef struct CircularDoubleLinkList
{
        uint32_t u32Size;
        uint32_t  (*pfu32Match)(const void *pcvKey1, const void *pcvKey2);
        void  (*pfvDestroyElementData)(void *DataContainer);
        void  (*pfvDestroy)(void* List);
        CircularDoubleLinkListElement_TypeDef *psHead;
        CircularDoubleLinkListElement_TypeDef *psTail;
}CircularDoubleLinkList_TypeDef;




#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKLIST_INTRINSICS_XHEADER_CIRCULARDOUBLELINKLIST_STRUCT_H_ */
