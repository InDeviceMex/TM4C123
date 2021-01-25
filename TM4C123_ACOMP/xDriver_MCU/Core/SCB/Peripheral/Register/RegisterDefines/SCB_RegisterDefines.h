/**
 *
 * @file SCB_RegisterDefines.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_REGISTER_SCB_REGISTERDEFINES_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_REGISTER_SCB_REGISTERDEFINES_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Core/SCB/Peripheral/Register/RegisterDefines/xHeader/SCB_RegisterDefines_INTCTLR.h>


/********************************************************************************************/
/************************************* 1 ICTLR ***********************************************/
/********************************************************************************************/
/*----------*/
#define SCB_ICTLR_R_INTLINESNUM_MASK    ((uint32_t)0x0000001Fu)
#define SCB_ICTLR_R_INTLINESNUM_BIT     (0u)
#define SCB_ICTLR_R_INTLINESNUM_0_32         ((uint32_t)0x00000000u)
#define SCB_ICTLR_R_INTLINESNUM_33_64        ((uint32_t)0x00000001u)
#define SCB_ICTLR_R_INTLINESNUM_65_96        ((uint32_t)0x00000002u)
#define SCB_ICTLR_R_INTLINESNUM_97_128       ((uint32_t)0x00000003u)
#define SCB_ICTLR_R_INTLINESNUM_129_160      ((uint32_t)0x00000004u)
#define SCB_ICTLR_R_INTLINESNUM_161_192      ((uint32_t)0x00000005u)
#define SCB_ICTLR_R_INTLINESNUM_193_224      ((uint32_t)0x00000006u)
#define SCB_ICTLR_R_INTLINESNUM_225_256      ((uint32_t)0x00000007u)

#define SCB_ICTLR_INTLINESNUM_MASK    ((uint32_t)0x1Fu)
#define SCB_ICTLR_INTLINESNUM_0_32    ((uint32_t)0x00u)
#define SCB_ICTLR_INTLINESNUM_33_64   ((uint32_t)0x01u)
#define SCB_ICTLR_INTLINESNUM_65_96   ((uint32_t)0x02u)
#define SCB_ICTLR_INTLINESNUM_97_128  ((uint32_t)0x03u)
#define SCB_ICTLR_INTLINESNUM_129_160 ((uint32_t)0x04u)
#define SCB_ICTLR_INTLINESNUM_161_192 ((uint32_t)0x05u)
#define SCB_ICTLR_INTLINESNUM_193_224 ((uint32_t)0x06u)
#define SCB_ICTLR_INTLINESNUM_225_256 ((uint32_t)0x07u)
/*----------*/

/********************************************************************************************/
/************************************* 2 ACTLR ***********************************************/
/********************************************************************************************/
/*----------*/
#define SCB_ACTLR_R_DISMCYCINT_MASK    ((uint32_t)0x00000001u)
#define SCB_ACTLR_R_DISMCYCINT_BIT     (0u)
#define SCB_ACTLR_R_DISMCYCINT_DIS     ((uint32_t)0x00000001u)
#define SCB_ACTLR_R_DISMCYCINT_NE      ((uint32_t)0x00000000u)

#define SCB_ACTLR_DISMCYCINT_MASK    (1u)
#define SCB_ACTLR_DISMCYCINT_DIS     (1u)
#define SCB_ACTLR_DISMCYCINT_NE      (0u)
/*----------*/

/*----------*/
#define SCB_ACTLR_R_DISDEFWBUF_MASK    ((uint32_t)0x00000002u)
#define SCB_ACTLR_R_DISDEFWBUF_BIT     (1u)
#define SCB_ACTLR_R_DISDEFWBUF_DIS     ((uint32_t)0x00000002u)
#define SCB_ACTLR_R_DISDEFWBUF_NE      ((uint32_t)0x00000000u)

#define SCB_ACTLR_DISDEFWBUF_MASK    (1u)
#define SCB_ACTLR_DISDEFWBUF_DIS     (1u)
#define SCB_ACTLR_DISDEFWBUF_NE      (0u)
/*----------*/

/*----------*/
#define SCB_ACTLR_R_DISFOLD_MASK    ((uint32_t)0x00000004u)
#define SCB_ACTLR_R_DISFOLD_BIT     (2u)
#define SCB_ACTLR_R_DISFOLD_DIS     ((uint32_t)0x00000004u)
#define SCB_ACTLR_R_DISFOLD_NE      ((uint32_t)0x00000000u)

#define SCB_ACTLR_DISFOLD_MASK    (1u)
#define SCB_ACTLR_DISFOLD_DIS     (1u)
#define SCB_ACTLR_DISFOLD_NE      (0u)
/*----------*/

/*----------*/
#define SCB_ACTLR_R_DISFPCA_MASK    ((uint32_t)0x00000100u)
#define SCB_ACTLR_R_DISFPCA_BIT     (8u)
#define SCB_ACTLR_R_DISFPCA_DIS     ((uint32_t)0x00000100u)
#define SCB_ACTLR_R_DISFPCA_NE      ((uint32_t)0x00000000u)

#define SCB_ACTLR_DISFPCA_MASK    (1u)
#define SCB_ACTLR_DISFPCA_DIS     (1u)
#define SCB_ACTLR_DISFPCA_NE      (0u)
/*----------*/

/*----------*/
#define SCB_ACTLR_R_DISOOFP_MASK    ((uint32_t)0x00000200u)
#define SCB_ACTLR_R_DISOOFP_BIT     (9u)
#define SCB_ACTLR_R_DISOOFP_DIS     ((uint32_t)0x00000200u)
#define SCB_ACTLR_R_DISOOFP_NE      ((uint32_t)0x00000000u)

#define SCB_ACTLR_DISOOFP_MASK    (1u)
#define SCB_ACTLR_DISOOFP_DIS     (1u)
#define SCB_ACTLR_DISOOFP_NE      (0u)
/*----------*/

/********************************************************************************************/
/************************************* 3 CPUID ***********************************************/
/********************************************************************************************/
/*----------*/
#define SCB_CPUID_R_REVISION_MASK    ((uint32_t)0x0000000Fu)
#define SCB_CPUID_R_REVISION_BIT     (0u)
#define SCB_CPUID_R_REVISION_r0p0    ((uint32_t)0x00000000u)
#define SCB_CPUID_R_REVISION_r0p1    ((uint32_t)0x00000001u)
#define SCB_CPUID_R_REVISION_r0p2    ((uint32_t)0x00000002u)
#define SCB_CPUID_R_REVISION_r0p3    ((uint32_t)0x00000003u)
#define SCB_CPUID_R_REVISION_r0p4    ((uint32_t)0x00000004u)
#define SCB_CPUID_R_REVISION_r0p5    ((uint32_t)0x00000005u)
#define SCB_CPUID_R_REVISION_r0p6    ((uint32_t)0x00000006u)
#define SCB_CPUID_R_REVISION_r0p7    ((uint32_t)0x00000007u)
#define SCB_CPUID_R_REVISION_r0p8    ((uint32_t)0x00000008u)
#define SCB_CPUID_R_REVISION_r0p9    ((uint32_t)0x00000009u)
#define SCB_CPUID_R_REVISION_r0p10   ((uint32_t)0x0000000Au)
#define SCB_CPUID_R_REVISION_r0p11   ((uint32_t)0x0000000Bu)
#define SCB_CPUID_R_REVISION_r0p12   ((uint32_t)0x0000000Cu)
#define SCB_CPUID_R_REVISION_r0p13   ((uint32_t)0x0000000Du)
#define SCB_CPUID_R_REVISION_r0p14   ((uint32_t)0x0000000Eu)
#define SCB_CPUID_R_REVISION_r0p15   ((uint32_t)0x0000000Fu)

#define SCB_CPUID_REVISION_MASK        ((uint32_t)0xFu)
#define SCB_CPUID_REVISION_rnp0        ((uint32_t)0x0u)
#define SCB_CPUID_REVISION_rnp1        ((uint32_t)0x1u)
#define SCB_CPUID_REVISION_rnp2        ((uint32_t)0x2u)
#define SCB_CPUID_REVISION_rnp3        ((uint32_t)0x3u)
#define SCB_CPUID_REVISION_rnp4        ((uint32_t)0x4u)
#define SCB_CPUID_REVISION_rnp5        ((uint32_t)0x5u)
#define SCB_CPUID_REVISION_rnp6        ((uint32_t)0x6u)
#define SCB_CPUID_REVISION_rnp7        ((uint32_t)0x7u)
#define SCB_CPUID_REVISION_rnp8        ((uint32_t)0x8u)
#define SCB_CPUID_REVISION_rnp9        ((uint32_t)0x9u)
#define SCB_CPUID_REVISION_rnp10       ((uint32_t)0xAu)
#define SCB_CPUID_REVISION_rnp11       ((uint32_t)0xBu)
#define SCB_CPUID_REVISION_rnp12       ((uint32_t)0xCu)
#define SCB_CPUID_REVISION_rnp13       ((uint32_t)0xDu)
#define SCB_CPUID_REVISION_rnp14       ((uint32_t)0xEu)
#define SCB_CPUID_REVISION_rnp15       ((uint32_t)0xFu)
/*----------*/

/*----------*/
#define SCB_CPUID_R_PARTNO_MASK ((uint32_t)0x0000FFF0u)
#define SCB_CPUID_R_PARTNO_BIT  (4u)
#define SCB_CPUID_R_PARTNO_M4   ((uint32_t)0x0000C240u)

#define SCB_CPUID_PARTNO_MASK    ((uint32_t)0xFFFu)
#define SCB_CPUID_PARTNO_M4      ((uint32_t)0xC24u)
/*----------*/

/*----------*/
#define SCB_CPUID_R_CON_MASK    ((uint32_t)0x000F0000u)
#define SCB_CPUID_R_CON_BIT     (16u)
#define SCB_CPUID_R_CON_0XF     ((uint32_t)0x000F0000u)

