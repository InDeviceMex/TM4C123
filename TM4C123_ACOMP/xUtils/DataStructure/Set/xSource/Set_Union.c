/**
 *
 * @file Set_Union.c
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
#include <xUtils/DataStructure/Set/xHeader/Set_Union.h>
#include <xUtils/DataStructure/Set/xHeader/Set_Init.h>
#include <xUtils/DataStructure/Set/xHeader/Set_Destroy.h>
#include <xUtils/DataStructure/Set/xHeader/Set_Member.h>

#include <xUtils/DataStructure/SingleLinkList/xHeader/SingleLinkList_Add.h>
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/Element/SingleLinkList_Element.h>
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/List/SingleLinkList_List.h>

Set_nSTATUS Set__enUnion(Set_TypeDef* psNewSet, Set_TypeDef* psSet1, const Set_TypeDef* psSet2)
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    SingleLinkListElement_TypeDef* psMember = (SingleLinkListElement_TypeDef*) 0UL;
    SingleLinkListElement_TypeDef* psMemberTemp = (SingleLinkListElement_TypeDef*) 0UL;
    SingleLinkListElement_TypeDef* psNewMember = (SingleLinkListElement_TypeDef*) 0UL;
    SingleLinkListElement_TypeDef* psMemberSet = (SingleLinkListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;

    if(((uint32_t)0UL != (uint32_t)psSet1) && ((uint32_t)0UL != (uint32_t)psSet2))
    {
        enStatus = Set__enInit(psNewSet, psSet1->pfu32Match, (void  (*)(void *DataContainer))0UL);
        if(Set_enSTATUS_ERROR != enStatus)
        {
            psMember = SingleLinkList__psGetHead((const SingleLinkList_TypeDef*)psSet1);
            while((uint32_t)0UL != (uint32_t)psMember)
            {
                pvDataMember = SingleLinkList__pvGetElementData((const SingleLinkListElement_TypeDef*)psMember);
                psNewMember = SingleLinkList__psAddEnd((SingleLinkList_TypeDef*) psNewSet,  pvDataMember);
                if( (uint32_t)0UL == (uint32_t)psNewMember)
                {
                    enStatus = Set_enSTATUS_ERROR;
                    Set__vDestroy(psNewSet);
                    break;
                }
                psMemberTemp = SingleLinkList__psGetElementNextNode((const SingleLinkListElement_TypeDef*)psMember);
                psMember = psMemberTemp;
            }

            if((uint32_t)Set_enSTATUS_ERROR != enStatus)
            {
                psMember = SingleLinkList__psGetHead((const SingleLinkList_TypeDef*)psSet2);
                while((uint32_t)0UL != (uint32_t)psMember)
                {
                    pvDataMember = SingleLinkList__pvGetElementData((const SingleLinkListElement_TypeDef*)psMember);
                    psMemberSet = Set__psIsMember(psSet1, pvDataMember);
                    if((uint32_t)0UL == psMemberSet)
                    {
                        psNewMember = SingleLinkList__psAddEnd((SingleLinkList_TypeDef*) psNewSet,  pvDataMember);
                        if( (uint32_t)0UL == (uint32_t)psNewMember)
                        {
                            enStatus = Set_enSTATUS_ERROR;
                            Set__vDestroy(psNewSet);
                            break;
                        }
                    }
                    psMemberTemp = SingleLinkList__psGetElementNextNode((const SingleLinkListElement_TypeDef*)psMember);
                    psMember = psMemberTemp;
                }
            }
        }
    }
    return enStatus;
}

Set_TypeDef* Set__psUnion(Set_TypeDef* psSet1, const Set_TypeDef* psSet2)
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    Set_TypeDef* psNewSet = (Set_TypeDef*) 0UL;
    SingleLinkListElement_TypeDef* psMember = (SingleLinkListElement_TypeDef*) 0UL;
    SingleLinkListElement_TypeDef* psMemberTemp = (SingleLinkListElement_TypeDef*) 0UL;
    SingleLinkListElement_TypeDef* psNewMember = (SingleLinkListElement_TypeDef*) 0UL;
    SingleLinkListElement_TypeDef* psMemberSet = (SingleLinkListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;

    if(((uint32_t)0UL != (uint32_t)psSet1) && ((uint32_t)0UL != (uint32_t)psSet2))
    {
        psNewSet = Set__psInit(psSet1->pfu32Match, (void  (*)(void *DataContainer))0UL);

        if((uint32_t)0UL != (uint32_t)psNewSet)
        {
            enStatus = Set_enSTATUS_OK;
            psMember = SingleLinkList__psGetHead((const SingleLinkList_TypeDef*)psSet1);
            while((uint32_t)0UL != (uint32_t)psMember)
            {
                pvDataMember = SingleLinkList__pvGetElementData((const SingleLinkListElement_TypeDef*)psMember);
                psNewMember = SingleLinkList__psAddEnd((SingleLinkList_TypeDef*) psNewSet,  pvDataMember);
                if( (uint32_t)0UL == (uint32_t)psNewMember)
                {
                    enStatus = Set_enSTATUS_ERROR;
                    Set__vDestroy(psNewSet);
                    break;
                }
                psMemberTemp = SingleLinkList__psGetElementNextNode((const SingleLinkListElement_TypeDef*)psMember);
                psMember = psMemberTemp;
            }

            if((uint32_t)Set_enSTATUS_ERROR != enStatus)
            {
                psMember = SingleLinkList__psGetHead((const SingleLinkList_TypeDef*)psSet2);
                while((uint32_t)0UL != (uint32_t)psMember)
                {
                    pvDataMember = SingleLinkList__pvGetElementData((const SingleLinkListElement_TypeDef*)psMember);
                    psMemberSet = Set__psIsMember(psSet1, pvDataMember);
                    if((uint32_t)0UL == psMemberSet)
                    {
                        psNewMember = SingleLinkList__psAddEnd((SingleLinkList_TypeDef*) psNewSet,  pvDataMember);
                        if( (uint32_t)0UL == (uint32_t)psNewMember)
                        {
                            Set__vDestroy(psNewSet);
                            break;
                        }
                    }
                    psMemberTemp = SingleLinkList__psGetElementNextNode((const SingleLinkListElement_TypeDef*)psMember);
                    psMember = psMemberTemp;
                }
            }
        }
    }
    return psNewSet;
}


