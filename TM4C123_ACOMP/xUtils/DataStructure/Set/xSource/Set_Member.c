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
#include <xUtils/DataStructure/Set/xHeader/Set_Size.h>
#include <xUtils/DataStructure/SingleLinkList/xHeader/SingleLinkList_Node.h>
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
            if(Set_enSTATUS_OK == (Set_nSTATUS)psSet->pfu32Match(pvData,pvDataMember))
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

uint32_t Set__u32GetNMember(const Set_TypeDef* psSet, const void** pvData, uint32_t u32Members, uint32_t u32MaxSize)
{
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t)0UL != (uint32_t)psSet) && ((uint32_t)0UL != pvData )&& ((uint32_t)0UL != u32Members )&& ((uint32_t)0UL != u32MaxSize ))
    {
        u32SizeReg = SingleLinkList__u32GetNNode((const SingleLinkList_TypeDef*)psSet, pvData, u32Members, u32MaxSize);
    }
    return u32SizeReg;
}

uint32_t Set__u32GetAllMember(const Set_TypeDef* psSet, const void** pvData, uint32_t u32MaxSize)
{
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t)0UL != (uint32_t)psSet) && ((uint32_t)0UL != (uint32_t)pvData ) && ((uint32_t)0UL != u32MaxSize ))
    {
        u32SizeReg = SingleLinkList__u32GetAllNode((const SingleLinkList_TypeDef*)psSet, pvData, u32MaxSize);
    }
    return u32SizeReg;
}

SetMember_TypeDef* Set__psGetMember(const Set_TypeDef* psSet, uint32_t u32Position, const void** pvData)
{
    SingleLinkListElement_TypeDef *psMember = (SingleLinkListElement_TypeDef*) 0UL;

    if(((uint32_t)0UL != (uint32_t)psSet) && ((uint32_t)0UL != pvData ))
    {

        psMember = SingleLinkList__psGetNodePos((const SingleLinkList_TypeDef*) psSet, u32Position);

        if((uint32_t)0UL != (uint32_t)psMember)
        {
            *pvData = SingleLinkList__pvGetElementData(psMember);
        }
    }
    return (SetMember_TypeDef*) psMember;
}

SetMember_TypeDef* Set__psGetMemberHead(const Set_TypeDef* psSet, const void** pvData)
{
    SingleLinkListElement_TypeDef *psMember = (SingleLinkListElement_TypeDef*) 0UL;

    if(((uint32_t)0UL != (uint32_t)psSet) && ((uint32_t)0UL != pvData ))
    {

        psMember = SingleLinkList__psGetNodePos((const SingleLinkList_TypeDef*) psSet, 0UL);

        if((uint32_t)0UL != (uint32_t)psMember)
        {
            *pvData = SingleLinkList__pvGetElementData(psMember);
        }
    }
    return (SetMember_TypeDef*) psMember;
}

SetMember_TypeDef* Set__psGetMemberNext(const SetMember_TypeDef* psMember, const void** pvData)
{
    SingleLinkListElement_TypeDef *psMemberReg = (SingleLinkListElement_TypeDef*) 0UL;

    if(((uint32_t)0UL != (uint32_t)psMember) && ((uint32_t)0UL != pvData ))
    {

        psMemberReg = SingleLinkList__psGetElementNextNode(psMember);

        if((uint32_t)0UL != (uint32_t)psMemberReg)
        {
            *pvData = SingleLinkList__pvGetElementData(psMemberReg);
        }
    }
    return (SetMember_TypeDef*) psMemberReg;
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
            if(Set_enSTATUS_OK == (Set_nSTATUS)psSet->pfu32Match(pvData,pvDataMember))
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
