/**
 *
 * @file I2C_RegisterDefines_I2CMCS.h
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
 * @verbatim 6 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CMCS_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CMCS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 2 I2CMCS *********************************************
******************************************************************************************/
/*--------*/
#define I2C_I2CMCS_R_BUSY_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCS_R_BUSY_BIT    ((uint32_t) 0UL)
#define I2C_I2CMCS_R_BUSY_IDLE    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_R_BUSY_BUSY    ((uint32_t) 0x00000001UL)

#define I2C_I2CMCS_BUSY_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCS_BUSY_IDLE    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_BUSY_BUSY    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_I2CMCS_R_ERROR_MASK    ((uint32_t) 0x00000002UL)
#define I2C_I2CMCS_R_ERROR_BIT    ((uint32_t) 1UL)
#define I2C_I2CMCS_R_ERROR_NOERROR    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_R_ERROR_ERROR    ((uint32_t) 0x00000002UL)

#define I2C_I2CMCS_ERROR_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCS_ERROR_NOERROR    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_ERROR_ERROR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_I2CMCS_R_ADRACK_MASK    ((uint32_t) 0x00000004UL)
#define I2C_I2CMCS_R_ADRACK_BIT    ((uint32_t) 2UL)
#define I2C_I2CMCS_R_ADRACK_ACK    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_R_ADRACK_NOACK    ((uint32_t) 0x00000004UL)

#define I2C_I2CMCS_ADRACK_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCS_ADRACK_ACK    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_ADRACK_NOACK    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_I2CMCS_R_DATACK_MASK    ((uint32_t) 0x00000008UL)
#define I2C_I2CMCS_R_DATACK_BIT    ((uint32_t) 3UL)
#define I2C_I2CMCS_R_DATACK_ACK    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_R_DATACK_NOACK    ((uint32_t) 0x00000008UL)

#define I2C_I2CMCS_DATACK_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCS_DATACK_ACK    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_DATACK_NOACK    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_I2CMCS_R_ARBLST_MASK    ((uint32_t) 0x00000010UL)
#define I2C_I2CMCS_R_ARBLST_BIT    ((uint32_t) 4UL)
#define I2C_I2CMCS_R_ARBLST_WON    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_R_ARBLST_LOST    ((uint32_t) 0x00000010UL)

#define I2C_I2CMCS_ARBLST_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCS_ARBLST_WON    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_ARBLST_LOST    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_I2CMCS_R_IDLE_MASK    ((uint32_t) 0x00000020UL)
#define I2C_I2CMCS_R_IDLE_BIT    ((uint32_t) 5UL)
#define I2C_I2CMCS_R_IDLE_NOIDLE    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_R_IDLE_IDLE    ((uint32_t) 0x00000020UL)

#define I2C_I2CMCS_IDLE_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCS_IDLE_NOIDLE    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_IDLE_IDLE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_I2CMCS_R_BUSBSY_MASK    ((uint32_t) 0x00000040UL)
#define I2C_I2CMCS_R_BUSBSY_BIT    ((uint32_t) 6UL)
#define I2C_I2CMCS_R_BUSBSY_IDLE    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_R_BUSBSY_BUSY    ((uint32_t) 0x00000040UL)

#define I2C_I2CMCS_BUSBSY_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCS_BUSBSY_IDLE    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_BUSBSY_BUSY    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_I2CMCS_R_CLKTO_MASK    ((uint32_t) 0x00000080UL)
#define I2C_I2CMCS_R_CLKTO_BIT    ((uint32_t) 7UL)
#define I2C_I2CMCS_R_CLKTO_NOERROR    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_R_CLKTO_ERROR    ((uint32_t) 0x00000080UL)

#define I2C_I2CMCS_CLKTO_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCS_CLKTO_NOERROR    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_CLKTO_ERROR    ((uint32_t) 0x00000001UL)
/*--------*/



/*--------*/
#define I2C_I2CMCS_R_RUN_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCS_R_RUN_BIT    ((uint32_t) 0UL)
#define I2C_I2CMCS_R_RUN_DIS    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_R_RUN_ENA    ((uint32_t) 0x00000001UL)

#define I2C_I2CMCS_RUN_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCS_RUN_DIS    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_RUN_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_I2CMCS_R_START_MASK    ((uint32_t) 0x00000002UL)
#define I2C_I2CMCS_R_START_BIT    ((uint32_t) 1UL)
#define I2C_I2CMCS_R_START_DIS    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_R_START_ENA    ((uint32_t) 0x00000002UL)

#define I2C_I2CMCS_START_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCS_START_DIS    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_START_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_I2CMCS_R_STOP_MASK    ((uint32_t) 0x00000004UL)
#define I2C_I2CMCS_R_STOP_BIT    ((uint32_t) 2UL)
#define I2C_I2CMCS_R_STOP_DIS    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_R_STOP_ENA    ((uint32_t) 0x00000004UL)

#define I2C_I2CMCS_STOP_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCS_STOP_DIS    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_STOP_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_I2CMCS_R_ACK_MASK    ((uint32_t) 0x00000008UL)
#define I2C_I2CMCS_R_ACK_BIT    ((uint32_t) 3UL)
#define I2C_I2CMCS_R_ACK_MANUAL    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_R_ACK_AUTO    ((uint32_t) 0x00000008UL)

#define I2C_I2CMCS_ACK_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCS_ACK_MANUAL    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_ACK_AUTO    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_I2CMCS_R_HS_MASK    ((uint32_t) 0x00000010UL)
#define I2C_I2CMCS_R_HS_BIT    ((uint32_t) 4UL)
#define I2C_I2CMCS_R_HS_DIS    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_R_HS_ENA    ((uint32_t) 0x00000010UL)

#define I2C_I2CMCS_HS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCS_HS_DIS    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCS_HS_ENA    ((uint32_t) 0x00000001UL)
/*--------*/


#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CMCS_H_ */
