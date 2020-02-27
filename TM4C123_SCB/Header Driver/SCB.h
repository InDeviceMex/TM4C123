/*
 * SCB.h
 *
 *  Created on: Jan 18, 2018
 *      Author: Lalo_Alvarez
 */

#ifndef SCB_H_
#define SCB_H_


#define SCB_BASE            (0xE000E000)

#include <stdint.h>

typedef volatile struct
{
    volatile uint32_t DISMCYC      :1;
    volatile uint32_t DISWBUF      :1;
    volatile uint32_t DISFOLD      :1;
    const    uint32_t reserved     :5;
    volatile uint32_t DISFPCA      :1;
    volatile uint32_t DISOOFP      :1;
    const    uint32_t reserved1    :22;
}ACTLR_TypeDef;


typedef volatile struct
{
    volatile const uint32_t REV      :4;
    volatile const uint32_t PARTNO   :12;
    volatile const uint32_t CON      :4;
    volatile const uint32_t VAR      :4;
    volatile const uint32_t IMP      :8;
}CPUID_TypeDef;

typedef volatile struct
{
    volatile const uint32_t VECACT       :8;
    const    uint32_t       reserved     :3;
    volatile const uint32_t RETBASE      :1;
    volatile const uint32_t VECPEND      :8;
    const    uint32_t       reserved1    :2;
    volatile const uint32_t ISRPEND      :1;
    volatile const uint32_t ISRPRE       :1;
    const    uint32_t       reserved2    :1;
    volatile uint32_t       PENDSTCLR    :1;
    volatile uint32_t       PENDSTSET    :1;
    volatile uint32_t       UNPENDSV     :1;
    volatile uint32_t       PENDSV       :1;
    const    uint32_t       reserved3    :2;
    volatile uint32_t       NMISET       :1;
}INTCTRL_TypeDef   ;

typedef volatile struct
{
    const    uint32_t reserved  :10;
    volatile uint32_t OFFSET    :22;
}VTABLE_TypeDef;



typedef volatile struct
{
    volatile uint32_t      VECTRESET       :1;
    volatile uint32_t      VECTCLRACT      :1;
    volatile uint32_t      SYSRESREQ       :1;
    const    uint32_t      reserved        :5;
    volatile uint32_t      PRIGROUP        :3;
    const    uint32_t      reserved1       :4;
    volatile const uint32_t ENDIANESS      :1;
    volatile uint32_t      VECTKEY         :16;
}APINT_TypeDef;




typedef volatile struct
{
    const    uint32_t reserved     :1;
    volatile uint32_t SLEEPEXIT    :1;
    volatile uint32_t SLEEPDEEP    :1;
    const    uint32_t reserved1    :1;
    volatile uint32_t SEVONPEND    :1;
    const    uint32_t reserved2    :27;
}SYSCTRL_TypeDef;



typedef volatile struct
{
    volatile uint32_t BASETHR      :1;
    volatile uint32_t MAINPEND     :1;
    const    uint32_t reserved     :1;
    volatile uint32_t UNALIGNED    :1;
    volatile uint32_t DIV0         :1;
    const    uint32_t reserved1    :3;
    volatile uint32_t BFHFNMIGN    :1;
    volatile uint32_t STKALIGN     :1;
    const    uint32_t reserved2    :22;
}CFGCTRL_TypeDef;


typedef volatile struct
{
    const    uint32_t reserved          :5;
    volatile uint32_t MEM               :3;
    const    uint32_t reserved1         :5;
    volatile uint32_t BUS               :3;
    const    uint32_t reserved2         :5;
    volatile uint32_t USAGE             :3;
    const    uint32_t reserved3         :8;
}SYSPRI1_TypeDef;


typedef volatile struct
{
    const    uint32_t reserved     :29 ;
    volatile uint32_t SVC          :3;
}SYSPRI2_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved     :5;
    volatile uint32_t DEBUG        :3;
    const    uint32_t reserved1    :13;
    volatile uint32_t PENDSV       :3;
    const    uint32_t reserved2    :5;
    volatile uint32_t TICK         :3;
}SYSPRI3_TypeDef;

typedef volatile struct
{
    volatile uint32_t MEMA       :1;
    volatile uint32_t BUSA       :1;
    const    uint32_t reserved   :1;
    volatile uint32_t USGA       :1;
    const    uint32_t reserved1  :3;
    volatile uint32_t SVCA       :1;
    volatile uint32_t MON        :1;
    const    uint32_t reserved2  :1;
    volatile uint32_t PNDSV      :1;
    volatile uint32_t TICK       :1;
    volatile uint32_t USAGEP     :1;
    volatile uint32_t MEMP       :1;
    volatile uint32_t BUSP       :1;
    volatile uint32_t SVC        :1;
    volatile uint32_t MEM        :1;
    volatile uint32_t BUS        :1;
    volatile uint32_t USAGE      :1;
    const    uint32_t reserved3  :13;
}SYSHNDCTRL_TypeDef;

typedef volatile struct
{
    volatile uint32_t IERR       :1;
    volatile uint32_t DERR       :1;
    const    uint32_t reserved   :1;
    volatile uint32_t MUSTKE     :1;
    volatile uint32_t MSTKE      :1;
    volatile uint32_t MLSPERR    :1;
    const    uint32_t reserved1  :1;
    volatile uint32_t MMARV      :1;
    volatile uint32_t IBUS       :1;
    volatile uint32_t PRECISE    :1;
    volatile uint32_t IMPRE      :1;
    volatile uint32_t BUSTKE     :1;
    volatile uint32_t BSTKE      :1;
    volatile uint32_t BLSPERR    :1;
    const    uint32_t reserved2  :1;
    volatile uint32_t BFARV      :1;
    volatile uint32_t UNDEF      :1;
    volatile uint32_t INVSTAT    :1;
    volatile uint32_t INVPC      :1;
    volatile uint32_t NOCP       :1;
    const    uint32_t reserved3  :4;
    volatile uint32_t UNALIGN    :1;
    volatile uint32_t DIV0       :1;
    const    uint32_t reserved4  :6;
}FAULTSTAT_TypeDef;


typedef volatile struct
{
    const    uint32_t reserved   :1;
    volatile uint32_t VECT       :1;
    const    uint32_t reserved1  :28;
    volatile uint32_t FORCED     :1;
    volatile uint32_t DBG        :1;
}HFAULTSTAT_TypeDef;


typedef volatile struct
{
    volatile uint32_t ADDR       :32;
}MMADDR_TypeDef;

typedef volatile struct
{
    volatile uint32_t ADDR       :32;
}FAULTADDR_TypeDef;


typedef volatile struct
{
    const uint32_t             reserved[2];
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
        volatile uint32_t      INTCTRL;
        INTCTRL_TypeDef             INTCTRL_Bit;
    };
    union
    {
        volatile uint32_t      VTABLE;
        VTABLE_TypeDef              VTABLE_Bit;
    };
    union
    {
        volatile uint32_t      APINT;
        APINT_TypeDef               APINT_Bit;
    };
    union
    {
        volatile uint32_t      SYSCTRL;
        SYSCTRL_TypeDef             SYSCTRL_Bit;
    };
    union
    {
        volatile uint32_t      CFGCTRL;
        CFGCTRL_TypeDef             CFGCTRL_Bit;
    };
    union
    {
        volatile uint32_t      SYSPRI1;
        SYSPRI1_TypeDef             SYSPRI1_Bit;
    };
    union
    {
        volatile uint32_t      SYSPRI2;
        SYSPRI2_TypeDef             SYSPRI2_Bit;
    };
    union
    {
        volatile uint32_t      SYSPRI3;
        SYSPRI3_TypeDef             SYSPRI3_Bit;
    };
    union
    {
        volatile uint32_t      SYSHNDCTRL;
        SYSHNDCTRL_TypeDef          SYSHNDCTRL_Bit;
    };
    union
    {
        volatile uint32_t      FAULTSTAT;
        FAULTSTAT_TypeDef           FAULTSTAT_Bit;
    };
    union
    {
        volatile uint32_t      HFAULTSTAT;
        HFAULTSTAT_TypeDef          HFAULTSTAT_Bit;
    };
    const uint32_t             reserved2[1];
    union
    {
        volatile uint32_t      MMADDR;
        MMADDR_TypeDef              MMADDR_Bit;
    };union
    {
        volatile uint32_t      FAULTADDR;
        FAULTADDR_TypeDef           FAULTADDR_Bit;
    };
    const uint32_t             reserved3[177];

}SCB_TypeDef;


#define SCB                 (((SCB_TypeDef*)(SCB_BASE)))



#define SCB_ACTLR_OFFSET       (0x0008)
#define SCB_CPUID_OFFSET       (0x0D00)
#define SCB_INTCTRL_OFFSET     (0x0D04)
#define SCB_VTABLE_OFFSET      (0x0D08)
#define SCB_APINT_OFFSET       (0x0D0C)
#define SCB_SYSCTRL_OFFSET     (0x0D10)
#define SCB_CFGCTRL_OFFSET     (0x0D14)
#define SCB_SYSPRI1_OFFSET     (0x0D18)
#define SCB_SYSPRI2_OFFSET     (0x0D1C)
#define SCB_SYSPRI3_OFFSET     (0x0D20)
#define SCB_SYSHNDCTRL_OFFSET  (0x0D24)
#define SCB_FAULTSTAT_OFFSET   (0x0D28)
#define SCB_BFAULTSTAT_OFFSET   (0x0D28)
#define SCB_UFAULTSTAT_OFFSET   (0x0D2A)
#define SCB_HFAULTSTAT_OFFSET  (0x0D2C)
#define SCB_MMADDR_OFFSET      (0x0D34)
#define SCB_FAULTADDR_OFFSET   (0x0D34)

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 ACTLR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SCB_ACTLR            (((ACTLR_TypeDef*)(SCB_BASE+SCB_ACTLR_OFFSET )))
#define SCB_ACTLR_R          (*((volatile uint32_t *)(SCB_BASE+SCB_ACTLR_OFFSET)))

//--------
#define SCB_ACTLR_R_DISMCYC_MASK    (0x00000001)
#define SCB_ACTLR_R_DISMCYC_BIT     (0)
#define SCB_ACTLR_R_DISMCYC_DIS     (0x00000001)
#define SCB_ACTLR_R_DISMCYC_NE      (0x00000000)

#define SCB_ACTLR_DISMCYC_MASK    (1)
#define SCB_ACTLR_DISMCYC_DIS     (1)
#define SCB_ACTLR_DISMCYC_NE      (0)
//--------

//--------
#define SCB_ACTLR_R_DISWBUF_MASK    (0x00000002)
#define SCB_ACTLR_R_DISWBUF_BIT     (1)
#define SCB_ACTLR_R_DISWBUF_DIS     (0x00000002)
#define SCB_ACTLR_R_DISWBUF_NE      (0x00000000)

#define SCB_ACTLR_DISWBUF_MASK    (1)
#define SCB_ACTLR_DISWBUF_DIS     (1)
#define SCB_ACTLR_DISWBUF_NE      (0)
//--------

//--------
#define SCB_ACTLR_R_DISFOLD_MASK    (0x00000004)
#define SCB_ACTLR_R_DISFOLD_BIT     (2)
#define SCB_ACTLR_R_DISFOLD_DIS     (0x00000004)
#define SCB_ACTLR_R_DISFOLD_NE      (0x00000000)

#define SCB_ACTLR_DISFOLD_MASK    (1)
#define SCB_ACTLR_DISFOLD_DIS     (1)
#define SCB_ACTLR_DISFOLD_NE      (0)
//--------

//--------
#define SCB_ACTLR_R_DISFPCA_MASK    (0x00000010)
#define SCB_ACTLR_R_DISFPCA_BIT     (4)
#define SCB_ACTLR_R_DISFPCA_DIS     (0x00000010)
#define SCB_ACTLR_R_DISFPCA_NE      (0x00000000)

#define SCB_ACTLR_DISFPCA_MASK    (1)
#define SCB_ACTLR_DISFPCA_DIS     (1)
#define SCB_ACTLR_DISFPCA_NE      (0)
//--------

//--------
#define SCB_ACTLR_R_DISOOFP_MASK    (0x00000020)
#define SCB_ACTLR_R_DISOOFP_BIT     (5)
#define SCB_ACTLR_R_DISOOFP_DIS     (0x00000020)
#define SCB_ACTLR_R_DISOOFP_NE      (0x00000000)

#define SCB_ACTLR_DISOOFP_MASK    (1)
#define SCB_ACTLR_DISOOFP_DIS     (1)
#define SCB_ACTLR_DISOOFP_NE      (0)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 CPUID ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SCB_CPUID            (((CPUID_TypeDef*)(SCB_BASE+SCB_CPUID_OFFSET )))
#define SCB_CPUID_R          (*((volatile const uint32_t *)(SCB_BASE+SCB_CPUID_OFFSET)))

//--------
#define SCB_CPUID_R_REV_MASK    (0x0000000F)
#define SCB_CPUID_R_REV_BIT     (0)
#define SCB_CPUID_R_REV_r0p0    (0x00000000)
#define SCB_CPUID_R_REV_r0p1    (0x00000001)
#define SCB_CPUID_R_REV_r0p2    (0x00000002)
#define SCB_CPUID_R_REV_r0p3    (0x00000003)
#define SCB_CPUID_R_REV_r0p4    (0x00000004)
#define SCB_CPUID_R_REV_r0p5    (0x00000005)
#define SCB_CPUID_R_REV_r0p6    (0x00000006)
#define SCB_CPUID_R_REV_r0p7    (0x00000007)
#define SCB_CPUID_R_REV_r0p8    (0x00000008)
#define SCB_CPUID_R_REV_r0p9    (0x00000009)
#define SCB_CPUID_R_REV_r0p10   (0x0000000A)
#define SCB_CPUID_R_REV_r0p11   (0x0000000B)
#define SCB_CPUID_R_REV_r0p12   (0x0000000C)
#define SCB_CPUID_R_REV_r0p13   (0x0000000D)
#define SCB_CPUID_R_REV_r0p14   (0x0000000E)
#define SCB_CPUID_R_REV_r0p15   (0x0000000F)


#define SCB_CPUID_REV_MASK        (0xF)
#define SCB_CPUID_REV_rnp0        (0x0)
#define SCB_CPUID_REV_rnp1        (0x1)
#define SCB_CPUID_REV_rnp2        (0x2)
#define SCB_CPUID_REV_rnp3        (0x3)
#define SCB_CPUID_REV_rnp4        (0x4)
#define SCB_CPUID_REV_rnp5        (0x5)
#define SCB_CPUID_REV_rnp6        (0x6)
#define SCB_CPUID_REV_rnp7        (0x7)
#define SCB_CPUID_REV_rnp8        (0x8)
#define SCB_CPUID_REV_rnp9        (0x9)
#define SCB_CPUID_REV_rnp10       (0xA)
#define SCB_CPUID_REV_rnp11       (0xB)
#define SCB_CPUID_REV_rnp12       (0xC)
#define SCB_CPUID_REV_rnp13       (0xD)
#define SCB_CPUID_REV_rnp14       (0xE)
#define SCB_CPUID_REV_rnp15       (0xF)
//--------

//--------
#define SCB_CPUID_R_PARTNO_MASK (0x0000FFF0)
#define SCB_CPUID_R_PARTNO_BIT  (4)
#define SCB_CPUID_R_PARTNO_M4   (0x0000C240)

#define SCB_CPUID_PARTNO_MASK    (0xFFF)
#define SCB_CPUID_PARTNO_M4      (0xC24)
//--------

//--------
#define SCB_CPUID_R_CON_MASK    (0x000F0000)
#define SCB_CPUID_R_CON_BIT     (16)
#define SCB_CPUID_R_CON_0XF     (0x000F0000)

#define SCB_CPUID_CON_MASK    (0xF)
#define SCB_CPUID_CON_0xF     (0xF)
//--------

//--------
#define SCB_CPUID_R_VAR_MASK    (0x00F00000)
#define SCB_CPUID_R_VAR_BIT     (20)
#define SCB_CPUID_R_VAR_r0pn    (0x00000000)
#define SCB_CPUID_R_VAR_r1pn    (0x00100000)
#define SCB_CPUID_R_VAR_r2pn    (0x00200000)
#define SCB_CPUID_R_VAR_r3pn    (0x00300000)
#define SCB_CPUID_R_VAR_r4pn    (0x00400000)
#define SCB_CPUID_R_VAR_r5pn    (0x00500000)
#define SCB_CPUID_R_VAR_r6pn    (0x00600000)
#define SCB_CPUID_R_VAR_r7pn    (0x00700000)
#define SCB_CPUID_R_VAR_r8pn    (0x00800000)
#define SCB_CPUID_R_VAR_r9pn    (0x00900000)
#define SCB_CPUID_R_VAR_r10pn   (0x00A00000)
#define SCB_CPUID_R_VAR_r11pn   (0x00B00000)
#define SCB_CPUID_R_VAR_r12pn   (0x00C00000)
#define SCB_CPUID_R_VAR_r13pn   (0x00D00000)
#define SCB_CPUID_R_VAR_r14pn   (0x00E00000)
#define SCB_CPUID_R_VAR_r15pn   (0x00F00000)


