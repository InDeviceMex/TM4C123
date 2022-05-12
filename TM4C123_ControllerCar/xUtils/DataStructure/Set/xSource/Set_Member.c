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

SetMember_TypeDef* Set__pstIsMember(const Set_TypeDef* pstSet, const void* pvData)
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    SLinkedListElement_TypeDef *pstMember = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef *pstMemberTemp = (SLinkedListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;

    if((uint32_t) 0UL != (uint32_t) pstSet)
    {
        pstMember = SLinkedList__pstGetHead((const SLinkedList_TypeDef*)pstSet);
        while((uint32_t) 0UL != (uint32_t) pstMember)
        {
            pvDataMember = SLinkedList__pvGetElementData(pstMember);
            if(Set_enSTATUS_OK == (Set_nSTATUS)pstSet->pfu32Match(pvData, pvDataMember))
            {
                enStatus = Set_enSTATUS_OK;
                break;
            }
            pstMemberTemp = SLinkedList__pstGetElementNextNode(pstMember);
            pstMember = pstMemberTemp;
        }

        if(Set_enSTATUS_OK != enStatus)
        {
            pstMember = (SLinkedListElement_TypeDef*) 0UL;
        }
    }
    return pstMember;
}

uint32_t Set__u32GetNMember(const Set_TypeDef* pstSet, const void** pvData, uint32_t u32Members, uint32_t u32MaxSize)
{
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstSet) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32Members ) && (0UL != u32MaxSize ))
    {
        u32SizeReg = SLinkedList__u32GetNNode((const SLinkedList_TypeDef*)pstSet, pvData, u32Members, u32MaxSize);
    }
    return u32SizeReg;
}

uint32_t Set__u32GetAllMember(const Set_TypeDef* pstSet, const void** pvData, uint32_t u32MaxSize)
{
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstSet) && ((uint32_t) 0UL != (uint32_t) pvData ) && ((uint32_t) 0UL != u32MaxSize ))
    {
        u32SizeReg = SLinkedList__u32GetAllNode((const SLinkedList_TypeDef*)pstSet, pvData, u32MaxSize);
    }
    return u32SizeReg;
}

SetMember_TypeDef* Set__pstGetMember(const Set_TypeDef* pstSet, uint32_t u32Position, const void** pvData)
{
    SLinkedListElement_TypeDef *pstMember = (SLinkedListElement_TypeDef*) 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstSet) && ((uint32_t) 0UL != (uint32_t) pvData ))
    {

        pstMember = SLinkedList__pstGetNodePos((const SLinkedList_TypeDef*) pstSet, u32Position);

        if((uint32_t) 0UL != (uint32_t) pstMember)
        {
            *pvData = SLinkedList__pvGetElementData(pstMember);
        }
    }
    return (SetMember_TypeDef*) pstMember;
}

SetMember_TypeDef* Set__pstGetMemberHead(const Set_TypeDef* pstSet, const void** pvData)
{
    SLinkedListElement_TypeDef *pstMember = (SLinkedListElement_TypeDef*) 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstSet) && ((uint32_t) 0UL != (uint32_t) pvData ))
    {

        pstMember = SLinkedList__pstGetNodePos((const SLinkedList_TypeDef*) pstSet, 0UL);

        if((uint32_t) 0UL != (uint32_t) pstMember)
        {
            *pvData = SLinkedList__pvGetElementData(pstMember);
        }
    }
    return (SetMember_TypeDef*) pstMember;
}

SetMember_TypeDef* Set__pstGetMemberNext(const SetMember_TypeDef* pstMember, const void** pvData)
{
    SLinkedListElement_TypeDef *pstMemberReg = (SLinkedListElement_TypeDef*) 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstMember) && ((uint32_t) 0UL != (uint32_t) pvData ))
    {

        pstMemberReg = SLinkedList__pstGetElementNextNode(pstMember);

        if((uint32_t) 0UL != (uint32_t) pstMemberReg)
        {
            *pvData = SLinkedList__pvGetElementData(pstMemberReg);
        }
    }
    return (SetMember_TypeDef*) pstMemberReg;
}

Set_nSTATUS Set__enIsMember(const Set_TypeDef* pstSet, const void* pvData)
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    SLinkedListElement_TypeDef *pstMember = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef *pstMemberTemp = (SLinkedListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;

    if((uint32_t) 0UL != (uint32_t) pstSet)
    {
        pstMember = SLinkedList__pstGetHead((const SLinkedList_TypeDef*)pstSet);
        while((uint32_t) 0UL != (uint32_t) pstMember)
        {
            pvDataMember = SLinkedList__pvGetElementData(pstMember);
            if(Set_enSTATUS_OK == (Set_nSTATUS)pstSet->pfu32Match(pvData, pvDataMember))
            {
                enStatus = Set_enSTATUS_OK;
                break;
            }
            pstMemberTemp = SLinkedList__pstGetElementNextNode(pstMember);
            pstMember = pstMemberTemp;
        }

        if(Set_enSTATUS_OK != enStatus)
        {
            pstMember = (SLinkedListElement_TypeDef*) 0UL;
        }
    }
    return enStatus;
}
