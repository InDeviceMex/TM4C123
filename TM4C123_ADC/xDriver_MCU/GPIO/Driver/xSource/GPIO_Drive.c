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

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_Drive.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/xHeader/GPIO_InterruptSense.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vSetDrive(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nDRIVE enDriveParam)
{
    GPIO_nBUS enBus=GPIO_enBUS_APB;
    uint32_t u32Reg=0;
    uint32_t u32RegSLR=0;
    GPIO_AUX_TypeDef* gpio=0;
    uint32_t u32Drive =enDriveParam&0x3u;
    uint32_t u32SlewRate =(enDriveParam>>8u)&0x1u;
    if(enPort>GPIO_enPORT_MAX)
    {
        enPort=GPIO_enPORT_MAX;
    }
    enPin&=GPIO_enPIN_ALL;
    GPIO__vSetReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    GPIO__vSetIntSense(enPort,enPin, GPIO_enSENSE_LEVEL);
    gpio=GPIO_AUX_BLOCK[enBus][(uint32_t)enPort];
    u32Reg=gpio->GPIODRR[u32Drive];
    u32RegSLR=gpio->GPIOSLR;
    u32Reg|=enPin;
    gpio->GPIODRR[u32Drive]=u32Reg;
    if(u32SlewRate == 1u)
    {
        u32RegSLR|=enPin;
    }
    else
    {
        u32RegSLR&=~(uint32_t)enPin;
    }
    gpio->GPIOSLR=u32RegSLR;

}


GPIO_nDRIVE GPIO__enGetDrive(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nDRIVE enDriveVar=GPIO_enDRIVE_UNDEF;
    GPIO_nREADY enReady= GPIO_enNOREADY;
    GPIO_nBUS enBus=GPIO_enBUS_APB;
    uint32_t u32Reg=0;
    GPIO_AUX_TypeDef* gpio=0;
    if(enPort>GPIO_enPORT_MAX)
    {
        enPort=GPIO_enPORT_MAX;
    }
    enPin&=GPIO_enPIN_ALL;
    enReady = GPIO__enIsReady(enPort);
    enBus=GPIO__enGetBus(enPort);

    if((GPIO_enREADY == enReady))
    {
        gpio=GPIO_AUX_BLOCK[enBus][(uint32_t)enPort];
        for(enDriveVar=GPIO_enDRIVE_2mA;enDriveVar<=GPIO_enDRIVE_8mA;enDriveVar++)
        {
            u32Reg=gpio->GPIODRR[enDriveVar];
            u32Reg&=enPin;
            if(0u!=u32Reg)
            {
                break;
            }

        }
        if(GPIO_enDRIVE_8mA == enDriveVar)
        {
            u32Reg=gpio->GPIOSLR;
            u32Reg&=enPin;
            if(0u!=u32Reg)
            {
              enDriveVar=GPIO_enDRIVE_8mA_SLR;
            }
        }
    }
    return enDriveVar;
}