#define SCB_CPUID_CON_MASK    ((uint32_t)0xFu)
#define SCB_CPUID_CON_0xF     ((uint32_t)0xFu)
/*----------*/

/*----------*/
#define SCB_CPUID_R_VARIANT_MASK    ((uint32_t)0x00F00000u)
#define SCB_CPUID_R_VARIANT_BIT     (20u)
#define SCB_CPUID_R_VARIANT_r0pn    ((uint32_t)0x00000000u)
#define SCB_CPUID_R_VARIANT_r1pn    ((uint32_t)0x00100000u)
#define SCB_CPUID_R_VARIANT_r2pn    ((uint32_t)0x00200000u)
#define SCB_CPUID_R_VARIANT_r3pn    ((uint32_t)0x00300000u)
#define SCB_CPUID_R_VARIANT_r4pn    ((uint32_t)0x00400000u)
#define SCB_CPUID_R_VARIANT_r5pn    ((uint32_t)0x00500000u)
#define SCB_CPUID_R_VARIANT_r6pn    ((uint32_t)0x00600000u)
#define SCB_CPUID_R_VARIANT_r7pn    ((uint32_t)0x00700000u)
#define SCB_CPUID_R_VARIANT_r8pn    ((uint32_t)0x00800000u)
#define SCB_CPUID_R_VARIANT_r9pn    ((uint32_t)0x00900000u)
#define SCB_CPUID_R_VARIANT_r10pn   ((uint32_t)0x00A00000u)
#define SCB_CPUID_R_VARIANT_r11pn   ((uint32_t)0x00B00000u)
#define SCB_CPUID_R_VARIANT_r12pn   ((uint32_t)0x00C00000u)
#define SCB_CPUID_R_VARIANT_r13pn   ((uint32_t)0x00D00000u)
#define SCB_CPUID_R_VARIANT_r14pn   ((uint32_t)0x00E00000u)
#define SCB_CPUID_R_VARIANT_r15pn   ((uint32_t)0x00F00000u)

#define SCB_CPUID_VARIANT_MASK        ((uint32_t)0xFu)
#define SCB_CPUID_VARIANT_r0pn        ((uint32_t)0x0u)
#define SCB_CPUID_VARIANT_r1pn        ((uint32_t)0x1u)
#define SCB_CPUID_VARIANT_r2pn        ((uint32_t)0x2u)
#define SCB_CPUID_VARIANT_r3pn        ((uint32_t)0x3u)
#define SCB_CPUID_VARIANT_r4pn        ((uint32_t)0x4u)
#define SCB_CPUID_VARIANT_r5pn        ((uint32_t)0x5u)
#define SCB_CPUID_VARIANT_r6pn        ((uint32_t)0x6u)
#define SCB_CPUID_VARIANT_r7pn        ((uint32_t)0x7u)
#define SCB_CPUID_VARIANT_r8pn        ((uint32_t)0x8u)
#define SCB_CPUID_VARIANT_r9pn        ((uint32_t)0x9u)
#define SCB_CPUID_VARIANT_r10pn       ((uint32_t)0xAu)
#define SCB_CPUID_VARIANT_r11pn       ((uint32_t)0xBu)
#define SCB_CPUID_VARIANT_r12pn       ((uint32_t)0xCu)
#define SCB_CPUID_VARIANT_r13pn       ((uint32_t)0xDu)
#define SCB_CPUID_VARIANT_r14pn       ((uint32_t)0xEu)
#define SCB_CPUID_VARIANT_r15pn       ((uint32_t)0xFu)
/*----------*/

/*----------*/
#define SCB_CPUID_R_IMPLEMENTER_MASK    ((uint32_t)0xFF000000u)
#define SCB_CPUID_R_IMPLEMENTER_BIT     (24u)
#define SCB_CPUID_R_IMPLEMENTER_ARM     ((uint32_t)0x41000000u)

#define SCB_CPUID_IMPLEMENTER_MASK    ((uint32_t)0xFFu)
#define SCB_CPUID_IMPLEMENTER_ARM     ((uint32_t)0x41u)
/*----------*/

/********************************************************************************************/
/************************************* 5 VTOR ***********************************************/
/********************************************************************************************/
/*----------*/
#define SCB_VTOR_R_TBLOFF_MASK      ((uint32_t)0xFFFFFC00u)
#define SCB_VTOR_R_TBLOFF_BIT       (10u)

#define SCB_VTOR_TBLOFF_MASK        ((uint32_t)0x003FFFFFFu)
/*----------*/

/********************************************************************************************/
/************************************* 6 AIRCR ***********************************************/
/********************************************************************************************/
/*----------*/
#define SCB_AIRCR_R_VECTRESET_MASK      ((uint32_t)0x00000001u)
#define SCB_AIRCR_R_VECTRESET_BIT       (0u)
#define SCB_AIRCR_R_VECTRESET_NOUSE     ((uint32_t)0x00000001u)
#define SCB_AIRCR_R_VECTRESET_NOEFFECT  ((uint32_t)0x00000000u)

#define SCB_AIRCR_VECTRESET_MASK         ((uint32_t)0x00000001u)
#define SCB_AIRCR_VECTRESET_NOUSE        ((uint32_t)0x00000001u)
#define SCB_AIRCR_VECTRESET_NOEFFECT     ((uint32_t)0x00000000u)
/*----------*/

/*----------*/
#define SCB_AIRCR_R_VECTCLRACTIVE_MASK      ((uint32_t)0x00000002u)
#define SCB_AIRCR_R_VECTCLRACTIVE_BIT       (1u)
#define SCB_AIRCR_R_VECTCLRACTIVE_NOUSE     ((uint32_t)0x00000002u)
#define SCB_AIRCR_R_VECTCLRACTIVE_NOEFFECT  ((uint32_t)0x00000000u)

#define SCB_AIRCR_VECTCLRACTIVE_MASK         ((uint32_t)0x00000001u)
#define SCB_AIRCR_VECTCLRACTIVE_NOUSE        ((uint32_t)0x00000001u)
#define SCB_AIRCR_VECTCLRACTIVE_NOEFFECT     ((uint32_t)0x00000000u)
/*----------*/

/*----------*/
#define SCB_AIRCR_R_SYSRESETREQ_MASK      ((uint32_t)0x00000004u)
#define SCB_AIRCR_R_SYSRESETREQ_BIT       (2u)
#define SCB_AIRCR_R_SYSRESETREQ_RESET     ((uint32_t)0x00000004u)
#define SCB_AIRCR_R_SYSRESETREQ_NOEFFECT  ((uint32_t)0x00000000u)

#define SCB_AIRCR_SYSRESETREQ_MASK         ((uint32_t)0x00000001u)
#define SCB_AIRCR_SYSRESETREQ_RESET        ((uint32_t)0x00000001u)
#define SCB_AIRCR_SYSRESETREQ_NOEFFECT     ((uint32_t)0x00000000u)
/*----------*/

/*----------*/
#define SCB_PRIGROUP_XXX (0u)
#define SCB_PRIGROUP_XXY (1u)
#define SCB_PRIGROUP_XYY (2u)
#define SCB_PRIGROUP_YYY (3u)

#define SCB_AIRCR_R_PRIGROUP_MASK      ((uint32_t)0x00000700u)
#define SCB_AIRCR_R_PRIGROUP_BIT       (8u)
#define SCB_AIRCR_R_PRIGROUP_XXX       ((uint32_t)0x00000000u)
#define SCB_AIRCR_R_PRIGROUP_XXY       ((uint32_t)0x00000500u)
#define SCB_AIRCR_R_PRIGROUP_XYY       ((uint32_t)0x00000600u)
#define SCB_AIRCR_R_PRIGROUP_YYY       ((uint32_t)0x00000700u)

#define SCB_AIRCR_PRIGROUP_MASK      ((uint32_t)0x00000007u)
#define SCB_AIRCR_PRIGROUP_XXX       ((uint32_t)0x00000000u)
#define SCB_AIRCR_PRIGROUP_XXY       ((uint32_t)0x00000005u)
#define SCB_AIRCR_PRIGROUP_XYY       ((uint32_t)0x00000006u)
#define SCB_AIRCR_PRIGROUP_YYY       ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define SCB_AIRCR_R_ENDIANESS_MASK      ((uint32_t)0x00008000u)
#define SCB_AIRCR_R_ENDIANESS_BIT       (15u)
#define SCB_AIRCR_R_ENDIANESS_LITTLE    ((uint32_t)0x00000000u)
#define SCB_AIRCR_R_ENDIANESS_BIG       ((uint32_t)0x00008000u)

#define SCB_AIRCR_ENDIANESS_MASK      ((uint32_t)0x00000001u)
#define SCB_AIRCR_ENDIANESS_LITTLE    ((uint32_t)0x00000000u)
#define SCB_AIRCR_ENDIANESS_BIG       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_AIRCR_R_VECTKEY_MASK      ((uint32_t)0xFFFF0000u)
#define SCB_AIRCR_R_VECTKEY_BIT       (16u)
#define SCB_AIRCR_R_VECTKEY_READ      ((uint32_t)0xFA050000u)
#define SCB_AIRCR_R_VECTKEY_WRITE     ((uint32_t)0x05FA0000u)

#define SCB_AIRCR_VECTKEY_MASK      ((uint32_t)0x0000FFFFu)
#define SCB_AIRCR_VECTKEY_READ      ((uint32_t)0x0000FA05u)
#define SCB_AIRCR_VECTKEY_WRITE     ((uint32_t)0x000005FAu)
/*----------*/

/********************************************************************************************/
/************************************* 7 SCR ***********************************************/
/********************************************************************************************/
/*----------*/
#define SCB_SCR_R_SLEEPONEXIT_MASK      ((uint32_t)0x00000002u)
#define SCB_SCR_R_SLEEPONEXIT_BIT       (1u)
#define SCB_SCR_R_SLEEPONEXIT_SLEEP     ((uint32_t)0x00000002u)
#define SCB_SCR_R_SLEEPONEXIT_NOSLEEP   ((uint32_t)0x00000000u)