#define SCB_CPUID_VAR_MASK        (0xF)
#define SCB_CPUID_VAR_r0pn        (0x0)
#define SCB_CPUID_VAR_r1pn        (0x1)
#define SCB_CPUID_VAR_r2pn        (0x2)
#define SCB_CPUID_VAR_r3pn        (0x3)
#define SCB_CPUID_VAR_r4pn        (0x4)
#define SCB_CPUID_VAR_r5pn        (0x5)
#define SCB_CPUID_VAR_r6pn        (0x6)
#define SCB_CPUID_VAR_r7pn        (0x7)
#define SCB_CPUID_VAR_r8pn        (0x8)
#define SCB_CPUID_VAR_r9pn        (0x9)
#define SCB_CPUID_VAR_r10pn       (0xA)
#define SCB_CPUID_VAR_r11pn       (0xB)
#define SCB_CPUID_VAR_r12pn       (0xC)
#define SCB_CPUID_VAR_r13pn       (0xD)
#define SCB_CPUID_VAR_r14pn       (0xE)
#define SCB_CPUID_VAR_r15pn       (0xF)
//--------

//--------
#define SCB_CPUID_R_IMP_MASK    (0xFF000000)
#define SCB_CPUID_R_IMP_BIT     (24)
#define SCB_CPUID_R_IMP_ARM     (0x41000000)

#define SCB_CPUID_IMP_MASK    (0xFF)
#define SCB_CPUID_IMP_ARM     (0x41)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 INTCTLR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SCB_INTCTRL            (((INTCTRL_TypeDef*)(SCB_BASE+SCB_INTCTRL_OFFSET )))
#define SCB_INTCTRL_R          (*((volatile const uint32_t *)(SCB_BASE+SCB_INTCTRL_OFFSET)))

typedef enum
{
 SCB_enVECISR_THREAD      =(0x00000000),
 SCB_enVECISR_RESET      =(0x00000001),
 SCB_enVECISR_NMI        =(0x00000002),
 SCB_enVECISR_HARDFAULT  =(0x00000003),
 SCB_enVECISR_MEMMANAGE  =(0x00000004),
 SCB_enVECISR_BUSFAULT   =(0x00000005),
 SCB_enVECISR_USAGEFAULT =(0x00000006),
 SCB_enVECISR_RES7       =(0x00000007),
 SCB_enVECISR_RES8       =(0x00000008),
 SCB_enVECISR_RES9       =(0x00000009),
 SCB_enVECISR_RES10      =(0x0000000A),
 SCB_enVECISR_SVCALL     =(0x0000000B),
 SCB_enVECISR_DEBUGMON   =(0x0000000C),
 SCB_enVECISR_RES13      =(0x0000000D),
 SCB_enVECISR_PENDSV     =(0x0000000E),
 SCB_enVECISR_SYSTICK    =(0x0000000F),
 SCB_enVECISR_GPIOA      =(0x00000010),
 SCB_enVECISR_GPIOB      =(0x00000011),
 SCB_enVECISR_GPIOC      =(0x00000012),
 SCB_enVECISR_GPIOD      =(0x00000013),
 SCB_enVECISR_GPIOE      =(0x00000014),
 SCB_enVECISR_UART0      =(0x00000015),
 SCB_enVECISR_UART1      =(0x00000016),
 SCB_enVECISR_SSI0       =(0x00000017),
 SCB_enVECISR_I2C0       =(0x00000018),
 SCB_enVECISR_PWMFAULT   =(0x00000019),
 SCB_enVECISR_PWMGEN0    =(0x0000001A),
 SCB_enVECISR_PWMGEN1    =(0x0000001B),
 SCB_enVECISR_PWMGEN2    =(0x0000001C),
 SCB_enVECISR_QEI0       =(0x0000001D),
 SCB_enVECISR_ADC0SEQ0   =(0x0000001E),
 SCB_enVECISR_ADC0SEQ1   =(0x0000001F),
 SCB_enVECISR_ADC0SEQ2   =(0x00000020),
 SCB_enVECISR_ADC0SEQ3   =(0x00000021),
 SCB_enVECISR_WDT01      =(0x00000022),
 SCB_enVECISR_TIMER0A    =(0x00000023),
 SCB_enVECISR_TIMER0B    =(0x00000024),
 SCB_enVECISR_TIMER1A    =(0x00000025),
 SCB_enVECISR_TIMER1B    =(0x00000026),
 SCB_enVECISR_TIMER2A    =(0x00000027),
 SCB_enVECISR_TIMER2B    =(0x00000028),
 SCB_enVECISR_ACOMP0     =(0x00000029),
 SCB_enVECISR_ACOMP1     =(0x0000002A),
 SCB_enVECISR_RES43      =(0x0000002B),
 SCB_enVECISR_SYSCTL     =(0x0000002C),
 SCB_enVECISR_FLASH      =(0x0000002D),
 SCB_enVECISR_PORTF      =(0x0000002E),
 SCB_enVECISR_RES47      =(0x0000002F),
 SCB_enVECISR_RES48      =(0x00000030),
 SCB_enVECISR_UART2      =(0x00000031),
 SCB_enVECISR_SSI1       =(0x00000032),
 SCB_enVECISR_TIMER3A    =(0x00000033),
 SCB_enVECISR_TIMER3B    =(0x00000034),
 SCB_enVECISR_I2C1       =(0x00000035),
 SCB_enVECISR_QEI1       =(0x00000036),
 SCB_enVECISR_CAN0       =(0x00000037),
 SCB_enVECISR_CAN1       =(0x00000038),
 SCB_enVECISR_RES57      =(0x00000039),
 SCB_enVECISR_RES58      =(0x0000003A),
 SCB_enVECISR_HIB        =(0x0000003B),
 SCB_enVECISR_USB        =(0x0000003C),
 SCB_enVECISR_PWM0GEN3   =(0x0000003D),
 SCB_enVECISR_UDMASOFT   =(0x0000003E),
 SCB_enVECISR_UDMAERROR  =(0x0000003F),
 SCB_enVECISR_ADC1SEQ0   =(0x00000040),
 SCB_enVECISR_ADC1SEQ1   =(0x00000041),
 SCB_enVECISR_ADC1SEQ2   =(0x00000042),
 SCB_enVECISR_ADC1SEQ3   =(0x00000043),
 SCB_enVECISR_RES68      =(0x00000044),
 SCB_enVECISR_RES69      =(0x00000045),
 SCB_enVECISR_RES70      =(0x00000046),
 SCB_enVECISR_RES71      =(0x00000047),
 SCB_enVECISR_RES72      =(0x00000048),
 SCB_enVECISR_SSI2       =(0x00000049),
 SCB_enVECISR_SSI3       =(0x0000004A),
 SCB_enVECISR_UART3      =(0x0000004B),
 SCB_enVECISR_UART4      =(0x0000004C),
 SCB_enVECISR_UART5      =(0x0000004D),
 SCB_enVECISR_UART6      =(0x0000004E),
 SCB_enVECISR_UART7      =(0x0000004F),
 SCB_enVECISR_RES80      =(0x00000050),
 SCB_enVECISR_RES81      =(0x00000051),
 SCB_enVECISR_RES82      =(0x00000052),
 SCB_enVECISR_RES83      =(0x00000053),
 SCB_enVECISR_I2C2       =(0x00000054),
 SCB_enVECISR_I2C3       =(0x00000055),
 SCB_enVECISR_TIMER4A    =(0x00000056),
 SCB_enVECISR_TIMER4B    =(0x00000057),
 SCB_enVECISR_RES88      =(0x00000058),
 SCB_enVECISR_RES89      =(0x00000059),
 SCB_enVECISR_RES90      =(0x0000005A),
 SCB_enVECISR_RES91      =(0x0000005B),
 SCB_enVECISR_RES92      =(0x0000005C),
 SCB_enVECISR_RES93      =(0x0000005D),
 SCB_enVECISR_RES94      =(0x0000005E),
 SCB_enVECISR_RES95      =(0x0000005F),
 SCB_enVECISR_RES96      =(0x00000060),
 SCB_enVECISR_RES97      =(0x00000061),
 SCB_enVECISR_RES98      =(0x00000062),
 SCB_enVECISR_RES99      =(0x00000063),
 SCB_enVECISR_RES100     =(0x00000064),
 SCB_enVECISR_RES101     =(0x00000065),
 SCB_enVECISR_RES102     =(0x00000066),
 SCB_enVECISR_RES103     =(0x00000067),
 SCB_enVECISR_RES104     =(0x00000068),
 SCB_enVECISR_RES105     =(0x00000069),
 SCB_enVECISR_RES106     =(0x0000006A),
 SCB_enVECISR_RES107     =(0x0000006B),
 SCB_enVECISR_TIMER5A    =(0x0000006C),
 SCB_enVECISR_TIMER5B    =(0x0000006D),
 SCB_enVECISR_WTIMER0A   =(0x0000006E),
 SCB_enVECISR_WTIMER0B   =(0x0000006F),
 SCB_enVECISR_WTIMER1A   =(0x00000070),
 SCB_enVECISR_WTIMER1B   =(0x00000071),
 SCB_enVECISR_WTIMER2A   =(0x00000072),
 SCB_enVECISR_WTIMER2B   =(0x00000073),
 SCB_enVECISR_WTIMER3A   =(0x00000074),
 SCB_enVECISR_WTIMER3B   =(0x00000075),
 SCB_enVECISR_WTIMER4A   =(0x00000076),
 SCB_enVECISR_WTIMER4B   =(0x00000077),
 SCB_enVECISR_WTIMER5A   =(0x00000078),
 SCB_enVECISR_WTIMER5B   =(0x00000079),
 SCB_enVECISR_SYSEXC     =(0x0000007A),
 SCB_enVECISR_RES123     =(0x0000007B),
 SCB_enVECISR_RES124     =(0x0000007C),
 SCB_enVECISR_RES125     =(0x0000007D),
 SCB_enVECISR_RES126     =(0x0000007E),
 SCB_enVECISR_RES127     =(0x0000007F),
 SCB_enVECISR_RES128     =(0x00000080),
 SCB_enVECISR_RES129     =(0x00000081),
 SCB_enVECISR_RES130     =(0x00000082),
 SCB_enVECISR_RES131     =(0x00000083),
 SCB_enVECISR_RES132     =(0x00000084),
 SCB_enVECISR_RES133     =(0x00000085),
 SCB_enVECISR_RES134     =(0x00000086),
 SCB_enVECISR_RES135     =(0x00000087),
 SCB_enVECISR_RES136     =(0x00000088),
 SCB_enVECISR_RES137     =(0x00000089),
 SCB_enVECISR_RES138     =(0x0000008A),
 SCB_enVECISR_RES139     =(0x0000008B),
 SCB_enVECISR_RES140     =(0x0000008C),
 SCB_enVECISR_RES141     =(0x0000008D),
 SCB_enVECISR_RES142     =(0x0000008E),
 SCB_enVECISR_RES143     =(0x0000008F),
 SCB_enVECISR_RES144     =(0x00000090),
 SCB_enVECISR_RES145     =(0x00000091),
 SCB_enVECISR_RES146     =(0x00000092),
 SCB_enVECISR_RES147     =(0x00000093),
 SCB_enVECISR_RES148     =(0x00000094),
 SCB_enVECISR_RES149     =(0x00000095),
 SCB_enVECISR_PWM1GEN0   =(0x00000096),
 SCB_enVECISR_PWM1GEN1   =(0x00000097),
 SCB_enVECISR_PWM1GEN2   =(0x00000098),
 SCB_enVECISR_PWM1GEN3   =(0x00000099),
 SCB_enVECISR_PWM1FAULT  =(0x0000009A),
}SCB_nVECISR;



