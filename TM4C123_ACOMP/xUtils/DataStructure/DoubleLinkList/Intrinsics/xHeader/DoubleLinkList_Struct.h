/**
 *
 * @file DoubleLinkList_Struct.h
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
 * @verbatim 8 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKLIST_INTRINSICS_XHEADER_DOUBLELINKLIST_STRUCT_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKLIST_INTRINSICS_XHEADER_DOUBLELINKLIST_STRUCT_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    DoubleLinkList_enSTATUS_OK,
    DoubleLinkList_enSTATUS_ERROR
}DoubleLinkList_nSTATUS;

typedef struct DoubleLinkListElement
{
        void* pvDataContainer;
        struct DoubleLinkListElement *psPreviousNode;
        struct DoubleLinkListElement *psNextNode;
}DoubleLinkListElement_TypeDef;

typedef struct DoubleLinkList
{
        uint32_t u32Size;
        uint32_t  (*pfu32Match)(const void *pcvKey1, const void *pcvKey2);
        void  (*pfvDestroyElementData)(void *DataContainer);
        void  (*pfvDestroy)(void* List);
        DoubleLinkListElement_TypeDef *psHead;
        DoubleLinkListElement_TypeDef *psTail;
}DoubleLinkList_TypeDef;




#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKLIST_INTRINSICS_XHEADER_DOUBLELINKLIST_STRUCT_H_ */