#define SCB_SCR_SLEEPONEXIT_MASK         ((uint32_t)0x00000001u)
#define SCB_SCR_SLEEPONEXIT_SLEEP        ((uint32_t)0x00000001u)
#define SCB_SCR_SLEEPONEXIT_NOSLEEP      ((uint32_t)0x00000000u)
/*----------*/

/*----------*/
#define SCB_SLEEPDEEP_SLEEP     (0u)
#define SCB_SLEEPDEEP_DEEPSLEEP (1u)

#define SCB_SCR_R_SLEEPDEEP_MASK      ((uint32_t)0x00000004u)
#define SCB_SCR_R_SLEEPDEEP_BIT       (2u)
#define SCB_SCR_R_SLEEPDEEP_DEEPSLEEP ((uint32_t)0x00000004u)
#define SCB_SCR_R_SLEEPDEEP_SLEEP     ((uint32_t)0x00000000u)

#define SCB_SCR_SLEEPDEEP_MASK         ((uint32_t)0x00000001u)
#define SCB_SCR_SLEEPDEEP_DEEPSLEEP    ((uint32_t)0x00000001u)
#define SCB_SCR_SLEEPDEEP_SLEEP        ((uint32_t)0x00000000u)
/*----------*/

/*----------*/
#define SCB_SCR_R_SEVONPEND_MASK      ((uint32_t)0x00000010u)
#define SCB_SCR_R_SEVONPEND_BIT       (4u)
#define SCB_SCR_R_SEVONPEND_ALL       ((uint32_t)0x00000010u)
#define SCB_SCR_R_SEVONPEND_ONLY      ((uint32_t)0x00000000u)

#define SCB_SCR_SEVONPEND_MASK         ((uint32_t)0x00000001u)
#define SCB_SCR_SEVONPEND_ALL          ((uint32_t)0x00000001u)
#define SCB_SCR_SEVONPEND_ONLY         ((uint32_t)0x00000000u)
/*----------*/

/********************************************************************************************/
/************************************* 8 CCR ***********************************************/
/********************************************************************************************/
/*----------*/
#define SCB_CCR_R_NONBASETHREDENA_MASK      ((uint32_t)0x00000001u)
#define SCB_CCR_R_NONBASETHREDENA_BIT       (0u)
#define SCB_CCR_R_NONBASETHREDENA_ALL       ((uint32_t)0x00000001u)
#define SCB_CCR_R_NONBASETHREDENA_ONLY      ((uint32_t)0x00000000u)

#define SCB_CCR_NONBASETHREDENA_MASK         ((uint32_t)0x00000001u)
#define SCB_CCR_NONBASETHREDENA_ALL          ((uint32_t)0x00000001u)
#define SCB_CCR_NONBASETHREDENA_ONLY         ((uint32_t)0x00000000u)
/*----------*/

/*----------*/
#define SCB_CCR_R_USERSETMPEND_MASK      ((uint32_t)0x00000002u)
#define SCB_CCR_R_USERSETMPEND_BIT       (1u)
#define SCB_CCR_R_USERSETMPEND_EN        ((uint32_t)0x00000002u)
#define SCB_CCR_R_USERSETMPEND_DIS       ((uint32_t)0x00000000u)

#define SCB_CCR_USERSETMPEND_MASK         ((uint32_t)0x00000001u)
#define SCB_CCR_USERSETMPEND_EN          ((uint32_t)0x00000001u)
#define SCB_CCR_USERSETMPEND_DIS         ((uint32_t)0x00000000u)
/*----------*/

/*----------*/
#define SCB_CCR_R_UNALIGN_TRP_MASK      ((uint32_t)0x00000008u)
#define SCB_CCR_R_UNALIGN_TRP_BIT       (3u)
#define SCB_CCR_R_UNALIGN_TRP_TRAP      ((uint32_t)0x00000008u)
#define SCB_CCR_R_UNALIGN_TRP_NOTRAP    ((uint32_t)0x00000000u)

#define SCB_CCR_UNALIGN_TRP_MASK        ((uint32_t)0x00000001u)
#define SCB_CCR_UNALIGN_TRP_TRAP        ((uint32_t)0x00000001u)
#define SCB_CCR_UNALIGN_TRP_NOTRAP      ((uint32_t)0x00000000u)
/*----------*/

/*----------*/
#define SCB_CCR_R_DIV_0_TRP_MASK      ((uint32_t)0x00000010u)
#define SCB_CCR_R_DIV_0_TRP_BIT       (4u)
#define SCB_CCR_R_DIV_0_TRP_TRAP      ((uint32_t)0x00000010u)
#define SCB_CCR_R_DIV_0_TRP_NOTRAP    ((uint32_t)0x00000000u)

#define SCB_CCR_DIV_0_TRP_MASK        ((uint32_t)0x00000001u)
#define SCB_CCR_DIV_0_TRP_TRAP        ((uint32_t)0x00000001u)
#define SCB_CCR_DIV_0_TRP_NOTRAP      ((uint32_t)0x00000000u)
/*----------*/

/*----------*/
#define SCB_CCR_R_BFHFNMIGN_MASK      ((uint32_t)0x00000100u)
#define SCB_CCR_R_BFHFNMIGN_BIT       (8u)
#define SCB_CCR_R_BFHFNMIGN_EN        ((uint32_t)0x00000100u)
#define SCB_CCR_R_BFHFNMIGN_DIS       ((uint32_t)0x00000000u)

#define SCB_CCR_BFHFNMIGN_MASK        ((uint32_t)0x00000001u)
#define SCB_CCR_BFHFNMIGN_EN          ((uint32_t)0x00000001u)
#define SCB_CCR_BFHFNMIGN_DIS         ((uint32_t)0x00000000u)
/*----------*/

/*----------*/
#define SCB_CCR_R_STKALIGN_MASK      ((uint32_t)0x00000200u)
#define SCB_CCR_R_STKALIGN_BIT       (9u)
#define SCB_CCR_R_STKALIGN_8BYTE     ((uint32_t)0x00000200u)
#define SCB_CCR_R_STKALIGN_4BYTE     ((uint32_t)0x00000000u)

#define SCB_CCR_STKALIGN_MASK        ((uint32_t)0x00000001u)
#define SCB_CCR_STKALIGN_8BYTE       ((uint32_t)0x00000001u)
#define SCB_CCR_STKALIGN_4BYTE       ((uint32_t)0x00000000u)
/*----------*/

/********************************************************************************************/
/************************************* 9 SHPR1 ***********************************************/
/********************************************************************************************/
/*----------*/
#define SCB_SHPR1_R_MEM_MASK      ((uint32_t)0x000000E0u)
#define SCB_SHPR1_R_MEM_BIT       (5u)
#define SCB_SHPR1_R_MEM_PRI0      ((uint32_t)0x00000000u)
#define SCB_SHPR1_R_MEM_PRI1      ((uint32_t)0x00000020u)
#define SCB_SHPR1_R_MEM_PRI2      ((uint32_t)0x00000040u)
#define SCB_SHPR1_R_MEM_PRI3      ((uint32_t)0x00000060u)
#define SCB_SHPR1_R_MEM_PRI4      ((uint32_t)0x00000080u)
#define SCB_SHPR1_R_MEM_PRI5      ((uint32_t)0x000000A0u)
#define SCB_SHPR1_R_MEM_PRI6      ((uint32_t)0x000000C0u)
#define SCB_SHPR1_R_MEM_PRI7      ((uint32_t)0x000000E0u)

#define SCB_SHPR1_MEM_MASK        ((uint32_t)0x00000007u)
#define SCB_SHPR1_MEM_PRI0        ((uint32_t)0x00000000u)
#define SCB_SHPR1_MEM_PRI1        ((uint32_t)0x00000001u)
#define SCB_SHPR1_MEM_PRI2        ((uint32_t)0x00000002u)
#define SCB_SHPR1_MEM_PRI3        ((uint32_t)0x00000003u)
#define SCB_SHPR1_MEM_PRI4        ((uint32_t)0x00000004u)
#define SCB_SHPR1_MEM_PRI5        ((uint32_t)0x00000005u)
#define SCB_SHPR1_MEM_PRI6        ((uint32_t)0x00000006u)
#define SCB_SHPR1_MEM_PRI7        ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define SCB_SHPR1_R_BUS_MASK      ((uint32_t)0x0000E000u)
#define SCB_SHPR1_R_BUS_BIT       (13u)
#define SCB_SHPR1_R_BUS_PRI0      ((uint32_t)0x00000000u)
#define SCB_SHPR1_R_BUS_PRI1      ((uint32_t)0x00002000u)
#define SCB_SHPR1_R_BUS_PRI2      ((uint32_t)0x00004000u)
#define SCB_SHPR1_R_BUS_PRI3      ((uint32_t)0x00006000u)
#define SCB_SHPR1_R_BUS_PRI4      ((uint32_t)0x00008000u)
#define SCB_SHPR1_R_BUS_PRI5      ((uint32_t)0x0000A000u)
#define SCB_SHPR1_R_BUS_PRI6      ((uint32_t)0x0000C000u)
#define SCB_SHPR1_R_BUS_PRI7      ((uint32_t)0x0000E000u)

