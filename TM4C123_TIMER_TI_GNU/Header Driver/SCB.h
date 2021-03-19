/*
 * SCB.h
 *
 *  Created on: Jan 18, 2018
 *      Author: Lalo_Alvarez
 */

#ifndef SCB_H_
#define SCB_H_


#define SCB_BASE            (0xE000E000ul)

#include "stdint.h"
#include "FLASH.h"

typedef volatile struct
{
    volatile const uint32_t INTLINESNUM      :5;
    const    uint32_t reserved     :27;
}ICTLR_TypeDef;

typedef volatile struct
{
    volatile uint32_t DISMCYCINT   :1;
    volatile uint32_t DISDEFWBUF   :1;
    volatile uint32_t DISFOLD      :1;
    const    uint32_t reserved     :5;
    volatile uint32_t DISFPCA      :1;
    volatile uint32_t DISOOFP      :1;
    const    uint32_t reserved1    :22;
}ACTLR_TypeDef;


typedef volatile struct
{
    volatile const uint32_t REVISION :4;
    volatile const uint32_t PARTNO   :12;
    volatile const uint32_t CON      :4;
    volatile const uint32_t VARIANT  :4;
    volatile const uint32_t IMPLEMENTER:8;
}CPUID_TypeDef;

typedef volatile struct
{
    volatile const uint32_t VECTACTIVE   :8;
    const    uint32_t       reserved     :3;
    volatile const uint32_t RETTOBASE    :1;
    volatile const uint32_t VECTPENDING  :8;
    const    uint32_t       reserved1    :2;
    volatile const uint32_t ISRPENDING   :1;
    volatile const uint32_t ISRPREEMPT   :1;
    const    uint32_t       reserved2    :1;
    volatile uint32_t       PENDSTCLR    :1;
    volatile uint32_t       PENDSTSET    :1;
    volatile uint32_t       PENDSVCLR    :1;
    volatile uint32_t       PENDSVSET    :1;
    const    uint32_t       reserved3    :2;
    volatile uint32_t       NMIPENDSET   :1;
}ICSR_TypeDef   ;

typedef volatile struct
{
    const    uint32_t reserved  :10;
    volatile uint32_t TBLOFF    :22;
}VTOR_TypeDef;



typedef volatile struct
{
    volatile uint32_t      VECTRESET       :1;
    volatile uint32_t      VECTCLRACTIVE   :1;
    volatile uint32_t      SYSRESETREQ     :1;
    const    uint32_t      reserved        :5;
    volatile uint32_t      PRIGROUP        :3;
    const    uint32_t      reserved1       :4;
    volatile const uint32_t ENDIANESS      :1;
    volatile uint32_t      VECTKEY         :16;
}AIRCR_TypeDef;




typedef volatile struct
{
    const    uint32_t reserved     :1;
    volatile uint32_t SLEEPONEXIT    :1;
    volatile uint32_t SLEEPDEEP    :1;
    const    uint32_t reserved1    :1;
    volatile uint32_t SEVONPEND    :1;
    const    uint32_t reserved2    :27;
}SCR_TypeDef;



typedef volatile struct
{
    volatile uint32_t NONBASETHREDENA      :1;
    volatile uint32_t USERSETMPEND     :1;
    const    uint32_t reserved     :1;
    volatile uint32_t UNALIGN_TRP    :1;
    volatile uint32_t DIV_0_TRP    :1;
    const    uint32_t reserved1    :3;
    volatile uint32_t BFHFNMIGN    :1;
    volatile uint32_t STKALIGN     :1;
    const    uint32_t reserved2    :22;
}CCR_TypeDef;


typedef volatile struct
{
    const    uint32_t reserved          :5;
    volatile uint32_t MEM               :3;
    const    uint32_t reserved1         :5;
    volatile uint32_t BUS               :3;
    const    uint32_t reserved2         :5;
    volatile uint32_t USAGE             :3;
    const    uint32_t reserved3         :8;
}SHPR1_TypeDef;


typedef volatile struct
{
    const    uint32_t reserved     :29 ;
    volatile uint32_t SVCALL          :3;
}SHPR2_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved     :5;
    volatile uint32_t DEBUG        :3;
    const    uint32_t reserved1    :13;
    volatile uint32_t PENDSV       :3;
    const    uint32_t reserved2    :5;
    volatile uint32_t SYSTICK      :3;
}SHPR3_TypeDef;

typedef volatile struct
{
    volatile uint32_t MEMFAULTACT       :1;
    volatile uint32_t BUSFAULTACT       :1;
    const    uint32_t reserved   :1;
    volatile uint32_t USGFAULTACT       :1;
    const    uint32_t reserved1  :3;
    volatile uint32_t SVCALLACT  :1;
    volatile uint32_t MONITORACT :1;
    const    uint32_t reserved2  :1;
    volatile uint32_t PENDSVACT  :1;
    volatile uint32_t SYSTICKACT :1;
    volatile uint32_t USGFAULTPENDED:1;
    volatile uint32_t MEMFAULTPENDED       :1;
    volatile uint32_t BUSFAULTPENDED       :1;
    volatile uint32_t SVCALLPENDED:1;
    volatile uint32_t MEMFAULTENA:1;
    volatile uint32_t BUSFAULTENA:1;
    volatile uint32_t USGFAULTENA:1;
    const    uint32_t reserved3  :13;
}SHCSR_TypeDef;

typedef volatile struct
{
    volatile uint32_t IACCVIOL   :1;
    volatile uint32_t DACCVIOL   :1;
    const    uint32_t reserved   :1;
    volatile uint32_t MUNSTKERR  :1;
    volatile uint32_t MSTKERR    :1;
    volatile uint32_t MLSPERR    :1;
    const    uint32_t reserved1  :1;
    volatile uint32_t MMARVALID  :1;
    volatile uint32_t IBUSERR    :1;
    volatile uint32_t PRECISERR  :1;
    volatile uint32_t IMPRECISERR:1;
    volatile uint32_t UNSTKERR   :1;
    volatile uint32_t STKERR     :1;
    volatile uint32_t LSPERR     :1;
    const    uint32_t reserved2  :1;
    volatile uint32_t BFARVALID  :1;
    volatile uint32_t UNDEFINSTR :1;
    volatile uint32_t INVSTATE   :1;
    volatile uint32_t INVPC      :1;
    volatile uint32_t NOCP       :1;
    const    uint32_t reserved3  :4;
    volatile uint32_t UNALIGNED  :1;
    volatile uint32_t DIVBYZERO  :1;
    const    uint32_t reserved4  :6;
}CFSR_TypeDef;

typedef volatile struct
{
    volatile uint16_t UNDEFINSTR :1;
    volatile uint16_t INVSTATE   :1;
    volatile uint16_t INVPC      :1;
    volatile uint16_t NOCP       :1;
    const    uint16_t reserved   :4;
    volatile uint16_t UNALIGNED  :1;
    volatile uint16_t DIVBYZERO  :1;
    const    uint16_t reserved1  :6;
}UCFSR_TypeDef;

typedef volatile struct
{
    volatile uint8_t IBUSERR    :1;
    volatile uint8_t PRECISERR  :1;
    volatile uint8_t IMPRECISERR:1;
    volatile uint8_t UNSTKERR   :1;
    volatile uint8_t STKERR     :1;
    volatile uint8_t LSPERR     :1;
    const    uint8_t reserved   :1;
    volatile uint8_t BFARVALID  :1;
}BCFSR_TypeDef;

typedef volatile struct
{
    volatile uint8_t IACCVIOL   :1;
    volatile uint8_t DACCVIOL   :1;
    const    uint8_t reserved   :1;
    volatile uint8_t MUNSTKERR  :1;
    volatile uint8_t MSTKERR    :1;
    volatile uint8_t MLSPERR    :1;
    const    uint8_t reserved1  :1;
    volatile uint8_t MMARVALID  :1;
}MCFSR_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved   :1;
    volatile uint32_t VECTTBL    :1;
    const    uint32_t reserved1  :28;
    volatile uint32_t FORCED     :1;
    volatile uint32_t DEBUGEVT   :1;
}HFSR_TypeDef;


typedef volatile struct
{
    volatile uint32_t HALTED    :1;
    volatile uint32_t BKPT    :1;
    volatile uint32_t DWTTRAP    :1;
    volatile uint32_t VCATCH    :1;
    volatile uint32_t EXTERNAL    :1;
    const    uint32_t reserved  :27;
}DFSR_TypeDef;


typedef volatile struct
{
    volatile uint32_t ADDRESS       :32;
}MMFAR_TypeDef;

typedef volatile struct
{
    volatile uint32_t ADDRESS       :32;
}BFAR_TypeDef;


typedef volatile struct
{
    volatile uint32_t IMPDEF    :32;
}AFSR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t STATE0    :4;
    volatile const uint32_t STATE1    :4;
    const    uint32_t reserved  :24;
}PFR0_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved  :8;
    volatile const uint32_t MICROCONTROLLER_PROGRAMMERS_MODEL    :4;
    const    uint32_t reserved1  :20;
}PFR1_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved  :20;
    volatile const uint32_t MICROCONTROLLER_DEBUG_MODEL    :4;
    const    uint32_t reserved1  :8;
}DFR0_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved  :32;
}AFR0_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved  :4;
    volatile const uint32_t PMSA_SUPPORT    :4;
    volatile const uint32_t CACHE_COHERENCE_SUPPORT    :4;
    volatile const uint32_t OUTER_NON_SHARABLE_SUPPORT    :4;
    const    uint32_t reserved1  :4;
    volatile const uint32_t AUILIARY_REGISTER_SUPPORT    :4;
    const    uint32_t reserved2  :8;
}MMFR0_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved  :32;
}MMFR1_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved  :24;
    volatile const uint32_t WAIT_FOR_INTERRUPT_STALLING    :4;
    const    uint32_t reserved1  :4;
}MMFR2_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved  :32;
}MMFR3_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved  :4;
    volatile const uint32_t BITCOUNT_INSTRS :4;
    volatile const uint32_t BITFIELD_INSTRS :4;
    volatile const uint32_t CMPBRANCH_INSTRS:4;
    volatile const uint32_t COPROC_INSTRS   :4;
    volatile const uint32_t DEBUG_INSTRS    :4;
    volatile const uint32_t DIVIDE_INSTRS   :4;
    const    uint32_t reserved1  :4;
}ISAR0_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved  :12;
    volatile const uint32_t ETEND_INSRS :4;
    volatile const uint32_t IFTHEN_INSTRS :4;
    volatile const uint32_t IMMEDIATE_INSTRS:4;
    volatile const uint32_t INTERWORK_INSTRS   :4;
    const    uint32_t reserved1  :4;
}ISAR1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t LOADSTORE_INSTRS :4;
    volatile const uint32_t MEMHINT_INSTRS :4;
    volatile const uint32_t MULTIACCESSINT_INSTRS:4;
    volatile const uint32_t MULT_INSTRS   :4;
    volatile const uint32_t MULTS_INSTRS   :4;
    volatile const uint32_t MULTU_INSTRS   :4;
    const    uint32_t reserved  :4;
    volatile const uint32_t REVERSAL_INSTRS  :4;
}ISAR2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t SATRUATE_INSTRS :4;
    volatile const uint32_t SIMD_INSTRS :4;
    volatile const uint32_t SVC_INSTRS:4;
    volatile const uint32_t SYNCPRIM_INSTRS   :4;
    volatile const uint32_t TABBRANCH_INSTRS   :4;
    volatile const uint32_t THUMBCOPY_INSTRS   :4;
    volatile const uint32_t TRUENOP_INSTRS  :4;
    const    uint32_t reserved  :4;
}ISAR3_TypeDef;

typedef volatile struct
{
    volatile const uint32_t UNPRIV_INSTRS :4;
    volatile const uint32_t WITHSHIFTS_INSTRS :4;
    volatile const uint32_t WRITEBACK_INSTRS:4;
    const    uint32_t reserved  :4;
    volatile const uint32_t BARRIER_INSTRS   :4;
    volatile const uint32_t SYNCPRIM_INSTRS_FRAC   :4;
    volatile const uint32_t PSR_M_INSTRS   :4;
    const    uint32_t reserved1  :4;
}ISAR4_TypeDef;


typedef volatile struct
{
    const uint32_t             reserved[1];
    union
    {
        volatile const uint32_t      ICTLR;
        ICTLR_TypeDef               ICTLR_Bit;
    };
    union
    {
        volatile uint32_t      ACTLR;
        ACTLR_TypeDef               ACTLR_Bit;
    };
    const uint32_t             reserved1[829];
    union
    {
        volatile uint32_t      CPUID;
        CPUID_TypeDef               CPUID_Bit;
    };
    union
    {
        volatile uint32_t      ICSR;
        ICSR_TypeDef             ICSR_Bit;
    };
    union
    {
        volatile uint32_t      VTOR;
        VTOR_TypeDef              VTOR_Bit;
    };
    union
    {
        volatile uint32_t      AIRCR;
        AIRCR_TypeDef               AIRCR_Bit;
    };
    union
    {
        volatile uint32_t      SCR;
        SCR_TypeDef             SCR_Bit;
    };
    union
    {
        volatile uint32_t      CCR;
        CCR_TypeDef             CCR_Bit;
    };
    union
    {
        volatile uint32_t      SHPR1;
        SHPR1_TypeDef             SHPR1_Bit;
    };
    union
    {
        volatile uint32_t      SHPR2;
        SHPR2_TypeDef             SHPR2_Bit;
    };
    union
    {
        volatile uint32_t      SHPR3;
        SHPR3_TypeDef             SHPR3_Bit;
    };
    union
    {
        volatile uint32_t      SHCSR;
        SHCSR_TypeDef          SHCSR_Bit;
    };
    union
    {
        volatile uint32_t      CFSR;
        CFSR_TypeDef           CFSR_Bit;
    };
    union
    {
        volatile uint32_t      HFSR;
        HFSR_TypeDef          HFSR_Bit;
    };
    union
    {
        volatile uint32_t      DFSR;
        DFSR_TypeDef          DFSR_Bit;
    };
    union
    {
        volatile uint32_t      MMFAR;
        MMFAR_TypeDef              MMFAR_Bit;
    };
    union
    {
        volatile uint32_t      BFAR;
        BFAR_TypeDef           BFAR_Bit;
    };
    union
    {
        volatile uint32_t      AFSR;
        AFSR_TypeDef           AFSR_Bit;
    };
    union
    {
        volatile uint32_t      PFR0;
        PFR0_TypeDef           PFR0_Bit;
    };
    union
    {
        volatile uint32_t      PFR1;
        PFR1_TypeDef           PFR1_Bit;
    };
    union
    {
        volatile uint32_t      DFR0;
        DFR0_TypeDef           DFR0_Bit;
    };
    union
    {
        volatile uint32_t      AFR0;
        AFR0_TypeDef           AFR0_Bit;
    };
    union
    {
        volatile uint32_t      MMFR0;
        MMFR0_TypeDef           MMFR0_Bit;
    };
    union
    {
        volatile uint32_t      MMFR1;
        MMFR1_TypeDef           MMFR1_Bit;
    };
    union
    {
        volatile uint32_t      MMFR2;
        MMFR2_TypeDef           MMFR2_Bit;
    };
    union
    {
        volatile uint32_t      MMFR3;
        MMFR3_TypeDef           MMFR3_Bit;
    };
    union
    {
        volatile uint32_t      ISAR0;
        ISAR0_TypeDef           ISAR0_Bit;
    };
    union
    {
        volatile uint32_t      ISAR1;
        ISAR1_TypeDef           ISAR1_Bit;
    };
    union
    {
        volatile uint32_t      ISAR2;
        ISAR2_TypeDef           ISAR2_Bit;
    };
    union
    {
        volatile uint32_t      ISAR3;
        ISAR3_TypeDef           ISAR3_Bit;
    };
    union
    {
        volatile uint32_t      ISAR4;
        ISAR4_TypeDef           ISAR4_Bit;
    };
    const uint32_t             reserved3[163];

}SCB_TypeDef;


#define SCB                 (((SCB_TypeDef*)(SCB_BASE)))


#define SCB_ICTLR_OFFSET    (0x0004u)
#define SCB_ACTLR_OFFSET    (0x0008u)
#define SCB_CPUID_OFFSET    (0x0D00u)
#define SCB_ICSR_OFFSET     (0x0D04u)
#define SCB_VTOR_OFFSET     (0x0D08u)
#define SCB_AIRCR_OFFSET    (0x0D0Cu)
#define SCB_SCR_OFFSET      (0x0D10u)
#define SCB_CCR_OFFSET      (0x0D14u)
#define SCB_SHPR1_OFFSET    (0x0D18u)
#define SCB_SHPR2_OFFSET    (0x0D1Cu)
#define SCB_SHPR3_OFFSET    (0x0D20u)
#define SCB_SHCSR_OFFSET    (0x0D24u)
#define SCB_CFSR_OFFSET     (0x0D28u)
#define SCB_MCFSR_OFFSET     (0x0D28u)
#define SCB_BCFSR_OFFSET    (0x0D29u)
#define SCB_UCFSR_OFFSET    (0x0D2Au)
#define SCB_HFSR_OFFSET     (0x0D2Cu)
#define SCB_DFSR_OFFSET     (0x0D30u)
#define SCB_MMFAR_OFFSET    (0x0D34u)
#define SCB_BFAR_OFFSET     (0x0D38u)
#define SCB_AFSR_OFFSET     (0x0D3Cu)
#define SCB_PFR0_OFFSET     (0x0D40u)
#define SCB_PFR1_OFFSET     (0x0D44u)
#define SCB_DFR0_OFFSET     (0x0D48u)
#define SCB_AFR0_OFFSET     (0x0D4Cu)
#define SCB_MMFR0_OFFSET     (0x0D50u)
#define SCB_MMFR1_OFFSET     (0x0D54u)
#define SCB_MMFR2_OFFSET     (0x0D58u)
#define SCB_MMFR3_OFFSET     (0x0D5Cu)
#define SCB_ISAR0_OFFSET     (0x0D60u)
#define SCB_ISAR1_OFFSET     (0x0D64u)
#define SCB_ISAR2_OFFSET     (0x0D68u)
#define SCB_ISAR3_OFFSET     (0x0D6Cu)
#define SCB_ISAR4_OFFSET     (0x0D70u)

/********************************************************************************************/
/************************************* 1 ICTLR ***********************************************/
/********************************************************************************************/

#define SCB_ICTLR            (((ICTLR_TypeDef*)(SCB_BASE+SCB_ICTLR_OFFSET )))
#define SCB_ICTLR_R          (*((volatile const uint32_t *)(SCB_BASE+SCB_ICTLR_OFFSET)))

/*----------*/
#define SCB_ICTLR_R_INTLINESNUM_MASK    (0x0000001Fu)
#define SCB_ICTLR_R_INTLINESNUM_BIT     (0u)
#define SCB_ICTLR_R_INTLINESNUM_0_32         (0x00000000u)
#define SCB_ICTLR_R_INTLINESNUM_33_64        (0x00000001u)
#define SCB_ICTLR_R_INTLINESNUM_65_96        (0x00000002u)
#define SCB_ICTLR_R_INTLINESNUM_97_128       (0x00000003u)
#define SCB_ICTLR_R_INTLINESNUM_129_160      (0x00000004u)
#define SCB_ICTLR_R_INTLINESNUM_161_192      (0x00000005u)
#define SCB_ICTLR_R_INTLINESNUM_193_224      (0x00000006u)
#define SCB_ICTLR_R_INTLINESNUM_225_256      (0x00000007u)

#define SCB_ICTLR_INTLINESNUM_MASK    (0x1Fu)
#define SCB_ICTLR_INTLINESNUM_0_32    (0x00u)
#define SCB_ICTLR_INTLINESNUM_33_64   (0x01u)
#define SCB_ICTLR_INTLINESNUM_65_96   (0x02u)
#define SCB_ICTLR_INTLINESNUM_97_128  (0x03u)
#define SCB_ICTLR_INTLINESNUM_129_160 (0x04u)
#define SCB_ICTLR_INTLINESNUM_161_192 (0x05u)
#define SCB_ICTLR_INTLINESNUM_193_224 (0x06u)
#define SCB_ICTLR_INTLINESNUM_225_256 (0x07u)
/*----------*/

/********************************************************************************************/
/************************************* 2 ACTLR ***********************************************/
/********************************************************************************************/

#define SCB_ACTLR            (((ACTLR_TypeDef*)(SCB_BASE+SCB_ACTLR_OFFSET )))
#define SCB_ACTLR_R          (*((volatile uint32_t *)(SCB_BASE+SCB_ACTLR_OFFSET)))

/*----------*/
#define SCB_ACTLR_R_DISMCYCINT_MASK    (0x00000001u)
#define SCB_ACTLR_R_DISMCYCINT_BIT     (0u)
#define SCB_ACTLR_R_DISMCYCINT_DIS     (0x00000001u)
#define SCB_ACTLR_R_DISMCYCINT_NE      (0x00000000u)

#define SCB_ACTLR_DISMCYCINT_MASK    (1u)
#define SCB_ACTLR_DISMCYCINT_DIS     (1u)
#define SCB_ACTLR_DISMCYCINT_NE      (0u)
/*----------*/

/*----------*/
#define SCB_ACTLR_R_DISDEFWBUF_MASK    (0x00000002u)
#define SCB_ACTLR_R_DISDEFWBUF_BIT     (1u)
#define SCB_ACTLR_R_DISDEFWBUF_DIS     (0x00000002u)
#define SCB_ACTLR_R_DISDEFWBUF_NE      (0x00000000u)

#define SCB_ACTLR_DISDEFWBUF_MASK    (1u)
#define SCB_ACTLR_DISDEFWBUF_DIS     (1u)
#define SCB_ACTLR_DISDEFWBUF_NE      (0u)
/*----------*/

/*----------*/
#define SCB_ACTLR_R_DISFOLD_MASK    (0x00000004u)
#define SCB_ACTLR_R_DISFOLD_BIT     (2u)
#define SCB_ACTLR_R_DISFOLD_DIS     (0x00000004u)
#define SCB_ACTLR_R_DISFOLD_NE      (0x00000000u)

#define SCB_ACTLR_DISFOLD_MASK    (1u)
#define SCB_ACTLR_DISFOLD_DIS     (1u)
#define SCB_ACTLR_DISFOLD_NE      (0u)
/*----------*/

