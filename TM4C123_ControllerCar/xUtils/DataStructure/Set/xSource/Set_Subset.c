/**
 *
 * @file Set_Subset.c
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
 * @verbatim 14 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/Set/xHeader/Set_Subset.h>
#include <xUtils/DataStructure/Set/xHeader/Set_Size.h>
#include <xUtils/DataStructure/Set/xHeader/Set_Member.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Element/SLinkedList_Element.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/SLinkedList_List.h>

Set_nSTATUS Set__enIsSubset(const Set_TypeDef* pstSet1, const Set_TypeDef* pstSet2)
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    SLinkedListElement_TypeDef* pstMember = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef* pstMemberTemp = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef* pstMemberSet = (SLinkedListElement_TypeDef*) 0UL;
    uint32_t u32Size1 = 0UL;
    uint32_t u32Size2 = 0UL;
    void* pvDataMember = (void*)0UL;

    if(((uint32_t) 0UL != (uint32_t) pstSet1) && ((uint32_t) 0UL != (uint32_t) pstSet2))
    {
        u32Size1 = Set__u32GetSize(pstSet1);
        u32Size2 = Set__u32GetSize(pstSet2);
        if(u32Size1 <= u32Size2)
        {
            enStatus = Set_enSTATUS_OK;
            pstMember = SLinkedList__pstGetHead((const SLinkedList_TypeDef*)pstSet1);
            while((uint32_t) 0UL != (uint32_t) pstMember)
            {
                pvDataMember = SLinkedList__pvGetElementData((const SLinkedListElement_TypeDef*)pstMember);
                pstMemberSet = Set__pstIsMember(pstSet2, pvDataMember);
                if((uint32_t) 0UL == (uint32_t) pstMemberSet)
                {
                    enStatus = Set_enSTATUS_ERROR;
                    break;
                }
                pstMemberTemp = SLinkedList__pstGetElementNextNode((const SLinkedListElement_TypeDef*)pstMember);
                pstMember = pstMemberTemp;
            }
        }
    }
    return enStatus;
}



