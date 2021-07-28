/**
 *
 * @file FLASH_Size.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 22 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Size.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>

uint32_t FLASH__u32GetSize (void)
{
    uint32_t u32Size = 0UL;

    u32Size = MCU__u32ReadRegister(FLASH_BASE, FLASH_FSIZE_OFFSET, FLASH_FSIZE_SIZE_MASK, FLASH_FSIZE_R_SIZE_BIT);
    u32Size++;
    u32Size *= 2048UL;
    return u32Size;
}

uint32_t FLASH__u32GetSectorSize (void)
{
    uint32_t u32SectorSize = 1024UL;

    u32SectorSize = FLASH_PAGE_SIZE;
    return u32SectorSize;
}


