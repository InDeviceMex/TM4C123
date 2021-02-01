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

Set_nSTATUS Set__enInsert(Set_TypeDef* psSet, void* pvData)
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    SLinkedListElement_TypeDef* psMember = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef* psMemberSet = (SLinkedListElement_TypeDef*) 0UL;
    if((uint32_t) 0UL != (uint32_t) psSet)
    {
        psMemberSet = Set__psIsMember(psSet, pvData);
        if((uint32_t) 0UL == (uint32_t) psMemberSet)
        {
            psMember = SLinkedList__psAddEnd((SLinkedList_TypeDef*)psSet,pvData);
            if((uint32_t) 0UL != (uint32_t) psMember)
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

