/**
 *
 * @file SYSCTL_RegisterDefines_LDO.h
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_LDO_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_LDO_H_

/******************************************************************************************
************************************21 LDOSPCTL *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_LDOSPCTL_R_VLDO_MASK    ((uint32_t)0x000000FFu)
#define SYSCTL_LDOSPCTL_R_VLDO_BIT     (0u)

#define SYSCTL_LDOSPCTL_VLDO_MASK      ((uint32_t)0x000000FFu)
/*--------*/

/*--------*/
#define SYSCTL_LDOSPCTL_R_VADJEN_MASK    ((uint32_t)0x80000000u)
#define SYSCTL_LDOSPCTL_R_VADJEN_BIT     (31u)

#define SYSCTL_LDOSPCTL_VADJEN_MASK      ((uint32_t)0x000000F01u)
/*--------*/

/******************************************************************************************
************************************22 LDOSPCAL *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_LDOSPCAL_R_NOPLL_MASK    ((uint32_t)0x000000FFu)
#define SYSCTL_LDOSPCAL_R_NOPLL_BIT     (0u)

#define SYSCTL_LDOSPCAL_NOPLL_MASK      ((uint32_t)0x000000FFu)
/*--------*/

/*--------*/
#define SYSCTL_LDOSPCAL_R_WITHPLL_MASK    ((uint32_t)0x0000FF00u)
#define SYSCTL_LDOSPCAL_R_WITHPLL_BIT     (8u)

#define SYSCTL_LDOSPCAL_WITHPLL_MASK      ((uint32_t)0x000000FFu)
/*--------*/

/******************************************************************************************
************************************23 LDODPCTL *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_LDODPCTL_R_VLDO_MASK    ((uint32_t)0x000000FFu)
#define SYSCTL_LDODPCTL_R_VLDO_BIT     (0u)

#define SYSCTL_LDODPCTL_VLDO_MASK      ((uint32_t)0x000000FFu)
/*--------*/

/*--------*/
#define SYSCTL_LDODPCTL_R_VADJEN_MASK    ((uint32_t)0x80000000u)
#define SYSCTL_LDODPCTL_R_VADJEN_BIT     (31u)

#define SYSCTL_LDODPCTL_VADJEN_MASK      ((uint32_t)0x000000F01u)
/*--------*/

/******************************************************************************************
************************************24 LDODPCAL *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_LDODPCAL_R_NOPLL_MASK    ((uint32_t)0x000000FFu)
#define SYSCTL_LDODPCAL_R_NOPLL_BIT     (0u)

#define SYSCTL_LDODPCAL_NOPLL_MASK      ((uint32_t)0x000000FFu)
/*--------*/

/*--------*/
#define SYSCTL_LDODPCAL_R_KHZ30_MASK    ((uint32_t)0x0000FF00u)
#define SYSCTL_LDODPCAL_R_KHZ30_BIT     (8u)

#define SYSCTL_LDODPCAL_KHZ30_MASK      ((uint32_t)0x000000FFu)
/*--------*/





#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_LDO_H_ */