/*----------*/
#define SCB_ACTLR_R_DISFPCA_MASK    (0x00000100u)
#define SCB_ACTLR_R_DISFPCA_BIT     (8u)
#define SCB_ACTLR_R_DISFPCA_DIS     (0x00000100u)
#define SCB_ACTLR_R_DISFPCA_NE      (0x00000000u)

#define SCB_ACTLR_DISFPCA_MASK    (1u)
#define SCB_ACTLR_DISFPCA_DIS     (1u)
#define SCB_ACTLR_DISFPCA_NE      (0u)
/*----------*/

/*----------*/
#define SCB_ACTLR_R_DISOOFP_MASK    (0x00000200u)
#define SCB_ACTLR_R_DISOOFP_BIT     (9u)
#define SCB_ACTLR_R_DISOOFP_DIS     (0x00000200u)
#define SCB_ACTLR_R_DISOOFP_NE      (0x00000000u)

#define SCB_ACTLR_DISOOFP_MASK    (1u)
#define SCB_ACTLR_DISOOFP_DIS     (1u)
#define SCB_ACTLR_DISOOFP_NE      (0u)
/*----------*/


/********************************************************************************************/
/************************************* 3 CPUID ***********************************************/
/********************************************************************************************/

#define SCB_CPUID            (((CPUID_TypeDef*)(SCB_BASE+SCB_CPUID_OFFSET )))
#define SCB_CPUID_R          (*((volatile const uint32_t *)(SCB_BASE+SCB_CPUID_OFFSET)))

/*----------*/
#define SCB_CPUID_R_REVISION_MASK    (0x0000000Fu)
#define SCB_CPUID_R_REVISION_BIT     (0u)
#define SCB_CPUID_R_REVISION_r0p0    (0x00000000u)
#define SCB_CPUID_R_REVISION_r0p1    (0x00000001u)
#define SCB_CPUID_R_REVISION_r0p2    (0x00000002u)
#define SCB_CPUID_R_REVISION_r0p3    (0x00000003u)
#define SCB_CPUID_R_REVISION_r0p4    (0x00000004u)
#define SCB_CPUID_R_REVISION_r0p5    (0x00000005u)
#define SCB_CPUID_R_REVISION_r0p6    (0x00000006u)
#define SCB_CPUID_R_REVISION_r0p7    (0x00000007u)
#define SCB_CPUID_R_REVISION_r0p8    (0x00000008u)
#define SCB_CPUID_R_REVISION_r0p9    (0x00000009u)
#define SCB_CPUID_R_REVISION_r0p10   (0x0000000Au)
#define SCB_CPUID_R_REVISION_r0p11   (0x0000000Bu)
#define SCB_CPUID_R_REVISION_r0p12   (0x0000000Cu)
#define SCB_CPUID_R_REVISION_r0p13   (0x0000000Du)
#define SCB_CPUID_R_REVISION_r0p14   (0x0000000Eu)
#define SCB_CPUID_R_REVISION_r0p15   (0x0000000Fu)


#define SCB_CPUID_REVISION_MASK        (0xFu)
#define SCB_CPUID_REVISION_rnp0        (0x0u)
#define SCB_CPUID_REVISION_rnp1        (0x1u)
#define SCB_CPUID_REVISION_rnp2        (0x2u)
#define SCB_CPUID_REVISION_rnp3        (0x3u)
#define SCB_CPUID_REVISION_rnp4        (0x4u)
#define SCB_CPUID_REVISION_rnp5        (0x5u)
#define SCB_CPUID_REVISION_rnp6        (0x6u)
#define SCB_CPUID_REVISION_rnp7        (0x7u)
#define SCB_CPUID_REVISION_rnp8        (0x8u)
#define SCB_CPUID_REVISION_rnp9        (0x9u)
#define SCB_CPUID_REVISION_rnp10       (0xAu)
#define SCB_CPUID_REVISION_rnp11       (0xBu)
#define SCB_CPUID_REVISION_rnp12       (0xCu)
#define SCB_CPUID_REVISION_rnp13       (0xDu)
#define SCB_CPUID_REVISION_rnp14       (0xEu)
#define SCB_CPUID_REVISION_rnp15       (0xFu)
/*----------*/

/*----------*/
#define SCB_CPUID_R_PARTNO_MASK (0x0000FFF0u)
#define SCB_CPUID_R_PARTNO_BIT  (4u)
#define SCB_CPUID_R_PARTNO_M4   (0x0000C240u)

#define SCB_CPUID_PARTNO_MASK    (0xFFFu)
#define SCB_CPUID_PARTNO_M4      (0xC24u)
/*----------*/

/*----------*/
#define SCB_CPUID_R_CON_MASK    (0x000F0000u)
#define SCB_CPUID_R_CON_BIT     (16u)
#define SCB_CPUID_R_CON_0XF     (0x000F0000u)

#define SCB_CPUID_CON_MASK    (0xFu)
#define SCB_CPUID_CON_0xF     (0xFu)
/*----------*/

/*----------*/
#define SCB_CPUID_R_VARIANT_MASK    (0x00F00000u)
#define SCB_CPUID_R_VARIANT_BIT     (20u)
#define SCB_CPUID_R_VARIANT_r0pn    (0x00000000u)
#define SCB_CPUID_R_VARIANT_r1pn    (0x00100000u)
#define SCB_CPUID_R_VARIANT_r2pn    (0x00200000u)
#define SCB_CPUID_R_VARIANT_r3pn    (0x00300000u)
#define SCB_CPUID_R_VARIANT_r4pn    (0x00400000u)
#define SCB_CPUID_R_VARIANT_r5pn    (0x00500000u)
#define SCB_CPUID_R_VARIANT_r6pn    (0x00600000u)
#define SCB_CPUID_R_VARIANT_r7pn    (0x00700000u)
#define SCB_CPUID_R_VARIANT_r8pn    (0x00800000u)
#define SCB_CPUID_R_VARIANT_r9pn    (0x00900000u)
#define SCB_CPUID_R_VARIANT_r10pn   (0x00A00000u)
#define SCB_CPUID_R_VARIANT_r11pn   (0x00B00000u)
#define SCB_CPUID_R_VARIANT_r12pn   (0x00C00000u)
#define SCB_CPUID_R_VARIANT_r13pn   (0x00D00000u)
#define SCB_CPUID_R_VARIANT_r14pn   (0x00E00000u)
#define SCB_CPUID_R_VARIANT_r15pn   (0x00F00000u)


#define SCB_CPUID_VARIANT_MASK        (0xFu)
#define SCB_CPUID_VARIANT_r0pn        (0x0u)
#define SCB_CPUID_VARIANT_r1pn        (0x1u)
#define SCB_CPUID_VARIANT_r2pn        (0x2u)
#define SCB_CPUID_VARIANT_r3pn        (0x3u)
#define SCB_CPUID_VARIANT_r4pn        (0x4u)
#define SCB_CPUID_VARIANT_r5pn        (0x5u)
#define SCB_CPUID_VARIANT_r6pn        (0x6u)
#define SCB_CPUID_VARIANT_r7pn        (0x7u)
#define SCB_CPUID_VARIANT_r8pn        (0x8u)
#define SCB_CPUID_VARIANT_r9pn        (0x9u)
#define SCB_CPUID_VARIANT_r10pn       (0xAu)
#define SCB_CPUID_VARIANT_r11pn       (0xBu)
#define SCB_CPUID_VARIANT_r12pn       (0xCu)
#define SCB_CPUID_VARIANT_r13pn       (0xDu)
#define SCB_CPUID_VARIANT_r14pn       (0xEu)
#define SCB_CPUID_VARIANT_r15pn       (0xFu)
/*----------*/

/*----------*/
#define SCB_CPUID_R_IMPLEMENTER_MASK    (0xFF000000u)
#define SCB_CPUID_R_IMPLEMENTER_BIT     (24u)
#define SCB_CPUID_R_IMPLEMENTER_ARM     (0x41000000u)

#define SCB_CPUID_IMPLEMENTER_MASK    (0xFFu)
#define SCB_CPUID_IMPLEMENTER_ARM     (0x41u)
/*----------*/



/********************************************************************************************/
/************************************* 4 INTCTLR ***********************************************/
/********************************************************************************************/

#define SCB_ICSR            (((ICSR_TypeDef*)(SCB_BASE+SCB_ICSR_OFFSET )))
#define SCB_ICSR_R          (*((volatile uint32_t *)(SCB_BASE+SCB_ICSR_OFFSET)))

/*----------*/
#define SCB_ICSR_R_VECTACTIVE_MASK       (0x000000FFu)
#define SCB_ICSR_R_VECTACTIVE_BIT        (0u)
#define SCB_ICSR_R_VECTACTIVE_STACK      (0x00000000u)
#define SCB_ICSR_R_VECTACTIVE_RESET      (0x00000001u)
#define SCB_ICSR_R_VECTACTIVE_NMI        (0x00000002u)
#define SCB_ICSR_R_VECTACTIVE_HARDFAULT  (0x00000003u)
#define SCB_ICSR_R_VECTACTIVE_MEMMANAGE  (0x00000004u)
#define SCB_ICSR_R_VECTACTIVE_BUSFAULT   (0x00000005u)
#define SCB_ICSR_R_VECTACTIVE_USAGEFAULT (0x00000006u)
#define SCB_ICSR_R_VECTACTIVE_RES7       (0x00000007u)
#define SCB_ICSR_R_VECTACTIVE_RES8       (0x00000008u)
#define SCB_ICSR_R_VECTACTIVE_RES9       (0x00000009u)
#define SCB_ICSR_R_VECTACTIVE_RES10      (0x0000000Au)
#define SCB_ICSR_R_VECTACTIVE_SVCALL     (0x0000000Bu)
#define SCB_ICSR_R_VECTACTIVE_DEBUGMON   (0x0000000Cu)
#define SCB_ICSR_R_VECTACTIVE_RES13      (0x0000000Du)
#define SCB_ICSR_R_VECTACTIVE_PENDSV     (0x0000000Eu)
#define SCB_ICSR_R_VECTACTIVE_SYSTICK    (0x0000000Fu)
#define SCB_ICSR_R_VECTACTIVE_GPIOA      (0x00000010u)
#define SCB_ICSR_R_VECTACTIVE_GPIOB      (0x00000011u)
#define SCB_ICSR_R_VECTACTIVE_GPIOC      (0x00000012u)
#define SCB_ICSR_R_VECTACTIVE_GPIOD      (0x00000013u)
#define SCB_ICSR_R_VECTACTIVE_GPIOE      (0x00000014u)
#define SCB_ICSR_R_VECTACTIVE_UART0      (0x00000015u)
#define SCB_ICSR_R_VECTACTIVE_UART1      (0x00000016u)
#define SCB_ICSR_R_VECTACTIVE_SSI0       (0x00000017u)
#define SCB_ICSR_R_VECTACTIVE_I2C0       (0x00000018u)
#define SCB_ICSR_R_VECTACTIVE_PWM0FAULT  (0x00000019u)
#define SCB_ICSR_R_VECTACTIVE_PWM0GEN0   (0x0000001Au)
#define SCB_ICSR_R_VECTACTIVE_PWM0GEN1   (0x0000001Bu)
#define SCB_ICSR_R_VECTACTIVE_PWM0GEN2   (0x0000001Cu)
#define SCB_ICSR_R_VECTACTIVE_QEI0       (0x0000001Du)
#define SCB_ICSR_R_VECTACTIVE_ADC0SEQ0   (0x0000001Eu)
#define SCB_ICSR_R_VECTACTIVE_ADC0SEQ1   (0x0000001Fu)
#define SCB_ICSR_R_VECTACTIVE_ADC0SEQ2   (0x00000020u)
#define SCB_ICSR_R_VECTACTIVE_ADC0SEQ3   (0x00000021u)
#define SCB_ICSR_R_VECTACTIVE_WDT01      (0x00000022u)
#define SCB_ICSR_R_VECTACTIVE_TIMER0A    (0x00000023u)
#define SCB_ICSR_R_VECTACTIVE_TIMER0B    (0x00000024u)
#define SCB_ICSR_R_VECTACTIVE_TIMER1A    (0x00000025u)
#define SCB_ICSR_R_VECTACTIVE_TIMER1B    (0x00000026u)
#define SCB_ICSR_R_VECTACTIVE_TIMER2A    (0x00000027u)
#define SCB_ICSR_R_VECTACTIVE_TIMER2B    (0x00000028u)
#define SCB_ICSR_R_VECTACTIVE_ACOMP0     (0x00000029u)
#define SCB_ICSR_R_VECTACTIVE_ACOMP1     (0x0000002Au)
#define SCB_ICSR_R_VECTACTIVE_RES43      (0x0000002Bu)
#define SCB_ICSR_R_VECTACTIVE_SYSCTL     (0x0000002Cu)
#define SCB_ICSR_R_VECTACTIVE_FLASH      (0x0000002Du)
#define SCB_ICSR_R_VECTACTIVE_GPIOF      (0x0000002Eu)
#define SCB_ICSR_R_VECTACTIVE_RES47      (0x0000002Fu)
#define SCB_ICSR_R_VECTACTIVE_RES48      (0x00000030u)
#define SCB_ICSR_R_VECTACTIVE_UART2      (0x00000031u)
#define SCB_ICSR_R_VECTACTIVE_SSI1       (0x00000032u)
#define SCB_ICSR_R_VECTACTIVE_TIMER3A    (0x00000033u)
#define SCB_ICSR_R_VECTACTIVE_TIMER3B    (0x00000034u)
#define SCB_ICSR_R_VECTACTIVE_I2C1       (0x00000035u)
#define SCB_ICSR_R_VECTACTIVE_QEI1       (0x00000036u)
#define SCB_ICSR_R_VECTACTIVE_CAN0       (0x00000037u)
#define SCB_ICSR_R_VECTACTIVE_CAN1       (0x00000038u)
#define SCB_ICSR_R_VECTACTIVE_RES57      (0x00000039u)
#define SCB_ICSR_R_VECTACTIVE_RES58      (0x0000003Au)
#define SCB_ICSR_R_VECTACTIVE_HIB        (0x0000003Bu)
#define SCB_ICSR_R_VECTACTIVE_USB        (0x0000003Cu)
#define SCB_ICSR_R_VECTACTIVE_PWM0GEN3   (0x0000003Du)
#define SCB_ICSR_R_VECTACTIVE_UDMASOFT   (0x0000003Eu)
#define SCB_ICSR_R_VECTACTIVE_UDMAERROR  (0x0000003Fu)
#define SCB_ICSR_R_VECTACTIVE_ADC1SEQ0   (0x00000040u)
#define SCB_ICSR_R_VECTACTIVE_ADC1SEQ1   (0x00000041u)
#define SCB_ICSR_R_VECTACTIVE_ADC1SEQ2   (0x00000042u)
#define SCB_ICSR_R_VECTACTIVE_ADC1SEQ3   (0x00000043u)
#define SCB_ICSR_R_VECTACTIVE_RES68      (0x00000044u)
#define SCB_ICSR_R_VECTACTIVE_RES69      (0x00000045u)
#define SCB_ICSR_R_VECTACTIVE_RES70      (0x00000046u)
#define SCB_ICSR_R_VECTACTIVE_RES71      (0x00000047u)
#define SCB_ICSR_R_VECTACTIVE_RES72      (0x00000048u)
#define SCB_ICSR_R_VECTACTIVE_SSI2       (0x00000049u)
#define SCB_ICSR_R_VECTACTIVE_SSI3       (0x0000004Au)
#define SCB_ICSR_R_VECTACTIVE_UART3      (0x0000004Bu)
#define SCB_ICSR_R_VECTACTIVE_UART4      (0x0000004Cu)
#define SCB_ICSR_R_VECTACTIVE_UART5      (0x0000004Du)
#define SCB_ICSR_R_VECTACTIVE_UART6      (0x0000004Eu)
#define SCB_ICSR_R_VECTACTIVE_UART7      (0x0000004Fu)
#define SCB_ICSR_R_VECTACTIVE_RES80      (0x00000050u)
#define SCB_ICSR_R_VECTACTIVE_RES81      (0x00000051u)
#define SCB_ICSR_R_VECTACTIVE_RES82      (0x00000052u)
#define SCB_ICSR_R_VECTACTIVE_RES83      (0x00000053u)
#define SCB_ICSR_R_VECTACTIVE_I2C2       (0x00000054u)
#define SCB_ICSR_R_VECTACTIVE_I2C3       (0x00000055u)
#define SCB_ICSR_R_VECTACTIVE_TIMER4A    (0x00000056u)
#define SCB_ICSR_R_VECTACTIVE_TIMER4B    (0x00000057u)
#define SCB_ICSR_R_VECTACTIVE_RES88      (0x00000058u)
#define SCB_ICSR_R_VECTACTIVE_RES89      (0x00000059u)
#define SCB_ICSR_R_VECTACTIVE_RES90      (0x0000005Au)
#define SCB_ICSR_R_VECTACTIVE_RES91      (0x0000005Bu)
#define SCB_ICSR_R_VECTACTIVE_RES92      (0x0000005Cu)
#define SCB_ICSR_R_VECTACTIVE_RES93      (0x0000005Du)
#define SCB_ICSR_R_VECTACTIVE_RES94      (0x0000005Eu)
#define SCB_ICSR_R_VECTACTIVE_RES95      (0x0000005Fu)
#define SCB_ICSR_R_VECTACTIVE_RES96      (0x00000060u)
#define SCB_ICSR_R_VECTACTIVE_RES97      (0x00000061u)
#define SCB_ICSR_R_VECTACTIVE_RES98      (0x00000062u)
#define SCB_ICSR_R_VECTACTIVE_RES99      (0x00000063u)
#define SCB_ICSR_R_VECTACTIVE_RES100     (0x00000064u)
#define SCB_ICSR_R_VECTACTIVE_RES101     (0x00000065u)
#define SCB_ICSR_R_VECTACTIVE_RES102     (0x00000066u)
#define SCB_ICSR_R_VECTACTIVE_RES103     (0x00000067u)
#define SCB_ICSR_R_VECTACTIVE_RES104     (0x00000068u)
#define SCB_ICSR_R_VECTACTIVE_RES105     (0x00000069u)
#define SCB_ICSR_R_VECTACTIVE_RES106     (0x0000006Au)
#define SCB_ICSR_R_VECTACTIVE_RES107     (0x0000006Bu)
#define SCB_ICSR_R_VECTACTIVE_TIMER5A    (0x0000006Cu)
#define SCB_ICSR_R_VECTACTIVE_TIMER5B    (0x0000006Du)
#define SCB_ICSR_R_VECTACTIVE_WTIMER0A   (0x0000006Eu)
#define SCB_ICSR_R_VECTACTIVE_WTIMER0B   (0x0000006Fu)
#define SCB_ICSR_R_VECTACTIVE_WTIMER1A   (0x00000070u)
#define SCB_ICSR_R_VECTACTIVE_WTIMER1B   (0x00000071u)
#define SCB_ICSR_R_VECTACTIVE_WTIMER2A   (0x00000072u)
#define SCB_ICSR_R_VECTACTIVE_WTIMER2B   (0x00000073u)
#define SCB_ICSR_R_VECTACTIVE_WTIMER3A   (0x00000074u)
#define SCB_ICSR_R_VECTACTIVE_WTIMER3B   (0x00000075u)
#define SCB_ICSR_R_VECTACTIVE_WTIMER4A   (0x00000076u)
#define SCB_ICSR_R_VECTACTIVE_WTIMER4B   (0x00000077u)
#define SCB_ICSR_R_VECTACTIVE_WTIMER5A   (0x00000078u)
#define SCB_ICSR_R_VECTACTIVE_WTIMER5B   (0x00000079u)
#define SCB_ICSR_R_VECTACTIVE_SYSEXC     (0x0000007Au)
#define SCB_ICSR_R_VECTACTIVE_RES123     (0x0000007Bu)
#define SCB_ICSR_R_VECTACTIVE_RES124     (0x0000007Cu)
#define SCB_ICSR_R_VECTACTIVE_RES125     (0x0000007Du)
#define SCB_ICSR_R_VECTACTIVE_RES126     (0x0000007Eu)
#define SCB_ICSR_R_VECTACTIVE_RES127     (0x0000007Fu)
#define SCB_ICSR_R_VECTACTIVE_RES128     (0x00000080u)
#define SCB_ICSR_R_VECTACTIVE_RES129     (0x00000081u)
#define SCB_ICSR_R_VECTACTIVE_RES130     (0x00000082u)
#define SCB_ICSR_R_VECTACTIVE_RES131     (0x00000083u)
#define SCB_ICSR_R_VECTACTIVE_RES132     (0x00000084u)
#define SCB_ICSR_R_VECTACTIVE_RES133     (0x00000085u)
#define SCB_ICSR_R_VECTACTIVE_RES134     (0x00000086u)
#define SCB_ICSR_R_VECTACTIVE_RES135     (0x00000087u)
#define SCB_ICSR_R_VECTACTIVE_RES136     (0x00000088u)
#define SCB_ICSR_R_VECTACTIVE_RES137     (0x00000089u)
#define SCB_ICSR_R_VECTACTIVE_RES138     (0x0000008Au)
#define SCB_ICSR_R_VECTACTIVE_RES139     (0x0000008Bu)
#define SCB_ICSR_R_VECTACTIVE_RES140     (0x0000008Cu)
#define SCB_ICSR_R_VECTACTIVE_RES141     (0x0000008Du)
#define SCB_ICSR_R_VECTACTIVE_RES142     (0x0000008Eu)
#define SCB_ICSR_R_VECTACTIVE_RES143     (0x0000008Fu)
#define SCB_ICSR_R_VECTACTIVE_RES144     (0x00000090u)
#define SCB_ICSR_R_VECTACTIVE_RES145     (0x00000091u)
#define SCB_ICSR_R_VECTACTIVE_RES146     (0x00000092u)
#define SCB_ICSR_R_VECTACTIVE_RES147     (0x00000093u)
#define SCB_ICSR_R_VECTACTIVE_RES148     (0x00000094u)
#define SCB_ICSR_R_VECTACTIVE_RES149     (0x00000095u)
#define SCB_ICSR_R_VECTACTIVE_PWM1GEN0   (0x00000096u)
#define SCB_ICSR_R_VECTACTIVE_PWM1GEN1   (0x00000097u)
#define SCB_ICSR_R_VECTACTIVE_PWM1GEN2   (0x00000098u)
#define SCB_ICSR_R_VECTACTIVE_PWM1GEN3   (0x00000099u)
#define SCB_ICSR_R_VECTACTIVE_PWM1FAULT  (0x0000009Au)