//--------
#define SCB_INTCTRL_R_VECACT_MASK       (0x000000FF)
#define SCB_INTCTRL_R_VECACT_BIT        (0)
#define SCB_INTCTRL_R_VECACT_STACK      (0x00000000)
#define SCB_INTCTRL_R_VECACT_RESET      (0x00000001)
#define SCB_INTCTRL_R_VECACT_NMI        (0x00000002)
#define SCB_INTCTRL_R_VECACT_HARDFAULT  (0x00000003)
#define SCB_INTCTRL_R_VECACT_MEMMANAGE  (0x00000004)
#define SCB_INTCTRL_R_VECACT_BUSFAULT   (0x00000005)
#define SCB_INTCTRL_R_VECACT_USAGEFAULT (0x00000006)
#define SCB_INTCTRL_R_VECACT_RES7       (0x00000007)
#define SCB_INTCTRL_R_VECACT_RES8       (0x00000008)
#define SCB_INTCTRL_R_VECACT_RES9       (0x00000009)
#define SCB_INTCTRL_R_VECACT_RES10      (0x0000000A)
#define SCB_INTCTRL_R_VECACT_SVCALL     (0x0000000B)
#define SCB_INTCTRL_R_VECACT_DEBUGMON   (0x0000000C)
#define SCB_INTCTRL_R_VECACT_RES13      (0x0000000D)
#define SCB_INTCTRL_R_VECACT_PENDSV     (0x0000000E)
#define SCB_INTCTRL_R_VECACT_SYSTICK    (0x0000000F)
#define SCB_INTCTRL_R_VECACT_GPIOA      (0x00000010)
#define SCB_INTCTRL_R_VECACT_GPIOB      (0x00000011)
#define SCB_INTCTRL_R_VECACT_GPIOC      (0x00000012)
#define SCB_INTCTRL_R_VECACT_GPIOD      (0x00000013)
#define SCB_INTCTRL_R_VECACT_GPIOE      (0x00000014)
#define SCB_INTCTRL_R_VECACT_UART0      (0x00000015)
#define SCB_INTCTRL_R_VECACT_UART1      (0x00000016)
#define SCB_INTCTRL_R_VECACT_SSI0       (0x00000017)
#define SCB_INTCTRL_R_VECACT_I2C0       (0x00000018)
#define SCB_INTCTRL_R_VECACT_PWM0FAULT  (0x00000019)
#define SCB_INTCTRL_R_VECACT_PWM0GEN0   (0x0000001A)
#define SCB_INTCTRL_R_VECACT_PWM0GEN1   (0x0000001B)
#define SCB_INTCTRL_R_VECACT_PWM0GEN2   (0x0000001C)
#define SCB_INTCTRL_R_VECACT_QEI0       (0x0000001D)
#define SCB_INTCTRL_R_VECACT_ADC0SEQ0   (0x0000001E)
#define SCB_INTCTRL_R_VECACT_ADC0SEQ1   (0x0000001F)
#define SCB_INTCTRL_R_VECACT_ADC0SEQ2   (0x00000020)
#define SCB_INTCTRL_R_VECACT_ADC0SEQ3   (0x00000021)
#define SCB_INTCTRL_R_VECACT_WDT01      (0x00000022)
#define SCB_INTCTRL_R_VECACT_TIMER0A    (0x00000023)
#define SCB_INTCTRL_R_VECACT_TIMER0B    (0x00000024)
#define SCB_INTCTRL_R_VECACT_TIMER1A    (0x00000025)
#define SCB_INTCTRL_R_VECACT_TIMER1B    (0x00000026)
#define SCB_INTCTRL_R_VECACT_TIMER2A    (0x00000027)
#define SCB_INTCTRL_R_VECACT_TIMER2B    (0x00000028)
#define SCB_INTCTRL_R_VECACT_ACOMP0     (0x00000029)
#define SCB_INTCTRL_R_VECACT_ACOMP1     (0x0000002A)
#define SCB_INTCTRL_R_VECACT_RES43      (0x0000002B)
#define SCB_INTCTRL_R_VECACT_SYSCTL     (0x0000002C)
#define SCB_INTCTRL_R_VECACT_FLASH      (0x0000002D)
#define SCB_INTCTRL_R_VECACT_PORTF      (0x0000002E)
#define SCB_INTCTRL_R_VECACT_RES47      (0x0000002F)
#define SCB_INTCTRL_R_VECACT_RES48      (0x00000030)
#define SCB_INTCTRL_R_VECACT_UART2      (0x00000031)
#define SCB_INTCTRL_R_VECACT_SSI1       (0x00000032)
#define SCB_INTCTRL_R_VECACT_TIMER3A    (0x00000033)
#define SCB_INTCTRL_R_VECACT_TIMER3B    (0x00000034)
#define SCB_INTCTRL_R_VECACT_I2C1       (0x00000035)
#define SCB_INTCTRL_R_VECACT_QEI1       (0x00000036)
#define SCB_INTCTRL_R_VECACT_CAN0       (0x00000037)
#define SCB_INTCTRL_R_VECACT_CAN1       (0x00000038)
#define SCB_INTCTRL_R_VECACT_RES57      (0x00000039)
#define SCB_INTCTRL_R_VECACT_RES58      (0x0000003A)
#define SCB_INTCTRL_R_VECACT_HIB        (0x0000003B)
#define SCB_INTCTRL_R_VECACT_USB        (0x0000003C)
#define SCB_INTCTRL_R_VECACT_PWM0GEN3   (0x0000003D)
#define SCB_INTCTRL_R_VECACT_UDMASOFT   (0x0000003E)
#define SCB_INTCTRL_R_VECACT_UDMAERROR  (0x0000003F)
#define SCB_INTCTRL_R_VECACT_ADC1SEQ0   (0x00000040)
#define SCB_INTCTRL_R_VECACT_ADC1SEQ1   (0x00000041)
#define SCB_INTCTRL_R_VECACT_ADC1SEQ2   (0x00000042)
#define SCB_INTCTRL_R_VECACT_ADC1SEQ3   (0x00000043)
#define SCB_INTCTRL_R_VECACT_RES68      (0x00000044)
#define SCB_INTCTRL_R_VECACT_RES69      (0x00000045)
#define SCB_INTCTRL_R_VECACT_RES70      (0x00000046)
#define SCB_INTCTRL_R_VECACT_RES71      (0x00000047)
#define SCB_INTCTRL_R_VECACT_RES72      (0x00000048)
#define SCB_INTCTRL_R_VECACT_SSI2       (0x00000049)
#define SCB_INTCTRL_R_VECACT_SSI3       (0x0000004A)
#define SCB_INTCTRL_R_VECACT_UART3      (0x0000004B)
#define SCB_INTCTRL_R_VECACT_UART4      (0x0000004C)
#define SCB_INTCTRL_R_VECACT_UART5      (0x0000004D)
#define SCB_INTCTRL_R_VECACT_UART6      (0x0000004E)
#define SCB_INTCTRL_R_VECACT_UART7      (0x0000004F)
#define SCB_INTCTRL_R_VECACT_RES80      (0x00000050)
#define SCB_INTCTRL_R_VECACT_RES81      (0x00000051)
#define SCB_INTCTRL_R_VECACT_RES82      (0x00000052)
#define SCB_INTCTRL_R_VECACT_RES83      (0x00000053)
#define SCB_INTCTRL_R_VECACT_I2C2       (0x00000054)
#define SCB_INTCTRL_R_VECACT_I2C3       (0x00000055)
#define SCB_INTCTRL_R_VECACT_TIMER4A    (0x00000056)
#define SCB_INTCTRL_R_VECACT_TIMER4B    (0x00000057)
#define SCB_INTCTRL_R_VECACT_RES88      (0x00000058)
#define SCB_INTCTRL_R_VECACT_RES89      (0x00000059)
#define SCB_INTCTRL_R_VECACT_RES90      (0x0000005A)
#define SCB_INTCTRL_R_VECACT_RES91      (0x0000005B)
#define SCB_INTCTRL_R_VECACT_RES92      (0x0000005C)
#define SCB_INTCTRL_R_VECACT_RES93      (0x0000005D)
#define SCB_INTCTRL_R_VECACT_RES94      (0x0000005E)
#define SCB_INTCTRL_R_VECACT_RES95      (0x0000005F)
#define SCB_INTCTRL_R_VECACT_RES96      (0x00000060)
#define SCB_INTCTRL_R_VECACT_RES97      (0x00000061)
#define SCB_INTCTRL_R_VECACT_RES98      (0x00000062)
#define SCB_INTCTRL_R_VECACT_RES99      (0x00000063)
#define SCB_INTCTRL_R_VECACT_RES100     (0x00000064)
#define SCB_INTCTRL_R_VECACT_RES101     (0x00000065)
#define SCB_INTCTRL_R_VECACT_RES102     (0x00000066)
#define SCB_INTCTRL_R_VECACT_RES103     (0x00000067)
#define SCB_INTCTRL_R_VECACT_RES104     (0x00000068)
#define SCB_INTCTRL_R_VECACT_RES105     (0x00000069)
#define SCB_INTCTRL_R_VECACT_RES106     (0x0000006A)
#define SCB_INTCTRL_R_VECACT_RES107     (0x0000006B)
#define SCB_INTCTRL_R_VECACT_TIMER5A    (0x0000006C)
#define SCB_INTCTRL_R_VECACT_TIMER5B    (0x0000006D)
#define SCB_INTCTRL_R_VECACT_WTIMER0A   (0x0000006E)
#define SCB_INTCTRL_R_VECACT_WTIMER0B   (0x0000006F)
#define SCB_INTCTRL_R_VECACT_WTIMER1A   (0x00000070)
#define SCB_INTCTRL_R_VECACT_WTIMER1B   (0x00000071)
#define SCB_INTCTRL_R_VECACT_WTIMER2A   (0x00000072)
#define SCB_INTCTRL_R_VECACT_WTIMER2B   (0x00000073)
#define SCB_INTCTRL_R_VECACT_WTIMER3A   (0x00000074)
#define SCB_INTCTRL_R_VECACT_WTIMER3B   (0x00000075)
#define SCB_INTCTRL_R_VECACT_WTIMER4A   (0x00000076)
#define SCB_INTCTRL_R_VECACT_WTIMER4B   (0x00000077)
#define SCB_INTCTRL_R_VECACT_WTIMER5A   (0x00000078)
#define SCB_INTCTRL_R_VECACT_WTIMER5B   (0x00000079)
#define SCB_INTCTRL_R_VECACT_SYSEXC     (0x0000007A)
#define SCB_INTCTRL_R_VECACT_RES123     (0x0000007B)
#define SCB_INTCTRL_R_VECACT_RES124     (0x0000007C)
#define SCB_INTCTRL_R_VECACT_RES125     (0x0000007D)
#define SCB_INTCTRL_R_VECACT_RES126     (0x0000007E)
#define SCB_INTCTRL_R_VECACT_RES127     (0x0000007F)
#define SCB_INTCTRL_R_VECACT_RES128     (0x00000080)
#define SCB_INTCTRL_R_VECACT_RES129     (0x00000081)
#define SCB_INTCTRL_R_VECACT_RES130     (0x00000082)
#define SCB_INTCTRL_R_VECACT_RES131     (0x00000083)
#define SCB_INTCTRL_R_VECACT_RES132     (0x00000084)
#define SCB_INTCTRL_R_VECACT_RES133     (0x00000085)
#define SCB_INTCTRL_R_VECACT_RES134     (0x00000086)
#define SCB_INTCTRL_R_VECACT_RES135     (0x00000087)
#define SCB_INTCTRL_R_VECACT_RES136     (0x00000088)
#define SCB_INTCTRL_R_VECACT_RES137     (0x00000089)
#define SCB_INTCTRL_R_VECACT_RES138     (0x0000008A)
#define SCB_INTCTRL_R_VECACT_RES139     (0x0000008B)
#define SCB_INTCTRL_R_VECACT_RES140     (0x0000008C)
#define SCB_INTCTRL_R_VECACT_RES141     (0x0000008D)
#define SCB_INTCTRL_R_VECACT_RES142     (0x0000008E)
#define SCB_INTCTRL_R_VECACT_RES143     (0x0000008F)
#define SCB_INTCTRL_R_VECACT_RES144     (0x00000090)
#define SCB_INTCTRL_R_VECACT_RES145     (0x00000091)
#define SCB_INTCTRL_R_VECACT_RES146     (0x00000092)
#define SCB_INTCTRL_R_VECACT_RES147     (0x00000093)
#define SCB_INTCTRL_R_VECACT_RES148     (0x00000094)
#define SCB_INTCTRL_R_VECACT_RES149     (0x00000095)
#define SCB_INTCTRL_R_VECACT_PWM1GEN0   (0x00000096)
#define SCB_INTCTRL_R_VECACT_PWM1GEN1   (0x00000097)
#define SCB_INTCTRL_R_VECACT_PWM1GEN2   (0x00000098)
#define SCB_INTCTRL_R_VECACT_PWM1GEN3   (0x00000099)
#define SCB_INTCTRL_R_VECACT_PWM1FAULT  (0x0000009A)

#define SCB_INTCTRL_VECACT_MASK       (0x000000FF)
#define SCB_INTCTRL_VECACT_STACK      (0x00000000)
#define SCB_INTCTRL_VECACT_RESET      (0x00000001)
#define SCB_INTCTRL_VECACT_NMI        (0x00000002)
#define SCB_INTCTRL_VECACT_HARDFAULT  (0x00000003)
#define SCB_INTCTRL_VECACT_MEMMANAGE  (0x00000004)
#define SCB_INTCTRL_VECACT_BUSFAULT   (0x00000005)
#define SCB_INTCTRL_VECACT_USAGEFAULT (0x00000006)
#define SCB_INTCTRL_VECACT_RES7       (0x00000007)
#define SCB_INTCTRL_VECACT_RES8       (0x00000008)
#define SCB_INTCTRL_VECACT_RES9       (0x00000009)
#define SCB_INTCTRL_VECACT_RES10      (0x0000000A)
#define SCB_INTCTRL_VECACT_SVCALL     (0x0000000B)
#define SCB_INTCTRL_VECACT_DEBUGMON   (0x0000000C)
#define SCB_INTCTRL_VECACT_RES13      (0x0000000D)
#define SCB_INTCTRL_VECACT_PENDSV     (0x0000000E)
#define SCB_INTCTRL_VECACT_SYSTICK    (0x0000000F)
#define SCB_INTCTRL_VECACT_GPIOA      (0x00000010)
#define SCB_INTCTRL_VECACT_GPIOB      (0x00000011)
#define SCB_INTCTRL_VECACT_GPIOC      (0x00000012)
#define SCB_INTCTRL_VECACT_GPIOD      (0x00000013)
#define SCB_INTCTRL_VECACT_GPIOE      (0x00000014)
#define SCB_INTCTRL_VECACT_UART0      (0x00000015)
#define SCB_INTCTRL_VECACT_UART1      (0x00000016)
#define SCB_INTCTRL_VECACT_SSI0       (0x00000017)
#define SCB_INTCTRL_VECACT_I2C0       (0x00000018)
#define SCB_INTCTRL_VECACT_PWM0FAULT  (0x00000019)
#define SCB_INTCTRL_VECACT_PWM0GEN0   (0x0000001A)
#define SCB_INTCTRL_VECACT_PWM0GEN1   (0x0000001B)
#define SCB_INTCTRL_VECACT_PWM0GEN2   (0x0000001C)
#define SCB_INTCTRL_VECACT_QEI0       (0x0000001D)
#define SCB_INTCTRL_VECACT_ADC0SEQ0   (0x0000001E)
#define SCB_INTCTRL_VECACT_ADC0SEQ1   (0x0000001F)
#define SCB_INTCTRL_VECACT_ADC0SEQ2   (0x00000020)
#define SCB_INTCTRL_VECACT_ADC0SEQ3   (0x00000021)
#define SCB_INTCTRL_VECACT_WDT01      (0x00000022)
#define SCB_INTCTRL_VECACT_TIMER0A    (0x00000023)
#define SCB_INTCTRL_VECACT_TIMER0B    (0x00000024)
#define SCB_INTCTRL_VECACT_TIMER1A    (0x00000025)
#define SCB_INTCTRL_VECACT_TIMER1B    (0x00000026)
#define SCB_INTCTRL_VECACT_TIMER2A    (0x00000027)
#define SCB_INTCTRL_VECACT_TIMER2B    (0x00000028)
#define SCB_INTCTRL_VECACT_ACOMP0     (0x00000029)
#define SCB_INTCTRL_VECACT_ACOMP1     (0x0000002A)
#define SCB_INTCTRL_VECACT_RES43      (0x0000002B)
#define SCB_INTCTRL_VECACT_SYSCTL     (0x0000002C)
#define SCB_INTCTRL_VECACT_FLASH      (0x0000002D)
#define SCB_INTCTRL_VECACT_PORTF      (0x0000002E)
#define SCB_INTCTRL_VECACT_RES47      (0x0000002F)
#define SCB_INTCTRL_VECACT_RES48      (0x00000030)
#define SCB_INTCTRL_VECACT_UART2      (0x00000031)
#define SCB_INTCTRL_VECACT_SSI1       (0x00000032)
#define SCB_INTCTRL_VECACT_TIMER3A    (0x00000033)
#define SCB_INTCTRL_VECACT_TIMER3B    (0x00000034)
#define SCB_INTCTRL_VECACT_I2C1       (0x00000035)
#define SCB_INTCTRL_VECACT_QEI1       (0x00000036)
#define SCB_INTCTRL_VECACT_CAN0       (0x00000037)
#define SCB_INTCTRL_VECACT_CAN1       (0x00000038)
#define SCB_INTCTRL_VECACT_RES57      (0x00000039)
#define SCB_INTCTRL_VECACT_RES58      (0x0000003A)
#define SCB_INTCTRL_VECACT_HIB        (0x0000003B)
#define SCB_INTCTRL_VECACT_USB        (0x0000003C)
#define SCB_INTCTRL_VECACT_PWM0GEN3   (0x0000003D)
#define SCB_INTCTRL_VECACT_UDMASOFT   (0x0000003E)
#define SCB_INTCTRL_VECACT_UDMAERROR  (0x0000003F)
#define SCB_INTCTRL_VECACT_ADC1SEQ0   (0x00000040)
#define SCB_INTCTRL_VECACT_ADC1SEQ1   (0x00000041)
#define SCB_INTCTRL_VECACT_ADC1SEQ2   (0x00000042)
#define SCB_INTCTRL_VECACT_ADC1SEQ3   (0x00000043)
#define SCB_INTCTRL_VECACT_RES68      (0x00000044)
#define SCB_INTCTRL_VECACT_RES69      (0x00000045)
#define SCB_INTCTRL_VECACT_RES70      (0x00000046)
#define SCB_INTCTRL_VECACT_RES71      (0x00000047)
#define SCB_INTCTRL_VECACT_RES72      (0x00000048)
#define SCB_INTCTRL_VECACT_SSI2       (0x00000049)
#define SCB_INTCTRL_VECACT_SSI3       (0x0000004A)
#define SCB_INTCTRL_VECACT_UART3      (0x0000004B)
#define SCB_INTCTRL_VECACT_UART4      (0x0000004C)
#define SCB_INTCTRL_VECACT_UART5      (0x0000004D)
#define SCB_INTCTRL_VECACT_UART6      (0x0000004E)
#define SCB_INTCTRL_VECACT_UART7      (0x0000004F)
#define SCB_INTCTRL_VECACT_RES80      (0x00000050)
#define SCB_INTCTRL_VECACT_RES81      (0x00000051)
#define SCB_INTCTRL_VECACT_RES82      (0x00000052)
#define SCB_INTCTRL_VECACT_RES83      (0x00000053)
#define SCB_INTCTRL_VECACT_I2C2       (0x00000054)
#define SCB_INTCTRL_VECACT_I2C3       (0x00000055)
#define SCB_INTCTRL_VECACT_TIMER4A    (0x00000056)
#define SCB_INTCTRL_VECACT_TIMER4B    (0x00000057)
#define SCB_INTCTRL_VECACT_RES88      (0x00000058)
#define SCB_INTCTRL_VECACT_RES89      (0x00000059)
#define SCB_INTCTRL_VECACT_RES90      (0x0000005A)
#define SCB_INTCTRL_VECACT_RES91      (0x0000005B)
#define SCB_INTCTRL_VECACT_RES92      (0x0000005C)
#define SCB_INTCTRL_VECACT_RES93      (0x0000005D)
#define SCB_INTCTRL_VECACT_RES94      (0x0000005E)
#define SCB_INTCTRL_VECACT_RES95      (0x0000005F)
#define SCB_INTCTRL_VECACT_RES96      (0x00000060)
#define SCB_INTCTRL_VECACT_RES97      (0x00000061)
#define SCB_INTCTRL_VECACT_RES98      (0x00000062)
#define SCB_INTCTRL_VECACT_RES99      (0x00000063)
#define SCB_INTCTRL_VECACT_RES100     (0x00000064)
#define SCB_INTCTRL_VECACT_RES101     (0x00000065)
#define SCB_INTCTRL_VECACT_RES102     (0x00000066)
#define SCB_INTCTRL_VECACT_RES103     (0x00000067)
#define SCB_INTCTRL_VECACT_RES104     (0x00000068)
#define SCB_INTCTRL_VECACT_RES105     (0x00000069)
#define SCB_INTCTRL_VECACT_RES106     (0x0000006A)
#define SCB_INTCTRL_VECACT_RES107     (0x0000006B)
#define SCB_INTCTRL_VECACT_TIMER5A    (0x0000006C)
#define SCB_INTCTRL_VECACT_TIMER5B    (0x0000006D)
#define SCB_INTCTRL_VECACT_WTIMER0A   (0x0000006E)
#define SCB_INTCTRL_VECACT_WTIMER0B   (0x0000006F)
#define SCB_INTCTRL_VECACT_WTIMER1A   (0x00000070)
#define SCB_INTCTRL_VECACT_WTIMER1B   (0x00000071)
#define SCB_INTCTRL_VECACT_WTIMER2A   (0x00000072)
#define SCB_INTCTRL_VECACT_WTIMER2B   (0x00000073)
#define SCB_INTCTRL_VECACT_WTIMER3A   (0x00000074)
#define SCB_INTCTRL_VECACT_WTIMER3B   (0x00000075)
#define SCB_INTCTRL_VECACT_WTIMER4A   (0x00000076)
#define SCB_INTCTRL_VECACT_WTIMER4B   (0x00000077)
#define SCB_INTCTRL_VECACT_WTIMER5A   (0x00000078)
#define SCB_INTCTRL_VECACT_WTIMER5B   (0x00000079)
#define SCB_INTCTRL_VECACT_SYSEXC     (0x0000007A)
#define SCB_INTCTRL_VECACT_RES123     (0x0000007B)
#define SCB_INTCTRL_VECACT_RES124     (0x0000007C)
#define SCB_INTCTRL_VECACT_RES125     (0x0000007D)
#define SCB_INTCTRL_VECACT_RES126     (0x0000007E)
#define SCB_INTCTRL_VECACT_RES127     (0x0000007F)
#define SCB_INTCTRL_VECACT_RES128     (0x00000080)
#define SCB_INTCTRL_VECACT_RES129     (0x00000081)
#define SCB_INTCTRL_VECACT_RES130     (0x00000082)
#define SCB_INTCTRL_VECACT_RES131     (0x00000083)
#define SCB_INTCTRL_VECACT_RES132     (0x00000084)
#define SCB_INTCTRL_VECACT_RES133     (0x00000085)
#define SCB_INTCTRL_VECACT_RES134     (0x00000086)
#define SCB_INTCTRL_VECACT_RES135     (0x00000087)
#define SCB_INTCTRL_VECACT_RES136     (0x00000088)
#define SCB_INTCTRL_VECACT_RES137     (0x00000089)
#define SCB_INTCTRL_VECACT_RES138     (0x0000008A)
#define SCB_INTCTRL_VECACT_RES139     (0x0000008B)
#define SCB_INTCTRL_VECACT_RES140     (0x0000008C)
#define SCB_INTCTRL_VECACT_RES141     (0x0000008D)
#define SCB_INTCTRL_VECACT_RES142     (0x0000008E)
#define SCB_INTCTRL_VECACT_RES143     (0x0000008F)
#define SCB_INTCTRL_VECACT_RES144     (0x00000090)
#define SCB_INTCTRL_VECACT_RES145     (0x00000091)
#define SCB_INTCTRL_VECACT_RES146     (0x00000092)
#define SCB_INTCTRL_VECACT_RES147     (0x00000093)
#define SCB_INTCTRL_VECACT_RES148     (0x00000094)
#define SCB_INTCTRL_VECACT_RES149     (0x00000095)
#define SCB_INTCTRL_VECACT_PWM1GEN0   (0x00000096)
#define SCB_INTCTRL_VECACT_PWM1GEN1   (0x00000097)
#define SCB_INTCTRL_VECACT_PWM1GEN2   (0x00000098)
#define SCB_INTCTRL_VECACT_PWM1GEN3   (0x00000099)
#define SCB_INTCTRL_VECACT_PWM1FAULT  (0x0000009A)
//--------

