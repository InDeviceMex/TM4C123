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

Set_nSTATUS Set__enIsSubset(const Set_TypeDef* psSet1, const Set_TypeDef* psSet2)
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    SLinkedListElement_TypeDef* psMember = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef* psMemberTemp = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef* psMemberSet = (SLinkedListElement_TypeDef*) 0UL;
    uint32_t u32Size1 = 0UL;
    uint32_t u32Size2 = 0UL;
    void* pvDataMember = (void*)0UL;

    if(((uint32_t)0UL != (uint32_t)psSet1) && ((uint32_t)0UL != (uint32_t)psSet2))
    {
        u32Size1 = Set__u32GetSize(psSet1);
        u32Size2 = Set__u32GetSize(psSet2);
        if(u32Size1 <= u32Size2)
        {
            enStatus = Set_enSTATUS_OK;
            psMember = SLinkedList__psGetHead((const SLinkedList_TypeDef*)psSet1);
            while((uint32_t)0UL != (uint32_t)psMember)
            {
                pvDataMember = SLinkedList__pvGetElementData((const SLinkedListElement_TypeDef*)psMember);
                psMemberSet = Set__psIsMember(psSet2, pvDataMember);
                if((uint32_t)0UL == (uint32_t)psMemberSet)
                {
                    enStatus = Set_enSTATUS_ERROR;
                    break;
                }
                psMemberTemp = SLinkedList__psGetElementNextNode((const SLinkedListElement_TypeDef*)psMember);
                psMember = psMemberTemp;
            }
        }
    }
    return enStatus;
}