#define SCB_ICSR_VECTACTIVE_MASK       (0x000000FFu)
#define SCB_ICSR_VECTACTIVE_STACK      (0x00000000u)
#define SCB_ICSR_VECTACTIVE_RESET      (0x00000001u)
#define SCB_ICSR_VECTACTIVE_NMI        (0x00000002u)
#define SCB_ICSR_VECTACTIVE_HARDFAULT  (0x00000003u)
#define SCB_ICSR_VECTACTIVE_MEMMANAGE  (0x00000004u)
#define SCB_ICSR_VECTACTIVE_BUSFAULT   (0x00000005u)
#define SCB_ICSR_VECTACTIVE_USAGEFAULT (0x00000006u)
#define SCB_ICSR_VECTACTIVE_RES7       (0x00000007u)
#define SCB_ICSR_VECTACTIVE_RES8       (0x00000008u)
#define SCB_ICSR_VECTACTIVE_RES9       (0x00000009u)
#define SCB_ICSR_VECTACTIVE_RES10      (0x0000000Au)
#define SCB_ICSR_VECTACTIVE_SVCALL     (0x0000000Bu)
#define SCB_ICSR_VECTACTIVE_DEBUGMON   (0x0000000Cu)
#define SCB_ICSR_VECTACTIVE_RES13      (0x0000000Du)
#define SCB_ICSR_VECTACTIVE_PENDSV     (0x0000000Eu)
#define SCB_ICSR_VECTACTIVE_SYSTICK    (0x0000000Fu)
#define SCB_ICSR_VECTACTIVE_GPIOA      (0x00000010u)
#define SCB_ICSR_VECTACTIVE_GPIOB      (0x00000011u)
#define SCB_ICSR_VECTACTIVE_GPIOC      (0x00000012u)
#define SCB_ICSR_VECTACTIVE_GPIOD      (0x00000013u)
#define SCB_ICSR_VECTACTIVE_GPIOE      (0x00000014u)
#define SCB_ICSR_VECTACTIVE_UART0      (0x00000015u)
#define SCB_ICSR_VECTACTIVE_UART1      (0x00000016u)
#define SCB_ICSR_VECTACTIVE_SSI0       (0x00000017u)
#define SCB_ICSR_VECTACTIVE_I2C0       (0x00000018u)
#define SCB_ICSR_VECTACTIVE_PWM0FAULT  (0x00000019u)
#define SCB_ICSR_VECTACTIVE_PWM0GEN0   (0x0000001Au)
#define SCB_ICSR_VECTACTIVE_PWM0GEN1   (0x0000001Bu)
#define SCB_ICSR_VECTACTIVE_PWM0GEN2   (0x0000001Cu)
#define SCB_ICSR_VECTACTIVE_QEI0       (0x0000001Du)
#define SCB_ICSR_VECTACTIVE_ADC0SEQ0   (0x0000001Eu)
#define SCB_ICSR_VECTACTIVE_ADC0SEQ1   (0x0000001Fu)
#define SCB_ICSR_VECTACTIVE_ADC0SEQ2   (0x00000020u)
#define SCB_ICSR_VECTACTIVE_ADC0SEQ3   (0x00000021u)
#define SCB_ICSR_VECTACTIVE_WDT01      (0x00000022u)
#define SCB_ICSR_VECTACTIVE_TIMER0A    (0x00000023u)
#define SCB_ICSR_VECTACTIVE_TIMER0B    (0x00000024u)
#define SCB_ICSR_VECTACTIVE_TIMER1A    (0x00000025u)
#define SCB_ICSR_VECTACTIVE_TIMER1B    (0x00000026u)
#define SCB_ICSR_VECTACTIVE_TIMER2A    (0x00000027u)
#define SCB_ICSR_VECTACTIVE_TIMER2B    (0x00000028u)
#define SCB_ICSR_VECTACTIVE_ACOMP0     (0x00000029u)
#define SCB_ICSR_VECTACTIVE_ACOMP1     (0x0000002Au)
#define SCB_ICSR_VECTACTIVE_RES43      (0x0000002Bu)
#define SCB_ICSR_VECTACTIVE_SYSCTL     (0x0000002Cu)
#define SCB_ICSR_VECTACTIVE_FLASH      (0x0000002Du)
#define SCB_ICSR_VECTACTIVE_GPIOF      (0x0000002Eu)
#define SCB_ICSR_VECTACTIVE_RES47      (0x0000002Fu)
#define SCB_ICSR_VECTACTIVE_RES48      (0x00000030u)
#define SCB_ICSR_VECTACTIVE_UART2      (0x00000031u)
#define SCB_ICSR_VECTACTIVE_SSI1       (0x00000032u)
#define SCB_ICSR_VECTACTIVE_TIMER3A    (0x00000033u)
#define SCB_ICSR_VECTACTIVE_TIMER3B    (0x00000034u)
#define SCB_ICSR_VECTACTIVE_I2C1       (0x00000035u)
#define SCB_ICSR_VECTACTIVE_QEI1       (0x00000036u)
#define SCB_ICSR_VECTACTIVE_CAN0       (0x00000037u)
#define SCB_ICSR_VECTACTIVE_CAN1       (0x00000038u)
#define SCB_ICSR_VECTACTIVE_RES57      (0x00000039u)
#define SCB_ICSR_VECTACTIVE_RES58      (0x0000003Au)
#define SCB_ICSR_VECTACTIVE_HIB        (0x0000003Bu)
#define SCB_ICSR_VECTACTIVE_USB        (0x0000003Cu)
#define SCB_ICSR_VECTACTIVE_PWM0GEN3   (0x0000003Du)
#define SCB_ICSR_VECTACTIVE_UDMASOFT   (0x0000003Eu)
#define SCB_ICSR_VECTACTIVE_UDMAERROR  (0x0000003Fu)
#define SCB_ICSR_VECTACTIVE_ADC1SEQ0   (0x00000040u)
#define SCB_ICSR_VECTACTIVE_ADC1SEQ1   (0x00000041u)
#define SCB_ICSR_VECTACTIVE_ADC1SEQ2   (0x00000042u)
#define SCB_ICSR_VECTACTIVE_ADC1SEQ3   (0x00000043u)
#define SCB_ICSR_VECTACTIVE_RES68      (0x00000044u)
#define SCB_ICSR_VECTACTIVE_RES69      (0x00000045u)
#define SCB_ICSR_VECTACTIVE_RES70      (0x00000046u)
#define SCB_ICSR_VECTACTIVE_RES71      (0x00000047u)
#define SCB_ICSR_VECTACTIVE_RES72      (0x00000048u)
#define SCB_ICSR_VECTACTIVE_SSI2       (0x00000049u)
#define SCB_ICSR_VECTACTIVE_SSI3       (0x0000004Au)
#define SCB_ICSR_VECTACTIVE_UART3      (0x0000004Bu)
#define SCB_ICSR_VECTACTIVE_UART4      (0x0000004Cu)
#define SCB_ICSR_VECTACTIVE_UART5      (0x0000004Du)
#define SCB_ICSR_VECTACTIVE_UART6      (0x0000004Eu)
#define SCB_ICSR_VECTACTIVE_UART7      (0x0000004Fu)
#define SCB_ICSR_VECTACTIVE_RES80      (0x00000050u)
#define SCB_ICSR_VECTACTIVE_RES81      (0x00000051u)
#define SCB_ICSR_VECTACTIVE_RES82      (0x00000052u)
#define SCB_ICSR_VECTACTIVE_RES83      (0x00000053u)
#define SCB_ICSR_VECTACTIVE_I2C2       (0x00000054u)
#define SCB_ICSR_VECTACTIVE_I2C3       (0x00000055u)
#define SCB_ICSR_VECTACTIVE_TIMER4A    (0x00000056u)
#define SCB_ICSR_VECTACTIVE_TIMER4B    (0x00000057u)
#define SCB_ICSR_VECTACTIVE_RES88      (0x00000058u)
#define SCB_ICSR_VECTACTIVE_RES89      (0x00000059u)
#define SCB_ICSR_VECTACTIVE_RES90      (0x0000005Au)
#define SCB_ICSR_VECTACTIVE_RES91      (0x0000005Bu)
#define SCB_ICSR_VECTACTIVE_RES92      (0x0000005Cu)
#define SCB_ICSR_VECTACTIVE_RES93      (0x0000005Du)
#define SCB_ICSR_VECTACTIVE_RES94      (0x0000005Eu)
#define SCB_ICSR_VECTACTIVE_RES95      (0x0000005Fu)
#define SCB_ICSR_VECTACTIVE_RES96      (0x00000060u)
#define SCB_ICSR_VECTACTIVE_RES97      (0x00000061u)
#define SCB_ICSR_VECTACTIVE_RES98      (0x00000062u)
#define SCB_ICSR_VECTACTIVE_RES99      (0x00000063u)
#define SCB_ICSR_VECTACTIVE_RES100     (0x00000064u)
#define SCB_ICSR_VECTACTIVE_RES101     (0x00000065u)
#define SCB_ICSR_VECTACTIVE_RES102     (0x00000066u)
#define SCB_ICSR_VECTACTIVE_RES103     (0x00000067u)
#define SCB_ICSR_VECTACTIVE_RES104     (0x00000068u)
#define SCB_ICSR_VECTACTIVE_RES105     (0x00000069u)
#define SCB_ICSR_VECTACTIVE_RES106     (0x0000006Au)
#define SCB_ICSR_VECTACTIVE_RES107     (0x0000006Bu)
#define SCB_ICSR_VECTACTIVE_TIMER5A    (0x0000006Cu)
#define SCB_ICSR_VECTACTIVE_TIMER5B    (0x0000006Du)
#define SCB_ICSR_VECTACTIVE_WTIMER0A   (0x0000006Eu)
#define SCB_ICSR_VECTACTIVE_WTIMER0B   (0x0000006Fu)
#define SCB_ICSR_VECTACTIVE_WTIMER1A   (0x00000070u)
#define SCB_ICSR_VECTACTIVE_WTIMER1B   (0x00000071u)
#define SCB_ICSR_VECTACTIVE_WTIMER2A   (0x00000072u)
#define SCB_ICSR_VECTACTIVE_WTIMER2B   (0x00000073u)
#define SCB_ICSR_VECTACTIVE_WTIMER3A   (0x00000074u)
#define SCB_ICSR_VECTACTIVE_WTIMER3B   (0x00000075u)
#define SCB_ICSR_VECTACTIVE_WTIMER4A   (0x00000076u)
#define SCB_ICSR_VECTACTIVE_WTIMER4B   (0x00000077u)
#define SCB_ICSR_VECTACTIVE_WTIMER5A   (0x00000078u)
#define SCB_ICSR_VECTACTIVE_WTIMER5B   (0x00000079u)
#define SCB_ICSR_VECTACTIVE_SYSEXC     (0x0000007Au)
#define SCB_ICSR_VECTACTIVE_RES123     (0x0000007Bu)
#define SCB_ICSR_VECTACTIVE_RES124     (0x0000007Cu)
#define SCB_ICSR_VECTACTIVE_RES125     (0x0000007Du)
#define SCB_ICSR_VECTACTIVE_RES126     (0x0000007Eu)
#define SCB_ICSR_VECTACTIVE_RES127     (0x0000007Fu)
#define SCB_ICSR_VECTACTIVE_RES128     (0x00000080u)
#define SCB_ICSR_VECTACTIVE_RES129     (0x00000081u)
#define SCB_ICSR_VECTACTIVE_RES130     (0x00000082u)
#define SCB_ICSR_VECTACTIVE_RES131     (0x00000083u)
#define SCB_ICSR_VECTACTIVE_RES132     (0x00000084u)
#define SCB_ICSR_VECTACTIVE_RES133     (0x00000085u)
#define SCB_ICSR_VECTACTIVE_RES134     (0x00000086u)
#define SCB_ICSR_VECTACTIVE_RES135     (0x00000087u)
#define SCB_ICSR_VECTACTIVE_RES136     (0x00000088u)
#define SCB_ICSR_VECTACTIVE_RES137     (0x00000089u)
#define SCB_ICSR_VECTACTIVE_RES138     (0x0000008Au)
#define SCB_ICSR_VECTACTIVE_RES139     (0x0000008Bu)
#define SCB_ICSR_VECTACTIVE_RES140     (0x0000008Cu)
#define SCB_ICSR_VECTACTIVE_RES141     (0x0000008Du)
#define SCB_ICSR_VECTACTIVE_RES142     (0x0000008Eu)
#define SCB_ICSR_VECTACTIVE_RES143     (0x0000008Fu)
#define SCB_ICSR_VECTACTIVE_RES144     (0x00000090u)
#define SCB_ICSR_VECTACTIVE_RES145     (0x00000091u)
#define SCB_ICSR_VECTACTIVE_RES146     (0x00000092u)
#define SCB_ICSR_VECTACTIVE_RES147     (0x00000093u)
#define SCB_ICSR_VECTACTIVE_RES148     (0x00000094u)
#define SCB_ICSR_VECTACTIVE_RES149     (0x00000095u)
#define SCB_ICSR_VECTACTIVE_PWM1GEN0   (0x00000096u)
#define SCB_ICSR_VECTACTIVE_PWM1GEN1   (0x00000097u)
#define SCB_ICSR_VECTACTIVE_PWM1GEN2   (0x00000098u)
#define SCB_ICSR_VECTACTIVE_PWM1GEN3   (0x00000099u)
#define SCB_ICSR_VECTACTIVE_PWM1FAULT  (0x0000009Au)
/*----------*/

/*----------*/
#define SCB_ICSR_R_RETTOBASE_MASK      (0x00000800u)
#define SCB_ICSR_R_RETTOBASE_BIT       (11u)
#define SCB_ICSR_R_RETTOBASE_ISR       (0x00000800u)
#define SCB_ICSR_R_RETTOBASE_NOISR     (0x00000000u)

#define SCB_ICSR_RETTOBASE_MASK      (0x00000001u)
#define SCB_ICSR_RETTOBASE_ISR       (0x00000001u)
#define SCB_ICSR_RETTOBASE_NOISR     (0x00000000u)
/*----------*/

/*----------*/

#define SCB_ICSR_R_VECTPENDING_MASK       (0x000FF000u)
#define SCB_ICSR_R_VECTPENDING_BIT        (12u)
#define SCB_ICSR_R_VECTPENDING_STACK      (0x00000000u)
#define SCB_ICSR_R_VECTPENDING_RESET      (0x00001000u)
#define SCB_ICSR_R_VECTPENDING_NMI        (0x00002000u)
#define SCB_ICSR_R_VECTPENDING_HARDFAULT  (0x00003000u)
#define SCB_ICSR_R_VECTPENDING_MEMMANAGE  (0x00004000u)
#define SCB_ICSR_R_VECTPENDING_BUSFAULT   (0x00005000u)
#define SCB_ICSR_R_VECTPENDING_USAGEFAULT (0x00006000u)
#define SCB_ICSR_R_VECTPENDING_RES7       (0x00007000u)
#define SCB_ICSR_R_VECTPENDING_RES8       (0x00008000u)
#define SCB_ICSR_R_VECTPENDING_RES9       (0x00009000u)
#define SCB_ICSR_R_VECTPENDING_RES10      (0x0000A000u)
#define SCB_ICSR_R_VECTPENDING_SVCALL     (0x0000B000u)
#define SCB_ICSR_R_VECTPENDING_DEBUGMON   (0x0000C000u)
#define SCB_ICSR_R_VECTPENDING_RES13      (0x0000D000u)
#define SCB_ICSR_R_VECTPENDING_PENDSV     (0x0000E000u)
#define SCB_ICSR_R_VECTPENDING_SYSTICK    (0x0000F000u)
#define SCB_ICSR_R_VECTPENDING_GPIOA      (0x00010000u)
#define SCB_ICSR_R_VECTPENDING_GPIOB      (0x00011000u)
#define SCB_ICSR_R_VECTPENDING_GPIOC      (0x00012000u)
#define SCB_ICSR_R_VECTPENDING_GPIOD      (0x13000000u)
#define SCB_ICSR_R_VECTPENDING_GPIOE      (0x00014000u)
#define SCB_ICSR_R_VECTPENDING_UART0      (0x00015000u)
#define SCB_ICSR_R_VECTPENDING_UART1      (0x00016000u)
#define SCB_ICSR_R_VECTPENDING_SSI0       (0x00017000u)
#define SCB_ICSR_R_VECTPENDING_I2C0       (0x00018000u)
#define SCB_ICSR_R_VECTPENDING_PWM0FAULT   (0x00019000u)
#define SCB_ICSR_R_VECTPENDING_PWM0GEN0    (0x0001A000u)
#define SCB_ICSR_R_VECTPENDING_PWM0GEN1    (0x0001B000u)
#define SCB_ICSR_R_VECTPENDING_PWM0GEN2    (0x0001C000u)
#define SCB_ICSR_R_VECTPENDING_QEI0       (0x0001D000u)
#define SCB_ICSR_R_VECTPENDING_ADC0SEQ0   (0x0001E000u)
#define SCB_ICSR_R_VECTPENDING_ADC0SEQ1   (0x0001F000u)
#define SCB_ICSR_R_VECTPENDING_ADC0SEQ2   (0x00020000u)
#define SCB_ICSR_R_VECTPENDING_ADC0SEQ3   (0x00021000u)
#define SCB_ICSR_R_VECTPENDING_WDT01      (0x00022000u)
#define SCB_ICSR_R_VECTPENDING_TIMER0A    (0x00023000u)
#define SCB_ICSR_R_VECTPENDING_TIMER0B    (0x00024000u)
#define SCB_ICSR_R_VECTPENDING_TIMER1A    (0x00025000u)
#define SCB_ICSR_R_VECTPENDING_TIMER1B    (0x00026000u)
#define SCB_ICSR_R_VECTPENDING_TIMER2A    (0x00027000u)
#define SCB_ICSR_R_VECTPENDING_TIMER2B    (0x00028000u)
#define SCB_ICSR_R_VECTPENDING_ACOMP0     (0x00029000u)
#define SCB_ICSR_R_VECTPENDING_ACOMP1     (0x0002A000u)
#define SCB_ICSR_R_VECTPENDING_RES43      (0x0002B000u)
#define SCB_ICSR_R_VECTPENDING_SYSCTL     (0x0002C000u)
#define SCB_ICSR_R_VECTPENDING_FLASH      (0x0002D000u)
#define SCB_ICSR_R_VECTPENDING_GPIOF      (0x0002E000u)
#define SCB_ICSR_R_VECTPENDING_RES47      (0x0002F000u)
#define SCB_ICSR_R_VECTPENDING_RES48      (0x00030000u)
#define SCB_ICSR_R_VECTPENDING_UART2      (0x00031000u)
#define SCB_ICSR_R_VECTPENDING_SSI1       (0x00032000u)
#define SCB_ICSR_R_VECTPENDING_TIMER3A    (0x00033000u)
#define SCB_ICSR_R_VECTPENDING_TIMER3B    (0x00034000u)
#define SCB_ICSR_R_VECTPENDING_I2C1       (0x00035000u)
#define SCB_ICSR_R_VECTPENDING_QEI1       (0x00036000u)
#define SCB_ICSR_R_VECTPENDING_CAN0       (0x00037000u)
#define SCB_ICSR_R_VECTPENDING_CAN1       (0x00038000u)
#define SCB_ICSR_R_VECTPENDING_RES57      (0x00039000u)
#define SCB_ICSR_R_VECTPENDING_RES58      (0x0003A000u)
#define SCB_ICSR_R_VECTPENDING_HIB        (0x0003B000u)
#define SCB_ICSR_R_VECTPENDING_USB        (0x0003C000u)
#define SCB_ICSR_R_VECTPENDING_PWM0GEN3   (0x0003D000u)
#define SCB_ICSR_R_VECTPENDING_UDMASOFT   (0x0003E000u)
#define SCB_ICSR_R_VECTPENDING_UDMAERROR  (0x0003F000u)
#define SCB_ICSR_R_VECTPENDING_ADC1SEQ0   (0x00040000u)
#define SCB_ICSR_R_VECTPENDING_ADC1SEQ1   (0x00041000u)
#define SCB_ICSR_R_VECTPENDING_ADC1SEQ2   (0x00042000u)
#define SCB_ICSR_R_VECTPENDING_ADC1SEQ3   (0x00043000u)
#define SCB_ICSR_R_VECTPENDING_RES68      (0x00044000u)
#define SCB_ICSR_R_VECTPENDING_RES69      (0x00045000u)
#define SCB_ICSR_R_VECTPENDING_RES70      (0x00046000u)
#define SCB_ICSR_R_VECTPENDING_RES71      (0x00047000u)
#define SCB_ICSR_R_VECTPENDING_RES72      (0x00048000u)
#define SCB_ICSR_R_VECTPENDING_SSI2       (0x00049000u)
#define SCB_ICSR_R_VECTPENDING_SSI3       (0x0004A000u)
#define SCB_ICSR_R_VECTPENDING_UART3      (0x0004B000u)
#define SCB_ICSR_R_VECTPENDING_UART4      (0x0004C000u)
#define SCB_ICSR_R_VECTPENDING_UART5      (0x0004D000u)
#define SCB_ICSR_R_VECTPENDING_UART6      (0x0004E000u)
#define SCB_ICSR_R_VECTPENDING_UART7      (0x0004F000u)
#define SCB_ICSR_R_VECTPENDING_RES80      (0x00050000u)
#define SCB_ICSR_R_VECTPENDING_RES81      (0x00051000u)
#define SCB_ICSR_R_VECTPENDING_RES82      (0x00052000u)
#define SCB_ICSR_R_VECTPENDING_RES83      (0x00053000u)
#define SCB_ICSR_R_VECTPENDING_I2C2       (0x00054000u)
#define SCB_ICSR_R_VECTPENDING_I2C3       (0x00055000u)
#define SCB_ICSR_R_VECTPENDING_TIMER4A    (0x00056000u)
#define SCB_ICSR_R_VECTPENDING_TIMER4B    (0x00057000u)
#define SCB_ICSR_R_VECTPENDING_RES88      (0x00058000u)
#define SCB_ICSR_R_VECTPENDING_RES89      (0x00059000u)
#define SCB_ICSR_R_VECTPENDING_RES90      (0x0005A000u)
#define SCB_ICSR_R_VECTPENDING_RES91      (0x0005B000u)
#define SCB_ICSR_R_VECTPENDING_RES92      (0x0005C000u)
#define SCB_ICSR_R_VECTPENDING_RES93      (0x0005D000u)
#define SCB_ICSR_R_VECTPENDING_RES94      (0x0005E000u)
#define SCB_ICSR_R_VECTPENDING_RES95      (0x0005F000u)
#define SCB_ICSR_R_VECTPENDING_RES96      (0x00060000u)
#define SCB_ICSR_R_VECTPENDING_RES97      (0x00061000u)
#define SCB_ICSR_R_VECTPENDING_RES98      (0x00062000u)
#define SCB_ICSR_R_VECTPENDING_RES99      (0x00063000u)
#define SCB_ICSR_R_VECTPENDING_RES100     (0x00064000u)
#define SCB_ICSR_R_VECTPENDING_RES101     (0x00065000u)
#define SCB_ICSR_R_VECTPENDING_RES102     (0x00066000u)
#define SCB_ICSR_R_VECTPENDING_RES103     (0x00067000u)
#define SCB_ICSR_R_VECTPENDING_RES104     (0x00068000u)
#define SCB_ICSR_R_VECTPENDING_RES105     (0x00069000u)
#define SCB_ICSR_R_VECTPENDING_RES106     (0x0006A000u)
#define SCB_ICSR_R_VECTPENDING_RES107     (0x0006B000u)
#define SCB_ICSR_R_VECTPENDING_TIMER5A    (0x0006C000u)
#define SCB_ICSR_R_VECTPENDING_TIMER5B    (0x0006D000u)
#define SCB_ICSR_R_VECTPENDING_WTIMER0A   (0x0006E000u)
#define SCB_ICSR_R_VECTPENDING_WTIMER0B   (0x0006F000u)
#define SCB_ICSR_R_VECTPENDING_WTIMER1A   (0x00070000u)
#define SCB_ICSR_R_VECTPENDING_WTIMER1B   (0x00071000u)
#define SCB_ICSR_R_VECTPENDING_WTIMER2A   (0x00072000u)
#define SCB_ICSR_R_VECTPENDING_WTIMER2B   (0x00073000u)
#define SCB_ICSR_R_VECTPENDING_WTIMER3A   (0x00074000u)
#define SCB_ICSR_R_VECTPENDING_WTIMER3B   (0x00075000u)
#define SCB_ICSR_R_VECTPENDING_WTIMER4A   (0x00076000u)
#define SCB_ICSR_R_VECTPENDING_WTIMER4B   (0x00077000u)
#define SCB_ICSR_R_VECTPENDING_WTIMER5A   (0x00078000u)
#define SCB_ICSR_R_VECTPENDING_WTIMER5B   (0x00079000u)
#define SCB_ICSR_R_VECTPENDING_SYSEXC     (0x0007A000u)
#define SCB_ICSR_R_VECTPENDING_RES123     (0x0007B000u)
#define SCB_ICSR_R_VECTPENDING_RES124     (0x0007C000u)
#define SCB_ICSR_R_VECTPENDING_RES125     (0x0007D000u)
#define SCB_ICSR_R_VECTPENDING_RES126     (0x0007E000u)
#define SCB_ICSR_R_VECTPENDING_RES127     (0x0007F000u)
#define SCB_ICSR_R_VECTPENDING_RES128     (0x00080000u)
#define SCB_ICSR_R_VECTPENDING_RES129     (0x00081000u)
#define SCB_ICSR_R_VECTPENDING_RES130     (0x00082000u)
#define SCB_ICSR_R_VECTPENDING_RES131     (0x00083000u)
#define SCB_ICSR_R_VECTPENDING_RES132     (0x00084000u)
#define SCB_ICSR_R_VECTPENDING_RES133     (0x00085000u)
#define SCB_ICSR_R_VECTPENDING_RES134     (0x00086000u)
#define SCB_ICSR_R_VECTPENDING_RES135     (0x00087000u)
#define SCB_ICSR_R_VECTPENDING_RES136     (0x00088000u)
#define SCB_ICSR_R_VECTPENDING_RES137     (0x00089000u)
#define SCB_ICSR_R_VECTPENDING_RES138     (0x0008A000u)
#define SCB_ICSR_R_VECTPENDING_RES139     (0x0008B000u)
#define SCB_ICSR_R_VECTPENDING_RES140     (0x0008C000u)
#define SCB_ICSR_R_VECTPENDING_RES141     (0x0008D000u)
#define SCB_ICSR_R_VECTPENDING_RES142     (0x0008E000u)
#define SCB_ICSR_R_VECTPENDING_RES143     (0x0008F000u)
#define SCB_ICSR_R_VECTPENDING_RES144     (0x00090000u)
#define SCB_ICSR_R_VECTPENDING_RES145     (0x00091000u)
#define SCB_ICSR_R_VECTPENDING_RES146     (0x00092000u)
#define SCB_ICSR_R_VECTPENDING_RES147     (0x00093000u)
#define SCB_ICSR_R_VECTPENDING_RES148     (0x00094000u)
#define SCB_ICSR_R_VECTPENDING_RES149     (0x00095000u)
#define SCB_ICSR_R_VECTPENDING_PWM1GEN0   (0x00096000u)
#define SCB_ICSR_R_VECTPENDING_PWM1GEN1   (0x00097000u)
#define SCB_ICSR_R_VECTPENDING_PWM1GEN2   (0x00098000u)
#define SCB_ICSR_R_VECTPENDING_PWM1GEN3   (0x00099000u)
#define SCB_ICSR_R_VECTPENDING_PWM1FAULT  (0x0009A000u)