#define SCB_SHPR1_BUS_MASK        ((uint32_t)0x00000007u)
#define SCB_SHPR1_BUS_PRI0        ((uint32_t)0x00000000u)
#define SCB_SHPR1_BUS_PRI1        ((uint32_t)0x00000001u)
#define SCB_SHPR1_BUS_PRI2        ((uint32_t)0x00000002u)
#define SCB_SHPR1_BUS_PRI3        ((uint32_t)0x00000003u)
#define SCB_SHPR1_BUS_PRI4        ((uint32_t)0x00000004u)
#define SCB_SHPR1_BUS_PRI5        ((uint32_t)0x00000005u)
#define SCB_SHPR1_BUS_PRI6        ((uint32_t)0x00000006u)
#define SCB_SHPR1_BUS_PRI7        ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define SCB_SHPR1_R_USAGE_MASK      ((uint32_t)0x00E00000u)
#define SCB_SHPR1_R_USAGE_BIT       (21u)
#define SCB_SHPR1_R_USAGE_PRI0      ((uint32_t)0x00000000u)
#define SCB_SHPR1_R_USAGE_PRI1      ((uint32_t)0x00200000u)
#define SCB_SHPR1_R_USAGE_PRI2      ((uint32_t)0x00400000u)
#define SCB_SHPR1_R_USAGE_PRI3      ((uint32_t)0x00600000u)
#define SCB_SHPR1_R_USAGE_PRI4      ((uint32_t)0x00800000u)
#define SCB_SHPR1_R_USAGE_PRI5      ((uint32_t)0x00A00000u)
#define SCB_SHPR1_R_USAGE_PRI6      ((uint32_t)0x00C00000u)
#define SCB_SHPR1_R_USAGE_PRI7      ((uint32_t)0x00E00000u)

#define SCB_SHPR1_USAGE_MASK        ((uint32_t)0x00000007u)
#define SCB_SHPR1_USAGE_PRI0        ((uint32_t)0x00000000u)
#define SCB_SHPR1_USAGE_PRI1        ((uint32_t)0x00000001u)
#define SCB_SHPR1_USAGE_PRI2        ((uint32_t)0x00000002u)
#define SCB_SHPR1_USAGE_PRI3        ((uint32_t)0x00000003u)
#define SCB_SHPR1_USAGE_PRI4        ((uint32_t)0x00000004u)
#define SCB_SHPR1_USAGE_PRI5        ((uint32_t)0x00000005u)
#define SCB_SHPR1_USAGE_PRI6        ((uint32_t)0x00000006u)
#define SCB_SHPR1_USAGE_PRI7        ((uint32_t)0x00000007u)
/*----------*/

/********************************************************************************************/
/************************************* 10 SHPR2 ***********************************************/
/********************************************************************************************/
/*----------*/
#define SCB_SHPR2_R_SVCALL_MASK      ((uint32_t)0xE0000000u)
#define SCB_SHPR2_R_SVCALL_BIT       (29u)
#define SCB_SHPR2_R_SVCALL_PRI0      ((uint32_t)0x00000000u)
#define SCB_SHPR2_R_SVCALL_PRI1      ((uint32_t)0x20000000u)
#define SCB_SHPR2_R_SVCALL_PRI2      ((uint32_t)0x40000000u)
#define SCB_SHPR2_R_SVCALL_PRI3      ((uint32_t)0x60000000u)
#define SCB_SHPR2_R_SVCALL_PRI4      ((uint32_t)0x80000000u)
#define SCB_SHPR2_R_SVCALL_PRI5      ((uint32_t)0xA0000000u)
#define SCB_SHPR2_R_SVCALL_PRI6      ((uint32_t)0xC0000000u)
#define SCB_SHPR2_R_SVCALL_PRI7      ((uint32_t)0xE0000000u)

#define SCB_SHPR2_SVCALL_MASK        ((uint32_t)0x00000007u)
#define SCB_SHPR2_SVCALL_PRI0        ((uint32_t)0x00000000u)
#define SCB_SHPR2_SVCALL_PRI1        ((uint32_t)0x00000001u)
#define SCB_SHPR2_SVCALL_PRI2        ((uint32_t)0x00000002u)
#define SCB_SHPR2_SVCALL_PRI3        ((uint32_t)0x00000003u)
#define SCB_SHPR2_SVCALL_PRI4        ((uint32_t)0x00000004u)
#define SCB_SHPR2_SVCALL_PRI5        ((uint32_t)0x00000005u)
#define SCB_SHPR2_SVCALL_PRI6        ((uint32_t)0x00000006u)
#define SCB_SHPR2_SVCALL_PRI7        ((uint32_t)0x00000007u)
/*----------*/

/********************************************************************************************/
/************************************* 11 SHPR3 ***********************************************/
/********************************************************************************************/
/*----------*/
#define SCB_SHPR3_R_DEBUG_MASK      ((uint32_t)0x000000E0u)
#define SCB_SHPR3_R_DEBUG_BIT       (5u)
#define SCB_SHPR3_R_DEBUG_PRI0      ((uint32_t)0x00000000u)
#define SCB_SHPR3_R_DEBUG_PRI1      ((uint32_t)0x00000020u)
#define SCB_SHPR3_R_DEBUG_PRI2      ((uint32_t)0x00000040u)
#define SCB_SHPR3_R_DEBUG_PRI3      ((uint32_t)0x00000060u)
#define SCB_SHPR3_R_DEBUG_PRI4      ((uint32_t)0x00000080u)
#define SCB_SHPR3_R_DEBUG_PRI5      ((uint32_t)0x000000A0u)
#define SCB_SHPR3_R_DEBUG_PRI6      ((uint32_t)0x000000C0u)
#define SCB_SHPR3_R_DEBUG_PRI7      ((uint32_t)0x000000E0u)

#define SCB_SHPR3_DEBUG_MASK        ((uint32_t)0x00000007u)
#define SCB_SHPR3_DEBUG_PRI0        ((uint32_t)0x00000000u)
#define SCB_SHPR3_DEBUG_PRI1        ((uint32_t)0x00000001u)
#define SCB_SHPR3_DEBUG_PRI2        ((uint32_t)0x00000002u)
#define SCB_SHPR3_DEBUG_PRI3        ((uint32_t)0x00000003u)
#define SCB_SHPR3_DEBUG_PRI4        ((uint32_t)0x00000004u)
#define SCB_SHPR3_DEBUG_PRI5        ((uint32_t)0x00000005u)
#define SCB_SHPR3_DEBUG_PRI6        ((uint32_t)0x00000006u)
#define SCB_SHPR3_DEBUG_PRI7        ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define SCB_SHPR3_R_PENDSV_MASK      ((uint32_t)0x00E00000u)
#define SCB_SHPR3_R_PENDSV_BIT       (21u)
#define SCB_SHPR3_R_PENDSV_PRI0      ((uint32_t)0x00000000u)
#define SCB_SHPR3_R_PENDSV_PRI1      ((uint32_t)0x00200000u)
#define SCB_SHPR3_R_PENDSV_PRI2      ((uint32_t)0x00400000u)
#define SCB_SHPR3_R_PENDSV_PRI3      ((uint32_t)0x00600000u)
#define SCB_SHPR3_R_PENDSV_PRI4      ((uint32_t)0x00800000u)
#define SCB_SHPR3_R_PENDSV_PRI5      ((uint32_t)0x00A00000u)
#define SCB_SHPR3_R_PENDSV_PRI6      ((uint32_t)0x00C00000u)
#define SCB_SHPR3_R_PENDSV_PRI7      ((uint32_t)0x00E00000u)

#define SCB_SHPR3_PENDSV_MASK        ((uint32_t)0x00000007u)
#define SCB_SHPR3_PENDSV_PRI0        ((uint32_t)0x00000000u)
#define SCB_SHPR3_PENDSV_PRI1        ((uint32_t)0x00000001u)
#define SCB_SHPR3_PENDSV_PRI2        ((uint32_t)0x00000002u)
#define SCB_SHPR3_PENDSV_PRI3        ((uint32_t)0x00000003u)
#define SCB_SHPR3_PENDSV_PRI4        ((uint32_t)0x00000004u)
#define SCB_SHPR3_PENDSV_PRI5        ((uint32_t)0x00000005u)
#define SCB_SHPR3_PENDSV_PRI6        ((uint32_t)0x00000006u)
#define SCB_SHPR3_PENDSV_PRI7        ((uint32_t)0x00000007u)
/*----------*/

/*----------*/

#define SCB_SHPR3_R_SYSTICK_MASK      ((uint32_t)0xE0000000u)
#define SCB_SHPR3_R_SYSTICK_BIT       (29u)
#define SCB_SHPR3_R_SYSTICK_PRI0      ((uint32_t)0x00000000u)
#define SCB_SHPR3_R_SYSTICK_PRI1      ((uint32_t)0x20000000u)
#define SCB_SHPR3_R_SYSTICK_PRI2      ((uint32_t)0x40000000u)
#define SCB_SHPR3_R_SYSTICK_PRI3      ((uint32_t)0x60000000u)
#define SCB_SHPR3_R_SYSTICK_PRI4      ((uint32_t)0x80000000u)
#define SCB_SHPR3_R_SYSTICK_PRI5      ((uint32_t)0xA0000000u)
#define SCB_SHPR3_R_SYSTICK_PRI6      ((uint32_t)0xC0000000u)
#define SCB_SHPR3_R_SYSTICK_PRI7      ((uint32_t)0xE0000000u)

#define SCB_SHPR3_SYSTICK_MASK        ((uint32_t)0x00000007u)
#define SCB_SHPR3_SYSTICK_PRI0        ((uint32_t)0x00000000u)
#define SCB_SHPR3_SYSTICK_PRI1        ((uint32_t)0x00000001u)
#define SCB_SHPR3_SYSTICK_PRI2        ((uint32_t)0x00000002u)
#define SCB_SHPR3_SYSTICK_PRI3        ((uint32_t)0x00000003u)
#define SCB_SHPR3_SYSTICK_PRI4        ((uint32_t)0x00000004u)
#define SCB_SHPR3_SYSTICK_PRI5        ((uint32_t)0x00000005u)
#define SCB_SHPR3_SYSTICK_PRI6        ((uint32_t)0x00000006u)
#define SCB_SHPR3_SYSTICK_PRI7        ((uint32_t)0x00000007u)
/*----------*/