//--------
#define SCB_INTCTRL_R_RETBASE_MASK      (0x00000800)
#define SCB_INTCTRL_R_RETBASE_BIT       (11)
#define SCB_INTCTRL_R_RETBASE_ISR       (0x00000800)
#define SCB_INTCTRL_R_RETBASE_NOISR     (0x00000000)

#define SCB_INTCTRL_RETBASE_MASK      (0x00000001)
#define SCB_INTCTRL_RETBASE_ISR       (0x00000001)
#define SCB_INTCTRL_RETBASE_NOISR     (0x00000000)
//--------

//--------

#define SCB_INTCTRL_R_VECPEND_MASK       (0x000FF000)
#define SCB_INTCTRL_R_VECPEND_BIT        (12)
#define SCB_INTCTRL_R_VECPEND_STACK      (0x00000000)
#define SCB_INTCTRL_R_VECPEND_RESET      (0x00001000)
#define SCB_INTCTRL_R_VECPEND_NMI        (0x00002000)
#define SCB_INTCTRL_R_VECPEND_HARDFAULT  (0x00003000)
#define SCB_INTCTRL_R_VECPEND_MEMMANAGE  (0x00004000)
#define SCB_INTCTRL_R_VECPEND_BUSFAULT   (0x00005000)
#define SCB_INTCTRL_R_VECPEND_USAGEFAULT (0x00006000)
#define SCB_INTCTRL_R_VECPEND_RES7       (0x00007000)
#define SCB_INTCTRL_R_VECPEND_RES8       (0x00008000)
#define SCB_INTCTRL_R_VECPEND_RES9       (0x00009000)
#define SCB_INTCTRL_R_VECPEND_RES10      (0x0000A000)
#define SCB_INTCTRL_R_VECPEND_SVCALL     (0x0000B000)
#define SCB_INTCTRL_R_VECPEND_DEBUGMON   (0x0000C000)
#define SCB_INTCTRL_R_VECPEND_RES13      (0x0000D000)
#define SCB_INTCTRL_R_VECPEND_PENDSV     (0x0000E000)
#define SCB_INTCTRL_R_VECPEND_SYSTICK    (0x0000F000)
#define SCB_INTCTRL_R_VECPEND_GPIOA      (0x00010000)
#define SCB_INTCTRL_R_VECPEND_GPIOB      (0x00011000)
#define SCB_INTCTRL_R_VECPEND_GPIOC      (0x00012000)
#define SCB_INTCTRL_R_VECPEND_GPIOD      (0x13000000)
#define SCB_INTCTRL_R_VECPEND_GPIOE      (0x00014000)
#define SCB_INTCTRL_R_VECPEND_UART0      (0x00015000)
#define SCB_INTCTRL_R_VECPEND_UART1      (0x00016000)
#define SCB_INTCTRL_R_VECPEND_SSI0       (0x00017000)
#define SCB_INTCTRL_R_VECPEND_I2C0       (0x00018000)
#define SCB_INTCTRL_R_VECPEND_PWMFAULT   (0x00019000)
#define SCB_INTCTRL_R_VECPEND_PWMGEN0    (0x0001A000)
#define SCB_INTCTRL_R_VECPEND_PWMGEN1    (0x0001B000)
#define SCB_INTCTRL_R_VECPEND_PWMGEN2    (0x0001C000)
#define SCB_INTCTRL_R_VECPEND_QEI0       (0x0001D000)
#define SCB_INTCTRL_R_VECPEND_ADC0SEQ0   (0x0001E000)
#define SCB_INTCTRL_R_VECPEND_ADC0SEQ1   (0x0001F000)
#define SCB_INTCTRL_R_VECPEND_ADC0SEQ2   (0x00020000)
#define SCB_INTCTRL_R_VECPEND_ADC0SEQ3   (0x00021000)
#define SCB_INTCTRL_R_VECPEND_WDT01      (0x00022000)
#define SCB_INTCTRL_R_VECPEND_TIMER0A    (0x00023000)
#define SCB_INTCTRL_R_VECPEND_TIMER0B    (0x00024000)
#define SCB_INTCTRL_R_VECPEND_TIMER1A    (0x00025000)
#define SCB_INTCTRL_R_VECPEND_TIMER1B    (0x00026000)
#define SCB_INTCTRL_R_VECPEND_TIMER2A    (0x00027000)
#define SCB_INTCTRL_R_VECPEND_TIMER2B    (0x00028000)
#define SCB_INTCTRL_R_VECPEND_ACOMP0     (0x00029000)
#define SCB_INTCTRL_R_VECPEND_ACOMP1     (0x0002A000)
#define SCB_INTCTRL_R_VECPEND_RES43      (0x0002B000)
#define SCB_INTCTRL_R_VECPEND_SYSCTL     (0x0002C000)
#define SCB_INTCTRL_R_VECPEND_FLASH      (0x0002D000)
#define SCB_INTCTRL_R_VECPEND_PORTF      (0x0002E000)
#define SCB_INTCTRL_R_VECPEND_RES47      (0x0002F000)
#define SCB_INTCTRL_R_VECPEND_RES48      (0x00030000)
#define SCB_INTCTRL_R_VECPEND_UART2      (0x00031000)
#define SCB_INTCTRL_R_VECPEND_SSI1       (0x00032000)
#define SCB_INTCTRL_R_VECPEND_TIMER3A    (0x00033000)
#define SCB_INTCTRL_R_VECPEND_TIMER3B    (0x00034000)
#define SCB_INTCTRL_R_VECPEND_I2C1       (0x00035000)
#define SCB_INTCTRL_R_VECPEND_QEI1       (0x00036000)
#define SCB_INTCTRL_R_VECPEND_CAN0       (0x00037000)
#define SCB_INTCTRL_R_VECPEND_CAN1       (0x00038000)
#define SCB_INTCTRL_R_VECPEND_RES57      (0x00039000)
#define SCB_INTCTRL_R_VECPEND_RES58      (0x0003A000)
#define SCB_INTCTRL_R_VECPEND_HIB        (0x0003B000)
#define SCB_INTCTRL_R_VECPEND_USB        (0x0003C000)
#define SCB_INTCTRL_R_VECPEND_PWM0GEN3   (0x0003D000)
#define SCB_INTCTRL_R_VECPEND_UDMASOFT   (0x0003E000)
#define SCB_INTCTRL_R_VECPEND_UDMAERROR  (0x0003F000)
#define SCB_INTCTRL_R_VECPEND_ADC1SEQ0   (0x00040000)
#define SCB_INTCTRL_R_VECPEND_ADC1SEQ1   (0x00041000)
#define SCB_INTCTRL_R_VECPEND_ADC1SEQ2   (0x00042000)
#define SCB_INTCTRL_R_VECPEND_ADC1SEQ3   (0x00043000)
#define SCB_INTCTRL_R_VECPEND_RES68      (0x00044000)
#define SCB_INTCTRL_R_VECPEND_RES69      (0x00045000)
#define SCB_INTCTRL_R_VECPEND_RES70      (0x00046000)
#define SCB_INTCTRL_R_VECPEND_RES71      (0x00047000)
#define SCB_INTCTRL_R_VECPEND_RES72      (0x00048000)
#define SCB_INTCTRL_R_VECPEND_SSI2       (0x00049000)
#define SCB_INTCTRL_R_VECPEND_SSI3       (0x0004A000)
#define SCB_INTCTRL_R_VECPEND_UART3      (0x0004B000)
#define SCB_INTCTRL_R_VECPEND_UART4      (0x0004C000)
#define SCB_INTCTRL_R_VECPEND_UART5      (0x0004D000)
#define SCB_INTCTRL_R_VECPEND_UART6      (0x0004E000)
#define SCB_INTCTRL_R_VECPEND_UART7      (0x0004F000)
#define SCB_INTCTRL_R_VECPEND_RES80      (0x00050000)
#define SCB_INTCTRL_R_VECPEND_RES81      (0x00051000)
#define SCB_INTCTRL_R_VECPEND_RES82      (0x00052000)
#define SCB_INTCTRL_R_VECPEND_RES83      (0x00053000)
#define SCB_INTCTRL_R_VECPEND_I2C2       (0x00054000)
#define SCB_INTCTRL_R_VECPEND_I2C3       (0x00055000)
#define SCB_INTCTRL_R_VECPEND_TIMER4A    (0x00056000)
#define SCB_INTCTRL_R_VECPEND_TIMER4B    (0x00057000)
#define SCB_INTCTRL_R_VECPEND_RES88      (0x00058000)
#define SCB_INTCTRL_R_VECPEND_RES89      (0x00059000)
#define SCB_INTCTRL_R_VECPEND_RES90      (0x0005A000)
#define SCB_INTCTRL_R_VECPEND_RES91      (0x0005B000)
#define SCB_INTCTRL_R_VECPEND_RES92      (0x0005C000)
#define SCB_INTCTRL_R_VECPEND_RES93      (0x0005D000)
#define SCB_INTCTRL_R_VECPEND_RES94      (0x0005E000)
#define SCB_INTCTRL_R_VECPEND_RES95      (0x0005F000)
#define SCB_INTCTRL_R_VECPEND_RES96      (0x00060000)
#define SCB_INTCTRL_R_VECPEND_RES97      (0x00061000)
#define SCB_INTCTRL_R_VECPEND_RES98      (0x00062000)
#define SCB_INTCTRL_R_VECPEND_RES99      (0x00063000)
#define SCB_INTCTRL_R_VECPEND_RES100     (0x00064000)
#define SCB_INTCTRL_R_VECPEND_RES101     (0x00065000)
#define SCB_INTCTRL_R_VECPEND_RES102     (0x00066000)
#define SCB_INTCTRL_R_VECPEND_RES103     (0x00067000)
#define SCB_INTCTRL_R_VECPEND_RES104     (0x00068000)
#define SCB_INTCTRL_R_VECPEND_RES105     (0x00069000)
#define SCB_INTCTRL_R_VECPEND_RES106     (0x0006A000)
#define SCB_INTCTRL_R_VECPEND_RES107     (0x0006B000)
#define SCB_INTCTRL_R_VECPEND_TIMER5A    (0x0006C000)
#define SCB_INTCTRL_R_VECPEND_TIMER5B    (0x0006D000)
#define SCB_INTCTRL_R_VECPEND_WTIMER0A   (0x0006E000)
#define SCB_INTCTRL_R_VECPEND_WTIMER0B   (0x0006F000)
#define SCB_INTCTRL_R_VECPEND_WTIMER1A   (0x00070000)
#define SCB_INTCTRL_R_VECPEND_WTIMER1B   (0x00071000)
#define SCB_INTCTRL_R_VECPEND_WTIMER2A   (0x00072000)
#define SCB_INTCTRL_R_VECPEND_WTIMER2B   (0x00073000)
#define SCB_INTCTRL_R_VECPEND_WTIMER3A   (0x00074000)
#define SCB_INTCTRL_R_VECPEND_WTIMER3B   (0x00075000)
#define SCB_INTCTRL_R_VECPEND_WTIMER4A   (0x00076000)
#define SCB_INTCTRL_R_VECPEND_WTIMER4B   (0x00077000)
#define SCB_INTCTRL_R_VECPEND_WTIMER5A   (0x00078000)
#define SCB_INTCTRL_R_VECPEND_WTIMER5B   (0x00079000)
#define SCB_INTCTRL_R_VECPEND_SYSEXC     (0x0007A000)
#define SCB_INTCTRL_R_VECPEND_RES123     (0x0007B000)
#define SCB_INTCTRL_R_VECPEND_RES124     (0x0007C000)
#define SCB_INTCTRL_R_VECPEND_RES125     (0x0007D000)
#define SCB_INTCTRL_R_VECPEND_RES126     (0x0007E000)
#define SCB_INTCTRL_R_VECPEND_RES127     (0x0007F000)
#define SCB_INTCTRL_R_VECPEND_RES128     (0x00080000)
#define SCB_INTCTRL_R_VECPEND_RES129     (0x00081000)
#define SCB_INTCTRL_R_VECPEND_RES130     (0x00082000)
#define SCB_INTCTRL_R_VECPEND_RES131     (0x00083000)
#define SCB_INTCTRL_R_VECPEND_RES132     (0x00084000)
#define SCB_INTCTRL_R_VECPEND_RES133     (0x00085000)
#define SCB_INTCTRL_R_VECPEND_RES134     (0x00086000)
#define SCB_INTCTRL_R_VECPEND_RES135     (0x00087000)
#define SCB_INTCTRL_R_VECPEND_RES136     (0x00088000)
#define SCB_INTCTRL_R_VECPEND_RES137     (0x00089000)
#define SCB_INTCTRL_R_VECPEND_RES138     (0x0008A000)
#define SCB_INTCTRL_R_VECPEND_RES139     (0x0008B000)
#define SCB_INTCTRL_R_VECPEND_RES140     (0x0008C000)
#define SCB_INTCTRL_R_VECPEND_RES141     (0x0008D000)
#define SCB_INTCTRL_R_VECPEND_RES142     (0x0008E000)
#define SCB_INTCTRL_R_VECPEND_RES143     (0x0008F000)
#define SCB_INTCTRL_R_VECPEND_RES144     (0x00090000)
#define SCB_INTCTRL_R_VECPEND_RES145     (0x00091000)
#define SCB_INTCTRL_R_VECPEND_RES146     (0x00092000)
#define SCB_INTCTRL_R_VECPEND_RES147     (0x00093000)
#define SCB_INTCTRL_R_VECPEND_RES148     (0x00094000)
#define SCB_INTCTRL_R_VECPEND_RES149     (0x00095000)
#define SCB_INTCTRL_R_VECPEND_PWM1GEN0   (0x00096000)
#define SCB_INTCTRL_R_VECPEND_PWM1GEN1   (0x00097000)
#define SCB_INTCTRL_R_VECPEND_PWM1GEN2   (0x00098000)
#define SCB_INTCTRL_R_VECPEND_PWM1GEN3   (0x00099000)
#define SCB_INTCTRL_R_VECPEND_PWM1FAULT  (0x0009A000)