#define SCB_ICSR_VECTPENDING_MASK       (0x000000FFu)
#define SCB_ICSR_VECTPENDING_STACK      (0x00000000u)
#define SCB_ICSR_VECTPENDING_RESET      (0x00000001u)
#define SCB_ICSR_VECTPENDING_NMI        (0x00000002u)
#define SCB_ICSR_VECTPENDING_HARDFAULT  (0x00000003u)
#define SCB_ICSR_VECTPENDING_MEMMANAGE  (0x00000004u)
#define SCB_ICSR_VECTPENDING_BUSFAULT   (0x00000005u)
#define SCB_ICSR_VECTPENDING_USAGEFAULT (0x00000006u)
#define SCB_ICSR_VECTPENDING_RES7       (0x00000007u)
#define SCB_ICSR_VECTPENDING_RES8       (0x00000008u)
#define SCB_ICSR_VECTPENDING_RES9       (0x00000009u)
#define SCB_ICSR_VECTPENDING_RES10      (0x0000000Au)
#define SCB_ICSR_VECTPENDING_SVCALL     (0x0000000Bu)
#define SCB_ICSR_VECTPENDING_DEBUGMON   (0x0000000Cu)
#define SCB_ICSR_VECTPENDING_RES13      (0x0000000Du)
#define SCB_ICSR_VECTPENDING_PENDSV     (0x0000000Eu)
#define SCB_ICSR_VECTPENDING_SYSTICK    (0x0000000Fu)
#define SCB_ICSR_VECTPENDING_GPIOA      (0x00000010u)
#define SCB_ICSR_VECTPENDING_GPIOB      (0x00000011u)
#define SCB_ICSR_VECTPENDING_GPIOC      (0x00000012u)
#define SCB_ICSR_VECTPENDING_GPIOD      (0x00000013u)
#define SCB_ICSR_VECTPENDING_GPIOE      (0x00000014u)
#define SCB_ICSR_VECTPENDING_UART0      (0x00000015u)
#define SCB_ICSR_VECTPENDING_UART1      (0x00000016u)
#define SCB_ICSR_VECTPENDING_SSI0       (0x00000017u)
#define SCB_ICSR_VECTPENDING_I2C0       (0x00000018u)
#define SCB_ICSR_VECTPENDING_PWM0FAULT   (0x00000019u)
#define SCB_ICSR_VECTPENDING_PWM0GEN0    (0x0000001Au)
#define SCB_ICSR_VECTPENDING_PWM0GEN1    (0x0000001Bu)
#define SCB_ICSR_VECTPENDING_PWM0GEN2    (0x0000001Cu)
#define SCB_ICSR_VECTPENDING_QEI0       (0x0000001Du)
#define SCB_ICSR_VECTPENDING_ADC0SEQ0   (0x0000001Eu)
#define SCB_ICSR_VECTPENDING_ADC0SEQ1   (0x0000001Fu)
#define SCB_ICSR_VECTPENDING_ADC0SEQ2   (0x00000020u)
#define SCB_ICSR_VECTPENDING_ADC0SEQ3   (0x00000021u)
#define SCB_ICSR_VECTPENDING_WDT01      (0x00000022u)
#define SCB_ICSR_VECTPENDING_TIMER0A    (0x00000023u)
#define SCB_ICSR_VECTPENDING_TIMER0B    (0x00000024u)
#define SCB_ICSR_VECTPENDING_TIMER1A    (0x00000025u)
#define SCB_ICSR_VECTPENDING_TIMER1B    (0x00000026u)
#define SCB_ICSR_VECTPENDING_TIMER2A    (0x00000027u)
#define SCB_ICSR_VECTPENDING_TIMER2B    (0x00000028u)
#define SCB_ICSR_VECTPENDING_ACOMP0     (0x00000029u)
#define SCB_ICSR_VECTPENDING_ACOMP1     (0x0000002Au)
#define SCB_ICSR_VECTPENDING_RES43      (0x0000002Bu)
#define SCB_ICSR_VECTPENDING_SYSCTL     (0x0000002Cu)
#define SCB_ICSR_VECTPENDING_FLASH      (0x0000002Du)
#define SCB_ICSR_VECTPENDING_GPIOF      (0x0000002Eu)
#define SCB_ICSR_VECTPENDING_RES47      (0x0000002Fu)
#define SCB_ICSR_VECTPENDING_RES48      (0x00000030u)
#define SCB_ICSR_VECTPENDING_UART2      (0x00000031u)
#define SCB_ICSR_VECTPENDING_SSI1       (0x00000032u)
#define SCB_ICSR_VECTPENDING_TIMER3A    (0x00000033u)
#define SCB_ICSR_VECTPENDING_TIMER3B    (0x00000034u)
#define SCB_ICSR_VECTPENDING_I2C1       (0x00000035u)
#define SCB_ICSR_VECTPENDING_QEI1       (0x00000036u)
#define SCB_ICSR_VECTPENDING_CAN0       (0x00000037u)
#define SCB_ICSR_VECTPENDING_CAN1       (0x00000038u)
#define SCB_ICSR_VECTPENDING_RES57      (0x00000039u)
#define SCB_ICSR_VECTPENDING_RES58      (0x0000003Au)
#define SCB_ICSR_VECTPENDING_HIB        (0x0000003Bu)
#define SCB_ICSR_VECTPENDING_USB        (0x0000003Cu)
#define SCB_ICSR_VECTPENDING_PWM0GEN3   (0x0000003Du)
#define SCB_ICSR_VECTPENDING_UDMASOFT   (0x0000003Eu)
#define SCB_ICSR_VECTPENDING_UDMAERROR  (0x0000003Fu)
#define SCB_ICSR_VECTPENDING_ADC1SEQ0   (0x00000040u)
#define SCB_ICSR_VECTPENDING_ADC1SEQ1   (0x00000041u)
#define SCB_ICSR_VECTPENDING_ADC1SEQ2   (0x00000042u)
#define SCB_ICSR_VECTPENDING_ADC1SEQ3   (0x00000043u)
#define SCB_ICSR_VECTPENDING_RES68      (0x00000044u)
#define SCB_ICSR_VECTPENDING_RES69      (0x00000045u)
#define SCB_ICSR_VECTPENDING_RES70      (0x00000046u)
#define SCB_ICSR_VECTPENDING_RES71      (0x00000047u)
#define SCB_ICSR_VECTPENDING_RES72      (0x00000048u)
#define SCB_ICSR_VECTPENDING_SSI2       (0x00000049u)
#define SCB_ICSR_VECTPENDING_SSI3       (0x0000004Au)
#define SCB_ICSR_VECTPENDING_UART3      (0x0000004Bu)
#define SCB_ICSR_VECTPENDING_UART4      (0x0000004Cu)
#define SCB_ICSR_VECTPENDING_UART5      (0x0000004Du)
#define SCB_ICSR_VECTPENDING_UART6      (0x0000004Eu)
#define SCB_ICSR_VECTPENDING_UART7      (0x0000004Fu)
#define SCB_ICSR_VECTPENDING_RES80      (0x00000050u)
#define SCB_ICSR_VECTPENDING_RES81      (0x00000051u)
#define SCB_ICSR_VECTPENDING_RES82      (0x00000052u)
#define SCB_ICSR_VECTPENDING_RES83      (0x00000053u)
#define SCB_ICSR_VECTPENDING_I2C2       (0x00000054u)
#define SCB_ICSR_VECTPENDING_I2C3       (0x00000055u)
#define SCB_ICSR_VECTPENDING_TIMER4A    (0x00000056u)
#define SCB_ICSR_VECTPENDING_TIMER4B    (0x00000057u)
#define SCB_ICSR_VECTPENDING_RES88      (0x00000058u)
#define SCB_ICSR_VECTPENDING_RES89      (0x00000059u)
#define SCB_ICSR_VECTPENDING_RES90      (0x0000005Au)
#define SCB_ICSR_VECTPENDING_RES91      (0x0000005Bu)
#define SCB_ICSR_VECTPENDING_RES92      (0x0000005Cu)
#define SCB_ICSR_VECTPENDING_RES93      (0x0000005Du)
#define SCB_ICSR_VECTPENDING_RES94      (0x0000005Eu)
#define SCB_ICSR_VECTPENDING_RES95      (0x0000005Fu)
#define SCB_ICSR_VECTPENDING_RES96      (0x00000060u)
#define SCB_ICSR_VECTPENDING_RES97      (0x00000061u)
#define SCB_ICSR_VECTPENDING_RES98      (0x00000062u)
#define SCB_ICSR_VECTPENDING_RES99      (0x00000063u)
#define SCB_ICSR_VECTPENDING_RES100     (0x00000064u)
#define SCB_ICSR_VECTPENDING_RES101     (0x00000065u)
#define SCB_ICSR_VECTPENDING_RES102     (0x00000066u)
#define SCB_ICSR_VECTPENDING_RES103     (0x00000067u)
#define SCB_ICSR_VECTPENDING_RES104     (0x00000068u)
#define SCB_ICSR_VECTPENDING_RES105     (0x00000069u)
#define SCB_ICSR_VECTPENDING_RES106     (0x0000006Au)
#define SCB_ICSR_VECTPENDING_RES107     (0x0000006Bu)
#define SCB_ICSR_VECTPENDING_TIMER5A    (0x0000006Cu)
#define SCB_ICSR_VECTPENDING_TIMER5B    (0x0000006Du)
#define SCB_ICSR_VECTPENDING_WTIMER0A   (0x0000006Eu)
#define SCB_ICSR_VECTPENDING_WTIMER0B   (0x0000006Fu)
#define SCB_ICSR_VECTPENDING_WTIMER1A   (0x00000070u)
#define SCB_ICSR_VECTPENDING_WTIMER1B   (0x00000071u)
#define SCB_ICSR_VECTPENDING_WTIMER2A   (0x00000072u)
#define SCB_ICSR_VECTPENDING_WTIMER2B   (0x00000073u)
#define SCB_ICSR_VECTPENDING_WTIMER3A   (0x00000074u)
#define SCB_ICSR_VECTPENDING_WTIMER3B   (0x00000075u)
#define SCB_ICSR_VECTPENDING_WTIMER4A   (0x00000076u)
#define SCB_ICSR_VECTPENDING_WTIMER4B   (0x00000077u)
#define SCB_ICSR_VECTPENDING_WTIMER5A   (0x00000078u)
#define SCB_ICSR_VECTPENDING_WTIMER5B   (0x00000079u)
#define SCB_ICSR_VECTPENDING_SYSEXC     (0x0000007Au)
#define SCB_ICSR_VECTPENDING_RES123     (0x0000007Bu)
#define SCB_ICSR_VECTPENDING_RES124     (0x0000007Cu)
#define SCB_ICSR_VECTPENDING_RES125     (0x0000007Du)
#define SCB_ICSR_VECTPENDING_RES126     (0x0000007Eu)
#define SCB_ICSR_VECTPENDING_RES127     (0x0000007Fu)
#define SCB_ICSR_VECTPENDING_RES128     (0x00000080u)
#define SCB_ICSR_VECTPENDING_RES129     (0x00000081u)
#define SCB_ICSR_VECTPENDING_RES130     (0x00000082u)
#define SCB_ICSR_VECTPENDING_RES131     (0x00000083u)
#define SCB_ICSR_VECTPENDING_RES132     (0x00000084u)
#define SCB_ICSR_VECTPENDING_RES133     (0x00000085u)
#define SCB_ICSR_VECTPENDING_RES134     (0x00000086u)
#define SCB_ICSR_VECTPENDING_RES135     (0x00000087u)
#define SCB_ICSR_VECTPENDING_RES136     (0x00000088u)
#define SCB_ICSR_VECTPENDING_RES137     (0x00000089u)
#define SCB_ICSR_VECTPENDING_RES138     (0x0000008Au)
#define SCB_ICSR_VECTPENDING_RES139     (0x0000008Bu)
#define SCB_ICSR_VECTPENDING_RES140     (0x0000008Cu)
#define SCB_ICSR_VECTPENDING_RES141     (0x0000008Du)
#define SCB_ICSR_VECTPENDING_RES142     (0x0000008Eu)
#define SCB_ICSR_VECTPENDING_RES143     (0x0000008Fu)
#define SCB_ICSR_VECTPENDING_RES144     (0x00000090u)
#define SCB_ICSR_VECTPENDING_RES145     (0x00000091u)
#define SCB_ICSR_VECTPENDING_RES146     (0x00000092u)
#define SCB_ICSR_VECTPENDING_RES147     (0x00000093u)
#define SCB_ICSR_VECTPENDING_RES148     (0x00000094u)
#define SCB_ICSR_VECTPENDING_RES149     (0x00000095u)
#define SCB_ICSR_VECTPENDING_PWM1GEN0   (0x00000096u)
#define SCB_ICSR_VECTPENDING_PWM1GEN1   (0x00000097u)
#define SCB_ICSR_VECTPENDING_PWM1GEN2   (0x00000098u)
#define SCB_ICSR_VECTPENDING_PWM1GEN3   (0x00000099u)
#define SCB_ICSR_VECTPENDING_PWM1FAULT  (0x0000009Au)
/*----------*/

/*----------*/
#define SCB_ICSR_R_ISRPENDING_MASK      (0x00400000u)
#define SCB_ICSR_R_ISRPENDING_BIT       (22u)
#define SCB_ICSR_R_ISRPENDING_ISR       (0x00400000u)
#define SCB_ICSR_R_ISRPENDING_NOISR     (0x00000000u)

#define SCB_ICSR_ISRPENDING_MASK      (0x00000001u)
#define SCB_ICSR_ISRPENDING_ISR       (0x00000001u)
#define SCB_ICSR_ISRPENDING_NOISR     (0x00000000u)
/*----------*/

/*----------*/
#define SCB_ICSR_R_ISRPREEMPT_MASK      (0x00800000u)
#define SCB_ICSR_R_ISRPREEMPT_BIT       (23u)
#define SCB_ICSR_R_ISRPREEMPT_ISR       (0x00800000u)
#define SCB_ICSR_R_ISRPREEMPT_NOISR     (0x00000000u)

#define SCB_ICSR_ISRPREEMPT_MASK      (0x00000001u)
#define SCB_ICSR_ISRPREEMPT_ISR       (0x00000001u)
#define SCB_ICSR_ISRPREEMPT_NOISR     (0x00000000u)
/*----------*/

/*----------*/
#define SCB_ICSR_R_PENDSTCLR_MASK      (0x02000000u)
#define SCB_ICSR_R_PENDSTCLR_BIT       (25u)
#define SCB_ICSR_R_PENDSTCLR_REMOVE    (0x02000000u)
#define SCB_ICSR_R_PENDSTCLR_NOEFFECT  (0x00000000u)

#define SCB_ICSR_PENDSTCLR_MASK         (0x00000001u)
#define SCB_ICSR_PENDSTCLR_REMOVE       (0x00000001u)
#define SCB_ICSR_PENDSTCLR_NOEFFECT     (0x00000000u)
/*----------*/


/*----------*/
#define SCB_ICSR_R_PENDSTSET_MASK      (0x04000000u)
#define SCB_ICSR_R_PENDSTSET_BIT       (26u)
#define SCB_ICSR_R_PENDSTSET_PEND      (0x04000000u)
#define SCB_ICSR_R_PENDSTSET_NOPEND    (0x00000000u)
#define SCB_ICSR_R_PENDSTSET_SET       (0x04000000u)
#define SCB_ICSR_R_PENDSTSET_NOEFFECT  (0x00000000u)

#define SCB_ICSR_PENDSTSET_MASK      (0x00000001u)
#define SCB_ICSR_PENDSTSET_PEND      (0x00000001u)
#define SCB_ICSR_PENDSTSET_NOPEND    (0x00000000u)
#define SCB_ICSR_PENDSTSET_SET       (0x00000001u)
#define SCB_ICSR_PENDSTSET_NOEFFECT  (0x00000000u)
/*----------*/


/*----------*/
#define SCB_ICSR_R_PENDSVCLR_MASK      (0x08000000u)
#define SCB_ICSR_R_PENDSVCLR_BIT       (27u)
#define SCB_ICSR_R_PENDSVCLR_REMOVE    (0x08000000u)
#define SCB_ICSR_R_PENDSVCLR_NOEFFECT  (0x00000000u)

#define SCB_ICSR_PENDSVCLR_MASK      (0x00000001u)
#define SCB_ICSR_PENDSVCLR_REMOVE    (0x00000001u)
#define SCB_ICSR_PENDSVCLR_NOEFFECT  (0x00000000u)
/*----------*/

/*----------*/
#define SCB_ICSR_R_PENDSVSET_MASK      (0x10000000u)
#define SCB_ICSR_R_PENDSVSET_BIT       (28u)
#define SCB_ICSR_R_PENDSVSET_PEND      (0x10000000u)
#define SCB_ICSR_R_PENDSVSET_NOPEND    (0x00000000u)
#define SCB_ICSR_R_PENDSVSET_SET       (0x10000000u)
#define SCB_ICSR_R_PENDSVSET_NOEFFECT  (0x00000000u)