/********************************************************************************************/
/************************************* 12 SHCSR ***********************************************/
/********************************************************************************************/
/*----------*/
#define SCB_SHCSR_R_MEMFAULTACT_MASK      ((uint32_t)0x00000001u)
#define SCB_SHCSR_R_MEMFAULTACT_BIT       (0u)
#define SCB_SHCSR_R_MEMFAULTACT_NOACTIVE  ((uint32_t)0x00000000u)
#define SCB_SHCSR_R_MEMFAULTACT_ACTIVE    ((uint32_t)0x00000001u)

#define SCB_SHCSR_MEMFAULTACT_MASK        ((uint32_t)0x00000001u)
#define SCB_SHCSR_MEMFAULTACT_NOACTIVE    ((uint32_t)0x00000000u)
#define SCB_SHCSR_MEMFAULTACT_ACTIVE      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_BUSFAULTACT_MASK      ((uint32_t)0x00000002u)
#define SCB_SHCSR_R_BUSFAULTACT_BIT       (1u)
#define SCB_SHCSR_R_BUSFAULTACT_NOACTIVE  ((uint32_t)0x00000000u)
#define SCB_SHCSR_R_BUSFAULTACT_ACTIVE    ((uint32_t)0x00000002u)

#define SCB_SHCSR_BUSFAULTACT_MASK        ((uint32_t)0x00000001u)
#define SCB_SHCSR_BUSFAULTACT_NOACTIVE    ((uint32_t)0x00000000u)
#define SCB_SHCSR_BUSFAULTACT_ACTIVE      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_USGFAULTACT_MASK      ((uint32_t)0x00000008u)
#define SCB_SHCSR_R_USGFAULTACT_BIT       (3u)
#define SCB_SHCSR_R_USGFAULTACT_NOACTIVE  ((uint32_t)0x00000000u)
#define SCB_SHCSR_R_USGFAULTACT_ACTIVE    ((uint32_t)0x00000008u)

#define SCB_SHCSR_USGFAULTACT_MASK        ((uint32_t)0x00000001u)
#define SCB_SHCSR_USGFAULTACT_NOACTIVE    ((uint32_t)0x00000000u)
#define SCB_SHCSR_USGFAULTACT_ACTIVE      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_SVCALLACT_MASK      ((uint32_t)0x00000080u)
#define SCB_SHCSR_R_SVCALLACT_BIT       (7u)
#define SCB_SHCSR_R_SVCALLACT_NOACTIVE  ((uint32_t)0x00000000u)
#define SCB_SHCSR_R_SVCALLACT_ACTIVE    ((uint32_t)0x00000080u)

#define SCB_SHCSR_SVCALLACT_MASK        ((uint32_t)0x00000001u)
#define SCB_SHCSR_SVCALLACT_NOACTIVE    ((uint32_t)0x00000000u)
#define SCB_SHCSR_SVCALLACT_ACTIVE      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_MONITORACT_MASK      ((uint32_t)0x00000100u)
#define SCB_SHCSR_R_MONITORACT_BIT       (8u)
#define SCB_SHCSR_R_MONITORACT_NOACTIVE  ((uint32_t)0x00000000u)
#define SCB_SHCSR_R_MONITORACT_ACTIVE    ((uint32_t)0x00000100u)

#define SCB_SHCSR_MONITORACT_MASK        ((uint32_t)0x00000001u)
#define SCB_SHCSR_MONITORACT_NOACTIVE    ((uint32_t)0x00000000u)
#define SCB_SHCSR_MONITORACT_ACTIVE      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_PENDSVACT_MASK      ((uint32_t)0x00000400u)
#define SCB_SHCSR_R_PENDSVACT_BIT       (10u)
#define SCB_SHCSR_R_PENDSVACT_NOACTIVE  ((uint32_t)0x00000000u)
#define SCB_SHCSR_R_PENDSVACT_ACTIVE    ((uint32_t)0x00000400u)

#define SCB_SHCSR_PENDSVACT_MASK        ((uint32_t)0x00000001u)
#define SCB_SHCSR_PENDSVACT_NOACTIVE    ((uint32_t)0x00000000u)
#define SCB_SHCSR_PENDSVACT_ACTIVE      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_SYSTICKACT_MASK      ((uint32_t)0x00000800u)
#define SCB_SHCSR_R_SYSTICKACT_BIT       (11u)
#define SCB_SHCSR_R_SYSTICKACT_NOACTIVE  ((uint32_t)0x00000000u)
#define SCB_SHCSR_R_SYSTICKACT_ACTIVE    ((uint32_t)0x00000800u)

#define SCB_SHCSR_SYSTICKACT_MASK        ((uint32_t)0x00000001u)
#define SCB_SHCSR_SYSTICKACT_NOACTIVE    ((uint32_t)0x00000000u)
#define SCB_SHCSR_SYSTICKACT_ACTIVE      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_USGFAULTPENDED_MASK      ((uint32_t)0x00001000u)
#define SCB_SHCSR_R_USGFAULTPENDED_BIT       (12u)
#define SCB_SHCSR_R_USGFAULTPENDED_NOPEND    ((uint32_t)0x00000000u)
#define SCB_SHCSR_R_USGFAULTPENDED_PEND      ((uint32_t)0x00001000u)

#define SCB_SHCSR_USGFAULTPENDED_MASK        ((uint32_t)0x00000001u)
#define SCB_SHCSR_USGFAULTPENDED_NOPEND      ((uint32_t)0x00000000u)
#define SCB_SHCSR_USGFAULTPENDED_PEND        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_MEMFAULTPENDED_MASK      ((uint32_t)0x00002000u)
#define SCB_SHCSR_R_MEMFAULTPENDED_BIT       (13u)
#define SCB_SHCSR_R_MEMFAULTPENDED_NOPEND    ((uint32_t)0x00000000u)
#define SCB_SHCSR_R_MEMFAULTPENDED_PEND      ((uint32_t)0x00002000u)

#define SCB_SHCSR_MEMFAULTPENDED_MASK        ((uint32_t)0x00000001u)
#define SCB_SHCSR_MEMFAULTPENDED_NOPEND      ((uint32_t)0x00000000u)
#define SCB_SHCSR_MEMFAULTPENDED_PEND        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_BUSFAULTPENDED_MASK      ((uint32_t)0x00004000u)
#define SCB_SHCSR_R_BUSFAULTPENDED_BIT       (14u)
#define SCB_SHCSR_R_BUSFAULTPENDED_NOPEND    ((uint32_t)0x00000000u)
#define SCB_SHCSR_R_BUSFAULTPENDED_PEND      ((uint32_t)0x00004000u)

#define SCB_SHCSR_BUSFAULTPENDED_MASK        ((uint32_t)0x00000001u)
#define SCB_SHCSR_BUSFAULTPENDED_NOPEND      ((uint32_t)0x00000000u)
#define SCB_SHCSR_BUSFAULTPENDED_PEND        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_SVCALLPENDED_MASK      ((uint32_t)0x00008000u)
#define SCB_SHCSR_R_SVCALLPENDED_BIT       (15u)
#define SCB_SHCSR_R_SVCALLPENDED_NOPEND    ((uint32_t)0x00000000u)
#define SCB_SHCSR_R_SVCALLPENDED_PEND      ((uint32_t)0x00008000u)

#define SCB_SHCSR_SVCALLPENDED_MASK        ((uint32_t)0x00000001u)
#define SCB_SHCSR_SVCALLPENDED_NOPEND      ((uint32_t)0x00000000u)
#define SCB_SHCSR_SVCALLPENDED_PEND        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_MEMFAULTENA_MASK      ((uint32_t)0x00010000u)
#define SCB_SHCSR_R_MEMFAULTENA_BIT       (16u)
#define SCB_SHCSR_R_MEMFAULTENA_DIS       ((uint32_t)0x00000000u)
#define SCB_SHCSR_R_MEMFAULTENA_EN        ((uint32_t)0x00010000u)

#define SCB_SHCSR_MEMFAULTENA_MASK        ((uint32_t)0x00000001u)
#define SCB_SHCSR_MEMFAULTENA_DIS         ((uint32_t)0x00000000u)
#define SCB_SHCSR_MEMFAULTENA_EN          ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_BUSFAULTENA_MASK      ((uint32_t)0x00020000u)
#define SCB_SHCSR_R_BUSFAULTENA_BIT       (17u)
#define SCB_SHCSR_R_BUSFAULTENA_DIS       ((uint32_t)0x00000000u)
#define SCB_SHCSR_R_BUSFAULTENA_EN        ((uint32_t)0x00020000u)

#define SCB_SHCSR_BUSFAULTENA_MASK        ((uint32_t)0x00000001u)
#define SCB_SHCSR_BUSFAULTENA_DIS         ((uint32_t)0x00000000u)
#define SCB_SHCSR_BUSFAULTENA_EN          ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_USGFAULTENA_MASK      ((uint32_t)0x00040000u)
#define SCB_SHCSR_R_USGFAULTENA_BIT       (18u)
#define SCB_SHCSR_R_USGFAULTENA_DIS       ((uint32_t)0x00000000u)
#define SCB_SHCSR_R_USGFAULTENA_EN        ((uint32_t)0x00040000u)

#define SCB_SHCSR_USGFAULTENA_MASK        ((uint32_t)0x00000001u)
#define SCB_SHCSR_USGFAULTENA_DIS         ((uint32_t)0x00000000u)
#define SCB_SHCSR_USGFAULTENA_EN          ((uint32_t)0x00000001u)
/*----------*/

/********************************************************************************************/
/************************************* 13 CFSR ***********************************************/
/********************************************************************************************/
/*----------*/
#define SCB_CFSR_R_IACCVIOL_MASK      ((uint32_t)0x00000001u)
#define SCB_CFSR_R_IACCVIOL_BIT       (0u)
#define SCB_CFSR_R_IACCVIOL_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_CFSR_R_IACCVIOL_OCCUR     ((uint32_t)0x00000001u)
#define SCB_CFSR_R_IACCVIOL_CLEAR     ((uint32_t)0x00000001u)

