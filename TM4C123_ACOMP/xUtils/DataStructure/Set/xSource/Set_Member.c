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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Node.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Element/SLinkedList_Element.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/SLinkedList_List.h>

SetMember_TypeDef* Set__psIsMember(const Set_TypeDef* psSet, const void* pvData)
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    SLinkedListElement_TypeDef *psMember = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef *psMemberTemp = (SLinkedListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;

    if((uint32_t)0UL != (uint32_t)psSet)
    {
        psMember = SLinkedList__psGetHead((const SLinkedList_TypeDef*)psSet);
        while((uint32_t)0UL != (uint32_t)psMember)
        {
            pvDataMember=SLinkedList__pvGetElementData(psMember);
            if(Set_enSTATUS_OK == (Set_nSTATUS)psSet->pfu32Match(pvData,pvDataMember))
            {
                enStatus = Set_enSTATUS_OK;
                break;
            }
            psMemberTemp = SLinkedList__psGetElementNextNode(psMember);
            psMember = psMemberTemp;
        }

        if(Set_enSTATUS_OK != enStatus)
        {
            psMember = (SLinkedListElement_TypeDef*) 0UL;
        }
    }
    return psMember;
}

uint32_t Set__u32GetNMember(const Set_TypeDef* psSet, const void** pvData, uint32_t u32Members, uint32_t u32MaxSize)
{
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t)0UL != (uint32_t)psSet) && ((uint32_t)0UL != pvData )&& ((uint32_t)0UL != u32Members )&& ((uint32_t)0UL != u32MaxSize ))
    {
        u32SizeReg = SLinkedList__u32GetNNode((const SLinkedList_TypeDef*)psSet, pvData, u32Members, u32MaxSize);
    }
    return u32SizeReg;
}

uint32_t Set__u32GetAllMember(const Set_TypeDef* psSet, const void** pvData, uint32_t u32MaxSize)
{
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t)0UL != (uint32_t)psSet) && ((uint32_t)0UL != (uint32_t)pvData ) && ((uint32_t)0UL != u32MaxSize ))
    {
        u32SizeReg = SLinkedList__u32GetAllNode((const SLinkedList_TypeDef*)psSet, pvData, u32MaxSize);
    }
    return u32SizeReg;
}

SetMember_TypeDef* Set__psGetMember(const Set_TypeDef* psSet, uint32_t u32Position, const void** pvData)
{
    SLinkedListElement_TypeDef *psMember = (SLinkedListElement_TypeDef*) 0UL;

    if(((uint32_t)0UL != (uint32_t)psSet) && ((uint32_t)0UL != pvData ))
    {

        psMember = SLinkedList__psGetNodePos((const SLinkedList_TypeDef*) psSet, u32Position);

        if((uint32_t)0UL != (uint32_t)psMember)
        {
            *pvData = SLinkedList__pvGetElementData(psMember);
        }
    }
    return (SetMember_TypeDef*) psMember;
}

SetMember_TypeDef* Set__psGetMemberHead(const Set_TypeDef* psSet, const void** pvData)
{
    SLinkedListElement_TypeDef *psMember = (SLinkedListElement_TypeDef*) 0UL;

    if(((uint32_t)0UL != (uint32_t)psSet) && ((uint32_t)0UL != pvData ))
    {

        psMember = SLinkedList__psGetNodePos((const SLinkedList_TypeDef*) psSet, 0UL);

        if((uint32_t)0UL != (uint32_t)psMember)
        {
            *pvData = SLinkedList__pvGetElementData(psMember);
        }
    }
    return (SetMember_TypeDef*) psMember;
}

SetMember_TypeDef* Set__psGetMemberNext(const SetMember_TypeDef* psMember, const void** pvData)
{
    SLinkedListElement_TypeDef *psMemberReg = (SLinkedListElement_TypeDef*) 0UL;

    if(((uint32_t)0UL != (uint32_t)psMember) && ((uint32_t)0UL != pvData ))
    {

        psMemberReg = SLinkedList__psGetElementNextNode(psMember);

        if((uint32_t)0UL != (uint32_t)psMemberReg)
        {
            *pvData = SLinkedList__pvGetElementData(psMemberReg);
        }
    }
    return (SetMember_TypeDef*) psMemberReg;
}

Set_nSTATUS Set__enIsMember(const Set_TypeDef* psSet, const void* pvData)
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    SLinkedListElement_TypeDef *psMember = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef *psMemberTemp = (SLinkedListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;

    if((uint32_t)0UL != (uint32_t)psSet)
    {
        psMember = SLinkedList__psGetHead((const SLinkedList_TypeDef*)psSet);
        while((uint32_t)0UL != (uint32_t)psMember)
        {
            pvDataMember=SLinkedList__pvGetElementData(psMember);
            if(Set_enSTATUS_OK == (Set_nSTATUS)psSet->pfu32Match(pvData,pvDataMember))
            {
                enStatus = Set_enSTATUS_OK;
                break;
            }
            psMemberTemp = SLinkedList__psGetElementNextNode(psMember);
            psMember = psMemberTemp;
        }

        if(Set_enSTATUS_OK != enStatus)
        {
            psMember = (SLinkedListElement_TypeDef*) 0UL;
        }
    }
    return enStatus;
}