#define SCB_ICSR_PENDSVSET_MASK      (0x00000001u)
#define SCB_ICSR_PENDSVSET_PEND      (0x00000001u)
#define SCB_ICSR_PENDSVSET_NOPEND    (0x00000000u)
#define SCB_ICSR_PENDSVSET_SET       (0x00000001u)
#define SCB_ICSR_PENDSVSET_NOEFFECT  (0x00000000u)
/*----------*/


/*----------*/
#define SCB_ICSR_R_NMIPENDSET_MASK      (0x80000000u)
#define SCB_ICSR_R_NMIPENDSET_BIT       (31u)
#define SCB_ICSR_R_NMIPENDSET_PEND      (0x80000000u)
#define SCB_ICSR_R_NMIPENDSET_NOPEND    (0x00000000u)
#define SCB_ICSR_R_NMIPENDSET_SET       (0x80000000u)
#define SCB_ICSR_R_NMIPENDSET_NOEFFECT  (0x00000000u)

#define SCB_ICSR_NMIPENDSET_MASK      (0x00000001u)
#define SCB_ICSR_NMIPENDSET_PEND      (0x00000001u)
#define SCB_ICSR_NMIPENDSET_NOPEND    (0x00000000u)
#define SCB_ICSR_NMIPENDSET_SET       (0x00000001u)
#define SCB_ICSR_NMIPENDSET_NOEFFECT  (0x00000000u)
/*----------*/



/********************************************************************************************/
/************************************* 5 VTOR ***********************************************/
/********************************************************************************************/

#define SCB_VTOR            (((VTOR_TypeDef*)(SCB_BASE+SCB_VTOR_OFFSET )))
#define SCB_VTOR_R          (*((volatile uint32_t *)(SCB_BASE+SCB_VTOR_OFFSET)))


/*----------*/
#define SCB_VTOR_R_TBLOFF_MASK      (0xFFFFFC00u)
#define SCB_VTOR_R_TBLOFF_BIT       (10u)

#define SCB_VTOR_TBLOFF_MASK        (0x003FFFFFFu)
/*----------*/


/********************************************************************************************/
/************************************* 6 AIRCR ***********************************************/
/********************************************************************************************/

#define SCB_AIRCR            (((AIRCR_TypeDef*)(SCB_BASE+SCB_AIRCR_OFFSET )))
#define SCB_AIRCR_R          (*((volatile uint32_t *)(SCB_BASE+SCB_AIRCR_OFFSET)))


/*----------*/
#define SCB_AIRCR_R_VECTRESET_MASK      (0x00000001u)
#define SCB_AIRCR_R_VECTRESET_BIT       (0u)
#define SCB_AIRCR_R_VECTRESET_NOUSE     (0x00000001u)
#define SCB_AIRCR_R_VECTRESET_NOEFFECT  (0x00000000u)

#define SCB_AIRCR_VECTRESET_MASK         (0x00000001u)
#define SCB_AIRCR_VECTRESET_NOUSE        (0x00000001u)
#define SCB_AIRCR_VECTRESET_NOEFFECT     (0x00000000u)
/*----------*/

/*----------*/
#define SCB_AIRCR_R_VECTCLRACTIVE_MASK      (0x00000002u)
#define SCB_AIRCR_R_VECTCLRACTIVE_BIT       (1u)
#define SCB_AIRCR_R_VECTCLRACTIVE_NOUSE     (0x00000002u)
#define SCB_AIRCR_R_VECTCLRACTIVE_NOEFFECT  (0x00000000u)

#define SCB_AIRCR_VECTCLRACTIVE_MASK         (0x00000001u)
#define SCB_AIRCR_VECTCLRACTIVE_NOUSE        (0x00000001u)
#define SCB_AIRCR_VECTCLRACTIVE_NOEFFECT     (0x00000000u)
/*----------*/


/*----------*/
#define SCB_AIRCR_R_SYSRESETREQ_MASK      (0x00000004u)
#define SCB_AIRCR_R_SYSRESETREQ_BIT       (2u)
#define SCB_AIRCR_R_SYSRESETREQ_RESET     (0x00000004u)
#define SCB_AIRCR_R_SYSRESETREQ_NOEFFECT  (0x00000000u)

#define SCB_AIRCR_SYSRESETREQ_MASK         (0x00000001u)
#define SCB_AIRCR_SYSRESETREQ_RESET        (0x00000001u)
#define SCB_AIRCR_SYSRESETREQ_NOEFFECT     (0x00000000u)
/*----------*/


/*----------*/
#define SCB_PRIGROUP_XXX (0u)
#define SCB_PRIGROUP_XXY (1u)
#define SCB_PRIGROUP_XYY (2u)
#define SCB_PRIGROUP_YYY (3u)

#define SCB_AIRCR_R_PRIGROUP_MASK      (0x00000700u)
#define SCB_AIRCR_R_PRIGROUP_BIT       (8u)
#define SCB_AIRCR_R_PRIGROUP_XXX       (0x00000000u)
#define SCB_AIRCR_R_PRIGROUP_XXY       (0x00000500u)
#define SCB_AIRCR_R_PRIGROUP_XYY       (0x00000600u)
#define SCB_AIRCR_R_PRIGROUP_YYY       (0x00000700u)

#define SCB_AIRCR_PRIGROUP_MASK      (0x00000007u)
#define SCB_AIRCR_PRIGROUP_XXX       (0x00000000u)
#define SCB_AIRCR_PRIGROUP_XXY       (0x00000005u)
#define SCB_AIRCR_PRIGROUP_XYY       (0x00000006u)
#define SCB_AIRCR_PRIGROUP_YYY       (0x00000007u)
/*----------*/


/*----------*/
#define SCB_AIRCR_R_ENDIANESS_MASK      (0x00008000u)
#define SCB_AIRCR_R_ENDIANESS_BIT       (15u)
#define SCB_AIRCR_R_ENDIANESS_LITTLE    (0x00000000u)
#define SCB_AIRCR_R_ENDIANESS_BIG       (0x00008000u)

#define SCB_AIRCR_ENDIANESS_MASK      (0x00000001u)
#define SCB_AIRCR_ENDIANESS_LITTLE    (0x00000000u)
#define SCB_AIRCR_ENDIANESS_BIG       (0x00000001u)
/*----------*/


/*----------*/
#define SCB_AIRCR_R_VECTKEY_MASK      (0xFFFF0000u)
#define SCB_AIRCR_R_VECTKEY_BIT       (15u)
#define SCB_AIRCR_R_VECTKEY_READ      (0xFA050000u)
#define SCB_AIRCR_R_VECTKEY_WRITE     (0x05FA0000u)

#define SCB_AIRCR_VECTKEY_MASK      (0x0000FFFFu)
#define SCB_AIRCR_VECTKEY_READ      (0x0000FA05u)
#define SCB_AIRCR_VECTKEY_WRITE     (0x000005FAu)
/*----------*/


/********************************************************************************************/
/************************************* 7 SCR ***********************************************/
/********************************************************************************************/

#define SCB_SCR            (((SCR_TypeDef*)(SCB_BASE+SCB_SCR_OFFSET )))
#define SCB_SCR_R          (*((volatile uint32_t *)(SCB_BASE+SCB_SCR_OFFSET)))


/*----------*/
#define SCB_SCR_R_SLEEPONEXIT_MASK      (0x00000002u)
#define SCB_SCR_R_SLEEPONEXIT_BIT       (1u)
#define SCB_SCR_R_SLEEPONEXIT_SLEEP     (0x00000002u)
#define SCB_SCR_R_SLEEPONEXIT_NOSLEEP   (0x00000000u)

#define SCB_SCR_SLEEPONEXIT_MASK         (0x00000001u)
#define SCB_SCR_SLEEPONEXIT_SLEEP        (0x00000001u)
#define SCB_SCR_SLEEPONEXIT_NOSLEEP      (0x00000000u)
/*----------*/

/*----------*/
#define SCB_SLEEPDEEP_SLEEP     (0u)
#define SCB_SLEEPDEEP_DEEPSLEEP (1u)

#define SCB_SCR_R_SLEEPDEEP_MASK      (0x00000004u)
#define SCB_SCR_R_SLEEPDEEP_BIT       (2u)
#define SCB_SCR_R_SLEEPDEEP_DEEPSLEEP (0x00000004u)
#define SCB_SCR_R_SLEEPDEEP_SLEEP     (0x00000000u)

#define SCB_SCR_SLEEPDEEP_MASK         (0x00000001u)
#define SCB_SCR_SLEEPDEEP_DEEPSLEEP    (0x00000001u)
#define SCB_SCR_SLEEPDEEP_SLEEP        (0x00000000u)
/*----------*/


/*----------*/
#define SCB_SCR_R_SEVONPEND_MASK      (0x00000010u)
#define SCB_SCR_R_SEVONPEND_BIT       (4u)
#define SCB_SCR_R_SEVONPEND_ALL       (0x00000010u)
#define SCB_SCR_R_SEVONPEND_ONLY      (0x00000000u)

#define SCB_SCR_SEVONPEND_MASK         (0x00000001u)
#define SCB_SCR_SEVONPEND_ALL          (0x00000001u)
#define SCB_SCR_SEVONPEND_ONLY         (0x00000000u)
/*----------*/


/********************************************************************************************/
/************************************* 8 CCR ***********************************************/
/********************************************************************************************/

#define SCB_CCR            (((CCR_TypeDef*)(SCB_BASE+SCB_CCR_OFFSET )))
#define SCB_CCR_R          (*((volatile uint32_t *)(SCB_BASE+SCB_CCR_OFFSET)))


/*----------*/
#define SCB_CCR_R_NONBASETHREDENA_MASK      (0x00000001u)
#define SCB_CCR_R_NONBASETHREDENA_BIT       (0u)
#define SCB_CCR_R_NONBASETHREDENA_ALL       (0x00000001u)
#define SCB_CCR_R_NONBASETHREDENA_ONLY      (0x00000000u)

#define SCB_CCR_NONBASETHREDENA_MASK         (0x00000001u)
#define SCB_CCR_NONBASETHREDENA_ALL          (0x00000001u)
#define SCB_CCR_NONBASETHREDENA_ONLY         (0x00000000u)
/*----------*/

/*----------*/
#define SCB_CCR_R_USERSETMPEND_MASK      (0x00000002u)
#define SCB_CCR_R_USERSETMPEND_BIT       (1u)
#define SCB_CCR_R_USERSETMPEND_EN        (0x00000002u)
#define SCB_CCR_R_USERSETMPEND_DIS       (0x00000000u)

#define SCB_CCR_USERSETMPEND_MASK         (0x00000001u)
#define SCB_CCR_USERSETMPEND_EN          (0x00000001u)
#define SCB_CCR_USERSETMPEND_DIS         (0x00000000u)
/*----------*/


/*----------*/
#define SCB_CCR_R_UNALIGN_TRP_MASK      (0x00000008u)
#define SCB_CCR_R_UNALIGN_TRP_BIT       (3u)
#define SCB_CCR_R_UNALIGN_TRP_TRAP      (0x00000008u)
#define SCB_CCR_R_UNALIGN_TRP_NOTRAP    (0x00000000u)

#define SCB_CCR_UNALIGN_TRP_MASK        (0x00000001u)
#define SCB_CCR_UNALIGN_TRP_TRAP        (0x00000001u)
#define SCB_CCR_UNALIGN_TRP_NOTRAP      (0x00000000u)
/*----------*/

/*----------*/
#define SCB_CCR_R_DIV_0_TRP_MASK      (0x00000010u)
#define SCB_CCR_R_DIV_0_TRP_BIT       (4u)
#define SCB_CCR_R_DIV_0_TRP_TRAP      (0x00000010u)
#define SCB_CCR_R_DIV_0_TRP_NOTRAP    (0x00000000u)

#define SCB_CCR_DIV_0_TRP_MASK        (0x00000001u)
#define SCB_CCR_DIV_0_TRP_TRAP        (0x00000001u)
#define SCB_CCR_DIV_0_TRP_NOTRAP      (0x00000000u)
/*----------*/


/*----------*/
#define SCB_CCR_R_BFHFNMIGN_MASK      (0x00000100u)
#define SCB_CCR_R_BFHFNMIGN_BIT       (8u)
#define SCB_CCR_R_BFHFNMIGN_EN        (0x00000100u)
#define SCB_CCR_R_BFHFNMIGN_DIS       (0x00000000u)

#define SCB_CCR_BFHFNMIGN_MASK        (0x00000001u)
#define SCB_CCR_BFHFNMIGN_EN          (0x00000001u)
#define SCB_CCR_BFHFNMIGN_DIS         (0x00000000u)
/*----------*/



/*----------*/
#define SCB_CCR_R_STKALIGN_MASK      (0x00000200u)
#define SCB_CCR_R_STKALIGN_BIT       (9u)
#define SCB_CCR_R_STKALIGN_8BYTE     (0x00000200u)
#define SCB_CCR_R_STKALIGN_4BYTE     (0x00000000u)

#define SCB_CCR_STKALIGN_MASK        (0x00000001u)
#define SCB_CCR_STKALIGN_8BYTE       (0x00000001u)
#define SCB_CCR_STKALIGN_4BYTE       (0x00000000u)
/*----------*/

/********************************************************************************************/
/************************************* 9 SHPR1 ***********************************************/
/********************************************************************************************/

#define SCB_SHPR1            (((SHPR1_TypeDef*)(SCB_BASE+SCB_SHPR1_OFFSET )))
#define SCB_SHPR1_R          (*((volatile uint32_t *)(SCB_BASE+SCB_SHPR1_OFFSET)))

/*----------*/
#define SCB_SHPR1_R_MEM_MASK      (0x000000E0u)
#define SCB_SHPR1_R_MEM_BIT       (5u)
#define SCB_SHPR1_R_MEM_PRI0      (0x00000000u)
#define SCB_SHPR1_R_MEM_PRI1      (0x00000020u)
#define SCB_SHPR1_R_MEM_PRI2      (0x00000040u)
#define SCB_SHPR1_R_MEM_PRI3      (0x00000060u)
#define SCB_SHPR1_R_MEM_PRI4      (0x00000080u)
#define SCB_SHPR1_R_MEM_PRI5      (0x000000A0u)
#define SCB_SHPR1_R_MEM_PRI6      (0x000000C0u)
#define SCB_SHPR1_R_MEM_PRI7      (0x000000E0u)

#define SCB_SHPR1_MEM_MASK        (0x00000007u)
#define SCB_SHPR1_MEM_PRI0        (0x00000000u)
#define SCB_SHPR1_MEM_PRI1        (0x00000001u)
#define SCB_SHPR1_MEM_PRI2        (0x00000002u)
#define SCB_SHPR1_MEM_PRI3        (0x00000003u)
#define SCB_SHPR1_MEM_PRI4        (0x00000004u)
#define SCB_SHPR1_MEM_PRI5        (0x00000005u)
#define SCB_SHPR1_MEM_PRI6        (0x00000006u)
#define SCB_SHPR1_MEM_PRI7        (0x00000007u)
/*----------*/


/*----------*/
#define SCB_SHPR1_R_BUS_MASK      (0x0000E000u)
#define SCB_SHPR1_R_BUS_BIT       (13u)
#define SCB_SHPR1_R_BUS_PRI0      (0x00000000u)
#define SCB_SHPR1_R_BUS_PRI1      (0x00002000u)
#define SCB_SHPR1_R_BUS_PRI2      (0x00004000u)
#define SCB_SHPR1_R_BUS_PRI3      (0x00006000u)
#define SCB_SHPR1_R_BUS_PRI4      (0x00008000u)
#define SCB_SHPR1_R_BUS_PRI5      (0x0000A000u)
#define SCB_SHPR1_R_BUS_PRI6      (0x0000C000u)
#define SCB_SHPR1_R_BUS_PRI7      (0x0000E000u)

#define SCB_SHPR1_BUS_MASK        (0x00000007u)
#define SCB_SHPR1_BUS_PRI0        (0x00000000u)
#define SCB_SHPR1_BUS_PRI1        (0x00000001u)
#define SCB_SHPR1_BUS_PRI2        (0x00000002u)
#define SCB_SHPR1_BUS_PRI3        (0x00000003u)
#define SCB_SHPR1_BUS_PRI4        (0x00000004u)
#define SCB_SHPR1_BUS_PRI5        (0x00000005u)
#define SCB_SHPR1_BUS_PRI6        (0x00000006u)
#define SCB_SHPR1_BUS_PRI7        (0x00000007u)
/*----------*/



/*----------*/
#define SCB_SHPR1_R_USAGE_MASK      (0x00E00000u)
#define SCB_SHPR1_R_USAGE_BIT       (21u)
#define SCB_SHPR1_R_USAGE_PRI0      (0x00000000u)
#define SCB_SHPR1_R_USAGE_PRI1      (0x00200000u)
#define SCB_SHPR1_R_USAGE_PRI2      (0x00400000u)
#define SCB_SHPR1_R_USAGE_PRI3      (0x00600000u)
#define SCB_SHPR1_R_USAGE_PRI4      (0x00800000u)
#define SCB_SHPR1_R_USAGE_PRI5      (0x00A00000u)
#define SCB_SHPR1_R_USAGE_PRI6      (0x00C00000u)
#define SCB_SHPR1_R_USAGE_PRI7      (0x00E00000u)

#define SCB_SHPR1_USAGE_MASK        (0x00000007u)
#define SCB_SHPR1_USAGE_PRI0        (0x00000000u)
#define SCB_SHPR1_USAGE_PRI1        (0x00000001u)
#define SCB_SHPR1_USAGE_PRI2        (0x00000002u)
#define SCB_SHPR1_USAGE_PRI3        (0x00000003u)
#define SCB_SHPR1_USAGE_PRI4        (0x00000004u)
#define SCB_SHPR1_USAGE_PRI5        (0x00000005u)
#define SCB_SHPR1_USAGE_PRI6        (0x00000006u)
#define SCB_SHPR1_USAGE_PRI7        (0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* 10 SHPR2 ***********************************************/
/********************************************************************************************/

#define SCB_SHPR2            (((SHPR2_TypeDef*)(SCB_BASE+SCB_SHPR2_OFFSET )))
#define SCB_SHPR2_R          (*((volatile uint32_t *)(SCB_BASE+SCB_SHPR2_OFFSET)))


/*----------*/
#define SCB_SHPR2_R_SVCALL_MASK      (0xE0000000u)
#define SCB_SHPR2_R_SVCALL_BIT       (29u)
#define SCB_SHPR2_R_SVCALL_PRI0      (0x00000000u)
#define SCB_SHPR2_R_SVCALL_PRI1      (0x20000000u)
#define SCB_SHPR2_R_SVCALL_PRI2      (0x40000000u)
#define SCB_SHPR2_R_SVCALL_PRI3      (0x60000000u)
#define SCB_SHPR2_R_SVCALL_PRI4      (0x80000000u)
#define SCB_SHPR2_R_SVCALL_PRI5      (0xA0000000u)
#define SCB_SHPR2_R_SVCALL_PRI6      (0xC0000000u)
#define SCB_SHPR2_R_SVCALL_PRI7      (0xE0000000u)

#define SCB_SHPR2_SVCALL_MASK        (0x00000007u)
#define SCB_SHPR2_SVCALL_PRI0        (0x00000000u)
#define SCB_SHPR2_SVCALL_PRI1        (0x00000001u)
#define SCB_SHPR2_SVCALL_PRI2        (0x00000002u)
#define SCB_SHPR2_SVCALL_PRI3        (0x00000003u)
#define SCB_SHPR2_SVCALL_PRI4        (0x00000004u)
#define SCB_SHPR2_SVCALL_PRI5        (0x00000005u)
#define SCB_SHPR2_SVCALL_PRI6        (0x00000006u)
#define SCB_SHPR2_SVCALL_PRI7        (0x00000007u)
/*----------*/

/********************************************************************************************/
/************************************* 11 SHPR3 ***********************************************/
/********************************************************************************************/

#define SCB_SHPR3            (((SHPR3_TypeDef*)(SCB_BASE+SCB_SHPR3_OFFSET )))
#define SCB_SHPR3_R          (*((volatile uint32_t *)(SCB_BASE+SCB_SHPR3_OFFSET)))


/*----------*/
#define SCB_SHPR3_R_DEBUG_MASK      (0x000000E0u)
#define SCB_SHPR3_R_DEBUG_BIT       (5u)
#define SCB_SHPR3_R_DEBUG_PRI0      (0x00000000u)
#define SCB_SHPR3_R_DEBUG_PRI1      (0x00000020u)
#define SCB_SHPR3_R_DEBUG_PRI2      (0x00000040u)
#define SCB_SHPR3_R_DEBUG_PRI3      (0x00000060u)
#define SCB_SHPR3_R_DEBUG_PRI4      (0x00000080u)
#define SCB_SHPR3_R_DEBUG_PRI5      (0x000000A0u)
#define SCB_SHPR3_R_DEBUG_PRI6      (0x000000C0u)
#define SCB_SHPR3_R_DEBUG_PRI7      (0x000000E0u)

#define SCB_SHPR3_DEBUG_MASK        (0x00000007u)
#define SCB_SHPR3_DEBUG_PRI0        (0x00000000u)
#define SCB_SHPR3_DEBUG_PRI1        (0x00000001u)
#define SCB_SHPR3_DEBUG_PRI2        (0x00000002u)
#define SCB_SHPR3_DEBUG_PRI3        (0x00000003u)
#define SCB_SHPR3_DEBUG_PRI4        (0x00000004u)
#define SCB_SHPR3_DEBUG_PRI5        (0x00000005u)
#define SCB_SHPR3_DEBUG_PRI6        (0x00000006u)
#define SCB_SHPR3_DEBUG_PRI7        (0x00000007u)
/*----------*/



/*----------*/
#define SCB_SHPR3_R_PENDSV_MASK      (0x00E00000u)
#define SCB_SHPR3_R_PENDSV_BIT       (21u)
#define SCB_SHPR3_R_PENDSV_PRI0      (0x00000000u)
#define SCB_SHPR3_R_PENDSV_PRI1      (0x00200000u)
#define SCB_SHPR3_R_PENDSV_PRI2      (0x00400000u)
#define SCB_SHPR3_R_PENDSV_PRI3      (0x00600000u)
#define SCB_SHPR3_R_PENDSV_PRI4      (0x00800000u)
#define SCB_SHPR3_R_PENDSV_PRI5      (0x00A00000u)
#define SCB_SHPR3_R_PENDSV_PRI6      (0x00C00000u)
#define SCB_SHPR3_R_PENDSV_PRI7      (0x00E00000u)