#define SCB_INTCTRL_VECPEND_MASK       (0x000000FF)
#define SCB_INTCTRL_VECPEND_STACK      (0x00000000)
#define SCB_INTCTRL_VECPEND_RESET      (0x00000001)
#define SCB_INTCTRL_VECPEND_NMI        (0x00000002)
#define SCB_INTCTRL_VECPEND_HARDFAULT  (0x00000003)
#define SCB_INTCTRL_VECPEND_MEMMANAGE  (0x00000004)
#define SCB_INTCTRL_VECPEND_BUSFAULT   (0x00000005)
#define SCB_INTCTRL_VECPEND_USAGEFAULT (0x00000006)
#define SCB_INTCTRL_VECPEND_RES7       (0x00000007)
#define SCB_INTCTRL_VECPEND_RES8       (0x00000008)
#define SCB_INTCTRL_VECPEND_RES9       (0x00000009)
#define SCB_INTCTRL_VECPEND_RES10      (0x0000000A)
#define SCB_INTCTRL_VECPEND_SVCALL     (0x0000000B)
#define SCB_INTCTRL_VECPEND_DEBUGMON   (0x0000000C)
#define SCB_INTCTRL_VECPEND_RES13      (0x0000000D)
#define SCB_INTCTRL_VECPEND_PENDSV     (0x0000000E)
#define SCB_INTCTRL_VECPEND_SYSTICK    (0x0000000F)
#define SCB_INTCTRL_VECPEND_GPIOA      (0x00000010)
#define SCB_INTCTRL_VECPEND_GPIOB      (0x00000011)
#define SCB_INTCTRL_VECPEND_GPIOC      (0x00000012)
#define SCB_INTCTRL_VECPEND_GPIOD      (0x00000013)
#define SCB_INTCTRL_VECPEND_GPIOE      (0x00000014)
#define SCB_INTCTRL_VECPEND_UART0      (0x00000015)
#define SCB_INTCTRL_VECPEND_UART1      (0x00000016)
#define SCB_INTCTRL_VECPEND_SSI0       (0x00000017)
#define SCB_INTCTRL_VECPEND_I2C0       (0x00000018)
#define SCB_INTCTRL_VECPEND_PWMFAULT   (0x00000019)
#define SCB_INTCTRL_VECPEND_PWMGEN0    (0x0000001A)
#define SCB_INTCTRL_VECPEND_PWMGEN1    (0x0000001B)
#define SCB_INTCTRL_VECPEND_PWMGEN2    (0x0000001C)
#define SCB_INTCTRL_VECPEND_QEI0       (0x0000001D)
#define SCB_INTCTRL_VECPEND_ADC0SEQ0   (0x0000001E)
#define SCB_INTCTRL_VECPEND_ADC0SEQ1   (0x0000001F)
#define SCB_INTCTRL_VECPEND_ADC0SEQ2   (0x00000020)
#define SCB_INTCTRL_VECPEND_ADC0SEQ3   (0x00000021)
#define SCB_INTCTRL_VECPEND_WDT01      (0x00000022)
#define SCB_INTCTRL_VECPEND_TIMER0A    (0x00000023)
#define SCB_INTCTRL_VECPEND_TIMER0B    (0x00000024)
#define SCB_INTCTRL_VECPEND_TIMER1A    (0x00000025)
#define SCB_INTCTRL_VECPEND_TIMER1B    (0x00000026)
#define SCB_INTCTRL_VECPEND_TIMER2A    (0x00000027)
#define SCB_INTCTRL_VECPEND_TIMER2B    (0x00000028)
#define SCB_INTCTRL_VECPEND_ACOMP0     (0x00000029)
#define SCB_INTCTRL_VECPEND_ACOMP1     (0x0000002A)
#define SCB_INTCTRL_VECPEND_RES43      (0x0000002B)
#define SCB_INTCTRL_VECPEND_SYSCTL     (0x0000002C)
#define SCB_INTCTRL_VECPEND_FLASH      (0x0000002D)
#define SCB_INTCTRL_VECPEND_PORTF      (0x0000002E)
#define SCB_INTCTRL_VECPEND_RES47      (0x0000002F)
#define SCB_INTCTRL_VECPEND_RES48      (0x00000030)
#define SCB_INTCTRL_VECPEND_UART2      (0x00000031)
#define SCB_INTCTRL_VECPEND_SSI1       (0x00000032)
#define SCB_INTCTRL_VECPEND_TIMER3A    (0x00000033)
#define SCB_INTCTRL_VECPEND_TIMER3B    (0x00000034)
#define SCB_INTCTRL_VECPEND_I2C1       (0x00000035)
#define SCB_INTCTRL_VECPEND_QEI1       (0x00000036)
#define SCB_INTCTRL_VECPEND_CAN0       (0x00000037)
#define SCB_INTCTRL_VECPEND_CAN1       (0x00000038)
#define SCB_INTCTRL_VECPEND_RES57      (0x00000039)
#define SCB_INTCTRL_VECPEND_RES58      (0x0000003A)
#define SCB_INTCTRL_VECPEND_HIB        (0x0000003B)
#define SCB_INTCTRL_VECPEND_USB        (0x0000003C)
#define SCB_INTCTRL_VECPEND_PWM0GEN3   (0x0000003D)
#define SCB_INTCTRL_VECPEND_UDMASOFT   (0x0000003E)
#define SCB_INTCTRL_VECPEND_UDMAERROR  (0x0000003F)
#define SCB_INTCTRL_VECPEND_ADC1SEQ0   (0x00000040)
#define SCB_INTCTRL_VECPEND_ADC1SEQ1   (0x00000041)
#define SCB_INTCTRL_VECPEND_ADC1SEQ2   (0x00000042)
#define SCB_INTCTRL_VECPEND_ADC1SEQ3   (0x00000043)
#define SCB_INTCTRL_VECPEND_RES68      (0x00000044)
#define SCB_INTCTRL_VECPEND_RES69      (0x00000045)
#define SCB_INTCTRL_VECPEND_RES70      (0x00000046)
#define SCB_INTCTRL_VECPEND_RES71      (0x00000047)
#define SCB_INTCTRL_VECPEND_RES72      (0x00000048)
#define SCB_INTCTRL_VECPEND_SSI2       (0x00000049)
#define SCB_INTCTRL_VECPEND_SSI3       (0x0000004A)
#define SCB_INTCTRL_VECPEND_UART3      (0x0000004B)
#define SCB_INTCTRL_VECPEND_UART4      (0x0000004C)
#define SCB_INTCTRL_VECPEND_UART5      (0x0000004D)
#define SCB_INTCTRL_VECPEND_UART6      (0x0000004E)
#define SCB_INTCTRL_VECPEND_UART7      (0x0000004F)
#define SCB_INTCTRL_VECPEND_RES80      (0x00000050)
#define SCB_INTCTRL_VECPEND_RES81      (0x00000051)
#define SCB_INTCTRL_VECPEND_RES82      (0x00000052)
#define SCB_INTCTRL_VECPEND_RES83      (0x00000053)
#define SCB_INTCTRL_VECPEND_I2C2       (0x00000054)
#define SCB_INTCTRL_VECPEND_I2C3       (0x00000055)
#define SCB_INTCTRL_VECPEND_TIMER4A    (0x00000056)
#define SCB_INTCTRL_VECPEND_TIMER4B    (0x00000057)
#define SCB_INTCTRL_VECPEND_RES88      (0x00000058)
#define SCB_INTCTRL_VECPEND_RES89      (0x00000059)
#define SCB_INTCTRL_VECPEND_RES90      (0x0000005A)
#define SCB_INTCTRL_VECPEND_RES91      (0x0000005B)
#define SCB_INTCTRL_VECPEND_RES92      (0x0000005C)
#define SCB_INTCTRL_VECPEND_RES93      (0x0000005D)
#define SCB_INTCTRL_VECPEND_RES94      (0x0000005E)
#define SCB_INTCTRL_VECPEND_RES95      (0x0000005F)
#define SCB_INTCTRL_VECPEND_RES96      (0x00000060)
#define SCB_INTCTRL_VECPEND_RES97      (0x00000061)
#define SCB_INTCTRL_VECPEND_RES98      (0x00000062)
#define SCB_INTCTRL_VECPEND_RES99      (0x00000063)
#define SCB_INTCTRL_VECPEND_RES100     (0x00000064)
#define SCB_INTCTRL_VECPEND_RES101     (0x00000065)
#define SCB_INTCTRL_VECPEND_RES102     (0x00000066)
#define SCB_INTCTRL_VECPEND_RES103     (0x00000067)
#define SCB_INTCTRL_VECPEND_RES104     (0x00000068)
#define SCB_INTCTRL_VECPEND_RES105     (0x00000069)
#define SCB_INTCTRL_VECPEND_RES106     (0x0000006A)
#define SCB_INTCTRL_VECPEND_RES107     (0x0000006B)
#define SCB_INTCTRL_VECPEND_TIMER5A    (0x0000006C)
#define SCB_INTCTRL_VECPEND_TIMER5B    (0x0000006D)
#define SCB_INTCTRL_VECPEND_WTIMER0A   (0x0000006E)
#define SCB_INTCTRL_VECPEND_WTIMER0B   (0x0000006F)
#define SCB_INTCTRL_VECPEND_WTIMER1A   (0x00000070)
#define SCB_INTCTRL_VECPEND_WTIMER1B   (0x00000071)
#define SCB_INTCTRL_VECPEND_WTIMER2A   (0x00000072)
#define SCB_INTCTRL_VECPEND_WTIMER2B   (0x00000073)
#define SCB_INTCTRL_VECPEND_WTIMER3A   (0x00000074)
#define SCB_INTCTRL_VECPEND_WTIMER3B   (0x00000075)
#define SCB_INTCTRL_VECPEND_WTIMER4A   (0x00000076)
#define SCB_INTCTRL_VECPEND_WTIMER4B   (0x00000077)
#define SCB_INTCTRL_VECPEND_WTIMER5A   (0x00000078)
#define SCB_INTCTRL_VECPEND_WTIMER5B   (0x00000079)
#define SCB_INTCTRL_VECPEND_SYSEXC     (0x0000007A)
#define SCB_INTCTRL_VECPEND_RES123     (0x0000007B)
#define SCB_INTCTRL_VECPEND_RES124     (0x0000007C)
#define SCB_INTCTRL_VECPEND_RES125     (0x0000007D)
#define SCB_INTCTRL_VECPEND_RES126     (0x0000007E)
#define SCB_INTCTRL_VECPEND_RES127     (0x0000007F)
#define SCB_INTCTRL_VECPEND_RES128     (0x00000080)
#define SCB_INTCTRL_VECPEND_RES129     (0x00000081)
#define SCB_INTCTRL_VECPEND_RES130     (0x00000082)
#define SCB_INTCTRL_VECPEND_RES131     (0x00000083)
#define SCB_INTCTRL_VECPEND_RES132     (0x00000084)
#define SCB_INTCTRL_VECPEND_RES133     (0x00000085)
#define SCB_INTCTRL_VECPEND_RES134     (0x00000086)
#define SCB_INTCTRL_VECPEND_RES135     (0x00000087)
#define SCB_INTCTRL_VECPEND_RES136     (0x00000088)
#define SCB_INTCTRL_VECPEND_RES137     (0x00000089)
#define SCB_INTCTRL_VECPEND_RES138     (0x0000008A)
#define SCB_INTCTRL_VECPEND_RES139     (0x0000008B)
#define SCB_INTCTRL_VECPEND_RES140     (0x0000008C)
#define SCB_INTCTRL_VECPEND_RES141     (0x0000008D)
#define SCB_INTCTRL_VECPEND_RES142     (0x0000008E)
#define SCB_INTCTRL_VECPEND_RES143     (0x0000008F)
#define SCB_INTCTRL_VECPEND_RES144     (0x00000090)
#define SCB_INTCTRL_VECPEND_RES145     (0x00000091)
#define SCB_INTCTRL_VECPEND_RES146     (0x00000092)
#define SCB_INTCTRL_VECPEND_RES147     (0x00000093)
#define SCB_INTCTRL_VECPEND_RES148     (0x00000094)
#define SCB_INTCTRL_VECPEND_RES149     (0x00000095)
#define SCB_INTCTRL_VECPEND_PWM1GEN0   (0x00000096)
#define SCB_INTCTRL_VECPEND_PWM1GEN1   (0x00000097)
#define SCB_INTCTRL_VECPEND_PWM1GEN2   (0x00000098)
#define SCB_INTCTRL_VECPEND_PWM1GEN3   (0x00000099)
#define SCB_INTCTRL_VECPEND_PWM1FAULT  (0x0000009A)
//--------

//--------
#define SCB_INTCTRL_R_ISRPEND_MASK      (0x00400000)
#define SCB_INTCTRL_R_ISRPEND_BIT       (22)
#define SCB_INTCTRL_R_ISRPEND_ISR       (0x00400000)
#define SCB_INTCTRL_R_ISRPEND_NOISR     (0x00000000)

#define SCB_INTCTRL_ISRPEND_MASK      (0x00000001)
#define SCB_INTCTRL_ISRPEND_ISR       (0x00000001)
#define SCB_INTCTRL_ISRPEND_NOISR     (0x00000000)
//--------

//--------
#define SCB_INTCTRL_R_ISRPRE_MASK      (0x00800000)
#define SCB_INTCTRL_R_ISRPRE_BIT       (23)
#define SCB_INTCTRL_R_ISRPRE_ISR       (0x00800000)
#define SCB_INTCTRL_R_ISRPRE_NOISR     (0x00000000)

#define SCB_INTCTRL_ISRPRE_MASK      (0x00000001)
#define SCB_INTCTRL_ISRPRE_ISR       (0x00000001)
#define SCB_INTCTRL_ISRPRE_NOISR     (0x00000000)
//--------

//--------
#define SCB_INTCTRL_R_PENDSTCLR_MASK      (0x02000000)
#define SCB_INTCTRL_R_PENDSTCLR_BIT       (25)
#define SCB_INTCTRL_R_PENDSTCLR_REMOVE    (0x02000000)
#define SCB_INTCTRL_R_PENDSTCLR_NOEFFECT  (0x00000000)

#define SCB_INTCTRL_PENDSTCLR_MASK         (0x00000001)
#define SCB_INTCTRL_PENDSTCLR_REMOVE       (0x00000001)
#define SCB_INTCTRL_PENDSTCLR_NOEFFECT     (0x00000000)
//--------


//--------
#define SCB_INTCTRL_R_PENDSTSET_MASK      (0x04000000)
#define SCB_INTCTRL_R_PENDSTSET_BIT       (26)
#define SCB_INTCTRL_R_PENDSTSET_PEND      (0x04000000)
#define SCB_INTCTRL_R_PENDSTSET_NOPEND    (0x00000000)
#define SCB_INTCTRL_R_PENDSTSET_SET       (0x04000000)
#define SCB_INTCTRL_R_PENDSTSET_NOEFFECT  (0x00000000)

#define SCB_INTCTRL_PENDSTSET_MASK      (0x00000001)
#define SCB_INTCTRL_PENDSTSET_PEND      (0x00000001)
#define SCB_INTCTRL_PENDSTSET_NOPEND    (0x00000000)
#define SCB_INTCTRL_PENDSTSET_SET       (0x00000001)
#define SCB_INTCTRL_PENDSTSET_NOEFFECT  (0x00000000)
//--------


//--------
#define SCB_INTCTRL_R_UNPENDSV_MASK      (0x08000000)
#define SCB_INTCTRL_R_UNPENDSV_BIT       (27)
#define SCB_INTCTRL_R_UNPENDSV_REMOVE    (0x08000000)
#define SCB_INTCTRL_R_UNPENDSV_NOEFFECT  (0x00000000)

#define SCB_INTCTRL_UNPENDSV_MASK      (0x00000001)
#define SCB_INTCTRL_UNPENDSV_REMOVE    (0x00000001)
#define SCB_INTCTRL_UNPENDSV_NOEFFECT  (0x00000000)
//--------

//--------
#define SCB_INTCTRL_R_PENDSV_MASK      (0x10000000)
#define SCB_INTCTRL_R_PENDSV_BIT       (28)
#define SCB_INTCTRL_R_PENDSV_PEND      (0x10000000)
#define SCB_INTCTRL_R_PENDSV_NOPEND    (0x00000000)
#define SCB_INTCTRL_R_PENDSV_SET       (0x10000000)
#define SCB_INTCTRL_R_PENDSV_NOEFFECT  (0x00000000)

#define SCB_INTCTRL_PENDSV_MASK      (0x00000001)
#define SCB_INTCTRL_PENDSV_PEND      (0x00000001)
#define SCB_INTCTRL_PENDSV_NOPEND    (0x00000000)
#define SCB_INTCTRL_PENDSV_SET       (0x00000001)
#define SCB_INTCTRL_PENDSV_NOEFFECT  (0x00000000)
//--------


//--------
#define SCB_INTCTRL_R_NMISET_MASK      (0x80000000)
#define SCB_INTCTRL_R_NMISET_BIT       (31)
#define SCB_INTCTRL_R_NMISET_PEND      (0x80000000)
#define SCB_INTCTRL_R_NMISET_NOPEND    (0x00000000)
#define SCB_INTCTRL_R_NMISET_SET       (0x80000000)
#define SCB_INTCTRL_R_NMISET_NOEFFECT  (0x00000000)

#define SCB_INTCTRL_NMISET_MASK      (0x00000001)
#define SCB_INTCTRL_NMISET_PEND      (0x00000001)
#define SCB_INTCTRL_NMISET_NOPEND    (0x00000000)
#define SCB_INTCTRL_NMISET_SET       (0x00000001)
#define SCB_INTCTRL_NMISET_NOEFFECT  (0x00000000)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 VTABLE ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SCB_VTABLE            (((VTABLE_TypeDef*)(SCB_BASE+SCB_VTABLE_OFFSET )))
#define SCB_VTABLE_R          (*((volatile uint32_t *)(SCB_BASE+SCB_VTABLE_OFFSET)))


//--------
#define SCB_VTABLE_R_OFFSET_MASK      (0xFFFFFC00)
#define SCB_VTABLE_R_OFFSET_BIT       (10)

#define SCB_VTABLE_OFFSET_MASK        (0x003FFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 APINT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SCB_APINT            (((APINT_TypeDef*)(SCB_BASE+SCB_APINT_OFFSET )))
#define SCB_APINT_R          (*((volatile uint32_t *)(SCB_BASE+SCB_APINT_OFFSET)))


//--------
#define SCB_APINT_R_VECTRESET_MASK      (0x00000001)
#define SCB_APINT_R_VECTRESET_BIT       (0)
#define SCB_APINT_R_VECTRESET_NOUSE     (0x00000001)
#define SCB_APINT_R_VECTRESET_NOEFFECT  (0x00000000)

#define SCB_APINT_VECTRESET_MASK         (0x00000001)
#define SCB_APINT_VECTRESET_NOUSE        (0x00000001)
#define SCB_APINT_VECTRESET_NOEFFECT     (0x00000000)
//--------

//--------
#define SCB_APINT_R_VECTCLRACT_MASK      (0x00000002)
#define SCB_APINT_R_VECTCLRACT_BIT       (1)
#define SCB_APINT_R_VECTCLRACT_NOUSE     (0x00000002)
#define SCB_APINT_R_VECTCLRACT_NOEFFECT  (0x00000000)

#define SCB_APINT_VECTCLRACT_MASK         (0x00000001)
#define SCB_APINT_VECTCLRACT_NOUSE        (0x00000001)
#define SCB_APINT_VECTCLRACT_NOEFFECT     (0x00000000)
//--------


//--------
#define SCB_APINT_R_SYSRESREQ_MASK      (0x00000004)
#define SCB_APINT_R_SYSRESREQ_BIT       (2)
#define SCB_APINT_R_SYSRESREQ_RESET     (0x00000004)
#define SCB_APINT_R_SYSRESREQ_NOEFFECT  (0x00000000)

#define SCB_APINT_SYSRESREQ_MASK         (0x00000001)
#define SCB_APINT_SYSRESREQ_RESET        (0x00000001)
#define SCB_APINT_SYSRESREQ_NOEFFECT     (0x00000000)
//--------


