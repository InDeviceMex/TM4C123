/**
 *
 * @file SingleLinkList_Size.c
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
 * @verbatim 6 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/List/xHeader/SingleLinkList_Size.h>
#include <stdlib.h>


uint32_t SingleLinkList__u32GetSize(const SingleLinkList_TypeDef* const psList)
{
    uint32_t u32SizeReg = 0UL;
    u32SizeReg = psList->u32Size;
    return u32SizeReg;

}

void SingleLinkList__vSetSize(SingleLinkList_TypeDef*  psList, uint32_t u32SizeArg)
{
    psList->u32Size = u32SizeArg;
}



