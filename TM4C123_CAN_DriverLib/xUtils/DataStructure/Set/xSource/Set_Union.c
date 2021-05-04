/**
 *
 * @file Set_Union.c
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
 * @verbatim 13 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/Set/xHeader/Set_Union.h>
#include <xUtils/DataStructure/Set/xHeader/Set_Init.h>
#include <xUtils/DataStructure/Set/xHeader/Set_Destroy.h>
#include <xUtils/DataStructure/Set/xHeader/Set_Member.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Add.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Element/SLinkedList_Element.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/SLinkedList_List.h>

Set_nSTATUS Set__enUnion(Set_TypeDef* pstNewSet, Set_TypeDef* pstSet1, const Set_TypeDef* pstSet2)
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    SLinkedListElement_TypeDef* pstMember = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef* pstMemberTemp = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef* pstNewMember = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef* pstMemberSet = (SLinkedListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;

    if(((uint32_t) 0UL != (uint32_t) pstSet1) && ((uint32_t) 0UL != (uint32_t) pstSet2))
    {
        enStatus = Set__enInit(pstNewSet, pstSet1->pfu32Match, (void (*) (void *DataContainer))0UL);
        if(Set_enSTATUS_ERROR != enStatus)
        {
            pstMember = SLinkedList__pstGetHead((const SLinkedList_TypeDef*)pstSet1);
            while((uint32_t) 0UL != (uint32_t) pstMember)
            {
                pvDataMember = SLinkedList__pvGetElementData((const SLinkedListElement_TypeDef*)pstMember);
                pstNewMember = SLinkedList__pstAddEnd((SLinkedList_TypeDef*) pstNewSet, pvDataMember);
                if((uint32_t) 0UL == (uint32_t) pstNewMember)
                {
                    enStatus = Set_enSTATUS_ERROR;
                    Set__vDestroy(pstNewSet);
                    break;
                }
                pstMemberTemp = SLinkedList__pstGetElementNextNode((const SLinkedListElement_TypeDef*)pstMember);
                pstMember = pstMemberTemp;
            }

            if((uint32_t) Set_enSTATUS_ERROR != enStatus)
            {
                pstMember = SLinkedList__pstGetHead((const SLinkedList_TypeDef*)pstSet2);
                while((uint32_t) 0UL != (uint32_t) pstMember)
                {
                    pvDataMember = SLinkedList__pvGetElementData((const SLinkedListElement_TypeDef*)pstMember);
                    pstMemberSet = Set__pstIsMember(pstSet1, pvDataMember);
                    if((uint32_t) 0UL == (uint32_t) pstMemberSet)
                    {
                        pstNewMember = SLinkedList__pstAddEnd((SLinkedList_TypeDef*) pstNewSet, pvDataMember);
                        if((uint32_t) 0UL == (uint32_t) pstNewMember)
                        {
                            enStatus = Set_enSTATUS_ERROR;
                            Set__vDestroy(pstNewSet);
                            break;
                        }
                    }
                    pstMemberTemp = SLinkedList__pstGetElementNextNode((const SLinkedListElement_TypeDef*)pstMember);
                    pstMember = pstMemberTemp;
                }
            }
        }
    }
    return enStatus;
}

Set_TypeDef* Set__pstUnion(Set_TypeDef* pstSet1, const Set_TypeDef* pstSet2)
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    Set_TypeDef* pstNewSet = (Set_TypeDef*) 0UL;
    SLinkedListElement_TypeDef* pstMember = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef* pstMemberTemp = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef* pstNewMember = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef* pstMemberSet = (SLinkedListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;

    if(((uint32_t) 0UL != (uint32_t) pstSet1) && ((uint32_t) 0UL != (uint32_t) pstSet2))
    {
        pstNewSet = Set__pstInit(pstSet1->pfu32Match, (void (*) (void *DataContainer))0UL);

        if((uint32_t) 0UL != (uint32_t) pstNewSet)
        {
            enStatus = Set_enSTATUS_OK;
            pstMember = SLinkedList__pstGetHead((const SLinkedList_TypeDef*)pstSet1);
            while((uint32_t) 0UL != (uint32_t) pstMember)
            {
                pvDataMember = SLinkedList__pvGetElementData((const SLinkedListElement_TypeDef*)pstMember);
                pstNewMember = SLinkedList__pstAddEnd((SLinkedList_TypeDef*) pstNewSet, pvDataMember);
                if((uint32_t) 0UL == (uint32_t) pstNewMember)
                {
                    enStatus = Set_enSTATUS_ERROR;
                    Set__vDestroy(pstNewSet);
                    break;
                }
                pstMemberTemp = SLinkedList__pstGetElementNextNode((const SLinkedListElement_TypeDef*)pstMember);
                pstMember = pstMemberTemp;
            }

            if((uint32_t) Set_enSTATUS_ERROR != enStatus)
            {
                pstMember = SLinkedList__pstGetHead((const SLinkedList_TypeDef*)pstSet2);
                while((uint32_t) 0UL != (uint32_t) pstMember)
                {
                    pvDataMember = SLinkedList__pvGetElementData((const SLinkedListElement_TypeDef*)pstMember);
                    pstMemberSet = Set__pstIsMember(pstSet1, pvDataMember);
                    if((uint32_t) 0UL == (uint32_t) pstMemberSet)
                    {
                        pstNewMember = SLinkedList__pstAddEnd((SLinkedList_TypeDef*) pstNewSet, pvDataMember);
                        if((uint32_t) 0UL == (uint32_t) pstNewMember)
                        {
                            Set__vDestroy(pstNewSet);
                            break;
                        }
                    }
                    pstMemberTemp = SLinkedList__pstGetElementNextNode((const SLinkedListElement_TypeDef*)pstMember);
                    pstMember = pstMemberTemp;
                }
            }
        }
    }
    return pstNewSet;
}