//--------
typedef enum
{
    SCB_enPRIGROUP_XXX =0,
    SCB_enPRIGROUP_XXY =1,
    SCB_enPRIGROUP_XYY =2,
    SCB_enPRIGROUP_YYY =3,
    SCB_enPRIGROUP_ERROR =0xFF,
}SCB_nPRIGROUP;

#define SCB_PRIGROUP_XXX (0)
#define SCB_PRIGROUP_XXY (1)
#define SCB_PRIGROUP_XYY (2)
#define SCB_PRIGROUP_YYY (3)

#define SCB_APINT_R_PRIGROUP_MASK      (0x00000700)
#define SCB_APINT_R_PRIGROUP_BIT       (8)
#define SCB_APINT_R_PRIGROUP_XXX       (0x00000000)
#define SCB_APINT_R_PRIGROUP_XXY       (0x00000500)
#define SCB_APINT_R_PRIGROUP_XYY       (0x00000600)
#define SCB_APINT_R_PRIGROUP_YYY       (0x00000700)

#define SCB_APINT_PRIGROUP_MASK      (0x00000007)
#define SCB_APINT_PRIGROUP_XXX       (0x00000000)
#define SCB_APINT_PRIGROUP_XXY       (0x00000005)
#define SCB_APINT_PRIGROUP_XYY       (0x00000006)
#define SCB_APINT_PRIGROUP_YYY       (0x00000007)
//--------


//--------
#define SCB_APINT_R_ENDIANESS_MASK      (0x00008000)
#define SCB_APINT_R_ENDIANESS_BIT       (15)
#define SCB_APINT_R_ENDIANESS_LITTLE    (0x00000000)
#define SCB_APINT_R_ENDIANESS_BIG       (0x00008000)

#define SCB_APINT_ENDIANESS_MASK      (0x00000001)
#define SCB_APINT_ENDIANESS_LITTLE    (0x00000000)
#define SCB_APINT_ENDIANESS_BIG       (0x00000001)
//--------


//--------
#define SCB_APINT_R_VECTKEY_MASK      (0xFFFF0000)
#define SCB_APINT_R_VECTKEY_BIT       (15)
#define SCB_APINT_R_VECTKEY_READ      (0xFA050000)
#define SCB_APINT_R_VECTKEY_WRITE     (0x05FA0000)

#define SCB_APINT_VECTKEY_MASK      (0x0000FFFF)
#define SCB_APINT_VECTKEY_READ      (0x0000FA05)
#define SCB_APINT_VECTKEY_WRITE     (0x000005FA)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 SYSCTRL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SCB_SYSCTRL            (((SYSCTRL_TypeDef*)(SCB_BASE+SCB_SYSCTRL_OFFSET )))
#define SCB_SYSCTRL_R          (*((volatile uint32_t *)(SCB_BASE+SCB_SYSCTRL_OFFSET)))


//--------
typedef enum
{
    SCB_enSLEEPEXIT_NOSLEEP =0,
    SCB_enSLEEPEXIT_SLEEP   =1,
    SCB_enSLEEPEXIT_ERROR   =0xFF,
}SCB_nSLEEPEXIT;
#define SCB_SYSCTRL_R_SLEEPEXIT_MASK      (0x00000002)
#define SCB_SYSCTRL_R_SLEEPEXIT_BIT       (1)
#define SCB_SYSCTRL_R_SLEEPEXIT_SLEEP     (0x00000002)
#define SCB_SYSCTRL_R_SLEEPEXIT_NOSLEEP   (0x00000000)

#define SCB_SYSCTRL_SLEEPEXIT_MASK         (0x00000001)
#define SCB_SYSCTRL_SLEEPEXIT_SLEEP        (0x00000001)
#define SCB_SYSCTRL_SLEEPEXIT_NOSLEEP      (0x00000000)
//--------

//--------
typedef enum
{
    SCB_enSleepDeep_Sleep=0,
    SCB_enSleepDeep_DeepSleep=1,
    SCB_enSleepDeep_ERROR=0xFF,
}SCB_nSleepDeep;

#define SCB_SLEEPDEEP_SLEEP     (0)
#define SCB_SLEEPDEEP_DEEPSLEEP (1)

#define SCB_SYSCTRL_R_SLEEPDEEP_MASK      (0x00000004)
#define SCB_SYSCTRL_R_SLEEPDEEP_BIT       (2)
#define SCB_SYSCTRL_R_SLEEPDEEP_DEEPSLEEP (0x00000004)
#define SCB_SYSCTRL_R_SLEEPDEEP_SLEEP     (0x00000000)

#define SCB_SYSCTRL_SLEEPDEEP_MASK         (0x00000001)
#define SCB_SYSCTRL_SLEEPDEEP_DEEPSLEEP    (0x00000001)
#define SCB_SYSCTRL_SLEEPDEEP_SLEEP        (0x00000000)
//--------


//--------
typedef enum
{
    SCB_enWAKEUP_ONLY =0,
    SCB_enWAKEUP_ALL   =1,
    SCB_enWAKEUP_ERROR   =0xFF,
}SCB_nWAKEUPSOURCE;

#define SCB_SYSCTRL_R_SEVONPEND_MASK      (0x00000010)
#define SCB_SYSCTRL_R_SEVONPEND_BIT       (4)
#define SCB_SYSCTRL_R_SEVONPEND_ALL       (0x00000010)
#define SCB_SYSCTRL_R_SEVONPEND_ONLY      (0x00000000)

#define SCB_SYSCTRL_SEVONPEND_MASK         (0x00000001)
#define SCB_SYSCTRL_SEVONPEND_ALL          (0x00000001)
#define SCB_SYSCTRL_SEVONPEND_ONLY         (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 CFGCTRL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SCB_CFGCTRL            (((CFGCTRL_TypeDef*)(SCB_BASE+SCB_CFGCTRL_OFFSET )))
#define SCB_CFGCTRL_R          (*((volatile uint32_t *)(SCB_BASE+SCB_CFGCTRL_OFFSET)))


//--------
#define SCB_CFGCTRL_R_BASETHR_MASK      (0x00000001)
#define SCB_CFGCTRL_R_BASETHR_BIT       (0)
#define SCB_CFGCTRL_R_BASETHR_ALL       (0x00000001)
#define SCB_CFGCTRL_R_BASETHR_ONLY      (0x00000000)

#define SCB_CFGCTRL_BASETHR_MASK         (0x00000001)
#define SCB_CFGCTRL_BASETHR_ALL          (0x00000001)
#define SCB_CFGCTRL_BASETHR_ONLY         (0x00000000)
//--------

//--------
#define SCB_CFGCTRL_R_MAINPEND_MASK      (0x00000002)
#define SCB_CFGCTRL_R_MAINPEND_BIT       (1)
#define SCB_CFGCTRL_R_MAINPEND_EN        (0x00000002)
#define SCB_CFGCTRL_R_MAINPEND_DIS       (0x00000000)

#define SCB_CFGCTRL_MAINPEND_MASK         (0x00000001)
#define SCB_CFGCTRL_MAINPEND_EN          (0x00000001)
#define SCB_CFGCTRL_MAINPEND_DIS         (0x00000000)
//--------


//--------
#define SCB_CFGCTRL_R_UNALIGNED_MASK      (0x00000008)
#define SCB_CFGCTRL_R_UNALIGNED_BIT       (3)
#define SCB_CFGCTRL_R_UNALIGNED_TRAP      (0x00000008)
#define SCB_CFGCTRL_R_UNALIGNED_NOTRAP    (0x00000000)

#define SCB_CFGCTRL_UNALIGNED_MASK        (0x00000001)
#define SCB_CFGCTRL_UNALIGNED_TRAP        (0x00000001)
#define SCB_CFGCTRL_UNALIGNED_NOTRAP      (0x00000000)
//--------

//--------
#define SCB_CFGCTRL_R_DIV0_MASK      (0x00000010)
#define SCB_CFGCTRL_R_DIV0_BIT       (4)
#define SCB_CFGCTRL_R_DIV0_TRAP      (0x00000010)
#define SCB_CFGCTRL_R_DIV0_NOTRAP    (0x00000000)

#define SCB_CFGCTRL_DIV0_MASK        (0x00000001)
#define SCB_CFGCTRL_DIV0_TRAP        (0x00000001)
#define SCB_CFGCTRL_DIV0_NOTRAP      (0x00000000)
//--------


//--------
#define SCB_CFGCTRL_R_BFHFNMIGN_MASK      (0x00000100)
#define SCB_CFGCTRL_R_BFHFNMIGN_BIT       (8)
#define SCB_CFGCTRL_R_BFHFNMIGN_EN        (0x00000100)
#define SCB_CFGCTRL_R_BFHFNMIGN_DIS       (0x00000000)

#define SCB_CFGCTRL_BFHFNMIGN_MASK        (0x00000001)
#define SCB_CFGCTRL_BFHFNMIGN_EN          (0x00000001)
#define SCB_CFGCTRL_BFHFNMIGN_DIS         (0x00000000)
//--------



//--------

typedef enum
{
    SCB_enALIGN_4BYTE =0,
    SCB_enALIGN_8BYTE =1,
    SCB_enALIGN_ERROR =0xFF,
}SCB_nAlignment;
#define SCB_CFGCTRL_R_STKALIGN_MASK      (0x00000200)
#define SCB_CFGCTRL_R_STKALIGN_BIT       (9)
#define SCB_CFGCTRL_R_STKALIGN_8BYTE     (0x00000200)
#define SCB_CFGCTRL_R_STKALIGN_4BYTE     (0x00000000)

#define SCB_CFGCTRL_STKALIGN_MASK        (0x00000001)
#define SCB_CFGCTRL_STKALIGN_8BYTE       (0x00000001)
#define SCB_CFGCTRL_STKALIGN_4BYTE       (0x00000000)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 SYSPRI1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SCB_SYSPRI1            (((SYSPRI1_TypeDef*)(SCB_BASE+SCB_SYSPRI1_OFFSET )))
#define SCB_SYSPRI1_R          (*((volatile uint32_t *)(SCB_BASE+SCB_SYSPRI1_OFFSET)))

typedef enum
{
    SCB_enSYSPRI0 =0,
    SCB_enSYSPRI1 =1,
    SCB_enSYSPRI2 =2,
    SCB_enSYSPRI3 =3,
    SCB_enSYSPRI4 =4,
    SCB_enSYSPRI5 =5,
    SCB_enSYSPRI6 =6,
    SCB_enSYSPRI7 =7,
}SCB_nSYSPRI;
//--------
#define SCB_SYSPRI1_R_MEM_MASK      (0x000000E0)
#define SCB_SYSPRI1_R_MEM_BIT       (5)
#define SCB_SYSPRI1_R_MEM_PRI0      (0x00000000)
#define SCB_SYSPRI1_R_MEM_PRI1      (0x00000020)
#define SCB_SYSPRI1_R_MEM_PRI2      (0x00000040)
#define SCB_SYSPRI1_R_MEM_PRI3      (0x00000060)
#define SCB_SYSPRI1_R_MEM_PRI4      (0x00000080)
#define SCB_SYSPRI1_R_MEM_PRI5      (0x000000A0)
#define SCB_SYSPRI1_R_MEM_PRI6      (0x000000C0)
#define SCB_SYSPRI1_R_MEM_PRI7      (0x000000E0)

#define SCB_SYSPRI1_MEM_MASK        (0x00000007)
#define SCB_SYSPRI1_MEM_PRI0        (0x00000000)
#define SCB_SYSPRI1_MEM_PRI1        (0x00000001)
#define SCB_SYSPRI1_MEM_PRI2        (0x00000002)
#define SCB_SYSPRI1_MEM_PRI3        (0x00000003)
#define SCB_SYSPRI1_MEM_PRI4        (0x00000004)
#define SCB_SYSPRI1_MEM_PRI5        (0x00000005)
#define SCB_SYSPRI1_MEM_PRI6        (0x00000006)
#define SCB_SYSPRI1_MEM_PRI7        (0x00000007)
//--------


//--------
#define SCB_SYSPRI1_R_BUS_MASK      (0x0000E000)
#define SCB_SYSPRI1_R_BUS_BIT       (13)
#define SCB_SYSPRI1_R_BUS_PRI0      (0x00000000)
#define SCB_SYSPRI1_R_BUS_PRI1      (0x00002000)
#define SCB_SYSPRI1_R_BUS_PRI2      (0x00004000)
#define SCB_SYSPRI1_R_BUS_PRI3      (0x00006000)
#define SCB_SYSPRI1_R_BUS_PRI4      (0x00008000)
#define SCB_SYSPRI1_R_BUS_PRI5      (0x0000A000)
#define SCB_SYSPRI1_R_BUS_PRI6      (0x0000C000)
#define SCB_SYSPRI1_R_BUS_PRI7      (0x0000E000)

#define SCB_SYSPRI1_BUS_MASK        (0x00000007)
#define SCB_SYSPRI1_BUS_PRI0        (0x00000000)
#define SCB_SYSPRI1_BUS_PRI1        (0x00000001)
#define SCB_SYSPRI1_BUS_PRI2        (0x00000002)
#define SCB_SYSPRI1_BUS_PRI3        (0x00000003)
#define SCB_SYSPRI1_BUS_PRI4        (0x00000004)
#define SCB_SYSPRI1_BUS_PRI5        (0x00000005)
#define SCB_SYSPRI1_BUS_PRI6        (0x00000006)
#define SCB_SYSPRI1_BUS_PRI7        (0x00000007)
//--------



//--------
#define SCB_SYSPRI1_R_USAGE_MASK      (0x00E00000)
#define SCB_SYSPRI1_R_USAGE_BIT       (21)
#define SCB_SYSPRI1_R_USAGE_PRI0      (0x00000000)
#define SCB_SYSPRI1_R_USAGE_PRI1      (0x00200000)
#define SCB_SYSPRI1_R_USAGE_PRI2      (0x00400000)
#define SCB_SYSPRI1_R_USAGE_PRI3      (0x00600000)
#define SCB_SYSPRI1_R_USAGE_PRI4      (0x00800000)
#define SCB_SYSPRI1_R_USAGE_PRI5      (0x00A00000)
#define SCB_SYSPRI1_R_USAGE_PRI6      (0x00C00000)
#define SCB_SYSPRI1_R_USAGE_PRI7      (0x00E00000)

#define SCB_SYSPRI1_USAGE_MASK        (0x00000007)
#define SCB_SYSPRI1_USAGE_PRI0        (0x00000000)
#define SCB_SYSPRI1_USAGE_PRI1        (0x00000001)
#define SCB_SYSPRI1_USAGE_PRI2        (0x00000002)
#define SCB_SYSPRI1_USAGE_PRI3        (0x00000003)
#define SCB_SYSPRI1_USAGE_PRI4        (0x00000004)
#define SCB_SYSPRI1_USAGE_PRI5        (0x00000005)
#define SCB_SYSPRI1_USAGE_PRI6        (0x00000006)
#define SCB_SYSPRI1_USAGE_PRI7        (0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 9 SYSPRI2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SCB_SYSPRI2            (((SYSPRI2_TypeDef*)(SCB_BASE+SCB_SYSPRI2_OFFSET )))
#define SCB_SYSPRI2_R          (*((volatile uint32_t *)(SCB_BASE+SCB_SYSPRI2_OFFSET)))


//--------
#define SCB_SYSPRI2_R_SVC_MASK      (0xE0000000)
#define SCB_SYSPRI2_R_SVC_BIT       (29)
#define SCB_SYSPRI2_R_SVC_PRI0      (0x00000000)
#define SCB_SYSPRI2_R_SVC_PRI1      (0x20000000)
#define SCB_SYSPRI2_R_SVC_PRI2      (0x40000000)
#define SCB_SYSPRI2_R_SVC_PRI3      (0x60000000)
#define SCB_SYSPRI2_R_SVC_PRI4      (0x80000000)
#define SCB_SYSPRI2_R_SVC_PRI5      (0xA0000000)
#define SCB_SYSPRI2_R_SVC_PRI6      (0xC0000000)
#define SCB_SYSPRI2_R_SVC_PRI7      (0xE0000000)

#define SCB_SYSPRI2_SVC_MASK        (0x00000007)
#define SCB_SYSPRI2_SVC_PRI0        (0x00000000)
#define SCB_SYSPRI2_SVC_PRI1        (0x00000001)
#define SCB_SYSPRI2_SVC_PRI2        (0x00000002)
#define SCB_SYSPRI2_SVC_PRI3        (0x00000003)
#define SCB_SYSPRI2_SVC_PRI4        (0x00000004)
#define SCB_SYSPRI2_SVC_PRI5        (0x00000005)
#define SCB_SYSPRI2_SVC_PRI6        (0x00000006)
#define SCB_SYSPRI2_SVC_PRI7        (0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 10 SYSPRI3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SCB_SYSPRI3            (((SYSPRI3_TypeDef*)(SCB_BASE+SCB_SYSPRI3_OFFSET )))
#define SCB_SYSPRI3_R          (*((volatile uint32_t *)(SCB_BASE+SCB_SYSPRI3_OFFSET)))


//--------
#define SCB_SYSPRI3_R_DEBUG_MASK      (0x000000E0)
#define SCB_SYSPRI3_R_DEBUG_BIT       (5)
#define SCB_SYSPRI3_R_DEBUG_PRI0      (0x00000000)
#define SCB_SYSPRI3_R_DEBUG_PRI1      (0x00000020)
#define SCB_SYSPRI3_R_DEBUG_PRI2      (0x00000040)
#define SCB_SYSPRI3_R_DEBUG_PRI3      (0x00000060)
#define SCB_SYSPRI3_R_DEBUG_PRI4      (0x00000080)
#define SCB_SYSPRI3_R_DEBUG_PRI5      (0x000000A0)
#define SCB_SYSPRI3_R_DEBUG_PRI6      (0x000000C0)
#define SCB_SYSPRI3_R_DEBUG_PRI7      (0x000000E0)