#define SCB_SHPR3_PENDSV_MASK        (0x00000007u)
#define SCB_SHPR3_PENDSV_PRI0        (0x00000000u)
#define SCB_SHPR3_PENDSV_PRI1        (0x00000001u)
#define SCB_SHPR3_PENDSV_PRI2        (0x00000002u)
#define SCB_SHPR3_PENDSV_PRI3        (0x00000003u)
#define SCB_SHPR3_PENDSV_PRI4        (0x00000004u)
#define SCB_SHPR3_PENDSV_PRI5        (0x00000005u)
#define SCB_SHPR3_PENDSV_PRI6        (0x00000006u)
#define SCB_SHPR3_PENDSV_PRI7        (0x00000007u)
/*----------*/



/*----------*/

#define SCB_SHPR3_R_SYSTICK_MASK      (0xE0000000u)
#define SCB_SHPR3_R_SYSTICK_BIT       (29u)
#define SCB_SHPR3_R_SYSTICK_PRI0      (0x00000000u)
#define SCB_SHPR3_R_SYSTICK_PRI1      (0x20000000u)
#define SCB_SHPR3_R_SYSTICK_PRI2      (0x40000000u)
#define SCB_SHPR3_R_SYSTICK_PRI3      (0x60000000u)
#define SCB_SHPR3_R_SYSTICK_PRI4      (0x80000000u)
#define SCB_SHPR3_R_SYSTICK_PRI5      (0xA0000000u)
#define SCB_SHPR3_R_SYSTICK_PRI6      (0xC0000000u)
#define SCB_SHPR3_R_SYSTICK_PRI7      (0xE0000000u)

#define SCB_SHPR3_SYSTICK_MASK        (0x00000007u)
#define SCB_SHPR3_SYSTICK_PRI0        (0x00000000u)
#define SCB_SHPR3_SYSTICK_PRI1        (0x00000001u)
#define SCB_SHPR3_SYSTICK_PRI2        (0x00000002u)
#define SCB_SHPR3_SYSTICK_PRI3        (0x00000003u)
#define SCB_SHPR3_SYSTICK_PRI4        (0x00000004u)
#define SCB_SHPR3_SYSTICK_PRI5        (0x00000005u)
#define SCB_SHPR3_SYSTICK_PRI6        (0x00000006u)
#define SCB_SHPR3_SYSTICK_PRI7        (0x00000007u)
/*----------*/



/********************************************************************************************/
/************************************* 12 SHCSR ***********************************************/
/********************************************************************************************/

#define SCB_SHCSR            (((SHCSR_TypeDef*)(SCB_BASE+SCB_SHCSR_OFFSET )))
#define SCB_SHCSR_R          (*((volatile uint32_t *)(SCB_BASE+SCB_SHCSR_OFFSET)))


/*----------*/
#define SCB_SHCSR_R_MEMFAULTACT_MASK      (0x00000001u)
#define SCB_SHCSR_R_MEMFAULTACT_BIT       (0u)
#define SCB_SHCSR_R_MEMFAULTACT_NOACTIVE  (0x00000000u)
#define SCB_SHCSR_R_MEMFAULTACT_ACTIVE    (0x00000001u)

#define SCB_SHCSR_MEMFAULTACT_MASK        (0x00000001u)
#define SCB_SHCSR_MEMFAULTACT_NOACTIVE    (0x00000000u)
#define SCB_SHCSR_MEMFAULTACT_ACTIVE      (0x00000001u)
/*----------*/


/*----------*/
#define SCB_SHCSR_R_BUSFAULTACT_MASK      (0x00000002u)
#define SCB_SHCSR_R_BUSFAULTACT_BIT       (1u)
#define SCB_SHCSR_R_BUSFAULTACT_NOACTIVE  (0x00000000u)
#define SCB_SHCSR_R_BUSFAULTACT_ACTIVE    (0x00000002u)

#define SCB_SHCSR_BUSFAULTACT_MASK        (0x00000001u)
#define SCB_SHCSR_BUSFAULTACT_NOACTIVE    (0x00000000u)
#define SCB_SHCSR_BUSFAULTACT_ACTIVE      (0x00000001u)
/*----------*/


/*----------*/
#define SCB_SHCSR_R_USGFAULTACT_MASK      (0x00000008u)
#define SCB_SHCSR_R_USGFAULTACT_BIT       (3u)
#define SCB_SHCSR_R_USGFAULTACT_NOACTIVE  (0x00000000u)
#define SCB_SHCSR_R_USGFAULTACT_ACTIVE    (0x00000008u)

#define SCB_SHCSR_USGFAULTACT_MASK        (0x00000001u)
#define SCB_SHCSR_USGFAULTACT_NOACTIVE    (0x00000000u)
#define SCB_SHCSR_USGFAULTACT_ACTIVE      (0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_SVCALLACT_MASK      (0x00000080u)
#define SCB_SHCSR_R_SVCALLACT_BIT       (7u)
#define SCB_SHCSR_R_SVCALLACT_NOACTIVE  (0x00000000u)
#define SCB_SHCSR_R_SVCALLACT_ACTIVE    (0x00000080u)

#define SCB_SHCSR_SVCALLACT_MASK        (0x00000001u)
#define SCB_SHCSR_SVCALLACT_NOACTIVE    (0x00000000u)
#define SCB_SHCSR_SVCALLACT_ACTIVE      (0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_MONITORACT_MASK      (0x00000100u)
#define SCB_SHCSR_R_MONITORACT_BIT       (8u)
#define SCB_SHCSR_R_MONITORACT_NOACTIVE  (0x00000000u)
#define SCB_SHCSR_R_MONITORACT_ACTIVE    (0x00000100u)

#define SCB_SHCSR_MONITORACT_MASK        (0x00000001u)
#define SCB_SHCSR_MONITORACT_NOACTIVE    (0x00000000u)
#define SCB_SHCSR_MONITORACT_ACTIVE      (0x00000001u)
/*----------*/


/*----------*/
#define SCB_SHCSR_R_PENDSVACT_MASK      (0x00000400u)
#define SCB_SHCSR_R_PENDSVACT_BIT       (10u)
#define SCB_SHCSR_R_PENDSVACT_NOACTIVE  (0x00000000u)
#define SCB_SHCSR_R_PENDSVACT_ACTIVE    (0x00000400u)

#define SCB_SHCSR_PENDSVACT_MASK        (0x00000001u)
#define SCB_SHCSR_PENDSVACT_NOACTIVE    (0x00000000u)
#define SCB_SHCSR_PENDSVACT_ACTIVE      (0x00000001u)
/*----------*/


/*----------*/
#define SCB_SHCSR_R_SYSTICKACT_MASK      (0x00000800u)
#define SCB_SHCSR_R_SYSTICKACT_BIT       (11u)
#define SCB_SHCSR_R_SYSTICKACT_NOACTIVE  (0x00000000u)
#define SCB_SHCSR_R_SYSTICKACT_ACTIVE    (0x00000800u)

#define SCB_SHCSR_SYSTICKACT_MASK        (0x00000001u)
#define SCB_SHCSR_SYSTICKACT_NOACTIVE    (0x00000000u)
#define SCB_SHCSR_SYSTICKACT_ACTIVE      (0x00000001u)
/*----------*/


/*----------*/
#define SCB_SHCSR_R_USGFAULTPENDED_MASK      (0x00001000u)
#define SCB_SHCSR_R_USGFAULTPENDED_BIT       (12u)
#define SCB_SHCSR_R_USGFAULTPENDED_NOPEND    (0x00000000u)
#define SCB_SHCSR_R_USGFAULTPENDED_PEND      (0x00001000u)

#define SCB_SHCSR_USGFAULTPENDED_MASK        (0x00000001u)
#define SCB_SHCSR_USGFAULTPENDED_NOPEND      (0x00000000u)
#define SCB_SHCSR_USGFAULTPENDED_PEND        (0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_MEMFAULTPENDED_MASK      (0x00002000u)
#define SCB_SHCSR_R_MEMFAULTPENDED_BIT       (13u)
#define SCB_SHCSR_R_MEMFAULTPENDED_NOPEND    (0x00000000u)
#define SCB_SHCSR_R_MEMFAULTPENDED_PEND      (0x00002000u)

#define SCB_SHCSR_MEMFAULTPENDED_MASK        (0x00000001u)
#define SCB_SHCSR_MEMFAULTPENDED_NOPEND      (0x00000000u)
#define SCB_SHCSR_MEMFAULTPENDED_PEND        (0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_BUSFAULTPENDED_MASK      (0x00004000u)
#define SCB_SHCSR_R_BUSFAULTPENDED_BIT       (14u)
#define SCB_SHCSR_R_BUSFAULTPENDED_NOPEND    (0x00000000u)
#define SCB_SHCSR_R_BUSFAULTPENDED_PEND      (0x00004000u)

#define SCB_SHCSR_BUSFAULTPENDED_MASK        (0x00000001u)
#define SCB_SHCSR_BUSFAULTPENDED_NOPEND      (0x00000000u)
#define SCB_SHCSR_BUSFAULTPENDED_PEND        (0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_SVCALLPENDED_MASK      (0x00008000u)
#define SCB_SHCSR_R_SVCALLPENDED_BIT       (15u)
#define SCB_SHCSR_R_SVCALLPENDED_NOPEND    (0x00000000u)
#define SCB_SHCSR_R_SVCALLPENDED_PEND      (0x00008000u)

#define SCB_SHCSR_SVCALLPENDED_MASK        (0x00000001u)
#define SCB_SHCSR_SVCALLPENDED_NOPEND      (0x00000000u)
#define SCB_SHCSR_SVCALLPENDED_PEND        (0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_MEMFAULTENA_MASK      (0x00010000u)
#define SCB_SHCSR_R_MEMFAULTENA_BIT       (16u)
#define SCB_SHCSR_R_MEMFAULTENA_DIS       (0x00000000u)
#define SCB_SHCSR_R_MEMFAULTENA_EN        (0x00010000u)

#define SCB_SHCSR_MEMFAULTENA_MASK        (0x00000001u)
#define SCB_SHCSR_MEMFAULTENA_DIS         (0x00000000u)
#define SCB_SHCSR_MEMFAULTENA_EN          (0x00000001u)
/*----------*/

/*----------*/
#define SCB_SHCSR_R_BUSFAULTENA_MASK      (0x00020000u)
#define SCB_SHCSR_R_BUSFAULTENA_BIT       (17u)
#define SCB_SHCSR_R_BUSFAULTENA_DIS       (0x00000000u)
#define SCB_SHCSR_R_BUSFAULTENA_EN        (0x00020000u)

#define SCB_SHCSR_BUSFAULTENA_MASK        (0x00000001u)
#define SCB_SHCSR_BUSFAULTENA_DIS         (0x00000000u)
#define SCB_SHCSR_BUSFAULTENA_EN          (0x00000001u)
/*----------*/


/*----------*/
#define SCB_SHCSR_R_USGFAULTENA_MASK      (0x00040000u)
#define SCB_SHCSR_R_USGFAULTENA_BIT       (18u)
#define SCB_SHCSR_R_USGFAULTENA_DIS       (0x00000000u)
#define SCB_SHCSR_R_USGFAULTENA_EN        (0x00040000u)

#define SCB_SHCSR_USGFAULTENA_MASK        (0x00000001u)
#define SCB_SHCSR_USGFAULTENA_DIS         (0x00000000u)
#define SCB_SHCSR_USGFAULTENA_EN          (0x00000001u)
/*----------*/



/********************************************************************************************/
/************************************* 13 CFSR ***********************************************/
/********************************************************************************************/

#define SCB_CFSR            (((CFSR_TypeDef*)(SCB_BASE+SCB_CFSR_OFFSET )))
#define SCB_CFSR_R          (*((volatile uint32_t *)(SCB_BASE+SCB_CFSR_OFFSET)))

/*----------*/
#define SCB_CFSR_R_IACCVIOL_MASK      (0x00000001u)
#define SCB_CFSR_R_IACCVIOL_BIT       (0u)
#define SCB_CFSR_R_IACCVIOL_NOOCCUR   (0x00000000u)
#define SCB_CFSR_R_IACCVIOL_OCCUR     (0x00000001u)
#define SCB_CFSR_R_IACCVIOL_CLEAR     (0x00000001u)

#define SCB_CFSR_IACCVIOL_MASK        (0x00000001u)
#define SCB_CFSR_IACCVIOL_NOOCCUR     (0x00000000u)
#define SCB_CFSR_IACCVIOL_OCCUR       (0x00000001u)
#define SCB_CFSR_IACCVIOL_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_DACCVIOL_MASK      (0x00000002u)
#define SCB_CFSR_R_DACCVIOL_BIT       (1u)
#define SCB_CFSR_R_DACCVIOL_NOOCCUR   (0x00000000u)
#define SCB_CFSR_R_DACCVIOL_OCCUR     (0x00000002u)
#define SCB_CFSR_R_DACCVIOL_CLEAR     (0x00000002u)

#define SCB_CFSR_DACCVIOL_MASK        (0x00000001u)
#define SCB_CFSR_DACCVIOL_NOOCCUR     (0x00000000u)
#define SCB_CFSR_DACCVIOL_OCCUR       (0x00000001u)
#define SCB_CFSR_DACCVIOL_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_MUNSTKERR_MASK      (0x00000008u)
#define SCB_CFSR_R_MUNSTKERR_BIT       (3u)
#define SCB_CFSR_R_MUNSTKERR_NOOCCUR   (0x00000000u)
#define SCB_CFSR_R_MUNSTKERR_OCCUR     (0x00000008u)
#define SCB_CFSR_R_MUNSTKERR_CLEAR     (0x00000008u)

#define SCB_CFSR_MUNSTKERR_MASK        (0x00000001u)
#define SCB_CFSR_MUNSTKERR_NOOCCUR     (0x00000000u)
#define SCB_CFSR_MUNSTKERR_OCCUR       (0x00000001u)
#define SCB_CFSR_MUNSTKERR_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_MSTKERR_MASK      (0x00000010u)
#define SCB_CFSR_R_MSTKERR_BIT       (4u)
#define SCB_CFSR_R_MSTKERR_NOOCCUR   (0x00000000u)
#define SCB_CFSR_R_MSTKERR_OCCUR     (0x00000010u)
#define SCB_CFSR_R_MSTKERR_CLEAR     (0x00000010u)

#define SCB_CFSR_MSTKERR_MASK        (0x00000001u)
#define SCB_CFSR_MSTKERR_NOOCCUR     (0x00000000u)
#define SCB_CFSR_MSTKERR_OCCUR       (0x00000001u)
#define SCB_CFSR_MSTKERR_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_MLSPERR_MASK      (0x00000020u)
#define SCB_CFSR_R_MLSPERR_BIT       (5u)
#define SCB_CFSR_R_MLSPERR_NOOCCUR   (0x00000000u)
#define SCB_CFSR_R_MLSPERR_OCCUR     (0x00000020u)
#define SCB_CFSR_R_MLSPERR_CLEAR     (0x00000020u)

#define SCB_CFSR_MLSPERR_MASK        (0x00000001u)
#define SCB_CFSR_MLSPERR_NOOCCUR     (0x00000000u)
#define SCB_CFSR_MLSPERR_OCCUR       (0x00000001u)
#define SCB_CFSR_MLSPERR_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_MMARVALID_MASK      (0x00000080u)
#define SCB_CFSR_R_MMARVALID_BIT       (7u)
#define SCB_CFSR_R_MMARVALID_NOVALID   (0x00000000u)
#define SCB_CFSR_R_MMARVALID_VALID     (0x00000080u)
#define SCB_CFSR_R_MMARVALID_CLEAR     (0x00000080u)

#define SCB_CFSR_MMARVALID_MASK        (0x00000001u)
#define SCB_CFSR_MMARVALID_NOVALID     (0x00000000u)
#define SCB_CFSR_MMARVALID_VALID       (0x00000001u)
#define SCB_CFSR_MMARVALID_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_IBUSERR_MASK      (0x00000100u)
#define SCB_CFSR_R_IBUSERR_BIT       (8u)
#define SCB_CFSR_R_IBUSERR_NOOCCUR   (0x00000000u)
#define SCB_CFSR_R_IBUSERR_OCCUR     (0x00000100u)
#define SCB_CFSR_R_IBUSERR_CLEAR     (0x00000100u)

#define SCB_CFSR_IBUSERR_MASK        (0x00000001u)
#define SCB_CFSR_IBUSERR_NOOCCUR     (0x00000000u)
#define SCB_CFSR_IBUSERR_OCCUR       (0x00000001u)
#define SCB_CFSR_IBUSERR_CLEAR       (0x00000001u)
/*----------*/


/*----------*/
#define SCB_CFSR_R_PRECISERR_MASK      (0x00000200u)
#define SCB_CFSR_R_PRECISERR_BIT       (9u)
#define SCB_CFSR_R_PRECISERR_NOOCCUR   (0x00000000u)
#define SCB_CFSR_R_PRECISERR_OCCUR     (0x00000200u)
#define SCB_CFSR_R_PRECISERR_CLEAR     (0x00000200u)

#define SCB_CFSR_PRECISERR_MASK        (0x00000001u)
#define SCB_CFSR_PRECISERR_NOOCCUR     (0x00000000u)
#define SCB_CFSR_PRECISERR_OCCUR       (0x00000001u)
#define SCB_CFSR_PRECISERR_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_IMPRECISERR_MASK      (0x00000400u)
#define SCB_CFSR_R_IMPRECISERR_BIT       (10u)
#define SCB_CFSR_R_IMPRECISERR_NOOCCUR   (0x00000000u)
#define SCB_CFSR_R_IMPRECISERR_OCCUR     (0x00000400u)
#define SCB_CFSR_R_IMPRECISERR_CLEAR     (0x00000400u)

#define SCB_CFSR_IMPRECISERR_MASK        (0x00000001u)
#define SCB_CFSR_IMPRECISERR_NOOCCUR     (0x00000000u)
#define SCB_CFSR_IMPRECISERR_OCCUR       (0x00000001u)
#define SCB_CFSR_IMPRECISERR_CLEAR       (0x00000001u)
/*----------*/


/*----------*/
#define SCB_CFSR_R_UNSTKERR_MASK      (0x00000800u)
#define SCB_CFSR_R_UNSTKERR_BIT       (11u)
#define SCB_CFSR_R_UNSTKERR_NOOCCUR   (0x00000000u)
#define SCB_CFSR_R_UNSTKERR_OCCUR     (0x00000800u)
#define SCB_CFSR_R_UNSTKERR_CLEAR     (0x00000800u)

#define SCB_CFSR_UNSTKERR_MASK        (0x00000001u)
#define SCB_CFSR_UNSTKERR_NOOCCUR     (0x00000000u)
#define SCB_CFSR_UNSTKERR_OCCUR       (0x00000001u)
#define SCB_CFSR_UNSTKERR_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_STKERR_MASK      (0x00001000u)
#define SCB_CFSR_R_STKERR_BIT       (12u)
#define SCB_CFSR_R_STKERR_NOOCCUR   (0x00000000u)
#define SCB_CFSR_R_STKERR_OCCUR     (0x00001000u)
#define SCB_CFSR_R_STKERR_CLEAR     (0x00001000u)

#define SCB_CFSR_STKERR_MASK        (0x00000001u)
#define SCB_CFSR_STKERR_NOOCCUR     (0x00000000u)
#define SCB_CFSR_STKERR_OCCUR       (0x00000001u)
#define SCB_CFSR_STKERR_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_LSPERR_MASK      (0x00002000u)
#define SCB_CFSR_R_LSPERR_BIT       (13u)
#define SCB_CFSR_R_LSPERR_NOOCCUR   (0x00000000u)
#define SCB_CFSR_R_LSPERR_OCCUR     (0x00002000u)
#define SCB_CFSR_R_LSPERR_CLEAR     (0x00002000u)

#define SCB_CFSR_LSPERR_MASK        (0x00000001u)
#define SCB_CFSR_LSPERR_NOOCCUR     (0x00000000u)
#define SCB_CFSR_LSPERR_OCCUR       (0x00000001u)
#define SCB_CFSR_LSPERR_CLEAR       (0x00000001u)
/*----------*/


/*----------*/
#define SCB_CFSR_R_BFARVALID_MASK      (0x00008000u)
#define SCB_CFSR_R_BFARVALID_BIT       (15u)
#define SCB_CFSR_R_BFARVALID_NOVALID   (0x00000000u)
#define SCB_CFSR_R_BFARVALID_VALID     (0x00008000u)
#define SCB_CFSR_R_BFARVALID_CLEAR     (0x00008000u)

#define SCB_CFSR_BFARVALID_MASK        (0x00000001u)
#define SCB_CFSR_BFARVALID_NOVALID     (0x00000000u)
#define SCB_CFSR_BFARVALID_VALID       (0x00000001u)
#define SCB_CFSR_BFARVALID_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_UNDEFINSTR_MASK      (0x00010000u)
#define SCB_CFSR_R_UNDEFINSTR_BIT       (16u)
#define SCB_CFSR_R_UNDEFINSTR_NOOCCUR   (0x00000000u)
#define SCB_CFSR_R_UNDEFINSTR_OCCUR     (0x00010000u)
#define SCB_CFSR_R_UNDEFINSTR_CLEAR     (0x00010000u)

#define SCB_CFSR_UNDEFINSTR_MASK        (0x00000001u)
#define SCB_CFSR_UNDEFINSTR_NOOCCUR     (0x00000000u)
#define SCB_CFSR_UNDEFINSTR_OCCUR       (0x00000001u)
#define SCB_CFSR_UNDEFINSTR_CLEAR       (0x00000001u)
/*----------*/


/*----------*/
#define SCB_CFSR_R_INVSTATE_MASK      (0x00020000u)
#define SCB_CFSR_R_INVSTATE_BIT       (17u)
#define SCB_CFSR_R_INVSTATE_NOOCCUR   (0x00000000u)
#define SCB_CFSR_R_INVSTATE_OCCUR     (0x00020000u)
#define SCB_CFSR_R_INVSTATE_CLEAR     (0x00020000u)

#define SCB_CFSR_INVSTATE_MASK        (0x00000001u)
#define SCB_CFSR_INVSTATE_NOOCCUR     (0x00000000u)
#define SCB_CFSR_INVSTATE_OCCUR       (0x00000001u)
#define SCB_CFSR_INVSTATE_CLEAR       (0x00000001u)
/*----------*/


