/**
 *
 * @file Set_Equal.c
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
#include <xUtils/DataStructure/Set/xHeader/Set_Equal.h>
#include <xUtils/DataStructure/Set/xHeader/Set_Size.h>
#include <xUtils/DataStructure/Set/xHeader/Set_Subset.h>


Set_nSTATUS Set__enIsEqual(const Set_TypeDef* pstSet1, const Set_TypeDef* pstSet2)
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    uint32_t u32Size1 = 0UL;
    uint32_t u32Size2 = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstSet1) && ((uint32_t) 0UL != (uint32_t) pstSet2))
    {
        u32Size1 = Set__u32GetSize(pstSet1);
        u32Size2 = Set__u32GetSize(pstSet2);
        if(u32Size1 == u32Size2)
        {
            enStatus = Set__enIsSubset(pstSet1, pstSet2);
        }
    }
    return enStatus;
}