#define SCB_SYSPRI3_DEBUG_MASK        (0x00000007)
#define SCB_SYSPRI3_DEBUG_PRI0        (0x00000000)
#define SCB_SYSPRI3_DEBUG_PRI1        (0x00000001)
#define SCB_SYSPRI3_DEBUG_PRI2        (0x00000002)
#define SCB_SYSPRI3_DEBUG_PRI3        (0x00000003)
#define SCB_SYSPRI3_DEBUG_PRI4        (0x00000004)
#define SCB_SYSPRI3_DEBUG_PRI5        (0x00000005)
#define SCB_SYSPRI3_DEBUG_PRI6        (0x00000006)
#define SCB_SYSPRI3_DEBUG_PRI7        (0x00000007)
//--------



//--------
#define SCB_SYSPRI3_R_PENDSV_MASK      (0x00E00000)
#define SCB_SYSPRI3_R_PENDSV_BIT       (21)
#define SCB_SYSPRI3_R_PENDSV_PRI0      (0x00000000)
#define SCB_SYSPRI3_R_PENDSV_PRI1      (0x00200000)
#define SCB_SYSPRI3_R_PENDSV_PRI2      (0x00400000)
#define SCB_SYSPRI3_R_PENDSV_PRI3      (0x00600000)
#define SCB_SYSPRI3_R_PENDSV_PRI4      (0x00800000)
#define SCB_SYSPRI3_R_PENDSV_PRI5      (0x00A00000)
#define SCB_SYSPRI3_R_PENDSV_PRI6      (0x00C00000)
#define SCB_SYSPRI3_R_PENDSV_PRI7      (0x00E00000)

#define SCB_SYSPRI3_PENDSV_MASK        (0x00000007)
#define SCB_SYSPRI3_PENDSV_PRI0        (0x00000000)
#define SCB_SYSPRI3_PENDSV_PRI1        (0x00000001)
#define SCB_SYSPRI3_PENDSV_PRI2        (0x00000002)
#define SCB_SYSPRI3_PENDSV_PRI3        (0x00000003)
#define SCB_SYSPRI3_PENDSV_PRI4        (0x00000004)
#define SCB_SYSPRI3_PENDSV_PRI5        (0x00000005)
#define SCB_SYSPRI3_PENDSV_PRI6        (0x00000006)
#define SCB_SYSPRI3_PENDSV_PRI7        (0x00000007)
//--------



//--------

#define SCB_SYSPRI3_R_TICK_MASK      (0xE0000000)
#define SCB_SYSPRI3_R_TICK_BIT       (29)
#define SCB_SYSPRI3_R_TICK_PRI0      (0x00000000)
#define SCB_SYSPRI3_R_TICK_PRI1      (0x20000000)
#define SCB_SYSPRI3_R_TICK_PRI2      (0x40000000)
#define SCB_SYSPRI3_R_TICK_PRI3      (0x60000000)
#define SCB_SYSPRI3_R_TICK_PRI4      (0x80000000)
#define SCB_SYSPRI3_R_TICK_PRI5      (0xA0000000)
#define SCB_SYSPRI3_R_TICK_PRI6      (0xC0000000)
#define SCB_SYSPRI3_R_TICK_PRI7      (0xE0000000)

#define SCB_SYSPRI3_TICK_MASK        (0x00000007)
#define SCB_SYSPRI3_TICK_PRI0        (0x00000000)
#define SCB_SYSPRI3_TICK_PRI1        (0x00000001)
#define SCB_SYSPRI3_TICK_PRI2        (0x00000002)
#define SCB_SYSPRI3_TICK_PRI3        (0x00000003)
#define SCB_SYSPRI3_TICK_PRI4        (0x00000004)
#define SCB_SYSPRI3_TICK_PRI5        (0x00000005)
#define SCB_SYSPRI3_TICK_PRI6        (0x00000006)
#define SCB_SYSPRI3_TICK_PRI7        (0x00000007)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 11 SYSHNDCTRL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SCB_SYSHNDCTRL            (((SYSHNDCTRL_TypeDef*)(SCB_BASE+SCB_SYSHNDCTRL_OFFSET )))
#define SCB_SYSHNDCTRL_R          (*((volatile uint32_t *)(SCB_BASE+SCB_SYSHNDCTRL_OFFSET)))


//--------
#define SCB_SYSHNDCTRL_R_MEMA_MASK      (0x00000001)
#define SCB_SYSHNDCTRL_R_MEMA_BIT       (0)
#define SCB_SYSHNDCTRL_R_MEMA_NOACTIVE  (0x00000000)
#define SCB_SYSHNDCTRL_R_MEMA_ACTIVE    (0x00000001)

#define SCB_SYSHNDCTRL_MEMA_MASK        (0x00000001)
#define SCB_SYSHNDCTRL_MEMA_NOACTIVE    (0x00000000)
#define SCB_SYSHNDCTRL_MEMA_ACTIVE      (0x00000001)
//--------


//--------
#define SCB_SYSHNDCTRL_R_BUSA_MASK      (0x00000002)
#define SCB_SYSHNDCTRL_R_BUSA_BIT       (1)
#define SCB_SYSHNDCTRL_R_BUSA_NOACTIVE  (0x00000000)
#define SCB_SYSHNDCTRL_R_BUSA_ACTIVE    (0x00000002)

#define SCB_SYSHNDCTRL_BUSA_MASK        (0x00000001)
#define SCB_SYSHNDCTRL_BUSA_NOACTIVE    (0x00000000)
#define SCB_SYSHNDCTRL_BUSA_ACTIVE      (0x00000001)
//--------


//--------
#define SCB_SYSHNDCTRL_R_USGA_MASK      (0x00000008)
#define SCB_SYSHNDCTRL_R_USGA_BIT       (3)
#define SCB_SYSHNDCTRL_R_USGA_NOACTIVE  (0x00000000)
#define SCB_SYSHNDCTRL_R_USGA_ACTIVE    (0x00000008)

#define SCB_SYSHNDCTRL_USGA_MASK        (0x00000001)
#define SCB_SYSHNDCTRL_USGA_NOACTIVE    (0x00000000)
#define SCB_SYSHNDCTRL_USGA_ACTIVE      (0x00000001)
//--------

//--------
#define SCB_SYSHNDCTRL_R_SVCA_MASK      (0x00000080)
#define SCB_SYSHNDCTRL_R_SVCA_BIT       (7)
#define SCB_SYSHNDCTRL_R_SVCA_NOACTIVE  (0x00000000)
#define SCB_SYSHNDCTRL_R_SVCA_ACTIVE    (0x00000080)

#define SCB_SYSHNDCTRL_SVCA_MASK        (0x00000001)
#define SCB_SYSHNDCTRL_SVCA_NOACTIVE    (0x00000000)
#define SCB_SYSHNDCTRL_SVCA_ACTIVE      (0x00000001)
//--------

//--------
#define SCB_SYSHNDCTRL_R_MON_MASK      (0x00000100)
#define SCB_SYSHNDCTRL_R_MON_BIT       (8)
#define SCB_SYSHNDCTRL_R_MON_NOACTIVE  (0x00000000)
#define SCB_SYSHNDCTRL_R_MON_ACTIVE    (0x00000100)

#define SCB_SYSHNDCTRL_MON_MASK        (0x00000001)
#define SCB_SYSHNDCTRL_MON_NOACTIVE    (0x00000000)
#define SCB_SYSHNDCTRL_MON_ACTIVE      (0x00000001)
//--------


//--------
#define SCB_SYSHNDCTRL_R_PNDSV_MASK      (0x00000400)
#define SCB_SYSHNDCTRL_R_PNDSV_BIT       (10)
#define SCB_SYSHNDCTRL_R_PNDSV_NOACTIVE  (0x00000000)
#define SCB_SYSHNDCTRL_R_PNDSV_ACTIVE    (0x00000400)

#define SCB_SYSHNDCTRL_PNDSV_MASK        (0x00000001)
#define SCB_SYSHNDCTRL_PNDSV_NOACTIVE    (0x00000000)
#define SCB_SYSHNDCTRL_PNDSV_ACTIVE      (0x00000001)
//--------


//--------
#define SCB_SYSHNDCTRL_R_TICK_MASK      (0x00000800)
#define SCB_SYSHNDCTRL_R_TICK_BIT       (11)
#define SCB_SYSHNDCTRL_R_TICK_NOACTIVE  (0x00000000)
#define SCB_SYSHNDCTRL_R_TICK_ACTIVE    (0x00000800)

#define SCB_SYSHNDCTRL_TICK_MASK        (0x00000001)
#define SCB_SYSHNDCTRL_TICK_NOACTIVE    (0x00000000)
#define SCB_SYSHNDCTRL_TICK_ACTIVE      (0x00000001)
//--------


//--------
#define SCB_SYSHNDCTRL_R_USAGEP_MASK      (0x00001000)
#define SCB_SYSHNDCTRL_R_USAGEP_BIT       (12)
#define SCB_SYSHNDCTRL_R_USAGEP_NOPEND    (0x00000000)
#define SCB_SYSHNDCTRL_R_USAGEP_PEND      (0x00001000)

#define SCB_SYSHNDCTRL_USAGEP_MASK        (0x00000001)
#define SCB_SYSHNDCTRL_USAGEP_NOPEND      (0x00000000)
#define SCB_SYSHNDCTRL_USAGEP_PEND        (0x00000001)
//--------

//--------
#define SCB_SYSHNDCTRL_R_MEMP_MASK      (0x00002000)
#define SCB_SYSHNDCTRL_R_MEMP_BIT       (13)
#define SCB_SYSHNDCTRL_R_MEMP_NOPEND    (0x00000000)
#define SCB_SYSHNDCTRL_R_MEMP_PEND      (0x00002000)

#define SCB_SYSHNDCTRL_MEMP_MASK        (0x00000001)
#define SCB_SYSHNDCTRL_MEMP_NOPEND      (0x00000000)
#define SCB_SYSHNDCTRL_MEMP_PEND        (0x00000001)
//--------

//--------
#define SCB_SYSHNDCTRL_R_BUSP_MASK      (0x00004000)
#define SCB_SYSHNDCTRL_R_BUSP_BIT       (14)
#define SCB_SYSHNDCTRL_R_BUSP_NOPEND    (0x00000000)
#define SCB_SYSHNDCTRL_R_BUSP_PEND      (0x00004000)

#define SCB_SYSHNDCTRL_BUSP_MASK        (0x00000001)
#define SCB_SYSHNDCTRL_BUSP_NOPEND      (0x00000000)
#define SCB_SYSHNDCTRL_BUSP_PEND        (0x00000001)
//--------

//--------
#define SCB_SYSHNDCTRL_R_SVC_MASK      (0x00008000)
#define SCB_SYSHNDCTRL_R_SVC_BIT       (15)
#define SCB_SYSHNDCTRL_R_SVC_NOPEND    (0x00000000)
#define SCB_SYSHNDCTRL_R_SVC_PEND      (0x00008000)

#define SCB_SYSHNDCTRL_SVC_MASK        (0x00000001)
#define SCB_SYSHNDCTRL_SVC_NOPEND      (0x00000000)
#define SCB_SYSHNDCTRL_SVC_PEND        (0x00000001)
//--------

//--------
#define SCB_SYSHNDCTRL_R_MEM_MASK      (0x00010000)
#define SCB_SYSHNDCTRL_R_MEM_BIT       (16)
#define SCB_SYSHNDCTRL_R_MEM_DIS       (0x00000000)
#define SCB_SYSHNDCTRL_R_MEM_EN        (0x00010000)

#define SCB_SYSHNDCTRL_MEM_MASK        (0x00000001)
#define SCB_SYSHNDCTRL_MEM_DIS         (0x00000000)
#define SCB_SYSHNDCTRL_MEM_EN          (0x00000001)
//--------

//--------
#define SCB_SYSHNDCTRL_R_BUS_MASK      (0x00020000)
#define SCB_SYSHNDCTRL_R_BUS_BIT       (17)
#define SCB_SYSHNDCTRL_R_BUS_DIS       (0x00000000)
#define SCB_SYSHNDCTRL_R_BUS_EN        (0x00020000)

#define SCB_SYSHNDCTRL_BUS_MASK        (0x00000001)
#define SCB_SYSHNDCTRL_BUS_DIS         (0x00000000)
#define SCB_SYSHNDCTRL_BUS_EN          (0x00000001)
//--------


//--------
#define SCB_SYSHNDCTRL_R_USAGE_MASK      (0x00040000)
#define SCB_SYSHNDCTRL_R_USAGE_BIT       (18)
#define SCB_SYSHNDCTRL_R_USAGE_DIS       (0x00000000)
#define SCB_SYSHNDCTRL_R_USAGE_EN        (0x00040000)

#define SCB_SYSHNDCTRL_USAGE_MASK        (0x00000001)
#define SCB_SYSHNDCTRL_USAGE_DIS         (0x00000000)
#define SCB_SYSHNDCTRL_USAGE_EN          (0x00000001)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 12 FAULTSTAT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SCB_FAULTSTAT            (((FAULTSTAT_TypeDef*)(SCB_BASE+SCB_FAULTSTAT_OFFSET )))
#define SCB_MFAULTSTAT_R          (*((volatile uint8_t *)(SCB_BASE+SCB_FAULTSTAT_OFFSET)))
#define SCB_BFAULTSTAT_R          (*((volatile uint8_t *)(SCB_BASE+SCB_BFAULTSTAT_OFFSET)))
#define SCB_UFAULTSTAT_R          (*((volatile uint16_t *)(SCB_BASE+SCB_UFAULTSTAT_OFFSET)))
#define SCB_FAULTSTAT_R          (*((volatile uint32_t *)(SCB_BASE+SCB_FAULTSTAT_OFFSET)))


typedef enum
{
    SCB_enUFAULTSTAT_UNDEF=0x0001,
    SCB_enUFAULTSTAT_INVSTAT=0x0002,
    SCB_enUFAULTSTAT_INVPC=0x0004,
    SCB_enUFAULTSTAT_NOCP=0x0008,
    SCB_enUFAULTSTAT_UNALIGN=0x0100,
    SCB_enUFAULTSTAT_DIV0=0x0200,
}SCB_nUFAULTSTAT;

//--------
#define SCB_FAULTSTAT_R_IERR_MASK      (0x00000001)
#define SCB_FAULTSTAT_R_IERR_BIT       (0)
#define SCB_FAULTSTAT_R_IERR_NOOCCUR   (0x00000000)
#define SCB_FAULTSTAT_R_IERR_OCCUR     (0x00000001)
#define SCB_FAULTSTAT_R_IERR_CLEAR     (0x00000001)

#define SCB_FAULTSTAT_IERR_MASK        (0x00000001)
#define SCB_FAULTSTAT_IERR_NOOCCUR     (0x00000000)
#define SCB_FAULTSTAT_IERR_OCCUR       (0x00000001)
#define SCB_FAULTSTAT_IERR_CLEAR       (0x00000001)
//--------

//--------
#define SCB_FAULTSTAT_R_DERR_MASK      (0x00000002)
#define SCB_FAULTSTAT_R_DERR_BIT       (1)
#define SCB_FAULTSTAT_R_DERR_NOOCCUR   (0x00000000)
#define SCB_FAULTSTAT_R_DERR_OCCUR     (0x00000002)
#define SCB_FAULTSTAT_R_DERR_CLEAR     (0x00000002)

#define SCB_FAULTSTAT_DERR_MASK        (0x00000001)
#define SCB_FAULTSTAT_DERR_NOOCCUR     (0x00000000)
#define SCB_FAULTSTAT_DERR_OCCUR       (0x00000001)
#define SCB_FAULTSTAT_DERR_CLEAR       (0x00000001)
//--------

//--------
#define SCB_FAULTSTAT_R_MUSTKE_MASK      (0x00000008)
#define SCB_FAULTSTAT_R_MUSTKE_BIT       (3)
#define SCB_FAULTSTAT_R_MUSTKE_NOOCCUR   (0x00000000)
#define SCB_FAULTSTAT_R_MUSTKE_OCCUR     (0x00000008)
#define SCB_FAULTSTAT_R_MUSTKE_CLEAR     (0x00000008)

#define SCB_FAULTSTAT_MUSTKE_MASK        (0x00000001)
#define SCB_FAULTSTAT_MUSTKE_NOOCCUR     (0x00000000)
#define SCB_FAULTSTAT_MUSTKE_OCCUR       (0x00000001)
#define SCB_FAULTSTAT_MUSTKE_CLEAR       (0x00000001)
//--------

//--------
#define SCB_FAULTSTAT_R_MSTKE_MASK      (0x00000010)
#define SCB_FAULTSTAT_R_MSTKE_BIT       (4)
#define SCB_FAULTSTAT_R_MSTKE_NOOCCUR   (0x00000000)
#define SCB_FAULTSTAT_R_MSTKE_OCCUR     (0x00000010)
#define SCB_FAULTSTAT_R_MSTKE_CLEAR     (0x00000010)

#define SCB_FAULTSTAT_MSTKE_MASK        (0x00000001)
#define SCB_FAULTSTAT_MSTKE_NOOCCUR     (0x00000000)
#define SCB_FAULTSTAT_MSTKE_OCCUR       (0x00000001)
#define SCB_FAULTSTAT_MSTKE_CLEAR       (0x00000001)
//--------

