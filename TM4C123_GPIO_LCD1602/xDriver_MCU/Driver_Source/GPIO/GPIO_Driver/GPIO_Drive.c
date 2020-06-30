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

#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Drive.h>

void GPIO__vSetDrive(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nDRIVE enDrive)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32Reg=0;
    uint32_t u32RegSLR=0;
    GPIO_AUX_TypeDef* gpio=0;
    uint32_t u32Drive =enDrive&0x3u;
    uint32_t u32SlewRate =(enDrive>>8u)&0x1u;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
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
    GPIO_nDRIVE enDrive=GPIO_enDRIVE_UNDEF;
    GPIO_nREADY enReady= GPIO_enNOREADY;
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32Reg=0;
    GPIO_AUX_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    enReady = GPIO__enIsReady(enPort);
    enBus=GPIO__enGetBus(enPort);

    if((GPIO_enREADY == enReady))
    {
        gpio=GPIO_AUX_BLOCK[enBus][(uint32_t)enPort];
        for(enDrive=GPIO_enDRIVE_2mA;enDrive<=GPIO_enDRIVE_8mA;enDrive++)
        {
            u32Reg=gpio->GPIODRR[enDrive];
            u32Reg&=enPin;
            if(0u!=u32Reg)
            {
                break;
            }

        }
        if(GPIO_enDRIVE_8mA == enDrive)
        {
            u32Reg=gpio->GPIOSLR;
            u32Reg&=enPin;
            if(0u!=u32Reg)
            {
                enDrive=GPIO_enDRIVE_8mA_SLR;
            }
        }
    }
    return enDrive;
}


