/**
 *
 * @file SYSCTL_RegisterDefines_Interrupt.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_INTERRUPT_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_INTERRUPT_H_

#include <stdint.h>

/******************************************************************************************
************************************ 4 RIS *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RIS_R_BOR1RIS_MASK       ((uint32_t)0x00000002u)
#define SYSCTL_RIS_R_BOR1RIS_BIT        (1u)
#define SYSCTL_RIS_R_BOR1RIS_NOACTIVE   ((uint32_t)0x00000000u)
#define SYSCTL_RIS_R_BOR1RIS_ACTIVE     ((uint32_t)0x00000002u)

#define SYSCTL_RIS_BOR1RIS_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_RIS_BOR1RIS_NOACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_RIS_BOR1RIS_ACTIVE       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_MOFRIS_MASK       ((uint32_t)0x00000008u)
#define SYSCTL_RIS_R_MOFRIS_BIT        (3u)
#define SYSCTL_RIS_R_MOFRIS_NOACTIVE   ((uint32_t)0x00000000u)
#define SYSCTL_RIS_R_MOFRIS_ACTIVE     ((uint32_t)0x00000008u)

#define SYSCTL_RIS_MOFRIS_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_RIS_MOFRIS_NOACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_RIS_MOFRIS_ACTIVE       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_PLLLRIS_MASK       ((uint32_t)0x00000040u)
#define SYSCTL_RIS_R_PLLLRIS_BIT        (6u)
#define SYSCTL_RIS_R_PLLLRIS_NOACTIVE   ((uint32_t)0x00000000u)
#define SYSCTL_RIS_R_PLLLRIS_ACTIVE     ((uint32_t)0x00000040u)

#define SYSCTL_RIS_PLLLRIS_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_RIS_PLLLRIS_NOACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_RIS_PLLLRIS_ACTIVE       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_USBPLLLRIS_MASK       ((uint32_t)0x00000080u)
#define SYSCTL_RIS_R_USBPLLLRIS_BIT        (7u)
#define SYSCTL_RIS_R_USBPLLLRIS_NOACTIVE   ((uint32_t)0x00000000u)
#define SYSCTL_RIS_R_USBPLLLRIS_ACTIVE     ((uint32_t)0x00000080u)

#define SYSCTL_RIS_USBPLLLRIS_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_RIS_USBPLLLRIS_NOACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_RIS_USBPLLLRIS_ACTIVE       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_MOSCPUPRIS_MASK       ((uint32_t)0x00000100u)
#define SYSCTL_RIS_R_MOSCPUPRIS_BIT        (8u)
#define SYSCTL_RIS_R_MOSCPUPRIS_NOACTIVE   ((uint32_t)0x00000000u)
#define SYSCTL_RIS_R_MOSCPUPRIS_ACTIVE     ((uint32_t)0x00000100u)

#define SYSCTL_RIS_MOSCPUPRIS_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_RIS_MOSCPUPRIS_NOACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_RIS_MOSCPUPRIS_ACTIVE       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_VDDARIS_MASK       ((uint32_t)0x00000400u)
#define SYSCTL_RIS_R_VDDARIS_BIT        (10u)
#define SYSCTL_RIS_R_VDDARIS_NOACTIVE   ((uint32_t)0x00000000u)
#define SYSCTL_RIS_R_VDDARIS_ACTIVE     ((uint32_t)0x00000400u)

#define SYSCTL_RIS_VDDARIS_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_RIS_VDDARIS_NOACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_RIS_VDDARIS_ACTIVE       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_BOR0RIS_MASK       ((uint32_t)0x00000800u)
#define SYSCTL_RIS_R_BOR0RIS_BIT        (11u)
#define SYSCTL_RIS_R_BOR0RIS_NOACTIVE   ((uint32_t)0x00000000u)
#define SYSCTL_RIS_R_BOR0RIS_ACTIVE     ((uint32_t)0x00000800u)

#define SYSCTL_RIS_BOR0RIS_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_RIS_BOR0RIS_NOACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_RIS_BOR0RIS_ACTIVE       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************ 5 IMC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_IMC_R_BOR1IM_MASK    ((uint32_t)0x00000002u)
#define SYSCTL_IMC_R_BOR1IM_BIT     (1u)
#define SYSCTL_IMC_R_BOR1IM_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_IMC_R_BOR1IM_EN      ((uint32_t)0x00000002u)

#define SYSCTL_IMC_BOR1IM_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_IMC_BOR1IM_DIS       ((uint32_t)0x00000000u)
#define SYSCTL_IMC_BOR1IM_EN        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_MOFIM_MASK     ((uint32_t)0x00000008u)
#define SYSCTL_IMC_R_MOFIM_BIT      (3u)
#define SYSCTL_IMC_R_MOFIM_DIS      ((uint32_t)0x00000000u)
#define SYSCTL_IMC_R_MOFIM_EN       ((uint32_t)0x00000008u)

#define SYSCTL_IMC_MOFIM_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_IMC_MOFIM_DIS        ((uint32_t)0x00000000u)
#define SYSCTL_IMC_MOFIM_EN         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_PLLLIM_MASK    ((uint32_t)0x00000040u)
#define SYSCTL_IMC_R_PLLLIM_BIT     (6u)
#define SYSCTL_IMC_R_PLLLIM_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_IMC_R_PLLLIM_EN      ((uint32_t)0x00000040u)

#define SYSCTL_IMC_PLLLIM_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_IMC_PLLLIM_DIS       ((uint32_t)0x00000000u)
#define SYSCTL_IMC_PLLLIM_EN        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_USBPLLLIM_MASK ((uint32_t)0x00000080u)
#define SYSCTL_IMC_R_USBPLLLIM_BIT  (7u)
#define SYSCTL_IMC_R_USBPLLLIM_DIS  ((uint32_t)0x00000000u)
#define SYSCTL_IMC_R_USBPLLLIM_EN   ((uint32_t)0x00000080u)

#define SYSCTL_IMC_USBPLLLIM_MASK   ((uint32_t)0x00000001u)
#define SYSCTL_IMC_USBPLLLIM_DIS    ((uint32_t)0x00000000u)
#define SYSCTL_IMC_USBPLLLIM_EN     ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_MOSCPUPIM_MASK ((uint32_t)0x00000100u)
#define SYSCTL_IMC_R_MOSCPUPIM_BIT  (8u)
#define SYSCTL_IMC_R_MOSCPUPIM_DIS  ((uint32_t)0x00000000u)
#define SYSCTL_IMC_R_MOSCPUPIM_EN   ((uint32_t)0x00000100u)

#define SYSCTL_IMC_MOSCPUPIM_MASK   ((uint32_t)0x00000001u)
#define SYSCTL_IMC_MOSCPUPIM_DIS    ((uint32_t)0x00000000u)
#define SYSCTL_IMC_MOSCPUPIM_EN     ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_VDDAIM_MASK    ((uint32_t)0x00000400u)
#define SYSCTL_IMC_R_VDDAIM_BIT     (10u)
#define SYSCTL_IMC_R_VDDAIM_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_IMC_R_VDDAIM_EN      ((uint32_t)0x00000400u)

#define SYSCTL_IMC_VDDAIM_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_IMC_VDDAIM_DIS       ((uint32_t)0x00000000u)
#define SYSCTL_IMC_VDDAIM_EN        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_BOR0IM_MASK    ((uint32_t)0x00000800u)
#define SYSCTL_IMC_R_BOR0IM_BIT     (11u)
#define SYSCTL_IMC_R_BOR0IM_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_IMC_R_BOR0IM_EN      ((uint32_t)0x00000800u)

#define SYSCTL_IMC_BOR0IM_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_IMC_BOR0IM_DIS       ((uint32_t)0x00000000u)
#define SYSCTL_IMC_BOR0IM_EN        ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************ 6 MISC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_MISC_R_BOR1MIS_MASK      ((uint32_t)0x00000002u)
#define SYSCTL_MISC_R_BOR1MIS_BIT       (1u)
#define SYSCTL_MISC_R_BOR1MIS_NOOCCUR   ((uint32_t)0x00000000u)
#define SYSCTL_MISC_R_BOR1MIS_OCCUR     ((uint32_t)0x00000002u)

#define SYSCTL_MISC_BOR1MIS_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_MISC_BOR1MIS_NOOCCUR     ((uint32_t)0x00000000u)
#define SYSCTL_MISC_BOR1MIS_OCCUR       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_MOFMIS_MASK       ((uint32_t)0x00000008u)
#define SYSCTL_MISC_R_MOFMIS_BIT        (3u)
#define SYSCTL_MISC_R_MOFMIS_NOOCCUR    ((uint32_t)0x00000000u)
#define SYSCTL_MISC_R_MOFMIS_OCCUR      ((uint32_t)0x00000008u)

#define SYSCTL_MISC_MOFMIS_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_MISC_MOFMIS_NOOCCUR      ((uint32_t)0x00000000u)
#define SYSCTL_MISC_MOFMIS_OCCUR        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_PLLLMIS_MASK      ((uint32_t)0x00000040u)
#define SYSCTL_MISC_R_PLLLMIS_BIT       (6u)
#define SYSCTL_MISC_R_PLLLMIS_NOOCCUR   ((uint32_t)0x00000000u)
#define SYSCTL_MISC_R_PLLLMIS_OCCUR     ((uint32_t)0x00000040u)

#define SYSCTL_MISC_PLLLMIS_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_MISC_PLLLMIS_NOOCCUR     ((uint32_t)0x00000000u)
#define SYSCTL_MISC_PLLLMIS_OCCUR       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_USBPLLLMIS_MASK   ((uint32_t)0x00000080u)
#define SYSCTL_MISC_R_USBPLLLMIS_BIT    (7u)
#define SYSCTL_MISC_R_USBPLLLMIS_NOOCCUR  ((uint32_t)0x00000000u)
#define SYSCTL_MISC_R_USBPLLLMIS_OCCUR   ((uint32_t)0x00000080u)

#define SYSCTL_MISC_USBPLLLMIS_MASK     ((uint32_t)0x00000001u)
#define SYSCTL_MISC_USBPLLLMIS_NOOCCUR  ((uint32_t)0x00000000u)
#define SYSCTL_MISC_USBPLLLMIS_OCCUR    ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_MOSCPUPMIS_MASK   ((uint32_t)0x00000100u)
#define SYSCTL_MISC_R_MOSCPUPMIS_BIT    (8u)
#define SYSCTL_MISC_R_MOSCPUPMIS_NOOCCUR  ((uint32_t)0x00000000u)
#define SYSCTL_MISC_R_MOSCPUPMIS_OCCUR   ((uint32_t)0x00000100u)

#define SYSCTL_MISC_MOSCPUPMIS_MASK     ((uint32_t)0x00000001u)
#define SYSCTL_MISC_MOSCPUPMIS_NOOCCUR  ((uint32_t)0x00000000u)
#define SYSCTL_MISC_MOSCPUPMIS_OCCUR    ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_VDDAMIS_MASK      ((uint32_t)0x00000400u)
#define SYSCTL_MISC_R_VDDAMIS_BIT       (10u)
#define SYSCTL_MISC_R_VDDAMIS_NOOCCUR   ((uint32_t)0x00000000u)
#define SYSCTL_MISC_R_VDDAMIS_OCCUR     ((uint32_t)0x00000400u)

#define SYSCTL_MISC_VDDAMIS_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_MISC_VDDAMIS_NOOCCUR     ((uint32_t)0x00000000u)
#define SYSCTL_MISC_VDDAMIS_OCCUR       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_BOR0MIS_MASK      ((uint32_t)0x00000800u)
#define SYSCTL_MISC_R_BOR0MIS_BIT       (11u)
#define SYSCTL_MISC_R_BOR0MIS_NOOCCUR   ((uint32_t)0x00000000u)
#define SYSCTL_MISC_R_BOR0MIS_OCCUR     ((uint32_t)0x00000800u)

#define SYSCTL_MISC_BOR0MIS_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_MISC_BOR0MIS_NOOCCUR     ((uint32_t)0x00000000u)
#define SYSCTL_MISC_BOR0MIS_OCCUR       ((uint32_t)0x00000001u)
/*--------*/




#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_INTERRUPT_H_ */
