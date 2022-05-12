/**
 *
 * @file Set_Remove.c
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
#include <xUtils/DataStructure/Set/xHeader/Set_Remove.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Remove.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Element/SLinkedList_Element.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/SLinkedList_List.h>

Set_nSTATUS Set__enRemove(Set_TypeDef* pstSet, void** pvData)
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    SLinkedListElement_TypeDef* pstMember = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef* pstMemberTemp = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef* pstPreviousMember = (SLinkedListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;

    if(((uint32_t) 0UL != (uint32_t) pstSet) && ((uint32_t) 0UL != (uint32_t) pvData))
    {

        pstMember = SLinkedList__pstGetHead((const SLinkedList_TypeDef*)pstSet);
        while((uint32_t) 0UL != (uint32_t) pstMember)
        {
            pvDataMember = SLinkedList__pvGetElementData((const SLinkedListElement_TypeDef*)pstMember);
            if(Set_enSTATUS_OK == (Set_nSTATUS)pstSet->pfu32Match(*pvData, pvDataMember))
            {
                break;
            }
            pstPreviousMember = pstMember;
            pstMemberTemp = SLinkedList__pstGetElementNextNode((const SLinkedListElement_TypeDef*)pstMember);
            pstMember = pstMemberTemp;
        }

        if((uint32_t) 0UL != (uint32_t) pstMember)
        {
            enStatus = (Set_nSTATUS) SLinkedList__enRemoveNext((SLinkedList_TypeDef*) pstSet, pstPreviousMember, pvData);
        }
    }

    return enStatus;
}


