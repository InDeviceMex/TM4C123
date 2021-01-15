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

#include <xUtils/DataStructure/SingleLinkList/xHeader/SingleLinkList_Remove.h>
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/Element/SingleLinkList_Element.h>
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/List/SingleLinkList_List.h>

Set_nSTATUS Set__enRemove(Set_TypeDef* psSet, void** pvData)
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    SingleLinkListElement_TypeDef* psMember = (SingleLinkListElement_TypeDef*) 0UL;
    SingleLinkListElement_TypeDef* psMemberTemp = (SingleLinkListElement_TypeDef*) 0UL;
    SingleLinkListElement_TypeDef* psPreviousMember = (SingleLinkListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;

    if(((uint32_t)0UL != (uint32_t)psSet) && ((uint32_t)0UL != (uint32_t)pvData))
    {

        psMember = SingleLinkList__psGetHead((const SingleLinkList_TypeDef*)psSet);
        while((uint32_t)0UL != (uint32_t)psMember)
        {
            pvDataMember = SingleLinkList__pvGetElementData((const SingleLinkListElement_TypeDef*)psMember);
            if(Set_enSTATUS_OK == (Set_nSTATUS)psSet->pfu32Match(*pvData,pvDataMember))
            {
                break;
            }
            psPreviousMember = psMember;
            psMemberTemp = SingleLinkList__psGetElementNextNode((const SingleLinkListElement_TypeDef*)psMember);
            psMember = psMemberTemp;
        }

        if((uint32_t)0UL != psMember)
        {
            enStatus = (Set_nSTATUS) SingleLinkList__enRemoveNext((SingleLinkList_TypeDef*) psSet, psPreviousMember, pvData);
        }
    }

    return enStatus;
}