#define SCB_CFSR_IACCVIOL_MASK        ((uint32_t)0x00000001u)
#define SCB_CFSR_IACCVIOL_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_CFSR_IACCVIOL_OCCUR       ((uint32_t)0x00000001u)
#define SCB_CFSR_IACCVIOL_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_DACCVIOL_MASK      ((uint32_t)0x00000002u)
#define SCB_CFSR_R_DACCVIOL_BIT       (1u)
#define SCB_CFSR_R_DACCVIOL_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_CFSR_R_DACCVIOL_OCCUR     ((uint32_t)0x00000002u)
#define SCB_CFSR_R_DACCVIOL_CLEAR     ((uint32_t)0x00000002u)

#define SCB_CFSR_DACCVIOL_MASK        ((uint32_t)0x00000001u)
#define SCB_CFSR_DACCVIOL_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_CFSR_DACCVIOL_OCCUR       ((uint32_t)0x00000001u)
#define SCB_CFSR_DACCVIOL_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_MUNSTKERR_MASK      ((uint32_t)0x00000008u)
#define SCB_CFSR_R_MUNSTKERR_BIT       (3u)
#define SCB_CFSR_R_MUNSTKERR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_CFSR_R_MUNSTKERR_OCCUR     ((uint32_t)0x00000008u)
#define SCB_CFSR_R_MUNSTKERR_CLEAR     ((uint32_t)0x00000008u)

#define SCB_CFSR_MUNSTKERR_MASK        ((uint32_t)0x00000001u)
#define SCB_CFSR_MUNSTKERR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_CFSR_MUNSTKERR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_CFSR_MUNSTKERR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_MSTKERR_MASK      ((uint32_t)0x00000010u)
#define SCB_CFSR_R_MSTKERR_BIT       (4u)
#define SCB_CFSR_R_MSTKERR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_CFSR_R_MSTKERR_OCCUR     ((uint32_t)0x00000010u)
#define SCB_CFSR_R_MSTKERR_CLEAR     ((uint32_t)0x00000010u)

#define SCB_CFSR_MSTKERR_MASK        ((uint32_t)0x00000001u)
#define SCB_CFSR_MSTKERR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_CFSR_MSTKERR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_CFSR_MSTKERR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_MLSPERR_MASK      ((uint32_t)0x00000020u)
#define SCB_CFSR_R_MLSPERR_BIT       (5u)
#define SCB_CFSR_R_MLSPERR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_CFSR_R_MLSPERR_OCCUR     ((uint32_t)0x00000020u)
#define SCB_CFSR_R_MLSPERR_CLEAR     ((uint32_t)0x00000020u)

#define SCB_CFSR_MLSPERR_MASK        ((uint32_t)0x00000001u)
#define SCB_CFSR_MLSPERR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_CFSR_MLSPERR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_CFSR_MLSPERR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_MMARVALID_MASK      ((uint32_t)0x00000080u)
#define SCB_CFSR_R_MMARVALID_BIT       (7u)
#define SCB_CFSR_R_MMARVALID_NOVALID   ((uint32_t)0x00000000u)
#define SCB_CFSR_R_MMARVALID_VALID     ((uint32_t)0x00000080u)
#define SCB_CFSR_R_MMARVALID_CLEAR     ((uint32_t)0x00000080u)

#define SCB_CFSR_MMARVALID_MASK        ((uint32_t)0x00000001u)
#define SCB_CFSR_MMARVALID_NOVALID     ((uint32_t)0x00000000u)
#define SCB_CFSR_MMARVALID_VALID       ((uint32_t)0x00000001u)
#define SCB_CFSR_MMARVALID_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_IBUSERR_MASK      ((uint32_t)0x00000100u)
#define SCB_CFSR_R_IBUSERR_BIT       (8u)
#define SCB_CFSR_R_IBUSERR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_CFSR_R_IBUSERR_OCCUR     ((uint32_t)0x00000100u)
#define SCB_CFSR_R_IBUSERR_CLEAR     ((uint32_t)0x00000100u)

#define SCB_CFSR_IBUSERR_MASK        ((uint32_t)0x00000001u)
#define SCB_CFSR_IBUSERR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_CFSR_IBUSERR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_CFSR_IBUSERR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_PRECISERR_MASK      ((uint32_t)0x00000200u)
#define SCB_CFSR_R_PRECISERR_BIT       (9u)
#define SCB_CFSR_R_PRECISERR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_CFSR_R_PRECISERR_OCCUR     ((uint32_t)0x00000200u)
#define SCB_CFSR_R_PRECISERR_CLEAR     ((uint32_t)0x00000200u)

#define SCB_CFSR_PRECISERR_MASK        ((uint32_t)0x00000001u)
#define SCB_CFSR_PRECISERR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_CFSR_PRECISERR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_CFSR_PRECISERR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_IMPRECISERR_MASK      ((uint32_t)0x00000400u)
#define SCB_CFSR_R_IMPRECISERR_BIT       (10u)
#define SCB_CFSR_R_IMPRECISERR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_CFSR_R_IMPRECISERR_OCCUR     ((uint32_t)0x00000400u)
#define SCB_CFSR_R_IMPRECISERR_CLEAR     ((uint32_t)0x00000400u)

#define SCB_CFSR_IMPRECISERR_MASK        ((uint32_t)0x00000001u)
#define SCB_CFSR_IMPRECISERR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_CFSR_IMPRECISERR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_CFSR_IMPRECISERR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_UNSTKERR_MASK      ((uint32_t)0x00000800u)
#define SCB_CFSR_R_UNSTKERR_BIT       (11u)
#define SCB_CFSR_R_UNSTKERR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_CFSR_R_UNSTKERR_OCCUR     ((uint32_t)0x00000800u)
#define SCB_CFSR_R_UNSTKERR_CLEAR     ((uint32_t)0x00000800u)

#define SCB_CFSR_UNSTKERR_MASK        ((uint32_t)0x00000001u)
#define SCB_CFSR_UNSTKERR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_CFSR_UNSTKERR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_CFSR_UNSTKERR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_STKERR_MASK      ((uint32_t)0x00001000u)
#define SCB_CFSR_R_STKERR_BIT       (12u)
#define SCB_CFSR_R_STKERR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_CFSR_R_STKERR_OCCUR     ((uint32_t)0x00001000u)
#define SCB_CFSR_R_STKERR_CLEAR     ((uint32_t)0x00001000u)

#define SCB_CFSR_STKERR_MASK        ((uint32_t)0x00000001u)
#define SCB_CFSR_STKERR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_CFSR_STKERR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_CFSR_STKERR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_LSPERR_MASK      ((uint32_t)0x00002000u)
#define SCB_CFSR_R_LSPERR_BIT       (13u)
#define SCB_CFSR_R_LSPERR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_CFSR_R_LSPERR_OCCUR     ((uint32_t)0x00002000u)
#define SCB_CFSR_R_LSPERR_CLEAR     ((uint32_t)0x00002000u)

#define SCB_CFSR_LSPERR_MASK        ((uint32_t)0x00000001u)
#define SCB_CFSR_LSPERR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_CFSR_LSPERR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_CFSR_LSPERR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_BFARVALID_MASK      ((uint32_t)0x00008000u)
#define SCB_CFSR_R_BFARVALID_BIT       (15u)
#define SCB_CFSR_R_BFARVALID_NOVALID   ((uint32_t)0x00000000u)
#define SCB_CFSR_R_BFARVALID_VALID     ((uint32_t)0x00008000u)
#define SCB_CFSR_R_BFARVALID_CLEAR     ((uint32_t)0x00008000u)

#define SCB_CFSR_BFARVALID_MASK        ((uint32_t)0x00000001u)
#define SCB_CFSR_BFARVALID_NOVALID     ((uint32_t)0x00000000u)
#define SCB_CFSR_BFARVALID_VALID       ((uint32_t)0x00000001u)
#define SCB_CFSR_BFARVALID_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_UNDEFINSTR_MASK      ((uint32_t)0x00010000u)
#define SCB_CFSR_R_UNDEFINSTR_BIT       (16u)
#define SCB_CFSR_R_UNDEFINSTR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_CFSR_R_UNDEFINSTR_OCCUR     ((uint32_t)0x00010000u)
#define SCB_CFSR_R_UNDEFINSTR_CLEAR     ((uint32_t)0x00010000u)

#define SCB_CFSR_UNDEFINSTR_MASK        ((uint32_t)0x00000001u)
#define SCB_CFSR_UNDEFINSTR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_CFSR_UNDEFINSTR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_CFSR_UNDEFINSTR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_INVSTATE_MASK      ((uint32_t)0x00020000u)
#define SCB_CFSR_R_INVSTATE_BIT       (17u)
#define SCB_CFSR_R_INVSTATE_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_CFSR_R_INVSTATE_OCCUR     ((uint32_t)0x00020000u)
#define SCB_CFSR_R_INVSTATE_CLEAR     ((uint32_t)0x00020000u)

#define SCB_CFSR_INVSTATE_MASK        ((uint32_t)0x00000001u)
#define SCB_CFSR_INVSTATE_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_CFSR_INVSTATE_OCCUR       ((uint32_t)0x00000001u)
#define SCB_CFSR_INVSTATE_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_INVPC_MASK      ((uint32_t)0x00040000u)
#define SCB_CFSR_R_INVPC_BIT       (18u)
#define SCB_CFSR_R_INVPC_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_CFSR_R_INVPC_OCCUR     ((uint32_t)0x00040000u)
#define SCB_CFSR_R_INVPC_CLEAR     ((uint32_t)0x00040000u)

#define SCB_CFSR_INVPC_MASK        ((uint32_t)0x00000001u)
#define SCB_CFSR_INVPC_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_CFSR_INVPC_OCCUR       ((uint32_t)0x00000001u)
#define SCB_CFSR_INVPC_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_NOCP_MASK      ((uint32_t)0x00080000u)
#define SCB_CFSR_R_NOCP_BIT       (19u)
#define SCB_CFSR_R_NOCP_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_CFSR_R_NOCP_OCCUR     ((uint32_t)0x00080000u)
#define SCB_CFSR_R_NOCP_CLEAR     ((uint32_t)0x00080000u)

