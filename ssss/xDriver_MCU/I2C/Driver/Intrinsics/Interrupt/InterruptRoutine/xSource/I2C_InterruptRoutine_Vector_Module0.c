/**
 *
 * @file I2C_InterruptRoutine_Vector_Module0.c
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
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module0.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Source.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

void I2C0__vIRQVectorHandler(void)
{
    volatile uint32_t u32RegMaster = 0U;
    volatile uint32_t u32RegSlave = 0U;

    u32RegMaster = (uint32_t) I2C0_I2CMMIS_R;
    u32RegSlave = (uint32_t) I2C0_I2CSMIS_R;

    if((uint32_t) I2C_enINT_SOURCE_MASTER_MASTER & u32RegMaster)
    {
        I2C0_I2CMICR_R = (uint32_t) I2C_enINT_SOURCE_MASTER_MASTER;
        I2C__vIRQSourceMasterHandler[(uint32_t) I2C_enMODULE_0][(uint32_t) I2C_enINTERRUPT_MASTER_MASTER]();
    }
    if((uint32_t) I2C_enINT_SOURCE_MASTER_CLOCK_TIMEOUT & u32RegMaster)
    {
        I2C__vIRQSourceMasterHandler[(uint32_t) I2C_enMODULE_0][(uint32_t) I2C_enINTERRUPT_MASTER_CLOCK_TIMEOUT]();
        I2C0_I2CMICR_R = (uint32_t) I2C_enINT_SOURCE_MASTER_CLOCK_TIMEOUT;
    }

    if((uint32_t) I2C_enINT_SOURCE_SLAVE_DATA & u32RegSlave)
    {
        I2C0_I2CSICR_R = (uint32_t) I2C_enINT_SOURCE_SLAVE_DATA;
        I2C__vIRQSourceSlaveHandler[(uint32_t) I2C_enMODULE_0][(uint32_t) I2C_enINTERRUPT_SLAVE_DATA]();
    }
    if((uint32_t) I2C_enINT_SOURCE_SLAVE_START & u32RegSlave)
    {
        I2C0_I2CSICR_R = (uint32_t) I2C_enINT_SOURCE_SLAVE_START;
        I2C__vIRQSourceSlaveHandler[(uint32_t) I2C_enMODULE_0][(uint32_t) I2C_enINTERRUPT_SLAVE_START]();
    }
    if((uint32_t) I2C_enINT_SOURCE_SLAVE_STOP & u32RegSlave)
    {
        I2C0_I2CSICR_R = (uint32_t) I2C_enINT_SOURCE_SLAVE_STOP;
        I2C__vIRQSourceSlaveHandler[(uint32_t) I2C_enMODULE_0][(uint32_t) I2C_enINTERRUPT_SLAVE_STOP]();
    }
}