/*----------*/
#define SCB_CFSR_R_INVPC_MASK      (0x00040000u)
#define SCB_CFSR_R_INVPC_BIT       (18u)
#define SCB_CFSR_R_INVPC_NOOCCUR   (0x00000000u)
#define SCB_CFSR_R_INVPC_OCCUR     (0x00040000u)
#define SCB_CFSR_R_INVPC_CLEAR     (0x00040000u)

#define SCB_CFSR_INVPC_MASK        (0x00000001u)
#define SCB_CFSR_INVPC_NOOCCUR     (0x00000000u)
#define SCB_CFSR_INVPC_OCCUR       (0x00000001u)
#define SCB_CFSR_INVPC_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_NOCP_MASK      (0x00080000u)
#define SCB_CFSR_R_NOCP_BIT       (19u)
#define SCB_CFSR_R_NOCP_NOOCCUR   (0x00000000u)
#define SCB_CFSR_R_NOCP_OCCUR     (0x00080000u)
#define SCB_CFSR_R_NOCP_CLEAR     (0x00080000u)

#define SCB_CFSR_NOCP_MASK        (0x00000001u)
#define SCB_CFSR_NOCP_NOOCCUR     (0x00000000u)
#define SCB_CFSR_NOCP_OCCUR       (0x00000001u)
#define SCB_CFSR_NOCP_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_CFSR_R_UNALIGNED_MASK      (0x01000000u)
#define SCB_CFSR_R_UNALIGNED_BIT       (24u)
#define SCB_CFSR_R_UNALIGNED_NOOCCUR   (0x00000000u)
#define SCB_CFSR_R_UUNALIGNED_OCCUR     (0x01000000u)
#define SCB_CFSR_R_UNALIGNED_CLEAR     (0x01000000u)

#define SCB_CFSR_UNALIGNED_MASK        (0x00000001u)
#define SCB_CFSR_UNALIGNED_NOOCCUR     (0x00000000u)
#define SCB_CFSR_UNALIGNED_OCCUR       (0x00000001u)
#define SCB_CFSR_UNALIGNED_CLEAR       (0x00000001u)
/*----------*/


/*----------*/
#define SCB_CFSR_R_DIVBYZERO_MASK      (0x02000000u)
#define SCB_CFSR_R_DIVBYZERO_BIT       (25u)
#define SCB_CFSR_R_DIVBYZERO_NOOCCUR   (0x00000000u)
#define SCB_CFSR_R_DIVBYZERO_OCCUR     (0x02000000u)
#define SCB_CFSR_R_DIVBYZERO_CLEAR     (0x02000000u)

#define SCB_CFSR_DIVBYZERO_MASK        (0x00000001u)
#define SCB_CFSR_DIVBYZERO_NOOCCUR     (0x00000000u)
#define SCB_CFSR_DIVBYZERO_OCCUR       (0x00000001u)
#define SCB_CFSR_DIVBYZERO_CLEAR       (0x00000001u)
/*----------*/

/********************************************************************************************/
/************************************* 13_1 UCFSR ***********************************************/
/********************************************************************************************/
#define SCB_UCFSR            (((UCFSR_TypeDef*)(SCB_BASE+SCB_UCFSR_OFFSET )))
#define SCB_UCFSR_R          (*((volatile uint16_t *)(SCB_BASE+SCB_UCFSR_OFFSET)))



/*----------*/
#define SCB_UCFSR_R_UNDEFINSTR_MASK      (0x00000001u)
#define SCB_UCFSR_R_UNDEFINSTR_BIT       (0u)
#define SCB_UCFSR_R_UNDEFINSTR_NOOCCUR   (0x00000000u)
#define SCB_UCFSR_R_UNDEFINSTR_OCCUR     (0x00000001u)
#define SCB_UCFSR_R_UNDEFINSTR_CLEAR     (0x00000001u)

#define SCB_UCFSR_UNDEFINSTR_MASK        (0x00000001u)
#define SCB_UCFSR_UNDEFINSTR_NOOCCUR     (0x00000000u)
#define SCB_UCFSR_UNDEFINSTR_OCCUR       (0x00000001u)
#define SCB_UCFSR_UNDEFINSTR_CLEAR       (0x00000001u)
/*----------*/
/*----------*/
#define SCB_UCFSR_R_INVSTATE_MASK      (0x00000002u)
#define SCB_UCFSR_R_INVSTATE_BIT       (1u)
#define SCB_UCFSR_R_INVSTATE_NOOCCUR   (0x00000000u)
#define SCB_UCFSR_R_INVSTATE_OCCUR     (0x00000002u)
#define SCB_UCFSR_R_INVSTATE_CLEAR     (0x00000002u)

#define SCB_UCFSR_INVSTATE_MASK        (0x00000001u)
#define SCB_UCFSR_INVSTATE_NOOCCUR     (0x00000000u)
#define SCB_UCFSR_INVSTATE_OCCUR       (0x00000001u)
#define SCB_UCFSR_INVSTATE_CLEAR       (0x00000001u)
/*----------*/


/*----------*/
#define SCB_UCFSR_R_INVPC_MASK      (0x00000004u)
#define SCB_UCFSR_R_INVPC_BIT       (2u)
#define SCB_UCFSR_R_INVPC_NOOCCUR   (0x00000000u)
#define SCB_UCFSR_R_INVPC_OCCUR     (0x00000004u)
#define SCB_UCFSR_R_INVPC_CLEAR     (0x00000004u)

#define SCB_UCFSR_INVPC_MASK        (0x00000001u)
#define SCB_UCFSR_INVPC_NOOCCUR     (0x00000000u)
#define SCB_UCFSR_INVPC_OCCUR       (0x00000001u)
#define SCB_UCFSR_INVPC_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_UCFSR_R_NOCP_MASK      (0x00000008u)
#define SCB_UCFSR_R_NOCP_BIT       (3u)
#define SCB_UCFSR_R_NOCP_NOOCCUR   (0x00000000u)
#define SCB_UCFSR_R_NOCP_OCCUR     (0x00000008u)
#define SCB_UCFSR_R_NOCP_CLEAR     (0x00000008u)

#define SCB_UCFSR_NOCP_MASK        (0x00000001u)
#define SCB_UCFSR_NOCP_NOOCCUR     (0x00000000u)
#define SCB_UCFSR_NOCP_OCCUR       (0x00000001u)
#define SCB_UCFSR_NOCP_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_UCFSR_R_UNALIGNED_MASK      (0x00000100u)
#define SCB_UCFSR_R_UNALIGNED_BIT       (8u)
#define SCB_UCFSR_R_UNALIGNED_NOOCCUR   (0x00000000u)
#define SCB_UCFSR_R_UUNALIGNED_OCCUR    (0x00000100u)
#define SCB_UCFSR_R_UNALIGNED_CLEAR     (0x00000100u)

#define SCB_UCFSR_UNALIGNED_MASK        (0x00000001u)
#define SCB_UCFSR_UNALIGNED_NOOCCUR     (0x00000000u)
#define SCB_UCFSR_UNALIGNED_OCCUR       (0x00000001u)
#define SCB_UCFSR_UNALIGNED_CLEAR       (0x00000001u)
/*----------*/


/*----------*/
#define SCB_UCFSR_R_DIVBYZERO_MASK      (0x00000200u)
#define SCB_UCFSR_R_DIVBYZERO_BIT       (9u)
#define SCB_UCFSR_R_DIVBYZERO_NOOCCUR   (0x00000000u)
#define SCB_UCFSR_R_DIVBYZERO_OCCUR     (0x00000200u)
#define SCB_UCFSR_R_DIVBYZERO_CLEAR     (0x00000200u)

#define SCB_UCFSR_DIVBYZERO_MASK        (0x00000001u)
#define SCB_UCFSR_DIVBYZERO_NOOCCUR     (0x00000000u)
#define SCB_UCFSR_DIVBYZERO_OCCUR       (0x00000001u)
#define SCB_UCFSR_DIVBYZERO_CLEAR       (0x00000001u)
/*----------*/

/********************************************************************************************/
/************************************* 13_2 BCFSR ***********************************************/
/********************************************************************************************/
#define SCB_BCFSR            (((BCFSR_TypeDef*)(SCB_BASE+SCB_BCFSR_OFFSET )))
#define SCB_BCFSR_R          (*((volatile uint8_t *)(SCB_BASE+SCB_BCFSR_OFFSET)))

/*----------*/
#define SCB_BCFSR_R_IBUSERR_MASK      (0x00000001u)
#define SCB_BCFSR_R_IBUSERR_BIT       (0u)
#define SCB_BCFSR_R_IBUSERR_NOOCCUR   (0x00000000u)
#define SCB_BCFSR_R_IBUSERR_OCCUR     (0x00000001u)
#define SCB_BCFSR_R_IBUSERR_CLEAR     (0x00000001u)

#define SCB_BCFSR_IBUSERR_MASK        (0x00000001u)
#define SCB_BCFSR_IBUSERR_NOOCCUR     (0x00000000u)
#define SCB_BCFSR_IBUSERR_OCCUR       (0x00000001u)
#define SCB_BCFSR_IBUSERR_CLEAR       (0x00000001u)
/*----------*/


/*----------*/
#define SCB_BCFSR_R_PRECISERR_MASK      (0x00000002u)
#define SCB_BCFSR_R_PRECISERR_BIT       (1u)
#define SCB_BCFSR_R_PRECISERR_NOOCCUR   (0x00000000u)
#define SCB_BCFSR_R_PRECISERR_OCCUR     (0x00000002u)
#define SCB_BCFSR_R_PRECISERR_CLEAR     (0x00000002u)

#define SCB_BCFSR_PRECISERR_MASK        (0x00000001u)
#define SCB_BCFSR_PRECISERR_NOOCCUR     (0x00000000u)
#define SCB_BCFSR_PRECISERR_OCCUR       (0x00000001u)
#define SCB_BCFSR_PRECISERR_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_BCFSR_R_IMPRECISERR_MASK      (0x00000004u)
#define SCB_BCFSR_R_IMPRECISERR_BIT       (2u)
#define SCB_BCFSR_R_IMPRECISERR_NOOCCUR   (0x00000000u)
#define SCB_BCFSR_R_IMPRECISERR_OCCUR     (0x00000004u)
#define SCB_BCFSR_R_IMPRECISERR_CLEAR     (0x00000004u)

#define SCB_BCFSR_IMPRECISERR_MASK        (0x00000001u)
#define SCB_BCFSR_IMPRECISERR_NOOCCUR     (0x00000000u)
#define SCB_BCFSR_IMPRECISERR_OCCUR       (0x00000001u)
#define SCB_BCFSR_IMPRECISERR_CLEAR       (0x00000001u)
/*----------*/


/*----------*/
#define SCB_BCFSR_R_UNSTKERR_MASK      (0x00000008u)
#define SCB_BCFSR_R_UNSTKERR_BIT       (3u)
#define SCB_BCFSR_R_UNSTKERR_NOOCCUR   (0x00000000u)
#define SCB_BCFSR_R_UNSTKERR_OCCUR     (0x00000008u)
#define SCB_BCFSR_R_UNSTKERR_CLEAR     (0x00000008u)

#define SCB_BCFSR_UNSTKERR_MASK        (0x00000001u)
#define SCB_BCFSR_UNSTKERR_NOOCCUR     (0x00000000u)
#define SCB_BCFSR_UNSTKERR_OCCUR       (0x00000001u)
#define SCB_BCFSR_UNSTKERR_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_BCFSR_R_STKERR_MASK      (0x00000010u)
#define SCB_BCFSR_R_STKERR_BIT       (4u)
#define SCB_BCFSR_R_STKERR_NOOCCUR   (0x00000000u)
#define SCB_BCFSR_R_STKERR_OCCUR     (0x00000010u)
#define SCB_BCFSR_R_STKERR_CLEAR     (0x00000010u)

#define SCB_BCFSR_STKERR_MASK        (0x00000001u)
#define SCB_BCFSR_STKERR_NOOCCUR     (0x00000000u)
#define SCB_BCFSR_STKERR_OCCUR       (0x00000001u)
#define SCB_BCFSR_STKERR_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_BCFSR_R_LSPERR_MASK      (0x00000020u)
#define SCB_BCFSR_R_LSPERR_BIT       (5u)
#define SCB_BCFSR_R_LSPERR_NOOCCUR   (0x00000000u)
#define SCB_BCFSR_R_LSPERR_OCCUR     (0x00000020u)
#define SCB_BCFSR_R_LSPERR_CLEAR     (0x00000020u)

#define SCB_BCFSR_LSPERR_MASK        (0x00000001u)
#define SCB_BCFSR_LSPERR_NOOCCUR     (0x00000000u)
#define SCB_BCFSR_LSPERR_OCCUR       (0x00000001u)
#define SCB_BCFSR_LSPERR_CLEAR       (0x00000001u)
/*----------*/


/*----------*/
#define SCB_BCFSR_R_BFARVALID_MASK      (0x00000080u)
#define SCB_BCFSR_R_BFARVALID_BIT       (7u)
#define SCB_BCFSR_R_BFARVALID_NOVALID   (0x00000000u)
#define SCB_BCFSR_R_BFARVALID_VALID     (0x00000080u)
#define SCB_BCFSR_R_BFARVALID_CLEAR     (0x00000080u)

#define SCB_BCFSR_BFARVALID_MASK        (0x00000001u)
#define SCB_BCFSR_BFARVALID_NOVALID     (0x00000000u)
#define SCB_BCFSR_BFARVALID_VALID       (0x00000001u)
#define SCB_BCFSR_BFARVALID_CLEAR       (0x00000001u)
/*----------*/

/********************************************************************************************/
/************************************* 13_3 MCFSR ***********************************************/
/********************************************************************************************/
#define SCB_MCFSR            (((MCFSR_TypeDef*)(SCB_BASE+SCB_MCFSR_OFFSET )))
#define SCB_MCFSR_R          (*((volatile uint8_t *)(SCB_BASE+SCB_MCFSR_OFFSET)))

/*----------*/
#define SCB_MCFSR_R_IACCVIOL_MASK      (0x00000001u)
#define SCB_MCFSR_R_IACCVIOL_BIT       (0u)
#define SCB_MCFSR_R_IACCVIOL_NOOCCUR   (0x00000000u)
#define SCB_MCFSR_R_IACCVIOL_OCCUR     (0x00000001u)
#define SCB_MCFSR_R_IACCVIOL_CLEAR     (0x00000001u)

#define SCB_MCFSR_IACCVIOL_MASK        (0x00000001u)
#define SCB_MCFSR_IACCVIOL_NOOCCUR     (0x00000000u)
#define SCB_MCFSR_IACCVIOL_OCCUR       (0x00000001u)
#define SCB_MCFSR_IACCVIOL_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_MCFSR_R_DACCVIOL_MASK      (0x00000002u)
#define SCB_MCFSR_R_DACCVIOL_BIT       (1u)
#define SCB_MCFSR_R_DACCVIOL_NOOCCUR   (0x00000000u)
#define SCB_MCFSR_R_DACCVIOL_OCCUR     (0x00000002u)
#define SCB_MCFSR_R_DACCVIOL_CLEAR     (0x00000002u)

#define SCB_MCFSR_DACCVIOL_MASK        (0x00000001u)
#define SCB_MCFSR_DACCVIOL_NOOCCUR     (0x00000000u)
#define SCB_MCFSR_DACCVIOL_OCCUR       (0x00000001u)
#define SCB_MCFSR_DACCVIOL_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_MCFSR_R_MUNSTKERR_MASK      (0x00000008u)
#define SCB_MCFSR_R_MUNSTKERR_BIT       (3u)
#define SCB_MCFSR_R_MUNSTKERR_NOOCCUR   (0x00000000u)
#define SCB_MCFSR_R_MUNSTKERR_OCCUR     (0x00000008u)
#define SCB_MCFSR_R_MUNSTKERR_CLEAR     (0x00000008u)

#define SCB_MCFSR_MUNSTKERR_MASK        (0x00000001u)
#define SCB_MCFSR_MUNSTKERR_NOOCCUR     (0x00000000u)
#define SCB_MCFSR_MUNSTKERR_OCCUR       (0x00000001u)
#define SCB_MCFSR_MUNSTKERR_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_MCFSR_R_MSTKERR_MASK      (0x00000010u)
#define SCB_MCFSR_R_MSTKERR_BIT       (4u)
#define SCB_MCFSR_R_MSTKERR_NOOCCUR   (0x00000000u)
#define SCB_MCFSR_R_MSTKERR_OCCUR     (0x00000010u)
#define SCB_MCFSR_R_MSTKERR_CLEAR     (0x00000010u)

#define SCB_MCFSR_MSTKERR_MASK        (0x00000001u)
#define SCB_MCFSR_MSTKERR_NOOCCUR     (0x00000000u)
#define SCB_MCFSR_MSTKERR_OCCUR       (0x00000001u)
#define SCB_MCFSR_MSTKERR_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_MCFSR_R_MLSPERR_MASK      (0x00000020u)
#define SCB_MCFSR_R_MLSPERR_BIT       (5u)
#define SCB_MCFSR_R_MLSPERR_NOOCCUR   (0x00000000u)
#define SCB_MCFSR_R_MLSPERR_OCCUR     (0x00000020u)
#define SCB_MCFSR_R_MLSPERR_CLEAR     (0x00000020u)

#define SCB_MCFSR_MLSPERR_MASK        (0x00000001u)
#define SCB_MCFSR_MLSPERR_NOOCCUR     (0x00000000u)
#define SCB_MCFSR_MLSPERR_OCCUR       (0x00000001u)
#define SCB_MCFSR_MLSPERR_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_MCFSR_R_MMARVALID_MASK      (0x00000080u)
#define SCB_MCFSR_R_MMARVALID_BIT       (7u)
#define SCB_MCFSR_R_MMARVALID_NOVALID   (0x00000000u)
#define SCB_MCFSR_R_MMARVALID_VALID     (0x00000080u)
#define SCB_MCFSR_R_MMARVALID_CLEAR     (0x00000080u)

#define SCB_MCFSR_MMARVALID_MASK        (0x00000001u)
#define SCB_MCFSR_MMARVALID_NOVALID     (0x00000000u)
#define SCB_MCFSR_MMARVALID_VALID       (0x00000001u)
#define SCB_MCFSR_MMARVALID_CLEAR       (0x00000001u)
/*----------*/



/********************************************************************************************/
/************************************* 14 HFSR ***********************************************/
/********************************************************************************************/

#define SCB_HFSR            (((HFSR_TypeDef*)(SCB_BASE+SCB_HFSR_OFFSET )))
#define SCB_HFSR_R          (*((volatile uint32_t *)(SCB_BASE+SCB_HFSR_OFFSET)))


/*----------*/
#define SCB_HFSR_R_VECTTBL_MASK      (0x00000002u)
#define SCB_HFSR_R_VECTTBL_BIT       (1u)
#define SCB_HFSR_R_VECTTBL_NOOCCUR   (0x00000000u)
#define SCB_HFSR_R_VECTTBL_OCCUR     (0x00000002u)
#define SCB_HFSR_R_VECTTBL_CLEAR     (0x00000002u)

#define SCB_HFSR_VECTTBL_MASK        (0x00000001u)
#define SCB_HFSR_VECTTBL_NOOCCUR     (0x00000000u)
#define SCB_HFSR_VECTTBL_OCCUR       (0x00000001u)
#define SCB_HFSR_VECTTBL_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_HFSR_R_FORCED_MASK      (0x40000000u)
#define SCB_HFSR_R_FORCED_BIT       (30u)
#define SCB_HFSR_R_FORCED_NOOCCUR   (0x00000000u)
#define SCB_HFSR_R_FORCED_OCCUR     (0x40000000u)
#define SCB_HFSR_R_FORCED_CLEAR     (0x40000000u)

#define SCB_HFSR_FORCED_MASK        (0x00000001u)
#define SCB_HFSR_FORCED_NOOCCUR     (0x00000000u)
#define SCB_HFSR_FORCED_OCCUR       (0x00000001u)
#define SCB_HFSR_FORCED_CLEAR       (0x00000001u)
/*----------*/

/*----------*/
#define SCB_HFSR_R_DEBUGEVT_MASK      (0x80000000u)
#define SCB_HFSR_R_DEBUGEVT_BIT       (31u)

#define SCB_HFSR_DEBUGEVT_MASK        (0x1u)
/*----------*/



/********************************************************************************************/
/************************************* 15 MMFAR ***********************************************/
/********************************************************************************************/

#define SCB_MMFAR            (((MMFAR_TypeDef*)(SCB_BASE+SCB_MMFAR_OFFSET )))
#define SCB_MMFAR_R          (*((volatile uint32_t *)(SCB_BASE+SCB_MMFAR_OFFSET)))


/*----------*/
#define SCB_MMFAR_R_ADDRESS_MASK      (0xFFFFFFFFu)
#define SCB_MMFAR_R_ADDRESS_BIT       (0u)

#define SCB_MMFAR_ADDRESS_MASK        (0xFFFFFFFFu)
/*----------*/


/********************************************************************************************/
/************************************* 16 BFAR ***********************************************/
/********************************************************************************************/

#define SCB_BFAR            (((BFAR_TypeDef*)(SCB_BASE+SCB_BFAR_OFFSET )))
#define SCB_BFAR_R          (*((volatile uint32_t *)(SCB_BASE+SCB_BFAR_OFFSET)))

/*----------*/
#define SCB_BFAR_R_ADDRESS_MASK      (0xFFFFFFFFu)
#define SCB_BFAR_R_ADDRESS_BIT       (0u)

#define SCB_BFAR_ADDRESS_MASK        (0xFFFFFFFFu)
/*----------*/

/********************************************************************************************/
/************************************* 17 AFSR ***********************************************/
/********************************************************************************************/

#define SCB_AFSR            (((AFSR_TypeDef*)(SCB_BASE+SCB_AFSR_OFFSET )))
#define SCB_AFSR_R          (*((volatile uint32_t *)(SCB_BASE+SCB_AFSR_OFFSET)))

/*----------*/
#define SCB_AFSR_R_IMPDEF_MASK      (0xFFFFFFFFu)
#define SCB_AFSR_R_IMPDEF_BIT       (0u)

#define SCB_AFSR_IMPDEF_MASK        (0xFFFFFFFFu)
/*----------*/
/********************************************************************************************/
/************************************* 18 PFR0 ***********************************************/
/********************************************************************************************/

#define SCB_PFR0            (((PFR0_TypeDef*)(SCB_BASE+SCB_PFR0_OFFSET )))
#define SCB_PFR0_R          (*((volatile const uint32_t *)(SCB_BASE+SCB_PFR0_OFFSET)))

