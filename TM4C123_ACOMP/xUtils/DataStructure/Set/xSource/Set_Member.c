/**
 *
 * @file Set_Member.c
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
#include <xUtils/DataStructure/Set/xHeader/Set_Member.h>
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/Element/SingleLinkList_Element.h>
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/List/SingleLinkList_List.h>

SetMember_TypeDef* Set__psIsMember(const Set_TypeDef* psSet, const void* pvData)
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    SingleLinkListElement_TypeDef *psMember = (SingleLinkListElement_TypeDef*) 0UL;
    SingleLinkListElement_TypeDef *psMemberTemp = (SingleLinkListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;

    if((uint32_t)0UL != (uint32_t)psSet)
    {
        psMember = SingleLinkList__psGetHead((const SingleLinkList_TypeDef*)psSet);
        while((uint32_t)0UL != (uint32_t)psMember)
        {
            pvDataMember=SingleLinkList__pvGetElementData(psMember);
            if(psSet->pfu32Match(pvData,pvDataMember))
            {
                enStatus = Set_enSTATUS_OK;
                break;
            }
            psMemberTemp = SingleLinkList__psGetElementNextNode(psMember);
            psMember = psMemberTemp;
        }

        if(Set_enSTATUS_OK != enStatus)
        {
            psMember = (SingleLinkListElement_TypeDef*) 0UL;
        }
    }
    return psMember;
}

Set_nSTATUS Set__enIsMember(const Set_TypeDef* psSet, const void* pvData)
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    SingleLinkListElement_TypeDef *psMember = (SingleLinkListElement_TypeDef*) 0UL;
    SingleLinkListElement_TypeDef *psMemberTemp = (SingleLinkListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;

    if((uint32_t)0UL != (uint32_t)psSet)
    {
        psMember = SingleLinkList__psGetHead((const SingleLinkList_TypeDef*)psSet);
        while((uint32_t)0UL != (uint32_t)psMember)
        {
            pvDataMember=SingleLinkList__pvGetElementData(psMember);
            if(psSet->pfu32Match(pvData,pvDataMember))
            {
                enStatus = Set_enSTATUS_OK;
                break;
            }
            psMemberTemp = SingleLinkList__psGetElementNextNode(psMember);
            psMember = psMemberTemp;
        }

        if(Set_enSTATUS_OK != enStatus)
        {
            psMember = (SingleLinkListElement_TypeDef*) 0UL;
        }
    }
    return enStatus;
}
