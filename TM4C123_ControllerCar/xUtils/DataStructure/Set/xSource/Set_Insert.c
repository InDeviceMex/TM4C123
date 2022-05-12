/**
 *
 * @file Set_Insert.c
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
#include <xUtils/DataStructure/Set/xHeader/Set_Insert.h>
#include <xUtils/DataStructure/Set/xHeader/Set_Member.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Add.h>

Set_nSTATUS Set__enInsert(Set_TypeDef* pstSet, void* pvData)
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    SLinkedListElement_TypeDef* pstMember = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef* pstMemberSet = (SLinkedListElement_TypeDef*) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstSet)
    {
        pstMemberSet = Set__pstIsMember(pstSet, pvData);
        if((uint32_t) 0UL == (uint32_t) pstMemberSet)
        {
            pstMember = SLinkedList__pstAddEnd((SLinkedList_TypeDef*)pstSet, pvData);
            if((uint32_t) 0UL != (uint32_t) pstMember)
            {
                enStatus = Set_enSTATUS_OK;
            }
        }
        else
        {
            enStatus = Set_enSTATUS_EXIST;
        }
    }
    return enStatus;
}