/********************************************************************************************/
/************************************* 19 PFR1 ***********************************************/
/********************************************************************************************/

#define SCB_PFR1            (((PFR1_TypeDef*)(SCB_BASE+SCB_PFR1_OFFSET )))
#define SCB_PFR1_R          (*((volatile const uint32_t *)(SCB_BASE+SCB_PFR1_OFFSET)))

/********************************************************************************************/
/************************************* 20 DFR0 ***********************************************/
/********************************************************************************************/

#define SCB_DFR0            (((DFR0_TypeDef*)(SCB_BASE+SCB_DFR0_OFFSET )))
#define SCB_DFR0_R          (*((volatile const uint32_t *)(SCB_BASE+SCB_DFR0_OFFSET)))

/********************************************************************************************/
/************************************* 21 AFR0 ***********************************************/
/********************************************************************************************/

#define SCB_AFR0            (((AFR0_TypeDef*)(SCB_BASE+SCB_AFR0_OFFSET )))
#define SCB_AFR0_R          (*((volatile const uint32_t *)(SCB_BASE+SCB_AFR0_OFFSET)))

/********************************************************************************************/
/************************************* 22 MMFR0 ***********************************************/
/********************************************************************************************/

#define SCB_MMFR0            (((MMFR0_TypeDef*)(SCB_BASE+SCB_MMFR0_OFFSET )))
#define SCB_MMFR0_R          (*((volatile const uint32_t *)(SCB_BASE+SCB_MMFR0_OFFSET)))

/********************************************************************************************/
/************************************* 23 MMFR1 ***********************************************/
/********************************************************************************************/

#define SCB_MMFR1            (((MMFR1_TypeDef*)(SCB_BASE+SCB_MMFR1_OFFSET )))
#define SCB_MMFR1_R          (*((volatile const uint32_t *)(SCB_BASE+SCB_MMFR1_OFFSET)))

/********************************************************************************************/
/************************************* 24 MMFR2 ***********************************************/
/********************************************************************************************/

#define SCB_MMFR2            (((MMFR2_TypeDef*)(SCB_BASE+SCB_MMFR2_OFFSET )))
#define SCB_MMFR2_R          (*((volatile const uint32_t *)(SCB_BASE+SCB_MMFR2_OFFSET)))

/********************************************************************************************/
/************************************* 25 MMFR3 ***********************************************/
/********************************************************************************************/

#define SCB_MMFR3            (((MMFR3_TypeDef*)(SCB_BASE+SCB_MMFR3_OFFSET )))
#define SCB_MMFR3_R          (*((volatile const uint32_t *)(SCB_BASE+SCB_MMFR3_OFFSET)))

/********************************************************************************************/
/************************************* 26 ISAR0 ***********************************************/
/********************************************************************************************/

#define SCB_ISAR0            (((ISAR0_TypeDef*)(SCB_BASE+SCB_ISAR0_OFFSET )))
#define SCB_ISAR0_R          (*((volatile const uint32_t *)(SCB_BASE+SCB_ISAR0_OFFSET)))

/********************************************************************************************/
/************************************* 27 ISAR1 ***********************************************/
/********************************************************************************************/

#define SCB_ISAR1            (((ISAR1_TypeDef*)(SCB_BASE+SCB_ISAR1_OFFSET )))
#define SCB_ISAR1_R          (*((volatile const uint32_t *)(SCB_BASE+SCB_ISAR1_OFFSET)))

/********************************************************************************************/
/************************************* 28 ISAR2 ***********************************************/
/********************************************************************************************/

#define SCB_ISAR2            (((ISAR2_TypeDef*)(SCB_BASE+SCB_ISAR2_OFFSET )))
#define SCB_ISAR2_R          (*((volatile const uint32_t *)(SCB_BASE+SCB_ISAR2_OFFSET)))

/********************************************************************************************/
/************************************* 29 ISAR3 ***********************************************/
/********************************************************************************************/

#define SCB_ISAR3            (((ISAR3_TypeDef*)(SCB_BASE+SCB_ISAR3_OFFSET )))
#define SCB_ISAR3_R          (*((volatile const uint32_t *)(SCB_BASE+SCB_ISAR3_OFFSET)))

/********************************************************************************************/
/************************************* 30 ISAR4 ***********************************************/
/********************************************************************************************/

#define SCB_ISAR4            (((ISAR4_TypeDef*)(SCB_BASE+SCB_ISAR4_OFFSET )))
#define SCB_ISAR4_R          (*((volatile const uint32_t *)(SCB_BASE+SCB_ISAR4_OFFSET)))




typedef enum
{
    SCB_enOK=0u,
    SCB_enERROR=1u,
}SCB_nSTATUS;

typedef enum
{
    SCB_enPRIGROUP_XXX =0u,
    SCB_enPRIGROUP_XXY =1u,
    SCB_enPRIGROUP_XYY =2u,
    SCB_enPRIGROUP_YYY =3u,
    SCB_enPRIGROUP_ERROR =0xFFu,
}SCB_nPRIGROUP;

typedef enum
{
    SCB_enNOPENDING=0u,
    SCB_enPENDING=1u,
}SCB_nPENDSTATE;

typedef enum
{
    SCB_enUCFSR_UNDEFINSTR=0x0001u,
    SCB_enUCFSR_INVSTATE=0x0002u,
    SCB_enUCFSR_INVPC=0x0004u,
    SCB_enUCFSR_NOCP=0x0008u,
    SCB_enUCFSR_UNALIGNED=0x0100u,
    SCB_enUCFSR_DIVBYZERO=0x0200u,
}SCB_nUCFSR;

typedef enum
{
    SCB_enBCFSR_BFARVALID=0x80u,
    SCB_enBCFSR_LSPERR=0x20u,
    SCB_enBCFSR_STKERR=0x10u,
    SCB_enBCFSR_UNSTKERR=0x08u,
    SCB_enBCFSR_IMPRECISERR=0x04u,
    SCB_enBCFSR_PRECISERR=0x02u,
    SCB_enBCFSR_IBUSERR=0x01u,
}SCB_nBCFSR;

typedef enum
{
    SCB_enMCFSR_MMARVALID=0x80u,
    SCB_enMCFSR_MLSPERR=0x20u,
    SCB_enMCFSR_MSTKERR=0x10u,
    SCB_enMCFSR_MUNSTKERR=0x08u,
    SCB_enMCFSR_DACCVIOL=0x02u,
    SCB_enMCFSR_IACCVIOL=0x01u,
}SCB_nMCFSR;

typedef enum
{
    SCB_enSHPR0 =0u,
    SCB_enSHPR1 =1u,
    SCB_enSHPR2 =2u,
    SCB_enSHPR3 =3u,
    SCB_enSHPR4 =4u,
    SCB_enSHPR5 =5u,
    SCB_enSHPR6 =6u,
    SCB_enSHPR7 =7u,
}SCB_nSHPR;

typedef enum
{
    SCB_enALIGN_4BYTE =0u,
    SCB_enALIGN_8BYTE =1u,
    SCB_enALIGN_ERROR =0xFFu,
}SCB_nAlignment;

typedef enum
{
    SCB_enWAKEUP_ONLY =0u,
    SCB_enWAKEUP_ALL   =1u,
    SCB_enWAKEUP_ERROR   =0xFFu,
}SCB_nWAKEUPSOURCE;

typedef enum
{
    SCB_enSLEEPONEXIT_NOSLEEP =0u,
    SCB_enSLEEPONEXIT_SLEEP   =1u,
    SCB_enSLEEPONEXIT_ERROR   =0xFFu,
}SCB_nSLEEPONEXIT;

typedef enum
{
    SCB_enSleepDeep_Sleep=0u,
    SCB_enSleepDeep_DeepSleep=1u,
    SCB_enSleepDeep_ERROR=0xFFu,
}SCB_nSleepDeep;

typedef enum
{
 SCB_enVECISR_THREAD      =(0x00000000u),
 SCB_enVECISR_RESET      =(0x00000001u),
 SCB_enVECISR_NMI        =(0x00000002u),
 SCB_enVECISR_HARDFAULT  =(0x00000003u),
 SCB_enVECISR_MEMMANAGE  =(0x00000004u),
 SCB_enVECISR_BUSFAULT   =(0x00000005u),
 SCB_enVECISR_USAGEFAULT =(0x00000006u),
 SCB_enVECISR_RES7       =(0x00000007u),
 SCB_enVECISR_RES8       =(0x00000008u),
 SCB_enVECISR_RES9       =(0x00000009u),
 SCB_enVECISR_RES10      =(0x0000000Au),
 SCB_enVECISR_SVCALL     =(0x0000000Bu),
 SCB_enVECISR_DEBUGMON   =(0x0000000Cu),
 SCB_enVECISR_RES13      =(0x0000000Du),
 SCB_enVECISR_PENDSV     =(0x0000000Eu),
 SCB_enVECISR_SYSTICK    =(0x0000000Fu),
 SCB_enVECISR_GPIOA      =(0x00000010u),
 SCB_enVECISR_GPIOB      =(0x00000011u),
 SCB_enVECISR_GPIOC      =(0x00000012u),
 SCB_enVECISR_GPIOD      =(0x00000013u),
 SCB_enVECISR_GPIOE      =(0x00000014u),
 SCB_enVECISR_UART0      =(0x00000015u),
 SCB_enVECISR_UART1      =(0x00000016u),
 SCB_enVECISR_SSI0       =(0x00000017u),
 SCB_enVECISR_I2C0       =(0x00000018u),
 SCB_enVECISR_PWM0FAULT   =(0x00000019u),
 SCB_enVECISR_PWM0GEN0    =(0x0000001Au),
 SCB_enVECISR_PWM0GEN1    =(0x0000001Bu),
 SCB_enVECISR_PWM0GEN2    =(0x0000001Cu),
 SCB_enVECISR_QEI0       =(0x0000001Du),
 SCB_enVECISR_ADC0SEQ0   =(0x0000001Eu),
 SCB_enVECISR_ADC0SEQ1   =(0x0000001Fu),
 SCB_enVECISR_ADC0SEQ2   =(0x00000020u),
 SCB_enVECISR_ADC0SEQ3   =(0x00000021u),
 SCB_enVECISR_WDT01      =(0x00000022u),
 SCB_enVECISR_TIMER0A    =(0x00000023u),
 SCB_enVECISR_TIMER0B    =(0x00000024u),
 SCB_enVECISR_TIMER1A    =(0x00000025u),
 SCB_enVECISR_TIMER1B    =(0x00000026u),
 SCB_enVECISR_TIMER2A    =(0x00000027u),
 SCB_enVECISR_TIMER2B    =(0x00000028u),
 SCB_enVECISR_ACOMP0     =(0x00000029u),
 SCB_enVECISR_ACOMP1     =(0x0000002Au),
 SCB_enVECISR_RES43      =(0x0000002Bu),
 SCB_enVECISR_SYSCTL     =(0x0000002Cu),
 SCB_enVECISR_FLASH      =(0x0000002Du),
 SCB_enVECISR_GPIOF      =(0x0000002Eu),
 SCB_enVECISR_RES47      =(0x0000002Fu),
 SCB_enVECISR_RES48      =(0x00000030u),
 SCB_enVECISR_UART2      =(0x00000031u),
 SCB_enVECISR_SSI1       =(0x00000032u),
 SCB_enVECISR_TIMER3A    =(0x00000033u),
 SCB_enVECISR_TIMER3B    =(0x00000034u),
 SCB_enVECISR_I2C1       =(0x00000035u),
 SCB_enVECISR_QEI1       =(0x00000036u),
 SCB_enVECISR_CAN0       =(0x00000037u),
 SCB_enVECISR_CAN1       =(0x00000038u),
 SCB_enVECISR_RES57      =(0x00000039u),
 SCB_enVECISR_RES58      =(0x0000003Au),
 SCB_enVECISR_HIB        =(0x0000003Bu),
 SCB_enVECISR_USB        =(0x0000003Cu),
 SCB_enVECISR_PWM0GEN3   =(0x0000003Du),
 SCB_enVECISR_UDMASOFT   =(0x0000003Eu),
 SCB_enVECISR_UDMAERROR  =(0x0000003Fu),
 SCB_enVECISR_ADC1SEQ0   =(0x00000040u),
 SCB_enVECISR_ADC1SEQ1   =(0x00000041u),
 SCB_enVECISR_ADC1SEQ2   =(0x00000042u),
 SCB_enVECISR_ADC1SEQ3   =(0x00000043u),
 SCB_enVECISR_RES68      =(0x00000044u),
 SCB_enVECISR_RES69      =(0x00000045u),
 SCB_enVECISR_RES70      =(0x00000046u),
 SCB_enVECISR_RES71      =(0x00000047u),
 SCB_enVECISR_RES72      =(0x00000048u),
 SCB_enVECISR_SSI2       =(0x00000049u),
 SCB_enVECISR_SSI3       =(0x0000004Au),
 SCB_enVECISR_UART3      =(0x0000004Bu),
 SCB_enVECISR_UART4      =(0x0000004Cu),
 SCB_enVECISR_UART5      =(0x0000004Du),
 SCB_enVECISR_UART6      =(0x0000004Eu),
 SCB_enVECISR_UART7      =(0x0000004Fu),
 SCB_enVECISR_RES80      =(0x00000050u),
 SCB_enVECISR_RES81      =(0x00000051u),
 SCB_enVECISR_RES82      =(0x00000052u),
 SCB_enVECISR_RES83      =(0x00000053u),
 SCB_enVECISR_I2C2       =(0x00000054u),
 SCB_enVECISR_I2C3       =(0x00000055u),
 SCB_enVECISR_TIMER4A    =(0x00000056u),
 SCB_enVECISR_TIMER4B    =(0x00000057u),
 SCB_enVECISR_RES88      =(0x00000058u),
 SCB_enVECISR_RES89      =(0x00000059u),
 SCB_enVECISR_RES90      =(0x0000005Au),
 SCB_enVECISR_RES91      =(0x0000005Bu),
 SCB_enVECISR_RES92      =(0x0000005Cu),
 SCB_enVECISR_RES93      =(0x0000005Du),
 SCB_enVECISR_RES94      =(0x0000005Eu),
 SCB_enVECISR_RES95      =(0x0000005Fu),
 SCB_enVECISR_RES96      =(0x00000060u),
 SCB_enVECISR_RES97      =(0x00000061u),
 SCB_enVECISR_RES98      =(0x00000062u),
 SCB_enVECISR_RES99      =(0x00000063u),
 SCB_enVECISR_RES100     =(0x00000064u),
 SCB_enVECISR_RES101     =(0x00000065u),
 SCB_enVECISR_RES102     =(0x00000066u),
 SCB_enVECISR_RES103     =(0x00000067u),
 SCB_enVECISR_RES104     =(0x00000068u),
 SCB_enVECISR_RES105     =(0x00000069u),
 SCB_enVECISR_RES106     =(0x0000006Au),
 SCB_enVECISR_RES107     =(0x0000006Bu),
 SCB_enVECISR_TIMER5A    =(0x0000006Cu),
 SCB_enVECISR_TIMER5B    =(0x0000006Du),
 SCB_enVECISR_WTIMER0A   =(0x0000006Eu),
 SCB_enVECISR_WTIMER0B   =(0x0000006Fu),
 SCB_enVECISR_WTIMER1A   =(0x00000070u),
 SCB_enVECISR_WTIMER1B   =(0x00000071u),
 SCB_enVECISR_WTIMER2A   =(0x00000072u),
 SCB_enVECISR_WTIMER2B   =(0x00000073u),
 SCB_enVECISR_WTIMER3A   =(0x00000074u),
 SCB_enVECISR_WTIMER3B   =(0x00000075u),
 SCB_enVECISR_WTIMER4A   =(0x00000076u),
 SCB_enVECISR_WTIMER4B   =(0x00000077u),
 SCB_enVECISR_WTIMER5A   =(0x00000078u),
 SCB_enVECISR_WTIMER5B   =(0x00000079u),
 SCB_enVECISR_SYSEXC     =(0x0000007Au),
 SCB_enVECISR_RES123     =(0x0000007Bu),
 SCB_enVECISR_RES124     =(0x0000007Cu),
 SCB_enVECISR_RES125     =(0x0000007Du),
 SCB_enVECISR_RES126     =(0x0000007Eu),
 SCB_enVECISR_RES127     =(0x0000007Fu),
 SCB_enVECISR_RES128     =(0x00000080u),
 SCB_enVECISR_RES129     =(0x00000081u),
 SCB_enVECISR_RES130     =(0x00000082u),
 SCB_enVECISR_RES131     =(0x00000083u),
 SCB_enVECISR_RES132     =(0x00000084u),
 SCB_enVECISR_RES133     =(0x00000085u),
 SCB_enVECISR_RES134     =(0x00000086u),
 SCB_enVECISR_RES135     =(0x00000087u),
 SCB_enVECISR_RES136     =(0x00000088u),
 SCB_enVECISR_RES137     =(0x00000089u),
 SCB_enVECISR_RES138     =(0x0000008Au),
 SCB_enVECISR_RES139     =(0x0000008Bu),
 SCB_enVECISR_RES140     =(0x0000008Cu),
 SCB_enVECISR_RES141     =(0x0000008Du),
 SCB_enVECISR_RES142     =(0x0000008Eu),
 SCB_enVECISR_RES143     =(0x0000008Fu),
 SCB_enVECISR_RES144     =(0x00000090u),
 SCB_enVECISR_RES145     =(0x00000091u),
 SCB_enVECISR_RES146     =(0x00000092u),
 SCB_enVECISR_RES147     =(0x00000093u),
 SCB_enVECISR_RES148     =(0x00000094u),
 SCB_enVECISR_RES149     =(0x00000095u),
 SCB_enVECISR_PWM1GEN0   =(0x00000096u),
 SCB_enVECISR_PWM1GEN1   =(0x00000097u),
 SCB_enVECISR_PWM1GEN2   =(0x00000098u),
 SCB_enVECISR_PWM1GEN3   =(0x00000099u),
 SCB_enVECISR_PWM1FAULT  =(0x0000009Au),
}SCB_nVECISR;




void SCB_NMI__vSetPending(void);

void SCB_SysTick__vSetPending(void);
void SCB_SysTick__vClearPending(void);
SCB_nPENDSTATE SCB_SysTick__enGetPending(void);

void SCB_PENDSV__vSetPending(void);
void SCB_PENDSV__vClearPending(void);
SCB_nPENDSTATE SCB_PENDSV__enGetPending(void);


SCB_nPENDSTATE SCB_ISR__enGetPendingState(void);
SCB_nVECISR SCB_ISR__enGetVectorPending(void);
SCB_nVECISR SCB_ISR__enGetVectorActive(void);


void SCB__vSetVectorOffset(uint32_t u32Offset);

void SCB__vReqSysReset(void);
void SCB__vReqSysReset_Peripheral(void);
SCB_nSTATUS SCB__enSetPriorityGroup(SCB_nPRIGROUP enGroup);
SCB_nPRIGROUP SCB__enGetPriorityGroup(void);
SCB_nSTATUS SCB__enSetWakeUpSource(SCB_nWAKEUPSOURCE enSource);
SCB_nWAKEUPSOURCE SCB__enGetWakeUpSource(void);
SCB_nSTATUS SCB__enSetSleepMode(SCB_nSleepDeep enSleepMode);
SCB_nSleepDeep SCB__enGetSleepMode(void);
SCB_nSTATUS SCB__enSetSLEEPONEXIT(SCB_nSLEEPONEXIT enSleepMode);
SCB_nSLEEPONEXIT SCB__enGetSLEEPONEXIT(void);


SCB_nSTATUS SCB__enSetStackAligment(SCB_nAlignment enAlign);
SCB_nAlignment SCB__enGetStackAligment(void);
void SCB__vEnDIV0Trap(void);
void SCB__vDisDIV0Trap(void);
void SCB__vEnUnAlignTrap(void);
void SCB__vDisUnAlignTrap(void);
void SCB__vEnUnprivilegedSWTRIGGER(void);
void SCB__vDisUnprivilegedSWTRIGGER(void);


void SCB_UsageFault__vSetPriority(SCB_nSHPR enPriority);
SCB_nSHPR SCB_UsageFault__enGetPriority(void);
void SCB_BusFault__vSetPriority(SCB_nSHPR enPriority);
SCB_nSHPR SCB_BusFault__enGetPriority(void);
void SCB_MemoryFault__vSetPriority(SCB_nSHPR enPriority);
SCB_nSHPR SCB_MemoryFault__enGetPriority(void);
void SCB_SVCall__vSetPriority(SCB_nSHPR enPriority);
SCB_nSHPR SCB_SVCall__enGetPriority(void);
void SCB_SysTick__vSetPriority(SCB_nSHPR enPriority);
SCB_nSHPR SCB_SysTick__enGetPriority(void);
void SCB_PENDSV__vSetPriority(SCB_nSHPR enPriority);
SCB_nSHPR SCB_PENDSV__enGetPriority(void);


void SCB_UsageFault__vEnable(void);
void SCB_UsageFault__vDisable(void);
void SCB_BusFault__vEnable(void);
void SCB_BusFault__vDisable(void);
void SCB_MemoryFault__vEnable(void);
void SCB_MemoryFault__vDisable(void);


void SCB_SVCall__vSetPending(void);
void SCB_SVCall__vClearPending(void);
SCB_nPENDSTATE SCB_SVCall__enGetPending(void);
void SCB_BusFault__vSetPending(void);
void SCB_BusFault__vClearPending(void);
SCB_nPENDSTATE SCB_BusFault__enGetPending(void);
void SCB_MemoryFault__vSetPending(void);
void SCB_MemoryFault__vClearPending(void);
SCB_nPENDSTATE SCB_MemoryFault__enGetPending(void);
void SCB_UsageFault__vSetPending(void);
void SCB_UsageFault__vClearPending(void);
SCB_nPENDSTATE SCB_UsageFault__enGetPending(void);

uint32_t SCB_MemoryFault_u32GetAddress(void);
uint32_t SCB_BusFault_u32GetAddress(void);

void SCB__vEnableExceptions(void);
void SCB__vEnableTraps(void);

void SCB__vInit(void);

void SCB__vRegisterIRQVectorHandler(void (*Isr) (void),SCB_nVECISR enVector);
void SCB__vUnRegisterIRQVectorHandler(SCB_nVECISR enVector);

#endif /* SCB_H_ */
