/**
 *
 * @file I2C_InterruptRoutine_Source.c
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
 * @verbatim 8 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Source.h>

void I2C_vIRQSourceHandler_Dummy(void);

void (*I2C__vIRQSourceMasterHandler[(uint32_t) I2C_enMODULE_MAX][(uint32_t) I2C_enINTERRUPT_MASTER_MAX]) (void) =
{
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
    },
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
    },
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
    },
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
    },
};

void (*I2C__vIRQSourceSlaveHandler[(uint32_t) I2C_enMODULE_MAX][(uint32_t) I2C_enINTERRUPT_SLAVE_MAX]) (void) =
{
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
    },
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
    },
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
    },
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
    },
};
void I2C_vIRQSourceHandler_Dummy(void)
{
    while(1UL){}
}
