/**
 *
 * @file GPIO_Drive.c
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
 * @verbatim 30 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_Drive.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vSetDrive(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nDRIVE enDriveParam)
{
    uint32_t u32Drive = 0UL;
    uint32_t u32SlewRate = 0UL;
    uint32_t u32OffsetRegisterDRR = 0UL;

    u32Drive = (uint32_t) enDriveParam;
    u32Drive &= 0x3UL;

    u32SlewRate = (uint32_t) enDriveParam;
    u32SlewRate >>= 8UL;
    u32SlewRate &= 0x1UL;

    u32OffsetRegisterDRR = u32Drive;
    u32OffsetRegisterDRR *= 4UL;
    u32OffsetRegisterDRR += GPIO_GPIODRR_OFFSET;

    GPIO__vEnGeneric(enPort, u32OffsetRegisterDRR, enPin);
    GPIO__vSetGeneric(enPort, GPIO_GPIOSLR_OFFSET, enPin, (uint32_t) u32SlewRate);
}

GPIO_nDRIVE GPIO__enGetDrive(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nDRIVE enDriveVar = GPIO_enDRIVE_UNDEF;
    uint32_t u32DriveParam = 0UL;
    uint32_t u32OffsetRegisterDRR = GPIO_GPIODRR_OFFSET;

    for(enDriveVar = GPIO_enDRIVE_2mA; enDriveVar <= GPIO_enDRIVE_8mA; enDriveVar++)
    {
        u32DriveParam = GPIO__u32GetGeneric(enPort, u32OffsetRegisterDRR, enPin);
        if(0UL != u32DriveParam)
        {
            break;
        }
        u32OffsetRegisterDRR += 4UL ;
    }

    if(0xFFFFFFFFUL != u32DriveParam)
    {
        if(GPIO_enDRIVE_8mA == enDriveVar)
        {
            u32DriveParam = GPIO__u32GetGeneric(enPort, GPIO_GPIOSLR_OFFSET, enPin);
            if(1UL == u32DriveParam)
            {
                enDriveVar = GPIO_enDRIVE_8mA_SLR;
            }
        }
    }
    else
    {
        enDriveVar = GPIO_enDRIVE_UNDEF;
    }

    return enDriveVar;
}