#define SCB_CFSR_NOCP_MASK        ((uint32_t)0x00000001u)
#define SCB_CFSR_NOCP_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_CFSR_NOCP_OCCUR       ((uint32_t)0x00000001u)
#define SCB_CFSR_NOCP_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_UNALIGNED_MASK      ((uint32_t)0x01000000u)
#define SCB_CFSR_R_UNALIGNED_BIT       (24u)
#define SCB_CFSR_R_UNALIGNED_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_CFSR_R_UUNALIGNED_OCCUR     ((uint32_t)0x01000000u)
#define SCB_CFSR_R_UNALIGNED_CLEAR     ((uint32_t)0x01000000u)

#define SCB_CFSR_UNALIGNED_MASK        ((uint32_t)0x00000001u)
#define SCB_CFSR_UNALIGNED_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_CFSR_UNALIGNED_OCCUR       ((uint32_t)0x00000001u)
#define SCB_CFSR_UNALIGNED_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_DIVBYZERO_MASK      ((uint32_t)0x02000000u)
#define SCB_CFSR_R_DIVBYZERO_BIT       (25u)
#define SCB_CFSR_R_DIVBYZERO_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_CFSR_R_DIVBYZERO_OCCUR     ((uint32_t)0x02000000u)
#define SCB_CFSR_R_DIVBYZERO_CLEAR     ((uint32_t)0x02000000u)

#define SCB_CFSR_DIVBYZERO_MASK        ((uint32_t)0x00000001u)
#define SCB_CFSR_DIVBYZERO_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_CFSR_DIVBYZERO_OCCUR       ((uint32_t)0x00000001u)
#define SCB_CFSR_DIVBYZERO_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/********************************************************************************************/
/************************************* 13_1 UCFSR ***********************************************/
/********************************************************************************************/
/*----------*/
#define SCB_UCFSR_R_UNDEFINSTR_MASK      ((uint32_t)0x00000001u)
#define SCB_UCFSR_R_UNDEFINSTR_BIT       (0u)
#define SCB_UCFSR_R_UNDEFINSTR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_UCFSR_R_UNDEFINSTR_OCCUR     ((uint32_t)0x00000001u)
#define SCB_UCFSR_R_UNDEFINSTR_CLEAR     ((uint32_t)0x00000001u)

#define SCB_UCFSR_UNDEFINSTR_MASK        ((uint32_t)0x00000001u)
#define SCB_UCFSR_UNDEFINSTR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_UCFSR_UNDEFINSTR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_UCFSR_UNDEFINSTR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_UCFSR_R_INVSTATE_MASK      ((uint32_t)0x00000002u)
#define SCB_UCFSR_R_INVSTATE_BIT       (1u)
#define SCB_UCFSR_R_INVSTATE_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_UCFSR_R_INVSTATE_OCCUR     ((uint32_t)0x00000002u)
#define SCB_UCFSR_R_INVSTATE_CLEAR     ((uint32_t)0x00000002u)

#define SCB_UCFSR_INVSTATE_MASK        ((uint32_t)0x00000001u)
#define SCB_UCFSR_INVSTATE_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_UCFSR_INVSTATE_OCCUR       ((uint32_t)0x00000001u)
#define SCB_UCFSR_INVSTATE_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_UCFSR_R_INVPC_MASK      ((uint32_t)0x00000004u)
#define SCB_UCFSR_R_INVPC_BIT       (2u)
#define SCB_UCFSR_R_INVPC_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_UCFSR_R_INVPC_OCCUR     ((uint32_t)0x00000004u)
#define SCB_UCFSR_R_INVPC_CLEAR     ((uint32_t)0x00000004u)

#define SCB_UCFSR_INVPC_MASK        ((uint32_t)0x00000001u)
#define SCB_UCFSR_INVPC_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_UCFSR_INVPC_OCCUR       ((uint32_t)0x00000001u)
#define SCB_UCFSR_INVPC_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_UCFSR_R_NOCP_MASK      ((uint32_t)0x00000008u)
#define SCB_UCFSR_R_NOCP_BIT       (3u)
#define SCB_UCFSR_R_NOCP_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_UCFSR_R_NOCP_OCCUR     ((uint32_t)0x00000008u)
#define SCB_UCFSR_R_NOCP_CLEAR     ((uint32_t)0x00000008u)

#define SCB_UCFSR_NOCP_MASK        ((uint32_t)0x00000001u)
#define SCB_UCFSR_NOCP_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_UCFSR_NOCP_OCCUR       ((uint32_t)0x00000001u)
#define SCB_UCFSR_NOCP_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_UCFSR_R_UNALIGNED_MASK      ((uint32_t)0x00000100u)
#define SCB_UCFSR_R_UNALIGNED_BIT       (8u)
#define SCB_UCFSR_R_UNALIGNED_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_UCFSR_R_UUNALIGNED_OCCUR    ((uint32_t)0x00000100u)
#define SCB_UCFSR_R_UNALIGNED_CLEAR     ((uint32_t)0x00000100u)

#define SCB_UCFSR_UNALIGNED_MASK        ((uint32_t)0x00000001u)
#define SCB_UCFSR_UNALIGNED_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_UCFSR_UNALIGNED_OCCUR       ((uint32_t)0x00000001u)
#define SCB_UCFSR_UNALIGNED_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_UCFSR_R_DIVBYZERO_MASK      ((uint32_t)0x00000200u)
#define SCB_UCFSR_R_DIVBYZERO_BIT       (9u)
#define SCB_UCFSR_R_DIVBYZERO_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_UCFSR_R_DIVBYZERO_OCCUR     ((uint32_t)0x00000200u)
#define SCB_UCFSR_R_DIVBYZERO_CLEAR     ((uint32_t)0x00000200u)

#define SCB_UCFSR_DIVBYZERO_MASK        ((uint32_t)0x00000001u)
#define SCB_UCFSR_DIVBYZERO_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_UCFSR_DIVBYZERO_OCCUR       ((uint32_t)0x00000001u)
#define SCB_UCFSR_DIVBYZERO_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/********************************************************************************************/
/************************************* 13_2 BCFSR ***********************************************/
/********************************************************************************************/
/*----------*/
#define SCB_BCFSR_R_IBUSERR_MASK      ((uint32_t)0x00000001u)
#define SCB_BCFSR_R_IBUSERR_BIT       (0u)
#define SCB_BCFSR_R_IBUSERR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_BCFSR_R_IBUSERR_OCCUR     ((uint32_t)0x00000001u)
#define SCB_BCFSR_R_IBUSERR_CLEAR     ((uint32_t)0x00000001u)

#define SCB_BCFSR_IBUSERR_MASK        ((uint32_t)0x00000001u)
#define SCB_BCFSR_IBUSERR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_BCFSR_IBUSERR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_BCFSR_IBUSERR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_BCFSR_R_PRECISERR_MASK      ((uint32_t)0x00000002u)
#define SCB_BCFSR_R_PRECISERR_BIT       (1u)
#define SCB_BCFSR_R_PRECISERR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_BCFSR_R_PRECISERR_OCCUR     ((uint32_t)0x00000002u)
#define SCB_BCFSR_R_PRECISERR_CLEAR     ((uint32_t)0x00000002u)

#define SCB_BCFSR_PRECISERR_MASK        ((uint32_t)0x00000001u)
#define SCB_BCFSR_PRECISERR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_BCFSR_PRECISERR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_BCFSR_PRECISERR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_BCFSR_R_IMPRECISERR_MASK      ((uint32_t)0x00000004u)
#define SCB_BCFSR_R_IMPRECISERR_BIT       (2u)
#define SCB_BCFSR_R_IMPRECISERR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_BCFSR_R_IMPRECISERR_OCCUR     ((uint32_t)0x00000004u)
#define SCB_BCFSR_R_IMPRECISERR_CLEAR     ((uint32_t)0x00000004u)

#define SCB_BCFSR_IMPRECISERR_MASK        ((uint32_t)0x00000001u)
#define SCB_BCFSR_IMPRECISERR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_BCFSR_IMPRECISERR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_BCFSR_IMPRECISERR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_BCFSR_R_UNSTKERR_MASK      ((uint32_t)0x00000008u)
#define SCB_BCFSR_R_UNSTKERR_BIT       (3u)
#define SCB_BCFSR_R_UNSTKERR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_BCFSR_R_UNSTKERR_OCCUR     ((uint32_t)0x00000008u)
#define SCB_BCFSR_R_UNSTKERR_CLEAR     ((uint32_t)0x00000008u)

#define SCB_BCFSR_UNSTKERR_MASK        ((uint32_t)0x00000001u)
#define SCB_BCFSR_UNSTKERR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_BCFSR_UNSTKERR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_BCFSR_UNSTKERR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_BCFSR_R_STKERR_MASK      ((uint32_t)0x00000010u)
#define SCB_BCFSR_R_STKERR_BIT       (4u)
#define SCB_BCFSR_R_STKERR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_BCFSR_R_STKERR_OCCUR     ((uint32_t)0x00000010u)
#define SCB_BCFSR_R_STKERR_CLEAR     ((uint32_t)0x00000010u)

#define SCB_BCFSR_STKERR_MASK        ((uint32_t)0x00000001u)
#define SCB_BCFSR_STKERR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_BCFSR_STKERR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_BCFSR_STKERR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_BCFSR_R_LSPERR_MASK      ((uint32_t)0x00000020u)
#define SCB_BCFSR_R_LSPERR_BIT       (5u)
#define SCB_BCFSR_R_LSPERR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_BCFSR_R_LSPERR_OCCUR     ((uint32_t)0x00000020u)
#define SCB_BCFSR_R_LSPERR_CLEAR     ((uint32_t)0x00000020u)

