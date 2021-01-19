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

Set_nSTATUS Set__enRemove(Set_TypeDef* psSet, void** pvData)
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    SLinkedListElement_TypeDef* psMember = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef* psMemberTemp = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef* psPreviousMember = (SLinkedListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;

    if(((uint32_t)0UL != (uint32_t)psSet) && ((uint32_t)0UL != (uint32_t)pvData))
    {

        psMember = SLinkedList__psGetHead((const SLinkedList_TypeDef*)psSet);
        while((uint32_t)0UL != (uint32_t)psMember)
        {
            pvDataMember = SLinkedList__pvGetElementData((const SLinkedListElement_TypeDef*)psMember);
            if(Set_enSTATUS_OK == (Set_nSTATUS)psSet->pfu32Match(*pvData,pvDataMember))
            {
                break;
            }
            psPreviousMember = psMember;
            psMemberTemp = SLinkedList__psGetElementNextNode((const SLinkedListElement_TypeDef*)psMember);
            psMember = psMemberTemp;
        }

        if((uint32_t)0UL != (uint32_t)psMember)
        {
            enStatus = (Set_nSTATUS) SLinkedList__enRemoveNext((SLinkedList_TypeDef*) psSet, psPreviousMember, pvData);
        }
    }

    return enStatus;
}