//--------
#define SCB_FAULTSTAT_R_MLSPERR_MASK      (0x00000020)
#define SCB_FAULTSTAT_R_MLSPERR_BIT       (5)
#define SCB_FAULTSTAT_R_MLSPERR_NOOCCUR   (0x00000000)
#define SCB_FAULTSTAT_R_MLSPERR_OCCUR     (0x00000020)
#define SCB_FAULTSTAT_R_MLSPERR_CLEAR     (0x00000020)

#define SCB_FAULTSTAT_MLSPERR_MASK        (0x00000001)
#define SCB_FAULTSTAT_MLSPERR_NOOCCUR     (0x00000000)
#define SCB_FAULTSTAT_MLSPERR_OCCUR       (0x00000001)
#define SCB_FAULTSTAT_MLSPERR_CLEAR       (0x00000001)
//--------

//--------
#define SCB_FAULTSTAT_R_MMARV_MASK      (0x00000080)
#define SCB_FAULTSTAT_R_MMARV_BIT       (7)
#define SCB_FAULTSTAT_R_MMARV_NOVALID   (0x00000000)
#define SCB_FAULTSTAT_R_MMARV_VALID     (0x00000080)
#define SCB_FAULTSTAT_R_MMARV_CLEAR     (0x00000080)

#define SCB_FAULTSTAT_MMARV_MASK        (0x00000001)
#define SCB_FAULTSTAT_MMARV_NOVALID     (0x00000000)
#define SCB_FAULTSTAT_MMARV_VALID       (0x00000001)
#define SCB_FAULTSTAT_MMARV_CLEAR       (0x00000001)
//--------

//--------
#define SCB_FAULTSTAT_R_IBUS_MASK      (0x00000100)
#define SCB_FAULTSTAT_R_IBUS_BIT       (8)
#define SCB_FAULTSTAT_R_IBUS_NOOCCUR   (0x00000000)
#define SCB_FAULTSTAT_R_IBUS_OCCUR     (0x00000100)
#define SCB_FAULTSTAT_R_IBUS_CLEAR     (0x00000100)

#define SCB_FAULTSTAT_IBUS_MASK        (0x00000001)
#define SCB_FAULTSTAT_IBUS_NOOCCUR     (0x00000000)
#define SCB_FAULTSTAT_IBUS_OCCUR       (0x00000001)
#define SCB_FAULTSTAT_IBUS_CLEAR       (0x00000001)
//--------


//--------
#define SCB_FAULTSTAT_R_PRECISE_MASK      (0x00000200)
#define SCB_FAULTSTAT_R_PRECISE_BIT       (9)
#define SCB_FAULTSTAT_R_PRECISE_NOOCCUR   (0x00000000)
#define SCB_FAULTSTAT_R_PRECISE_OCCUR     (0x00000200)
#define SCB_FAULTSTAT_R_PRECISE_CLEAR     (0x00000200)

#define SCB_FAULTSTAT_PRECISE_MASK        (0x00000001)
#define SCB_FAULTSTAT_PRECISE_NOOCCUR     (0x00000000)
#define SCB_FAULTSTAT_PRECISE_OCCUR       (0x00000001)
#define SCB_FAULTSTAT_PRECISE_CLEAR       (0x00000001)
//--------

//--------
#define SCB_FAULTSTAT_R_IMPRE_MASK      (0x00000400)
#define SCB_FAULTSTAT_R_IMPRE_BIT       (10)
#define SCB_FAULTSTAT_R_IMPRE_NOOCCUR   (0x00000000)
#define SCB_FAULTSTAT_R_IMPRE_OCCUR     (0x00000400)
#define SCB_FAULTSTAT_R_IMPRE_CLEAR     (0x00000400)

#define SCB_FAULTSTAT_IMPRE_MASK        (0x00000001)
#define SCB_FAULTSTAT_IMPRE_NOOCCUR     (0x00000000)
#define SCB_FAULTSTAT_IMPRE_OCCUR       (0x00000001)
#define SCB_FAULTSTAT_IMPRE_CLEAR       (0x00000001)
//--------


//--------
#define SCB_FAULTSTAT_R_BUSTKE_MASK      (0x00000800)
#define SCB_FAULTSTAT_R_BUSTKE_BIT       (11)
#define SCB_FAULTSTAT_R_BUSTKE_NOOCCUR   (0x00000000)
#define SCB_FAULTSTAT_R_BUSTKE_OCCUR     (0x00000800)
#define SCB_FAULTSTAT_R_BUSTKE_CLEAR     (0x00000800)

#define SCB_FAULTSTAT_BUSTKE_MASK        (0x00000001)
#define SCB_FAULTSTAT_BUSTKE_NOOCCUR     (0x00000000)
#define SCB_FAULTSTAT_BUSTKE_OCCUR       (0x00000001)
#define SCB_FAULTSTAT_BUSTKE_CLEAR       (0x00000001)
//--------

//--------
#define SCB_FAULTSTAT_R_BSTKE_MASK      (0x00001000)
#define SCB_FAULTSTAT_R_BSTKE_BIT       (12)
#define SCB_FAULTSTAT_R_BSTKE_NOOCCUR   (0x00000000)
#define SCB_FAULTSTAT_R_BSTKE_OCCUR     (0x00001000)
#define SCB_FAULTSTAT_R_BSTKE_CLEAR     (0x00001000)

#define SCB_FAULTSTAT_BSTKE_MASK        (0x00000001)
#define SCB_FAULTSTAT_BSTKE_NOOCCUR     (0x00000000)
#define SCB_FAULTSTAT_BSTKE_OCCUR       (0x00000001)
#define SCB_FAULTSTAT_BSTKE_CLEAR       (0x00000001)
//--------

//--------
#define SCB_FAULTSTAT_R_BLSPERR_MASK      (0x00002000)
#define SCB_FAULTSTAT_R_BLSPERR_BIT       (13)
#define SCB_FAULTSTAT_R_BLSPERR_NOOCCUR   (0x00000000)
#define SCB_FAULTSTAT_R_BLSPERR_OCCUR     (0x00002000)
#define SCB_FAULTSTAT_R_BLSPERR_CLEAR     (0x00002000)

#define SCB_FAULTSTAT_BLSPERR_MASK        (0x00000001)
#define SCB_FAULTSTAT_BLSPERR_NOOCCUR     (0x00000000)
#define SCB_FAULTSTAT_BLSPERR_OCCUR       (0x00000001)
#define SCB_FAULTSTAT_BLSPERR_CLEAR       (0x00000001)
//--------


//--------
#define SCB_FAULTSTAT_R_BFARV_MASK      (0x00008000)
#define SCB_FAULTSTAT_R_BFARV_BIT       (15)
#define SCB_FAULTSTAT_R_BFARV_NOVALID   (0x00000000)
#define SCB_FAULTSTAT_R_BFARV_VALID     (0x00008000)
#define SCB_FAULTSTAT_R_BFARV_CLEAR     (0x00008000)

#define SCB_FAULTSTAT_BFARV_MASK        (0x00000001)
#define SCB_FAULTSTAT_BFARV_NOVALID     (0x00000000)
#define SCB_FAULTSTAT_BFARV_VALID       (0x00000001)
#define SCB_FAULTSTAT_BFARV_CLEAR       (0x00000001)
//--------

//--------
#define SCB_FAULTSTAT_R_UNDEF_MASK      (0x00010000)
#define SCB_FAULTSTAT_R_UNDEF_BIT       (16)
#define SCB_FAULTSTAT_R_UNDEF_NOOCCUR   (0x00000000)
#define SCB_FAULTSTAT_R_UNDEF_OCCUR     (0x00010000)
#define SCB_FAULTSTAT_R_UNDEF_CLEAR     (0x00010000)

#define SCB_FAULTSTAT_UNDEF_MASK        (0x00000001)
#define SCB_FAULTSTAT_UNDEF_NOOCCUR     (0x00000000)
#define SCB_FAULTSTAT_UNDEF_OCCUR       (0x00000001)
#define SCB_FAULTSTAT_UNDEF_CLEAR       (0x00000001)
//--------


//--------
#define SCB_FAULTSTAT_R_INVSTAT_MASK      (0x00020000)
#define SCB_FAULTSTAT_R_INVSTAT_BIT       (17)
#define SCB_FAULTSTAT_R_INVSTAT_NOOCCUR   (0x00000000)
#define SCB_FAULTSTAT_R_INVSTAT_OCCUR     (0x00020000)
#define SCB_FAULTSTAT_R_INVSTAT_CLEAR     (0x00020000)

#define SCB_FAULTSTAT_INVSTAT_MASK        (0x00000001)
#define SCB_FAULTSTAT_INVSTAT_NOOCCUR     (0x00000000)
#define SCB_FAULTSTAT_INVSTAT_OCCUR       (0x00000001)
#define SCB_FAULTSTAT_INVSTAT_CLEAR       (0x00000001)
//--------


//--------
#define SCB_FAULTSTAT_R_INVPC_MASK      (0x00040000)
#define SCB_FAULTSTAT_R_INVPC_BIT       (18)
#define SCB_FAULTSTAT_R_INVPC_NOOCCUR   (0x00000000)
#define SCB_FAULTSTAT_R_INVPC_OCCUR     (0x00040000)
#define SCB_FAULTSTAT_R_INVPC_CLEAR     (0x00040000)

#define SCB_FAULTSTAT_INVPC_MASK        (0x00000001)
#define SCB_FAULTSTAT_INVPC_NOOCCUR     (0x00000000)
#define SCB_FAULTSTAT_INVPC_OCCUR       (0x00000001)
#define SCB_FAULTSTAT_INVPC_CLEAR       (0x00000001)
//--------

//--------
#define SCB_FAULTSTAT_R_NOCP_MASK      (0x00080000)
#define SCB_FAULTSTAT_R_NOCP_BIT       (19)
#define SCB_FAULTSTAT_R_NOCP_NOOCCUR   (0x00000000)
#define SCB_FAULTSTAT_R_NOCP_OCCUR     (0x00080000)
#define SCB_FAULTSTAT_R_NOCP_CLEAR     (0x00080000)

#define SCB_FAULTSTAT_NOCP_MASK        (0x00000001)
#define SCB_FAULTSTAT_NOCP_NOOCCUR     (0x00000000)
#define SCB_FAULTSTAT_NOCP_OCCUR       (0x00000001)
#define SCB_FAULTSTAT_NOCP_CLEAR       (0x00000001)
//--------

//--------
#define SCB_FAULTSTAT_R_UNALIGN_MASK      (0x01000000)
#define SCB_FAULTSTAT_R_UNALIGN_BIT       (24)
#define SCB_FAULTSTAT_R_UNALIGN_NOOCCUR   (0x00000000)
#define SCB_FAULTSTAT_R_UNALIGN_OCCUR     (0x01000000)
#define SCB_FAULTSTAT_R_UNALIGN_CLEAR     (0x01000000)

#define SCB_FAULTSTAT_UNALIGN_MASK        (0x00000001)
#define SCB_FAULTSTAT_UNALIGN_NOOCCUR     (0x00000000)
#define SCB_FAULTSTAT_UNALIGN_OCCUR       (0x00000001)
#define SCB_FAULTSTAT_UNALIGN_CLEAR       (0x00000001)
//--------


//--------
#define SCB_FAULTSTAT_R_DIV0_MASK      (0x02000000)
#define SCB_FAULTSTAT_R_DIV0_BIT       (25)
#define SCB_FAULTSTAT_R_DIV0_NOOCCUR   (0x00000000)
#define SCB_FAULTSTAT_R_DIV0_OCCUR     (0x02000000)
#define SCB_FAULTSTAT_R_DIV0_CLEAR     (0x02000000)

#define SCB_FAULTSTAT_DIV0_MASK        (0x00000001)
#define SCB_FAULTSTAT_DIV0_NOOCCUR     (0x00000000)
#define SCB_FAULTSTAT_DIV0_OCCUR       (0x00000001)
#define SCB_FAULTSTAT_DIV0_CLEAR       (0x00000001)
//--------




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 13 HFAULTSTAT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SCB_HFAULTSTAT            (((HFAULTSTAT_TypeDef*)(SCB_BASE+SCB_HFAULTSTAT_OFFSET )))
#define SCB_HFAULTSTAT_R          (*((volatile uint32_t *)(SCB_BASE+SCB_HFAULTSTAT_OFFSET)))


//--------
#define SCB_HFAULTSTAT_R_VECT_MASK      (0x00000002)
#define SCB_HFAULTSTAT_R_VECT_BIT       (1)
#define SCB_HFAULTSTAT_R_VECT_NOOCCUR   (0x00000000)
#define SCB_HFAULTSTAT_R_VECT_OCCUR     (0x00000002)
#define SCB_HFAULTSTAT_R_VECT_CLEAR     (0x00000002)

#define SCB_HFAULTSTAT_VECT_MASK        (0x00000001)
#define SCB_HFAULTSTAT_VECT_NOOCCUR     (0x00000000)
#define SCB_HFAULTSTAT_VECT_OCCUR       (0x00000001)
#define SCB_HFAULTSTAT_VECT_CLEAR       (0x00000001)
//--------

//--------
#define SCB_HFAULTSTAT_R_FORCED_MASK      (0x40000000)
#define SCB_HFAULTSTAT_R_FORCED_BIT       (30)
#define SCB_HFAULTSTAT_R_FORCED_NOOCCUR   (0x00000000)
#define SCB_HFAULTSTAT_R_FORCED_OCCUR     (0x40000000)
#define SCB_HFAULTSTAT_R_FORCED_CLEAR     (0x40000000)

#define SCB_HFAULTSTAT_FORCED_MASK        (0x00000001)
#define SCB_HFAULTSTAT_FORCED_NOOCCUR     (0x00000000)
#define SCB_HFAULTSTAT_FORCED_OCCUR       (0x00000001)
#define SCB_HFAULTSTAT_FORCED_CLEAR       (0x00000001)
//--------

//--------
#define SCB_HFAULTSTAT_R_DBG_MASK      (0x80000000)
#define SCB_HFAULTSTAT_R_DBG_BIT       (31)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 14 MMADDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SCB_MMADDR            (((MMADDR_TypeDef*)(SCB_BASE+SCB_MMADDR_OFFSET )))
#define SCB_MMADDR_R          (*((volatile uint32_t *)(SCB_BASE+SCB_MMADDR_OFFSET)))


//--------
#define SCB_MMADDR_R_ADDR_MASK      (0xFFFFFFFF)
#define SCB_MMADDR_R_ADDR_BIT       (0)

#define SCB_MMADDR_ADDR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 15 FAULTADDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SCB_FAULTADDR            (((FAULTADDR_TypeDef*)(SCB_BASE+SCB_FAULTADDR_OFFSET )))
#define SCB_FAULTADDR_R          (*((volatile uint32_t *)(SCB_BASE+SCB_FAULTADDR_OFFSET)))


//--------
#define SCB_FAULTADDR_R_ADDR_MASK      (0xFFFFFFFF)
#define SCB_FAULTADDR_R_ADDR_BIT       (0)

#define SCB_FAULTADDR_ADDR_MASK        (0xFFFFFFFF)
//--------
typedef enum
{
    SCB_enOK=0,
    SCB_enERROR=1,
}SCB_nSTATUS;

typedef enum
{
    SCB_enNOPENDING=0,
    SCB_enPENDING=1,
}SCB_nPENDSTATE;

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
SCB_nSTATUS SCB__enSetPriorityGroup(SCB_nPRIGROUP enGroup);
SCB_nPRIGROUP SCB__enGetPriorityGroup(void);
SCB_nSTATUS SCB__enSetWakeUpSource(SCB_nWAKEUPSOURCE enSource);
SCB_nWAKEUPSOURCE SCB__enGetWakeUpSource(void);
SCB_nSTATUS SCB__enSetSleepMode(SCB_nSleepDeep enSleepMode);
SCB_nSleepDeep SCB__enGetSleepMode(void);
SCB_nSTATUS SCB__enSetSleepExit(SCB_nSLEEPEXIT enSleepMode);
SCB_nSLEEPEXIT SCB__enGetSleepExit(void);


SCB_nSTATUS SCB__enSetStackAligment(SCB_nAlignment enAlign);
SCB_nAlignment SCB__enGetStackAligment(void);
void SCB__vEnDIV0Trap(void);
void SCB__vDisDIV0Trap(void);
void SCB__vEnUnAlignTrap(void);
void SCB__vDisUnAlignTrap(void);
void SCB__vEnUnprivilegedSWTRIGGER(void);
void SCB__vDisUnprivilegedSWTRIGGER(void);


void SCB_UsageFault__vSetPriority(SCB_nSYSPRI enPriority);
SCB_nSYSPRI SCB_UsageFault__enGetPriority(void);
void SCB_BusFault__vSetPriority(SCB_nSYSPRI enPriority);
SCB_nSYSPRI SCB_BusFault__enGetPriority(void);
void SCB_MemoryFault__vSetPriority(SCB_nSYSPRI enPriority);
SCB_nSYSPRI SCB_MemoryFault__enGetPriority(void);
void SCB_SVCall__vSetPriority(SCB_nSYSPRI enPriority);
SCB_nSYSPRI SCB_SVCall__enGetPriority(void);
void SCB_SysTick__vSetPriority(SCB_nSYSPRI enPriority);
SCB_nSYSPRI SCB_SysTick__enGetPriority(void);
void SCB_PENDSV__vSetPriority(SCB_nSYSPRI enPriority);
SCB_nSYSPRI SCB_PENDSV__enGetPriority(void);


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

void NMIISR(void);
void PendSVISR(void);
void UsageFaultISR(void);
void BusFaultISR(void);
void MemoryFaultISR(void);
void HardFaultISR(void);
void SVCallISR(void);

#endif /* SCB_H_ */