#define SCB_BCFSR_LSPERR_MASK        ((uint32_t)0x00000001u)
#define SCB_BCFSR_LSPERR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_BCFSR_LSPERR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_BCFSR_LSPERR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_BCFSR_R_BFARVALID_MASK      ((uint32_t)0x00000080u)
#define SCB_BCFSR_R_BFARVALID_BIT       (7u)
#define SCB_BCFSR_R_BFARVALID_NOVALID   ((uint32_t)0x00000000u)
#define SCB_BCFSR_R_BFARVALID_VALID     ((uint32_t)0x00000080u)
#define SCB_BCFSR_R_BFARVALID_CLEAR     ((uint32_t)0x00000080u)

#define SCB_BCFSR_BFARVALID_MASK        ((uint32_t)0x00000001u)
#define SCB_BCFSR_BFARVALID_NOVALID     ((uint32_t)0x00000000u)
#define SCB_BCFSR_BFARVALID_VALID       ((uint32_t)0x00000001u)
#define SCB_BCFSR_BFARVALID_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/********************************************************************************************/
/************************************* 13_3 MCFSR ***********************************************/
/********************************************************************************************/
/*----------*/
#define SCB_MCFSR_R_IACCVIOL_MASK      ((uint32_t)0x00000001u)
#define SCB_MCFSR_R_IACCVIOL_BIT       (0u)
#define SCB_MCFSR_R_IACCVIOL_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_MCFSR_R_IACCVIOL_OCCUR     ((uint32_t)0x00000001u)
#define SCB_MCFSR_R_IACCVIOL_CLEAR     ((uint32_t)0x00000001u)

#define SCB_MCFSR_IACCVIOL_MASK        ((uint32_t)0x00000001u)
#define SCB_MCFSR_IACCVIOL_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_MCFSR_IACCVIOL_OCCUR       ((uint32_t)0x00000001u)
#define SCB_MCFSR_IACCVIOL_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_MCFSR_R_DACCVIOL_MASK      ((uint32_t)0x00000002u)
#define SCB_MCFSR_R_DACCVIOL_BIT       (1u)
#define SCB_MCFSR_R_DACCVIOL_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_MCFSR_R_DACCVIOL_OCCUR     ((uint32_t)0x00000002u)
#define SCB_MCFSR_R_DACCVIOL_CLEAR     ((uint32_t)0x00000002u)

#define SCB_MCFSR_DACCVIOL_MASK        ((uint32_t)0x00000001u)
#define SCB_MCFSR_DACCVIOL_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_MCFSR_DACCVIOL_OCCUR       ((uint32_t)0x00000001u)
#define SCB_MCFSR_DACCVIOL_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_MCFSR_R_MUNSTKERR_MASK      ((uint32_t)0x00000008u)
#define SCB_MCFSR_R_MUNSTKERR_BIT       (3u)
#define SCB_MCFSR_R_MUNSTKERR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_MCFSR_R_MUNSTKERR_OCCUR     ((uint32_t)0x00000008u)
#define SCB_MCFSR_R_MUNSTKERR_CLEAR     ((uint32_t)0x00000008u)

#define SCB_MCFSR_MUNSTKERR_MASK        ((uint32_t)0x00000001u)
#define SCB_MCFSR_MUNSTKERR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_MCFSR_MUNSTKERR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_MCFSR_MUNSTKERR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_MCFSR_R_MSTKERR_MASK      ((uint32_t)0x00000010u)
#define SCB_MCFSR_R_MSTKERR_BIT       (4u)
#define SCB_MCFSR_R_MSTKERR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_MCFSR_R_MSTKERR_OCCUR     ((uint32_t)0x00000010u)
#define SCB_MCFSR_R_MSTKERR_CLEAR     ((uint32_t)0x00000010u)

#define SCB_MCFSR_MSTKERR_MASK        ((uint32_t)0x00000001u)
#define SCB_MCFSR_MSTKERR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_MCFSR_MSTKERR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_MCFSR_MSTKERR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_MCFSR_R_MLSPERR_MASK      ((uint32_t)0x00000020u)
#define SCB_MCFSR_R_MLSPERR_BIT       (5u)
#define SCB_MCFSR_R_MLSPERR_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_MCFSR_R_MLSPERR_OCCUR     ((uint32_t)0x00000020u)
#define SCB_MCFSR_R_MLSPERR_CLEAR     ((uint32_t)0x00000020u)

#define SCB_MCFSR_MLSPERR_MASK        ((uint32_t)0x00000001u)
#define SCB_MCFSR_MLSPERR_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_MCFSR_MLSPERR_OCCUR       ((uint32_t)0x00000001u)
#define SCB_MCFSR_MLSPERR_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_MCFSR_R_MMARVALID_MASK      ((uint32_t)0x00000080u)
#define SCB_MCFSR_R_MMARVALID_BIT       (7u)
#define SCB_MCFSR_R_MMARVALID_NOVALID   ((uint32_t)0x00000000u)
#define SCB_MCFSR_R_MMARVALID_VALID     ((uint32_t)0x00000080u)
#define SCB_MCFSR_R_MMARVALID_CLEAR     ((uint32_t)0x00000080u)

#define SCB_MCFSR_MMARVALID_MASK        ((uint32_t)0x00000001u)
#define SCB_MCFSR_MMARVALID_NOVALID     ((uint32_t)0x00000000u)
#define SCB_MCFSR_MMARVALID_VALID       ((uint32_t)0x00000001u)
#define SCB_MCFSR_MMARVALID_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/********************************************************************************************/
/************************************* 14 HFSR ***********************************************/
/********************************************************************************************/
/*----------*/
#define SCB_HFSR_R_VECTTBL_MASK      ((uint32_t)0x00000002u)
#define SCB_HFSR_R_VECTTBL_BIT       (1u)
#define SCB_HFSR_R_VECTTBL_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_HFSR_R_VECTTBL_OCCUR     ((uint32_t)0x00000002u)
#define SCB_HFSR_R_VECTTBL_CLEAR     ((uint32_t)0x00000002u)

#define SCB_HFSR_VECTTBL_MASK        ((uint32_t)0x00000001u)
#define SCB_HFSR_VECTTBL_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_HFSR_VECTTBL_OCCUR       ((uint32_t)0x00000001u)
#define SCB_HFSR_VECTTBL_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_HFSR_R_FORCED_MASK      ((uint32_t)0x40000000u)
#define SCB_HFSR_R_FORCED_BIT       (30u)
#define SCB_HFSR_R_FORCED_NOOCCUR   ((uint32_t)0x00000000u)
#define SCB_HFSR_R_FORCED_OCCUR     ((uint32_t)0x40000000u)
#define SCB_HFSR_R_FORCED_CLEAR     ((uint32_t)0x40000000u)

#define SCB_HFSR_FORCED_MASK        ((uint32_t)0x00000001u)
#define SCB_HFSR_FORCED_NOOCCUR     ((uint32_t)0x00000000u)
#define SCB_HFSR_FORCED_OCCUR       ((uint32_t)0x00000001u)
#define SCB_HFSR_FORCED_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SCB_HFSR_R_DEBUGEVT_MASK      ((uint32_t)0x80000000u)
#define SCB_HFSR_R_DEBUGEVT_BIT       (31u)

#define SCB_HFSR_DEBUGEVT_MASK        ((uint32_t)0x1u)
/*----------*/

/********************************************************************************************/
/************************************* 15 MMFAR ***********************************************/
/********************************************************************************************/
/*----------*/
#define SCB_MMFAR_R_ADDRESS_MASK      ((uint32_t)0xFFFFFFFFu)
#define SCB_MMFAR_R_ADDRESS_BIT       (0u)

#define SCB_MMFAR_ADDRESS_MASK        ((uint32_t)0xFFFFFFFFu)
/*----------*/


/********************************************************************************************/
/************************************* 16 BFAR ***********************************************/
/********************************************************************************************/
/*----------*/
#define SCB_BFAR_R_ADDRESS_MASK      ((uint32_t)0xFFFFFFFFu)
#define SCB_BFAR_R_ADDRESS_BIT       (0u)

#define SCB_BFAR_ADDRESS_MASK        ((uint32_t)0xFFFFFFFFu)
/*----------*/

/********************************************************************************************/
/************************************* 17 AFSR ***********************************************/
/********************************************************************************************/
/*----------*/
#define SCB_AFSR_R_IMPDEF_MASK      ((uint32_t)0xFFFFFFFFu)
#define SCB_AFSR_R_IMPDEF_BIT       (0u)

#define SCB_AFSR_IMPDEF_MASK        ((uint32_t)0xFFFFFFFFu)
/*----------*/

/********************************************************************************************/
/************************************* 18 PFR0 ***********************************************/
/********************************************************************************************/

/********************************************************************************************/
/************************************* 19 PFR1 ***********************************************/
/********************************************************************************************/

/********************************************************************************************/
/************************************* 20 DFR0 ***********************************************/
/********************************************************************************************/

/********************************************************************************************/
/************************************* 21 AFR0 ***********************************************/
/********************************************************************************************/

/********************************************************************************************/
/************************************* 22 MMFR0 ***********************************************/
/********************************************************************************************/

/********************************************************************************************/
/************************************* 23 MMFR1 ***********************************************/
/********************************************************************************************/

/********************************************************************************************/
/************************************* 24 MMFR2 ***********************************************/
/********************************************************************************************/

/********************************************************************************************/
/************************************* 25 MMFR3 ***********************************************/
/********************************************************************************************/

/********************************************************************************************/
/************************************* 26 ISAR0 ***********************************************/
/********************************************************************************************/

/********************************************************************************************/
/************************************* 27 ISAR1 ***********************************************/
/********************************************************************************************/

/********************************************************************************************/
/************************************* 28 ISAR2 ***********************************************/
/********************************************************************************************/

/********************************************************************************************/
/************************************* 29 ISAR3 ***********************************************/
/********************************************************************************************/

/********************************************************************************************/
/************************************* 30 ISAR4 ***********************************************/
/********************************************************************************************/





#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_REGISTER_SCB_REGISTERDEFINES_H_ */
