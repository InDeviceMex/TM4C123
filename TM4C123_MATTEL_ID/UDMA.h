    /*
 * UDMA.h
 *
 *  Created on: 2 feb. 2018
 *      Author: InDev
 */

#ifndef UDMA_H_
#define UDMA_H_

#include <stdint.h>
#define DMA_BASE            (0x400FF000)
#define DMA_OFFSET          (0x000FF000)


typedef volatile struct
{
    volatile const uint32_t MASTEN   :1;
    const    uint32_t       reserved :3;
    volatile const uint32_t STATE    :4;
    const    uint32_t       reserved1:8;
    volatile const uint32_t DMACHANS :5;
    const    uint32_t       reserved2:11;
}DMASTAT_TypeDef;


typedef volatile struct
{
    volatile uint32_t MASTEN   :1;
    const    uint32_t reserved :31;
}DMACFG_TypeDef;


typedef volatile struct
{
    const    uint32_t reserved :10;
    volatile uint32_t ADDR     :22;
}DMACTLBASE_TypeDef;


typedef volatile struct
{
    volatile const uint32_t ADDR     :32;
}DMAALTBASE_TypeDef;



typedef volatile struct
{
    volatile const uint32_t WAITREQ0   :1;
    volatile const uint32_t WAITREQ1   :1;
    volatile const uint32_t WAITREQ2   :1;
    volatile const uint32_t WAITREQ3   :1;
    volatile const uint32_t WAITREQ4   :1;
    volatile const uint32_t WAITREQ5   :1;
    volatile const uint32_t WAITREQ6   :1;
    volatile const uint32_t WAITREQ7   :1;
    volatile const uint32_t WAITREQ8   :1;
    volatile const uint32_t WAITREQ9   :1;
    volatile const uint32_t WAITREQ10   :1;
    volatile const uint32_t WAITREQ11   :1;
    volatile const uint32_t WAITREQ12   :1;
    volatile const uint32_t WAITREQ13   :1;
    volatile const uint32_t WAITREQ14   :1;
    volatile const uint32_t WAITREQ15   :1;
    volatile const uint32_t WAITREQ16   :1;
    volatile const uint32_t WAITREQ17   :1;
    volatile const uint32_t WAITREQ18   :1;
    volatile const uint32_t WAITREQ19   :1;
    volatile const uint32_t WAITREQ20   :1;
    volatile const uint32_t WAITREQ21   :1;
    volatile const uint32_t WAITREQ22   :1;
    volatile const uint32_t WAITREQ23   :1;
    volatile const uint32_t WAITREQ24   :1;
    volatile const uint32_t WAITREQ25   :1;
    volatile const uint32_t WAITREQ26   :1;
    volatile const uint32_t WAITREQ27   :1;
    volatile const uint32_t WAITREQ28   :1;
    volatile const uint32_t WAITREQ29   :1;
    volatile const uint32_t WAITREQ30   :1;
    volatile const uint32_t WAITREQ31   :1;
}DMAWAITSTAT_TypeDef;


typedef volatile struct
{
    volatile uint32_t SWREQ0   :1;
    volatile uint32_t SWREQ1   :1;
    volatile uint32_t SWREQ2   :1;
    volatile uint32_t SWREQ3   :1;
    volatile uint32_t SWREQ4   :1;
    volatile uint32_t SWREQ5   :1;
    volatile uint32_t SWREQ6   :1;
    volatile uint32_t SWREQ7   :1;
    volatile uint32_t SWREQ8   :1;
    volatile uint32_t SWREQ9   :1;
    volatile uint32_t SWREQ10   :1;
    volatile uint32_t SWREQ11   :1;
    volatile uint32_t SWREQ12   :1;
    volatile uint32_t SWREQ13   :1;
    volatile uint32_t SWREQ14   :1;
    volatile uint32_t SWREQ15   :1;
    volatile uint32_t SWREQ16   :1;
    volatile uint32_t SWREQ17   :1;
    volatile uint32_t SWREQ18   :1;
    volatile uint32_t SWREQ19   :1;
    volatile uint32_t SWREQ20   :1;
    volatile uint32_t SWREQ21   :1;
    volatile uint32_t SWREQ22   :1;
    volatile uint32_t SWREQ23   :1;
    volatile uint32_t SWREQ24   :1;
    volatile uint32_t SWREQ25   :1;
    volatile uint32_t SWREQ26   :1;
    volatile uint32_t SWREQ27   :1;
    volatile uint32_t SWREQ28   :1;
    volatile uint32_t SWREQ29   :1;
    volatile uint32_t SWREQ30   :1;
    volatile uint32_t SWREQ31   :1;
}DMASWREQ_TypeDef;



typedef volatile struct
{
    volatile uint32_t SET0   :1;
    volatile uint32_t SET1   :1;
    volatile uint32_t SET2   :1;
    volatile uint32_t SET3   :1;
    volatile uint32_t SET4   :1;
    volatile uint32_t SET5   :1;
    volatile uint32_t SET6   :1;
    volatile uint32_t SET7   :1;
    volatile uint32_t SET8   :1;
    volatile uint32_t SET9   :1;
    volatile uint32_t SET10   :1;
    volatile uint32_t SET11   :1;
    volatile uint32_t SET12   :1;
    volatile uint32_t SET13   :1;
    volatile uint32_t SET14   :1;
    volatile uint32_t SET15   :1;
    volatile uint32_t SET16   :1;
    volatile uint32_t SET17   :1;
    volatile uint32_t SET18   :1;
    volatile uint32_t SET19   :1;
    volatile uint32_t SET20   :1;
    volatile uint32_t SET21   :1;
    volatile uint32_t SET22   :1;
    volatile uint32_t SET23   :1;
    volatile uint32_t SET24   :1;
    volatile uint32_t SET25   :1;
    volatile uint32_t SET26   :1;
    volatile uint32_t SET27   :1;
    volatile uint32_t SET28   :1;
    volatile uint32_t SET29   :1;
    volatile uint32_t SET30   :1;
    volatile uint32_t SET31   :1;
}DMAUSEBURSTSET_TypeDef;


typedef volatile struct
{
    volatile uint32_t CLR0   :1;
    volatile uint32_t CLR1   :1;
    volatile uint32_t CLR2   :1;
    volatile uint32_t CLR3   :1;
    volatile uint32_t CLR4   :1;
    volatile uint32_t CLR5   :1;
    volatile uint32_t CLR6   :1;
    volatile uint32_t CLR7   :1;
    volatile uint32_t CLR8   :1;
    volatile uint32_t CLR9   :1;
    volatile uint32_t CLR10   :1;
    volatile uint32_t CLR11   :1;
    volatile uint32_t CLR12   :1;
    volatile uint32_t CLR13   :1;
    volatile uint32_t CLR14   :1;
    volatile uint32_t CLR15   :1;
    volatile uint32_t CLR16   :1;
    volatile uint32_t CLR17   :1;
    volatile uint32_t CLR18   :1;
    volatile uint32_t CLR19   :1;
    volatile uint32_t CLR20   :1;
    volatile uint32_t CLR21   :1;
    volatile uint32_t CLR22   :1;
    volatile uint32_t CLR23   :1;
    volatile uint32_t CLR24   :1;
    volatile uint32_t CLR25   :1;
    volatile uint32_t CLR26   :1;
    volatile uint32_t CLR27   :1;
    volatile uint32_t CLR28   :1;
    volatile uint32_t CLR29   :1;
    volatile uint32_t CLR30   :1;
    volatile uint32_t CLR31   :1;
}DMAUSEBURSTCLR_TypeDef;



typedef volatile struct
{
    volatile uint32_t SET0   :1;
    volatile uint32_t SET1   :1;
    volatile uint32_t SET2   :1;
    volatile uint32_t SET3   :1;
    volatile uint32_t SET4   :1;
    volatile uint32_t SET5   :1;
    volatile uint32_t SET6   :1;
    volatile uint32_t SET7   :1;
    volatile uint32_t SET8   :1;
    volatile uint32_t SET9   :1;
    volatile uint32_t SET10   :1;
    volatile uint32_t SET11   :1;
    volatile uint32_t SET12   :1;
    volatile uint32_t SET13   :1;
    volatile uint32_t SET14   :1;
    volatile uint32_t SET15   :1;
    volatile uint32_t SET16   :1;
    volatile uint32_t SET17   :1;
    volatile uint32_t SET18   :1;
    volatile uint32_t SET19   :1;
    volatile uint32_t SET20   :1;
    volatile uint32_t SET21   :1;
    volatile uint32_t SET22   :1;
    volatile uint32_t SET23   :1;
    volatile uint32_t SET24   :1;
    volatile uint32_t SET25   :1;
    volatile uint32_t SET26   :1;
    volatile uint32_t SET27   :1;
    volatile uint32_t SET28   :1;
    volatile uint32_t SET29   :1;
    volatile uint32_t SET30   :1;
    volatile uint32_t SET31   :1;
}DMAREQMASKSET_TypeDef;


typedef volatile struct
{
    volatile uint32_t CLR0   :1;
    volatile uint32_t CLR1   :1;
    volatile uint32_t CLR2   :1;
    volatile uint32_t CLR3   :1;
    volatile uint32_t CLR4   :1;
    volatile uint32_t CLR5   :1;
    volatile uint32_t CLR6   :1;
    volatile uint32_t CLR7   :1;
    volatile uint32_t CLR8   :1;
    volatile uint32_t CLR9   :1;
    volatile uint32_t CLR10   :1;
    volatile uint32_t CLR11   :1;
    volatile uint32_t CLR12   :1;
    volatile uint32_t CLR13   :1;
    volatile uint32_t CLR14   :1;
    volatile uint32_t CLR15   :1;
    volatile uint32_t CLR16   :1;
    volatile uint32_t CLR17   :1;
    volatile uint32_t CLR18   :1;
    volatile uint32_t CLR19   :1;
    volatile uint32_t CLR20   :1;
    volatile uint32_t CLR21   :1;
    volatile uint32_t CLR22   :1;
    volatile uint32_t CLR23   :1;
    volatile uint32_t CLR24   :1;
    volatile uint32_t CLR25   :1;
    volatile uint32_t CLR26   :1;
    volatile uint32_t CLR27   :1;
    volatile uint32_t CLR28   :1;
    volatile uint32_t CLR29   :1;
    volatile uint32_t CLR30   :1;
    volatile uint32_t CLR31   :1;
}DMAREQMASKCLR_TypeDef;



typedef volatile struct
{
    volatile uint32_t SET0   :1;
    volatile uint32_t SET1   :1;
    volatile uint32_t SET2   :1;
    volatile uint32_t SET3   :1;
    volatile uint32_t SET4   :1;
    volatile uint32_t SET5   :1;
    volatile uint32_t SET6   :1;
    volatile uint32_t SET7   :1;
    volatile uint32_t SET8   :1;
    volatile uint32_t SET9   :1;
    volatile uint32_t SET10   :1;
    volatile uint32_t SET11   :1;
    volatile uint32_t SET12   :1;
    volatile uint32_t SET13   :1;
    volatile uint32_t SET14   :1;
    volatile uint32_t SET15   :1;
    volatile uint32_t SET16   :1;
    volatile uint32_t SET17   :1;
    volatile uint32_t SET18   :1;
    volatile uint32_t SET19   :1;
    volatile uint32_t SET20   :1;
    volatile uint32_t SET21   :1;
    volatile uint32_t SET22   :1;
    volatile uint32_t SET23   :1;
    volatile uint32_t SET24   :1;
    volatile uint32_t SET25   :1;
    volatile uint32_t SET26   :1;
    volatile uint32_t SET27   :1;
    volatile uint32_t SET28   :1;
    volatile uint32_t SET29   :1;
    volatile uint32_t SET30   :1;
    volatile uint32_t SET31   :1;
}DMAENASET_TypeDef;



typedef volatile struct
{
    volatile uint32_t CLR0   :1;
    volatile uint32_t CLR1   :1;
    volatile uint32_t CLR2   :1;
    volatile uint32_t CLR3   :1;
    volatile uint32_t CLR4   :1;
    volatile uint32_t CLR5   :1;
    volatile uint32_t CLR6   :1;
    volatile uint32_t CLR7   :1;
    volatile uint32_t CLR8   :1;
    volatile uint32_t CLR9   :1;
    volatile uint32_t CLR10   :1;
    volatile uint32_t CLR11   :1;
    volatile uint32_t CLR12   :1;
    volatile uint32_t CLR13   :1;
    volatile uint32_t CLR14   :1;
    volatile uint32_t CLR15   :1;
    volatile uint32_t CLR16   :1;
    volatile uint32_t CLR17   :1;
    volatile uint32_t CLR18   :1;
    volatile uint32_t CLR19   :1;
    volatile uint32_t CLR20   :1;
    volatile uint32_t CLR21   :1;
    volatile uint32_t CLR22   :1;
    volatile uint32_t CLR23   :1;
    volatile uint32_t CLR24   :1;
    volatile uint32_t CLR25   :1;
    volatile uint32_t CLR26   :1;
    volatile uint32_t CLR27   :1;
    volatile uint32_t CLR28   :1;
    volatile uint32_t CLR29   :1;
    volatile uint32_t CLR30   :1;
    volatile uint32_t CLR31   :1;
}DMAENACLR_TypeDef;


typedef volatile struct
{
    volatile uint32_t SET0   :1;
    volatile uint32_t SET1   :1;
    volatile uint32_t SET2   :1;
    volatile uint32_t SET3   :1;
    volatile uint32_t SET4   :1;
    volatile uint32_t SET5   :1;
    volatile uint32_t SET6   :1;
    volatile uint32_t SET7   :1;
    volatile uint32_t SET8   :1;
    volatile uint32_t SET9   :1;
    volatile uint32_t SET10   :1;
    volatile uint32_t SET11   :1;
    volatile uint32_t SET12   :1;
    volatile uint32_t SET13   :1;
    volatile uint32_t SET14   :1;
    volatile uint32_t SET15   :1;
    volatile uint32_t SET16   :1;
    volatile uint32_t SET17   :1;
    volatile uint32_t SET18   :1;
    volatile uint32_t SET19   :1;
    volatile uint32_t SET20   :1;
    volatile uint32_t SET21   :1;
    volatile uint32_t SET22   :1;
    volatile uint32_t SET23   :1;
    volatile uint32_t SET24   :1;
    volatile uint32_t SET25   :1;
    volatile uint32_t SET26   :1;
    volatile uint32_t SET27   :1;
    volatile uint32_t SET28   :1;
    volatile uint32_t SET29   :1;
    volatile uint32_t SET30   :1;
    volatile uint32_t SET31   :1;
}DMAALTSET_TypeDef;



typedef volatile struct
{
    volatile uint32_t CLR0   :1;
    volatile uint32_t CLR1   :1;
    volatile uint32_t CLR2   :1;
    volatile uint32_t CLR3   :1;
    volatile uint32_t CLR4   :1;
    volatile uint32_t CLR5   :1;
    volatile uint32_t CLR6   :1;
    volatile uint32_t CLR7   :1;
    volatile uint32_t CLR8   :1;
    volatile uint32_t CLR9   :1;
    volatile uint32_t CLR10   :1;
    volatile uint32_t CLR11   :1;
    volatile uint32_t CLR12   :1;
    volatile uint32_t CLR13   :1;
    volatile uint32_t CLR14   :1;
    volatile uint32_t CLR15   :1;
    volatile uint32_t CLR16   :1;
    volatile uint32_t CLR17   :1;
    volatile uint32_t CLR18   :1;
    volatile uint32_t CLR19   :1;
    volatile uint32_t CLR20   :1;
    volatile uint32_t CLR21   :1;
    volatile uint32_t CLR22   :1;
    volatile uint32_t CLR23   :1;
    volatile uint32_t CLR24   :1;
    volatile uint32_t CLR25   :1;
    volatile uint32_t CLR26   :1;
    volatile uint32_t CLR27   :1;
    volatile uint32_t CLR28   :1;
    volatile uint32_t CLR29   :1;
    volatile uint32_t CLR30   :1;
    volatile uint32_t CLR31   :1;
}DMAALTCLR_TypeDef;



typedef volatile struct
{
    volatile uint32_t SET0   :1;
    volatile uint32_t SET1   :1;
    volatile uint32_t SET2   :1;
    volatile uint32_t SET3   :1;
    volatile uint32_t SET4   :1;
    volatile uint32_t SET5   :1;
    volatile uint32_t SET6   :1;
    volatile uint32_t SET7   :1;
    volatile uint32_t SET8   :1;
    volatile uint32_t SET9   :1;
    volatile uint32_t SET10   :1;
    volatile uint32_t SET11   :1;
    volatile uint32_t SET12   :1;
    volatile uint32_t SET13   :1;
    volatile uint32_t SET14   :1;
    volatile uint32_t SET15   :1;
    volatile uint32_t SET16   :1;
    volatile uint32_t SET17   :1;
    volatile uint32_t SET18   :1;
    volatile uint32_t SET19   :1;
    volatile uint32_t SET20   :1;
    volatile uint32_t SET21   :1;
    volatile uint32_t SET22   :1;
    volatile uint32_t SET23   :1;
    volatile uint32_t SET24   :1;
    volatile uint32_t SET25   :1;
    volatile uint32_t SET26   :1;
    volatile uint32_t SET27   :1;
    volatile uint32_t SET28   :1;
    volatile uint32_t SET29   :1;
    volatile uint32_t SET30   :1;
    volatile uint32_t SET31   :1;
}DMAPRIOSET_TypeDef;



typedef volatile struct
{
    volatile uint32_t CLR0   :1;
    volatile uint32_t CLR1   :1;
    volatile uint32_t CLR2   :1;
    volatile uint32_t CLR3   :1;
    volatile uint32_t CLR4   :1;
    volatile uint32_t CLR5   :1;
    volatile uint32_t CLR6   :1;
    volatile uint32_t CLR7   :1;
    volatile uint32_t CLR8   :1;
    volatile uint32_t CLR9   :1;
    volatile uint32_t CLR10   :1;
    volatile uint32_t CLR11   :1;
    volatile uint32_t CLR12   :1;
    volatile uint32_t CLR13   :1;
    volatile uint32_t CLR14   :1;
    volatile uint32_t CLR15   :1;
    volatile uint32_t CLR16   :1;
    volatile uint32_t CLR17   :1;
    volatile uint32_t CLR18   :1;
    volatile uint32_t CLR19   :1;
    volatile uint32_t CLR20   :1;
    volatile uint32_t CLR21   :1;
    volatile uint32_t CLR22   :1;
    volatile uint32_t CLR23   :1;
    volatile uint32_t CLR24   :1;
    volatile uint32_t CLR25   :1;
    volatile uint32_t CLR26   :1;
    volatile uint32_t CLR27   :1;
    volatile uint32_t CLR28   :1;
    volatile uint32_t CLR29   :1;
    volatile uint32_t CLR30   :1;
    volatile uint32_t CLR31   :1;
}DMAPRIOCLR_TypeDef;



typedef volatile struct
{
    volatile uint32_t ERRCLR   :1;
}DMAERRCLR_TypeDef;


typedef volatile struct
{
    volatile uint32_t CHASGN0   :1;
    volatile uint32_t CHASGN1   :1;
    volatile uint32_t CHASGN2   :1;
    volatile uint32_t CHASGN3   :1;
    volatile uint32_t CHASGN4   :1;
    volatile uint32_t CHASGN5   :1;
    volatile uint32_t CHASGN6   :1;
    volatile uint32_t CHASGN7   :1;
    volatile uint32_t CHASGN8   :1;
    volatile uint32_t CHASGN9   :1;
    volatile uint32_t CHASGN10   :1;
    volatile uint32_t CHASGN11   :1;
    volatile uint32_t CHASGN12   :1;
    volatile uint32_t CHASGN13   :1;
    volatile uint32_t CHASGN14   :1;
    volatile uint32_t CHASGN15   :1;
    volatile uint32_t CHASGN16   :1;
    volatile uint32_t CHASGN17   :1;
    volatile uint32_t CHASGN18   :1;
    volatile uint32_t CHASGN19   :1;
    volatile uint32_t CHASGN20   :1;
    volatile uint32_t CHASGN21   :1;
    volatile uint32_t CHASGN22   :1;
    volatile uint32_t CHASGN23   :1;
    volatile uint32_t CHASGN24   :1;
    volatile uint32_t CHASGN25   :1;
    volatile uint32_t CHASGN26   :1;
    volatile uint32_t CHASGN27   :1;
    volatile uint32_t CHASGN28   :1;
    volatile uint32_t CHASGN29   :1;
    volatile uint32_t CHASGN30   :1;
    volatile uint32_t CHASGN31   :1;
}DMACHASGN_TypeDef;



typedef volatile struct
{
    volatile uint32_t CHIS0   :1;
    volatile uint32_t CHIS1   :1;
    volatile uint32_t CHIS2   :1;
    volatile uint32_t CHIS3   :1;
    volatile uint32_t CHIS4   :1;
    volatile uint32_t CHIS5   :1;
    volatile uint32_t CHIS6   :1;
    volatile uint32_t CHIS7   :1;
    volatile uint32_t CHIS8   :1;
    volatile uint32_t CHIS9   :1;
    volatile uint32_t CHIS10   :1;
    volatile uint32_t CHIS11   :1;
    volatile uint32_t CHIS12   :1;
    volatile uint32_t CHIS13   :1;
    volatile uint32_t CHIS14   :1;
    volatile uint32_t CHIS15   :1;
    volatile uint32_t CHIS16   :1;
    volatile uint32_t CHIS17   :1;
    volatile uint32_t CHIS18   :1;
    volatile uint32_t CHIS19   :1;
    volatile uint32_t CHIS20   :1;
    volatile uint32_t CHIS21   :1;
    volatile uint32_t CHIS22   :1;
    volatile uint32_t CHIS23   :1;
    volatile uint32_t CHIS24   :1;
    volatile uint32_t CHIS25   :1;
    volatile uint32_t CHIS26   :1;
    volatile uint32_t CHIS27   :1;
    volatile uint32_t CHIS28   :1;
    volatile uint32_t CHIS29   :1;
    volatile uint32_t CHIS30   :1;
    volatile uint32_t CHIS31   :1;
}DMACHIS_TypeDef;



typedef volatile struct
{
    volatile uint32_t CH0SEL   :4;
    volatile uint32_t CH1SEL   :4;
    volatile uint32_t CH2SEL   :4;
    volatile uint32_t CH3SEL   :4;
    volatile uint32_t CH4SEL   :4;
    volatile uint32_t CH5SEL   :4;
    volatile uint32_t CH6SEL   :4;
    volatile uint32_t CH7SEL   :4;
}DMACHMAP0_TypeDef;


typedef volatile struct
{
    volatile uint32_t CH8SEL   :4;
    volatile uint32_t CH9SEL   :4;
    volatile uint32_t CH10SEL   :4;
    volatile uint32_t CH11SEL   :4;
    volatile uint32_t CH12SEL   :4;
    volatile uint32_t CH13SEL   :4;
    volatile uint32_t CH14SEL   :4;
    volatile uint32_t CH15SEL   :4;
}DMACHMAP1_TypeDef;



typedef volatile struct
{
    volatile uint32_t CH16SEL   :4;
    volatile uint32_t CH17SEL   :4;
    volatile uint32_t CH18SEL   :4;
    volatile uint32_t CH19SEL   :4;
    volatile uint32_t CH20SEL   :4;
    volatile uint32_t CH21SEL   :4;
    volatile uint32_t CH22SEL   :4;
    volatile uint32_t CH23SEL   :4;
}DMACHMAP2_TypeDef;



typedef volatile struct
{
    volatile uint32_t CH24SEL   :4;
    volatile uint32_t CH25SEL   :4;
    volatile uint32_t CH26SEL   :4;
    volatile uint32_t CH27SEL   :4;
    volatile uint32_t CH28SEL   :4;
    volatile uint32_t CH29SEL   :4;
    volatile uint32_t CH30SEL   :4;
    volatile uint32_t CH31SEL   :4;
}DMACHMAP3_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID0      :8;
    const    uint32_t       reserved  :24;
}DMAPeriphID0_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID1      :8;
    const    uint32_t       reserved  :24;
}DMAPeriphID1_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID2      :8;
    const    uint32_t       reserved  :24;
}DMAPeriphID2_TypeDef;



typedef volatile struct
{
    volatile const uint32_t PID3      :8;
    const    uint32_t       reserved  :24;
}DMAPeriphID3_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID4      :8;
    const    uint32_t       reserved  :24;
}DMAPeriphID4_TypeDef;


typedef volatile struct
{
    volatile const uint32_t CID0      :8;
    const    uint32_t       reserved  :24;
}DMAPCellID0_TypeDef;


typedef volatile struct
{
    volatile const uint32_t CID1      :8;
    const    uint32_t       reserved  :24;
}DMAPCellID1_TypeDef;



typedef volatile struct
{
    volatile const uint32_t CID2      :8;
    const    uint32_t       reserved  :24;
}DMAPCellID2_TypeDef;



typedef volatile struct
{
    volatile const uint32_t CID3      :8;
    const    uint32_t       reserved  :24;
}DMAPCellID3_TypeDef;


typedef volatile struct
{
    union
    {
        volatile const uint32_t    DMASTAT;
        DMASTAT_TypeDef                 DMASTAT_Bit;
    };
    union
    {
        volatile uint32_t      DMACFG;
        DMACFG_TypeDef              DMACFG_Bit;
    };
    union
    {
        volatile uint32_t      DMACTLBASE;
        DMACTLBASE_TypeDef          DMACTLBASE_Bit;
    };
    union
    {
        volatile const uint32_t      DMAALTBASE;
        DMAALTBASE_TypeDef                DMAALTBASE_Bit;
    };
    union
    {
        volatile const uint32_t    DMAWAITSTAT;
        DMAWAITSTAT_TypeDef             DMAWAITSTAT_Bit;
    };
    union
    {
        volatile uint32_t          DMASWREQ;
        DMASWREQ_TypeDef                DMASWREQ_Bit;
    };
    union
    {
        volatile uint32_t          DMAUSEBURSTSET;
        DMAUSEBURSTSET_TypeDef          DMAUSEBURSTSET_Bit;
    };
    union
    {
        volatile uint32_t          DMAUSEBURSTCLR;
        DMAUSEBURSTCLR_TypeDef          DMAUSEBURSTCLR_Bit;
    };
    union
    {
        volatile uint32_t          DMAREQMASKSET;
        DMAREQMASKSET_TypeDef           DMAREQMASKSET_Bit;
    };
    union
    {
        volatile uint32_t          DMAREQMASKCLR;
        DMAREQMASKCLR_TypeDef           DMAREQMASKCLR_Bit;
    };
    union
    {
        volatile uint32_t          DMAENASET;
        DMAENASET_TypeDef               DMAENASET_Bit;
    };
    union
    {
        volatile uint32_t          DMAENACLR;
        DMAENACLR_TypeDef               DMAENACLR_Bit;
    };
    union
    {
        volatile uint32_t          DMAALTSET;
        DMAALTSET_TypeDef               DMAALTSET_Bit;
    };
    union
    {
        volatile uint32_t          DMAALTCLR;
        DMAALTCLR_TypeDef               DMAALTCLR_Bit;
    };
    union
    {
        volatile uint32_t          DMAPRIOSET;
        DMAPRIOSET_TypeDef              DMAPRIOSET_Bit;
    };
    union
    {
        volatile uint32_t          DMAPRIOCLR;
        DMAPRIOCLR_TypeDef              DMAPRIOCLR_Bit;
    };
    const uint32_t reserved[3];
    union
    {
        volatile uint32_t          DMAERRCLR;
        DMAERRCLR_TypeDef               DMAERRCLR_Bit;
    };
    const uint32_t reserved1[300];
    union
    {
        volatile uint32_t          DMACHASGN;
        DMACHASGN_TypeDef               DMACHASGN_Bit;
    };
    union
    {
        volatile uint32_t          DMACHIS;
        DMACHIS_TypeDef                 DMACHIS_Bit;
    };
    const uint32_t reserved2[2];
    union
    {
        volatile uint32_t          DMACHMAP0;
        DMACHMAP0_TypeDef               DMACHMAP0_Bit;
    };
    union
    {
        volatile uint32_t          DMACHMAP1;
        DMACHMAP1_TypeDef               DMACHMAP1_Bit;
    };
    union
    {
        volatile uint32_t          DMACHMAP2;
        DMACHMAP2_TypeDef               DMACHMAP2_Bit;
    };
    union
    {
        volatile uint32_t          DMACHMAP3;
        DMACHMAP3_TypeDef               DMACHMAP3_Bit;
    };
    const uint32_t reserved3[688];
    union
    {
        volatile const uint32_t    DMAPeriphID0;
        DMAPeriphID0_TypeDef            DMAPeriphID0_Bit;
    };
    union
    {
        volatile const uint32_t    DMAPeriphID1;
        DMAPeriphID1_TypeDef            DMAPeriphID1_Bit;
    };
    union
    {
        volatile const uint32_t    DMAPeriphID2;
        DMAPeriphID2_TypeDef            DMAPeriphID2_Bit;
    };
    union
    {
        volatile const uint32_t     DMAPeriphID3;
        DMAPeriphID3_TypeDef             DMAPeriphID3_Bit;
    };
    union
    {
        volatile const uint32_t     DMAPeriphID4;
        DMAPeriphID4_TypeDef             DMAPeriphID4_Bit;
    };
    const uint32_t reserved4[7];
    union
    {
        volatile const uint32_t    DMAPCellID0;
        DMAPCellID0_TypeDef             DMAPCellID0_Bit;
    };
    union
    {
        volatile const uint32_t    DMAPCellID1;
        DMAPCellID1_TypeDef             DMAPCellID1_Bit;
    };
    union
    {
        volatile const uint32_t    DMAPCellID2;
        DMAPCellID2_TypeDef             DMAPCellID2_Bit;
    };
    union
    {
        volatile const uint32_t    DMAPCellID3;
        DMAPCellID3_TypeDef             DMAPCellID3_Bit;
    };

}DMA_TypeDef;

#define DMA             (((DMA_TypeDef*)(DMA_BASE)))


#define DMA_DMASTAT_OFFSET           (0x0000)
#define DMA_DMACFG_OFFSET            (0x0004)
#define DMA_DMACTLBASE_OFFSET        (0x0008)
#define DMA_DMAALTBASE_OFFSET        (0x000C)
#define DMA_DMAWAITSTAT_OFFSET       (0x0010)
#define DMA_DMASWREQ_OFFSET          (0x0014)
#define DMA_DMAUSEBURSTSET_OFFSET    (0x0018)
#define DMA_DMAUSEBURSTCLR_OFFSET    (0x001C)
#define DMA_DMAREQMASKSET_OFFSET     (0x0020)
#define DMA_DMAREQMASKCLR_OFFSET     (0x0024)
#define DMA_DMAENASET_OFFSET         (0x0028)
#define DMA_DMAENACLR_OFFSET         (0x002C)
#define DMA_DMAALTSET_OFFSET         (0x0030)
#define DMA_DMAALTCLR_OFFSET         (0x0034)
#define DMA_DMAPRIOSET_OFFSET        (0x0038)
#define DMA_DMAPRIOCLR_OFFSET        (0x003C)
#define DMA_DMAERRCLR_OFFSET         (0x004C)
#define DMA_DMACHASGN_OFFSET         (0x0500)
#define DMA_DMACHIS_OFFSET           (0x0504)
#define DMA_DMACHMAP0_OFFSET         (0x0510)
#define DMA_DMACHMAP1_OFFSET         (0x0514)
#define DMA_DMACHMAP2_OFFSET         (0x0518)
#define DMA_DMACHMAP3_OFFSET         (0x051C)
#define DMA_DMAPeriphID0_OFFSET      (0x0FE0)
#define DMA_DMAPeriphID1_OFFSET      (0x0FE4)
#define DMA_DMAPeriphID2_OFFSET      (0x0FE8)
#define DMA_DMAPeriphID3_OFFSET      (0x0FEC)
#define DMA_DMAPeriphID4_OFFSET      (0x0FD0)
#define DMA_DMAPCellID0_OFFSET       (0x0FF0)
#define DMA_DMAPCellID1_OFFSET       (0x0FF4)
#define DMA_DMAPCellID2_OFFSET       (0x0FF8)
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 DMASTAT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMASTAT            (((DMASTAT_TypeDef*)(DMA_BASE+DMA_DMASTAT_OFFSET )))
#define DMA_DMASTAT_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMASTAT_OFFSET)))

//--------
#define DMA_DMASTAT_R_MASTEN_MASK     (0x00000001)
#define DMA_DMASTAT_R_MASTEN_BIT      (0)
#define DMA_DMASTAT_R_MASTEN_DIS      (0x00000000)
#define DMA_DMASTAT_R_MASTEN_EN       (0x00000001)

#define DMA_DMASTAT_MASTEN_MASK       (0x00000001)
#define DMA_DMASTAT_MASTEN_DIS        (0x00000000)
#define DMA_DMASTAT_MASTEN_EN         (0x00000001)
//--------


//--------
#define DMA_DMASTAT_R_STATE_MASK       (0x000000F0)
#define DMA_DMASTAT_R_STATE_BIT        (4)
#define DMA_DMASTAT_R_STATE_IDLE       (0x00000000)
#define DMA_DMASTAT_R_STATE_RDCH       (0x00000010)
#define DMA_DMASTAT_R_STATE_RDSRCPT    (0x00000020)
#define DMA_DMASTAT_R_STATE_RDDSTPT    (0x00000030)
#define DMA_DMASTAT_R_STATE_RDSRCDT    (0x00000040)
#define DMA_DMASTAT_R_STATE_WRDSTDT    (0x00000050)
#define DMA_DMASTAT_R_STATE_WAIT       (0x00000060)
#define DMA_DMASTAT_R_STATE_WRCH       (0x00000070)
#define DMA_DMASTAT_R_STATE_STALL      (0x00000080)
#define DMA_DMASTAT_R_STATE_DONE       (0x00000090)


#define DMA_DMASTAT_STATE_MASK       (0x0000000F)
#define DMA_DMASTAT_STATE_IDLE       (0x00000000)
#define DMA_DMASTAT_STATE_RDCH       (0x00000001)
#define DMA_DMASTAT_STATE_RDSRCPT    (0x00000002)
#define DMA_DMASTAT_STATE_RDDSTPT    (0x00000003)
#define DMA_DMASTAT_STATE_RDSRCDT    (0x00000004)
#define DMA_DMASTAT_STATE_WRDSTDT    (0x00000005)
#define DMA_DMASTAT_STATE_WAIT       (0x00000006)
#define DMA_DMASTAT_STATE_WRCH       (0x00000007)
#define DMA_DMASTAT_STATE_STALL      (0x00000008)
#define DMA_DMASTAT_STATE_DONE       (0x00000009)
//--------

//--------
#define DMA_DMASTAT_R_DMACHANS_MASK     (0x001F0000)
#define DMA_DMASTAT_R_DMACHANS_BIT      (16)

#define DMA_DMASTAT_DMACHANS_MASK       (0x0000001F)
//--------

#define DMA_DMASTAT_MASTEN_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASTAT_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 DMACFG ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMACFG            (((DMACFG_TypeDef*)(DMA_BASE+DMA_DMACFG_OFFSET )))
#define DMA_DMACFG_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMACFG_OFFSET)))

//--------
#define DMA_DMACFG_R_MASTEN_MASK     (0x00000001)
#define DMA_DMACFG_R_MASTEN_BIT      (0)
#define DMA_DMACFG_R_MASTEN_DIS      (0x00000000)
#define DMA_DMACFG_R_MASTEN_EN       (0x00000001)

#define DMA_DMACFG_MASTEN_MASK       (0x00000001)
#define DMA_DMACFG_MASTEN_DIS        (0x00000000)
#define DMA_DMACFG_MASTEN_EN         (0x00000001)
//--------

#define DMA_DMACFG_MASTEN_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACFG_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 DMACTLBASE ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMACTLBASE            (((DMACTLBASE_TypeDef*)(DMA_BASE+DMA_DMACTLBASE_OFFSET )))
#define DMA_DMACTLBASE_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMACTLBASE_OFFSET)))

//--------
#define DMA_DMACTLBASE_R_ADDR_MASK     (0xFFFFFC00)
#define DMA_DMACTLBASE_R_ADDR_BIT      (10)

#define DMA_DMACTLBASE_ADDR_MASK       (0x003FFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 DMAALTBASE ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAALTBASE            (((DMAALTBASE_TypeDef*)(DMA_BASE+DMA_DMAALTBASE_OFFSET )))
#define DMA_DMAALTBASE_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAALTBASE_OFFSET)))

//--------
#define DMA_DMAALTBASE_R_ADDR_MASK     (0xFFFFFFFF)
#define DMA_DMAALTBASE_R_ADDR_BIT      (0)

#define DMA_DMAALTBASE_ADDR_MASK       (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 DMAWAITSTAT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAWAITSTAT            (((DMAWAITSTAT_TypeDef*)(DMA_BASE+DMA_DMAWAITSTAT_OFFSET )))
#define DMA_DMAWAITSTAT_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAWAITSTAT_OFFSET)))


//--------
#define DMA_DMAWAITSTAT_R_WAITREQ0_MASK     (0x00000001)
#define DMA_DMAWAITSTAT_R_WAITREQ0_BIT      (0)
#define DMA_DMAWAITSTAT_R_WAITREQ0_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ0_WAIT     (0x00000001)

#define DMA_DMAWAITSTAT_WAITREQ0_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ0_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ0_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ1_MASK     (0x00000002)
#define DMA_DMAWAITSTAT_R_WAITREQ1_BIT      (1)
#define DMA_DMAWAITSTAT_R_WAITREQ1_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ1_WAIT     (0x00000002)

#define DMA_DMAWAITSTAT_WAITREQ1_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ1_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ1_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ2_MASK     (0x00000004)
#define DMA_DMAWAITSTAT_R_WAITREQ2_BIT      (2)
#define DMA_DMAWAITSTAT_R_WAITREQ2_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ2_WAIT     (0x00000004)

#define DMA_DMAWAITSTAT_WAITREQ2_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ2_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ2_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ3_MASK     (0x00000008)
#define DMA_DMAWAITSTAT_R_WAITREQ3_BIT      (3)
#define DMA_DMAWAITSTAT_R_WAITREQ3_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ3_WAIT     (0x00000008)

#define DMA_DMAWAITSTAT_WAITREQ3_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ3_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ3_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ4_MASK     (0x00000010)
#define DMA_DMAWAITSTAT_R_WAITREQ4_BIT      (4)
#define DMA_DMAWAITSTAT_R_WAITREQ4_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ4_WAIT     (0x00000010)

#define DMA_DMAWAITSTAT_WAITREQ4_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ4_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ4_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ5_MASK     (0x00000020)
#define DMA_DMAWAITSTAT_R_WAITREQ5_BIT      (5)
#define DMA_DMAWAITSTAT_R_WAITREQ5_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ5_WAIT     (0x00000020)

#define DMA_DMAWAITSTAT_WAITREQ5_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ5_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ5_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ6_MASK     (0x00000040)
#define DMA_DMAWAITSTAT_R_WAITREQ6_BIT      (6)
#define DMA_DMAWAITSTAT_R_WAITREQ6_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ6_WAIT     (0x00000040)

#define DMA_DMAWAITSTAT_WAITREQ6_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ6_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ6_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ7_MASK     (0x00000080)
#define DMA_DMAWAITSTAT_R_WAITREQ7_BIT      (7)
#define DMA_DMAWAITSTAT_R_WAITREQ7_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ7_WAIT     (0x00000080)

#define DMA_DMAWAITSTAT_WAITREQ7_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ7_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ7_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ8_MASK     (0x00000100)
#define DMA_DMAWAITSTAT_R_WAITREQ8_BIT      (8)
#define DMA_DMAWAITSTAT_R_WAITREQ8_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ8_WAIT     (0x00000100)

#define DMA_DMAWAITSTAT_WAITREQ8_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ8_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ8_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ9_MASK     (0x00000200)
#define DMA_DMAWAITSTAT_R_WAITREQ9_BIT      (9)
#define DMA_DMAWAITSTAT_R_WAITREQ9_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ9_WAIT     (0x00000200)

#define DMA_DMAWAITSTAT_WAITREQ9_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ9_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ9_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ10_MASK     (0x00000400)
#define DMA_DMAWAITSTAT_R_WAITREQ10_BIT      (10)
#define DMA_DMAWAITSTAT_R_WAITREQ10_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ10_WAIT     (0x00000400)

#define DMA_DMAWAITSTAT_WAITREQ10_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ10_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ10_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ11_MASK     (0x00000800)
#define DMA_DMAWAITSTAT_R_WAITREQ11_BIT      (11)
#define DMA_DMAWAITSTAT_R_WAITREQ11_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ11_WAIT     (0x00000800)

#define DMA_DMAWAITSTAT_WAITREQ11_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ11_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ11_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ12_MASK     (0x00001000)
#define DMA_DMAWAITSTAT_R_WAITREQ12_BIT      (12)
#define DMA_DMAWAITSTAT_R_WAITREQ12_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ12_WAIT     (0x00001000)

#define DMA_DMAWAITSTAT_WAITREQ12_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ12_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ12_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ13_MASK     (0x00002000)
#define DMA_DMAWAITSTAT_R_WAITREQ13_BIT      (13)
#define DMA_DMAWAITSTAT_R_WAITREQ13_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ13_WAIT     (0x00002000)

#define DMA_DMAWAITSTAT_WAITREQ13_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ13_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ13_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ14_MASK     (0x00004000)
#define DMA_DMAWAITSTAT_R_WAITREQ14_BIT      (14)
#define DMA_DMAWAITSTAT_R_WAITREQ14_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ14_WAIT     (0x00004000)

#define DMA_DMAWAITSTAT_WAITREQ14_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ14_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ14_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ15_MASK     (0x00008000)
#define DMA_DMAWAITSTAT_R_WAITREQ15_BIT      (15)
#define DMA_DMAWAITSTAT_R_WAITREQ15_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ15_WAIT     (0x00008000)

#define DMA_DMAWAITSTAT_WAITREQ15_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ15_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ15_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ16_MASK     (0x00010000)
#define DMA_DMAWAITSTAT_R_WAITREQ16_BIT      (16)
#define DMA_DMAWAITSTAT_R_WAITREQ16_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ16_WAIT     (0x00010000)

#define DMA_DMAWAITSTAT_WAITREQ16_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ16_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ16_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ17_MASK     (0x00020000)
#define DMA_DMAWAITSTAT_R_WAITREQ17_BIT      (17)
#define DMA_DMAWAITSTAT_R_WAITREQ17_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ17_WAIT     (0x00020000)

#define DMA_DMAWAITSTAT_WAITREQ17_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ17_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ17_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ18_MASK     (0x00040000)
#define DMA_DMAWAITSTAT_R_WAITREQ18_BIT      (18)
#define DMA_DMAWAITSTAT_R_WAITREQ18_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ18_WAIT     (0x00040000)

#define DMA_DMAWAITSTAT_WAITREQ18_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ18_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ18_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ19_MASK     (0x00080000)
#define DMA_DMAWAITSTAT_R_WAITREQ19_BIT      (19)
#define DMA_DMAWAITSTAT_R_WAITREQ19_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ19_WAIT     (0x00080000)

#define DMA_DMAWAITSTAT_WAITREQ19_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ19_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ19_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ20_MASK     (0x00100000)
#define DMA_DMAWAITSTAT_R_WAITREQ20_BIT      (20)
#define DMA_DMAWAITSTAT_R_WAITREQ20_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ20_WAIT     (0x00100000)

#define DMA_DMAWAITSTAT_WAITREQ20_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ20_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ20_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ21_MASK     (0x00200000)
#define DMA_DMAWAITSTAT_R_WAITREQ21_BIT      (21)
#define DMA_DMAWAITSTAT_R_WAITREQ21_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ21_WAIT     (0x00200000)

#define DMA_DMAWAITSTAT_WAITREQ21_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ21_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ21_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ22_MASK     (0x00400000)
#define DMA_DMAWAITSTAT_R_WAITREQ22_BIT      (22)
#define DMA_DMAWAITSTAT_R_WAITREQ22_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ22_WAIT     (0x00400000)

#define DMA_DMAWAITSTAT_WAITREQ22_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ22_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ22_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ23_MASK     (0x00800000)
#define DMA_DMAWAITSTAT_R_WAITREQ23_BIT      (23)
#define DMA_DMAWAITSTAT_R_WAITREQ23_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ23_WAIT     (0x00800000)

#define DMA_DMAWAITSTAT_WAITREQ23_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ23_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ23_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ24_MASK     (0x01000000)
#define DMA_DMAWAITSTAT_R_WAITREQ24_BIT      (24)
#define DMA_DMAWAITSTAT_R_WAITREQ24_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ24_WAIT     (0x01000000)

#define DMA_DMAWAITSTAT_WAITREQ24_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ24_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ24_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ25_MASK     (0x02000000)
#define DMA_DMAWAITSTAT_R_WAITREQ25_BIT      (25)
#define DMA_DMAWAITSTAT_R_WAITREQ25_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ25_WAIT     (0x02000000)

#define DMA_DMAWAITSTAT_WAITREQ25_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ25_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ25_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ26_MASK     (0x04000000)
#define DMA_DMAWAITSTAT_R_WAITREQ26_BIT      (26)
#define DMA_DMAWAITSTAT_R_WAITREQ26_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ26_WAIT     (0x04000000)

#define DMA_DMAWAITSTAT_WAITREQ26_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ26_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ26_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ27_MASK     (0x08000000)
#define DMA_DMAWAITSTAT_R_WAITREQ27_BIT      (27)
#define DMA_DMAWAITSTAT_R_WAITREQ27_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ27_WAIT     (0x08000000)

#define DMA_DMAWAITSTAT_WAITREQ27_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ27_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ27_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ28_MASK     (0x10000000)
#define DMA_DMAWAITSTAT_R_WAITREQ28_BIT      (28)
#define DMA_DMAWAITSTAT_R_WAITREQ28_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ28_WAIT     (0x10000000)

#define DMA_DMAWAITSTAT_WAITREQ28_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ28_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ28_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ29_MASK     (0x20000000)
#define DMA_DMAWAITSTAT_R_WAITREQ29_BIT      (29)
#define DMA_DMAWAITSTAT_R_WAITREQ29_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ29_WAIT     (0x20000000)

#define DMA_DMAWAITSTAT_WAITREQ29_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ29_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ29_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ30_MASK     (0x40000000)
#define DMA_DMAWAITSTAT_R_WAITREQ30_BIT      (30)
#define DMA_DMAWAITSTAT_R_WAITREQ30_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ30_WAIT     (0x40000000)

#define DMA_DMAWAITSTAT_WAITREQ30_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ30_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ30_WAIT       (0x00000001)
//--------

//--------
#define DMA_DMAWAITSTAT_R_WAITREQ31_MASK     (0x80000000)
#define DMA_DMAWAITSTAT_R_WAITREQ31_BIT      (31)
#define DMA_DMAWAITSTAT_R_WAITREQ31_NOWAIT   (0x00000000)
#define DMA_DMAWAITSTAT_R_WAITREQ31_WAIT     (0x80000000)

#define DMA_DMAWAITSTAT_WAITREQ31_MASK       (0x00000001)
#define DMA_DMAWAITSTAT_WAITREQ31_NOWAIT     (0x00000000)
#define DMA_DMAWAITSTAT_WAITREQ31_WAIT       (0x00000001)
//--------

#define DMA_DMAWAITSTAT_WAITREQ0_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(0*4))))
#define DMA_DMAWAITSTAT_WAITREQ1_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(1*4))))
#define DMA_DMAWAITSTAT_WAITREQ2_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(2*4))))
#define DMA_DMAWAITSTAT_WAITREQ3_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(3*4))))
#define DMA_DMAWAITSTAT_WAITREQ4_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(4*4))))
#define DMA_DMAWAITSTAT_WAITREQ5_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(5*4))))
#define DMA_DMAWAITSTAT_WAITREQ6_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(6*4))))
#define DMA_DMAWAITSTAT_WAITREQ7_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(7*4))))
#define DMA_DMAWAITSTAT_WAITREQ8_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(8*4))))
#define DMA_DMAWAITSTAT_WAITREQ9_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(9*4))))
#define DMA_DMAWAITSTAT_WAITREQ10_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(10*4))))
#define DMA_DMAWAITSTAT_WAITREQ11_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(11*4))))
#define DMA_DMAWAITSTAT_WAITREQ12_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(12*4))))
#define DMA_DMAWAITSTAT_WAITREQ13_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(13*4))))
#define DMA_DMAWAITSTAT_WAITREQ14_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(14*4))))
#define DMA_DMAWAITSTAT_WAITREQ15_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(15*4))))
#define DMA_DMAWAITSTAT_WAITREQ16_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(16*4))))
#define DMA_DMAWAITSTAT_WAITREQ17_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(17*4))))
#define DMA_DMAWAITSTAT_WAITREQ18_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(18*4))))
#define DMA_DMAWAITSTAT_WAITREQ19_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(19*4))))
#define DMA_DMAWAITSTAT_WAITREQ20_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(20*4))))
#define DMA_DMAWAITSTAT_WAITREQ21_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(21*4))))
#define DMA_DMAWAITSTAT_WAITREQ22_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(22*4))))
#define DMA_DMAWAITSTAT_WAITREQ23_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(23*4))))
#define DMA_DMAWAITSTAT_WAITREQ24_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(24*4))))
#define DMA_DMAWAITSTAT_WAITREQ25_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(25*4))))
#define DMA_DMAWAITSTAT_WAITREQ26_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(26*4))))
#define DMA_DMAWAITSTAT_WAITREQ27_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(27*4))))
#define DMA_DMAWAITSTAT_WAITREQ28_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(28*4))))
#define DMA_DMAWAITSTAT_WAITREQ29_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(29*4))))
#define DMA_DMAWAITSTAT_WAITREQ30_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(30*4))))
#define DMA_DMAWAITSTAT_WAITREQ31_BB     (*((volatile const uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAWAITSTAT_OFFSET)*32)+(31*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 9 DMASWREQ ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMASWREQ            (((DMASWREQ_TypeDef*)(DMA_BASE+DMA_DMASWREQ_OFFSET )))
#define DMA_DMASWREQ_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMASWREQ_OFFSET)))


//--------
#define DMA_DMASWREQ_R_SWREQ0_MASK     (0x00000001)
#define DMA_DMASWREQ_R_SWREQ0_BIT      (0)
#define DMA_DMASWREQ_R_SWREQ0_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ0_REQ     (0x00000001)

#define DMA_DMASWREQ_SWREQ0_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ0_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ0_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ1_MASK     (0x00000002)
#define DMA_DMASWREQ_R_SWREQ1_BIT      (1)
#define DMA_DMASWREQ_R_SWREQ1_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ1_REQ     (0x00000002)

#define DMA_DMASWREQ_SWREQ1_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ1_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ1_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ2_MASK     (0x00000004)
#define DMA_DMASWREQ_R_SWREQ2_BIT      (2)
#define DMA_DMASWREQ_R_SWREQ2_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ2_REQ     (0x00000004)

#define DMA_DMASWREQ_SWREQ2_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ2_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ2_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ3_MASK     (0x00000008)
#define DMA_DMASWREQ_R_SWREQ3_BIT      (3)
#define DMA_DMASWREQ_R_SWREQ3_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ3_REQ     (0x00000008)

#define DMA_DMASWREQ_SWREQ3_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ3_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ3_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ4_MASK     (0x00000010)
#define DMA_DMASWREQ_R_SWREQ4_BIT      (4)
#define DMA_DMASWREQ_R_SWREQ4_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ4_REQ     (0x00000010)

#define DMA_DMASWREQ_SWREQ4_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ4_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ4_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ5_MASK     (0x00000020)
#define DMA_DMASWREQ_R_SWREQ5_BIT      (5)
#define DMA_DMASWREQ_R_SWREQ5_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ5_REQ     (0x00000020)

#define DMA_DMASWREQ_SWREQ5_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ5_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ5_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ6_MASK     (0x00000040)
#define DMA_DMASWREQ_R_SWREQ6_BIT      (6)
#define DMA_DMASWREQ_R_SWREQ6_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ6_REQ     (0x00000040)

#define DMA_DMASWREQ_SWREQ6_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ6_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ6_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ7_MASK     (0x00000080)
#define DMA_DMASWREQ_R_SWREQ7_BIT      (7)
#define DMA_DMASWREQ_R_SWREQ7_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ7_REQ     (0x00000080)

#define DMA_DMASWREQ_SWREQ7_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ7_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ7_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ8_MASK     (0x00000100)
#define DMA_DMASWREQ_R_SWREQ8_BIT      (8)
#define DMA_DMASWREQ_R_SWREQ8_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ8_REQ     (0x00000100)

#define DMA_DMASWREQ_SWREQ8_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ8_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ8_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ9_MASK     (0x00000200)
#define DMA_DMASWREQ_R_SWREQ9_BIT      (9)
#define DMA_DMASWREQ_R_SWREQ9_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ9_REQ     (0x00000200)

#define DMA_DMASWREQ_SWREQ9_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ9_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ9_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ10_MASK     (0x00000400)
#define DMA_DMASWREQ_R_SWREQ10_BIT      (10)
#define DMA_DMASWREQ_R_SWREQ10_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ10_REQ     (0x00000400)

#define DMA_DMASWREQ_SWREQ10_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ10_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ10_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ11_MASK     (0x00000800)
#define DMA_DMASWREQ_R_SWREQ11_BIT      (11)
#define DMA_DMASWREQ_R_SWREQ11_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ11_REQ     (0x00000800)

#define DMA_DMASWREQ_SWREQ11_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ11_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ11_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ12_MASK     (0x00001000)
#define DMA_DMASWREQ_R_SWREQ12_BIT      (12)
#define DMA_DMASWREQ_R_SWREQ12_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ12_REQ     (0x00001000)

#define DMA_DMASWREQ_SWREQ12_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ12_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ12_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ13_MASK     (0x00002000)
#define DMA_DMASWREQ_R_SWREQ13_BIT      (13)
#define DMA_DMASWREQ_R_SWREQ13_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ13_REQ     (0x00002000)

#define DMA_DMASWREQ_SWREQ13_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ13_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ13_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ14_MASK     (0x00004000)
#define DMA_DMASWREQ_R_SWREQ14_BIT      (14)
#define DMA_DMASWREQ_R_SWREQ14_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ14_REQ     (0x00004000)

#define DMA_DMASWREQ_SWREQ14_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ14_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ14_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ15_MASK     (0x00008000)
#define DMA_DMASWREQ_R_SWREQ15_BIT      (15)
#define DMA_DMASWREQ_R_SWREQ15_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ15_REQ     (0x00008000)

#define DMA_DMASWREQ_SWREQ15_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ15_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ15_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ16_MASK     (0x00010000)
#define DMA_DMASWREQ_R_SWREQ16_BIT      (16)
#define DMA_DMASWREQ_R_SWREQ16_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ16_REQ     (0x00010000)

#define DMA_DMASWREQ_SWREQ16_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ16_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ16_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ17_MASK     (0x00020000)
#define DMA_DMASWREQ_R_SWREQ17_BIT      (17)
#define DMA_DMASWREQ_R_SWREQ17_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ17_REQ     (0x00020000)

#define DMA_DMASWREQ_SWREQ17_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ17_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ17_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ18_MASK     (0x00040000)
#define DMA_DMASWREQ_R_SWREQ18_BIT      (18)
#define DMA_DMASWREQ_R_SWREQ18_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ18_REQ     (0x00040000)

#define DMA_DMASWREQ_SWREQ18_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ18_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ18_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ19_MASK     (0x00080000)
#define DMA_DMASWREQ_R_SWREQ19_BIT      (19)
#define DMA_DMASWREQ_R_SWREQ19_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ19_REQ     (0x00080000)

#define DMA_DMASWREQ_SWREQ19_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ19_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ19_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ20_MASK     (0x00100000)
#define DMA_DMASWREQ_R_SWREQ20_BIT      (20)
#define DMA_DMASWREQ_R_SWREQ20_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ20_REQ     (0x00100000)

#define DMA_DMASWREQ_SWREQ20_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ20_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ20_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ21_MASK     (0x00200000)
#define DMA_DMASWREQ_R_SWREQ21_BIT      (21)
#define DMA_DMASWREQ_R_SWREQ21_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ21_REQ     (0x00200000)

#define DMA_DMASWREQ_SWREQ21_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ21_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ21_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ22_MASK     (0x00400000)
#define DMA_DMASWREQ_R_SWREQ22_BIT      (22)
#define DMA_DMASWREQ_R_SWREQ22_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ22_REQ     (0x00400000)

#define DMA_DMASWREQ_SWREQ22_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ22_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ22_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ23_MASK     (0x00800000)
#define DMA_DMASWREQ_R_SWREQ23_BIT      (23)
#define DMA_DMASWREQ_R_SWREQ23_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ23_REQ     (0x00800000)

#define DMA_DMASWREQ_SWREQ23_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ23_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ23_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ24_MASK     (0x01000000)
#define DMA_DMASWREQ_R_SWREQ24_BIT      (24)
#define DMA_DMASWREQ_R_SWREQ24_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ24_REQ     (0x01000000)

#define DMA_DMASWREQ_SWREQ24_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ24_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ24_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ25_MASK     (0x02000000)
#define DMA_DMASWREQ_R_SWREQ25_BIT      (25)
#define DMA_DMASWREQ_R_SWREQ25_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ25_REQ     (0x02000000)

#define DMA_DMASWREQ_SWREQ25_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ25_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ25_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ26_MASK     (0x04000000)
#define DMA_DMASWREQ_R_SWREQ26_BIT      (26)
#define DMA_DMASWREQ_R_SWREQ26_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ26_REQ     (0x04000000)

#define DMA_DMASWREQ_SWREQ26_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ26_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ26_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ27_MASK     (0x08000000)
#define DMA_DMASWREQ_R_SWREQ27_BIT      (27)
#define DMA_DMASWREQ_R_SWREQ27_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ27_REQ     (0x08000000)

#define DMA_DMASWREQ_SWREQ27_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ27_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ27_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ28_MASK     (0x10000000)
#define DMA_DMASWREQ_R_SWREQ28_BIT      (28)
#define DMA_DMASWREQ_R_SWREQ28_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ28_REQ     (0x10000000)

#define DMA_DMASWREQ_SWREQ28_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ28_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ28_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ29_MASK     (0x20000000)
#define DMA_DMASWREQ_R_SWREQ29_BIT      (29)
#define DMA_DMASWREQ_R_SWREQ29_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ29_REQ     (0x20000000)

#define DMA_DMASWREQ_SWREQ29_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ29_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ29_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ30_MASK     (0x40000000)
#define DMA_DMASWREQ_R_SWREQ30_BIT      (30)
#define DMA_DMASWREQ_R_SWREQ30_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ30_REQ     (0x40000000)

#define DMA_DMASWREQ_SWREQ30_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ30_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ30_REQ       (0x00000001)
//--------

//--------
#define DMA_DMASWREQ_R_SWREQ31_MASK     (0x80000000)
#define DMA_DMASWREQ_R_SWREQ31_BIT      (31)
#define DMA_DMASWREQ_R_SWREQ31_NOREQ   (0x00000000)
#define DMA_DMASWREQ_R_SWREQ31_REQ     (0x80000000)

#define DMA_DMASWREQ_SWREQ31_MASK       (0x00000001)
#define DMA_DMASWREQ_SWREQ31_NOREQ     (0x00000000)
#define DMA_DMASWREQ_SWREQ31_REQ       (0x00000001)
//--------

#define DMA_DMASWREQ_SWREQ0_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(0*4))))
#define DMA_DMASWREQ_SWREQ1_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(1*4))))
#define DMA_DMASWREQ_SWREQ2_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(2*4))))
#define DMA_DMASWREQ_SWREQ3_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(3*4))))
#define DMA_DMASWREQ_SWREQ4_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(4*4))))
#define DMA_DMASWREQ_SWREQ5_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(5*4))))
#define DMA_DMASWREQ_SWREQ6_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(6*4))))
#define DMA_DMASWREQ_SWREQ7_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(7*4))))
#define DMA_DMASWREQ_SWREQ8_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(8*4))))
#define DMA_DMASWREQ_SWREQ9_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(9*4))))
#define DMA_DMASWREQ_SWREQ10_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(10*4))))
#define DMA_DMASWREQ_SWREQ11_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(11*4))))
#define DMA_DMASWREQ_SWREQ12_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(12*4))))
#define DMA_DMASWREQ_SWREQ13_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(13*4))))
#define DMA_DMASWREQ_SWREQ14_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(14*4))))
#define DMA_DMASWREQ_SWREQ15_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(15*4))))
#define DMA_DMASWREQ_SWREQ16_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(16*4))))
#define DMA_DMASWREQ_SWREQ17_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(17*4))))
#define DMA_DMASWREQ_SWREQ18_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(18*4))))
#define DMA_DMASWREQ_SWREQ19_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(19*4))))
#define DMA_DMASWREQ_SWREQ20_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(20*4))))
#define DMA_DMASWREQ_SWREQ21_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(21*4))))
#define DMA_DMASWREQ_SWREQ22_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(22*4))))
#define DMA_DMASWREQ_SWREQ23_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(23*4))))
#define DMA_DMASWREQ_SWREQ24_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(24*4))))
#define DMA_DMASWREQ_SWREQ25_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(25*4))))
#define DMA_DMASWREQ_SWREQ26_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(26*4))))
#define DMA_DMASWREQ_SWREQ27_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(27*4))))
#define DMA_DMASWREQ_SWREQ28_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(28*4))))
#define DMA_DMASWREQ_SWREQ29_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(29*4))))
#define DMA_DMASWREQ_SWREQ30_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(30*4))))
#define DMA_DMASWREQ_SWREQ31_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMASWREQ_OFFSET)*32)+(31*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 10 DMAUSEBURSTSET ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAUSEBURSTSET            (((DMAUSEBURSTSET_TypeDef*)(DMA_BASE+DMA_DMAUSEBURSTSET_OFFSET )))
#define DMA_DMAUSEBURSTSET_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAUSEBURSTSET_OFFSET)))



//--------
#define DMA_DMAUSEBURSTSET_R_SET0_MASK     (0x00000001)
#define DMA_DMAUSEBURSTSET_R_SET0_BIT      (0)
#define DMA_DMAUSEBURSTSET_R_SET0_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET0_BURST     (0x00000001)

#define DMA_DMAUSEBURSTSET_SET0_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET0_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET0_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET1_MASK     (0x00000002)
#define DMA_DMAUSEBURSTSET_R_SET1_BIT      (1)
#define DMA_DMAUSEBURSTSET_R_SET1_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET1_BURST     (0x00000002)

#define DMA_DMAUSEBURSTSET_SET1_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET1_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET1_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET2_MASK     (0x00000004)
#define DMA_DMAUSEBURSTSET_R_SET2_BIT      (2)
#define DMA_DMAUSEBURSTSET_R_SET2_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET2_BURST     (0x00000004)

#define DMA_DMAUSEBURSTSET_SET2_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET2_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET2_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET3_MASK     (0x00000008)
#define DMA_DMAUSEBURSTSET_R_SET3_BIT      (3)
#define DMA_DMAUSEBURSTSET_R_SET3_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET3_BURST     (0x00000008)

#define DMA_DMAUSEBURSTSET_SET3_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET3_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET3_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET4_MASK     (0x00000010)
#define DMA_DMAUSEBURSTSET_R_SET4_BIT      (4)
#define DMA_DMAUSEBURSTSET_R_SET4_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET4_BURST     (0x00000010)

#define DMA_DMAUSEBURSTSET_SET4_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET4_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET4_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET5_MASK     (0x00000020)
#define DMA_DMAUSEBURSTSET_R_SET5_BIT      (5)
#define DMA_DMAUSEBURSTSET_R_SET5_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET5_BURST     (0x00000020)

#define DMA_DMAUSEBURSTSET_SET5_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET5_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET5_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET6_MASK     (0x00000040)
#define DMA_DMAUSEBURSTSET_R_SET6_BIT      (6)
#define DMA_DMAUSEBURSTSET_R_SET6_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET6_BURST     (0x00000040)

#define DMA_DMAUSEBURSTSET_SET6_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET6_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET6_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET7_MASK     (0x00000080)
#define DMA_DMAUSEBURSTSET_R_SET7_BIT      (7)
#define DMA_DMAUSEBURSTSET_R_SET7_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET7_BURST     (0x00000080)

#define DMA_DMAUSEBURSTSET_SET7_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET7_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET7_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET8_MASK     (0x00000100)
#define DMA_DMAUSEBURSTSET_R_SET8_BIT      (8)
#define DMA_DMAUSEBURSTSET_R_SET8_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET8_BURST     (0x00000100)

#define DMA_DMAUSEBURSTSET_SET8_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET8_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET8_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET9_MASK     (0x00000200)
#define DMA_DMAUSEBURSTSET_R_SET9_BIT      (9)
#define DMA_DMAUSEBURSTSET_R_SET9_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET9_BURST     (0x00000200)

#define DMA_DMAUSEBURSTSET_SET9_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET9_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET9_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET10_MASK     (0x00000400)
#define DMA_DMAUSEBURSTSET_R_SET10_BIT      (10)
#define DMA_DMAUSEBURSTSET_R_SET10_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET10_BURST     (0x00000400)

#define DMA_DMAUSEBURSTSET_SET10_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET10_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET10_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET11_MASK     (0x00000800)
#define DMA_DMAUSEBURSTSET_R_SET11_BIT      (11)
#define DMA_DMAUSEBURSTSET_R_SET11_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET11_BURST     (0x00000800)

#define DMA_DMAUSEBURSTSET_SET11_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET11_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET11_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET12_MASK     (0x00001000)
#define DMA_DMAUSEBURSTSET_R_SET12_BIT      (12)
#define DMA_DMAUSEBURSTSET_R_SET12_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET12_BURST     (0x00001000)

#define DMA_DMAUSEBURSTSET_SET12_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET12_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET12_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET13_MASK     (0x00002000)
#define DMA_DMAUSEBURSTSET_R_SET13_BIT      (13)
#define DMA_DMAUSEBURSTSET_R_SET13_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET13_BURST     (0x00002000)

#define DMA_DMAUSEBURSTSET_SET13_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET13_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET13_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET14_MASK     (0x00004000)
#define DMA_DMAUSEBURSTSET_R_SET14_BIT      (14)
#define DMA_DMAUSEBURSTSET_R_SET14_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET14_BURST     (0x00004000)

#define DMA_DMAUSEBURSTSET_SET14_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET14_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET14_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET15_MASK     (0x00008000)
#define DMA_DMAUSEBURSTSET_R_SET15_BIT      (15)
#define DMA_DMAUSEBURSTSET_R_SET15_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET15_BURST     (0x00008000)

#define DMA_DMAUSEBURSTSET_SET15_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET15_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET15_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET16_MASK     (0x00010000)
#define DMA_DMAUSEBURSTSET_R_SET16_BIT      (16)
#define DMA_DMAUSEBURSTSET_R_SET16_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET16_BURST     (0x00010000)

#define DMA_DMAUSEBURSTSET_SET16_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET16_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET16_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET17_MASK     (0x00020000)
#define DMA_DMAUSEBURSTSET_R_SET17_BIT      (17)
#define DMA_DMAUSEBURSTSET_R_SET17_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET17_BURST     (0x00020000)

#define DMA_DMAUSEBURSTSET_SET17_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET17_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET17_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET18_MASK     (0x00040000)
#define DMA_DMAUSEBURSTSET_R_SET18_BIT      (18)
#define DMA_DMAUSEBURSTSET_R_SET18_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET18_BURST     (0x00040000)

#define DMA_DMAUSEBURSTSET_SET18_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET18_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET18_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET19_MASK     (0x00080000)
#define DMA_DMAUSEBURSTSET_R_SET19_BIT      (19)
#define DMA_DMAUSEBURSTSET_R_SET19_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET19_BURST     (0x00080000)

#define DMA_DMAUSEBURSTSET_SET19_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET19_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET19_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET20_MASK     (0x00100000)
#define DMA_DMAUSEBURSTSET_R_SET20_BIT      (20)
#define DMA_DMAUSEBURSTSET_R_SET20_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET20_BURST     (0x00100000)

#define DMA_DMAUSEBURSTSET_SET20_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET20_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET20_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET21_MASK     (0x00200000)
#define DMA_DMAUSEBURSTSET_R_SET21_BIT      (21)
#define DMA_DMAUSEBURSTSET_R_SET21_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET21_BURST     (0x00200000)

#define DMA_DMAUSEBURSTSET_SET21_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET21_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET21_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET22_MASK     (0x00400000)
#define DMA_DMAUSEBURSTSET_R_SET22_BIT      (22)
#define DMA_DMAUSEBURSTSET_R_SET22_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET22_BURST     (0x00400000)

#define DMA_DMAUSEBURSTSET_SET22_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET22_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET22_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET23_MASK     (0x00800000)
#define DMA_DMAUSEBURSTSET_R_SET23_BIT      (23)
#define DMA_DMAUSEBURSTSET_R_SET23_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET23_BURST     (0x00800000)

#define DMA_DMAUSEBURSTSET_SET23_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET23_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET23_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET24_MASK     (0x01000000)
#define DMA_DMAUSEBURSTSET_R_SET24_BIT      (24)
#define DMA_DMAUSEBURSTSET_R_SET24_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET24_BURST     (0x01000000)

#define DMA_DMAUSEBURSTSET_SET24_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET24_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET24_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET25_MASK     (0x02000000)
#define DMA_DMAUSEBURSTSET_R_SET25_BIT      (25)
#define DMA_DMAUSEBURSTSET_R_SET25_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET25_BURST     (0x02000000)

#define DMA_DMAUSEBURSTSET_SET25_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET25_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET25_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET26_MASK     (0x04000000)
#define DMA_DMAUSEBURSTSET_R_SET26_BIT      (26)
#define DMA_DMAUSEBURSTSET_R_SET26_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET26_BURST     (0x04000000)

#define DMA_DMAUSEBURSTSET_SET26_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET26_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET26_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET27_MASK     (0x08000000)
#define DMA_DMAUSEBURSTSET_R_SET27_BIT      (27)
#define DMA_DMAUSEBURSTSET_R_SET27_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET27_BURST     (0x08000000)

#define DMA_DMAUSEBURSTSET_SET27_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET27_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET27_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET28_MASK     (0x10000000)
#define DMA_DMAUSEBURSTSET_R_SET28_BIT      (28)
#define DMA_DMAUSEBURSTSET_R_SET28_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET28_BURST     (0x10000000)

#define DMA_DMAUSEBURSTSET_SET28_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET28_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET28_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET29_MASK     (0x20000000)
#define DMA_DMAUSEBURSTSET_R_SET29_BIT      (29)
#define DMA_DMAUSEBURSTSET_R_SET29_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET29_BURST     (0x20000000)

#define DMA_DMAUSEBURSTSET_SET29_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET29_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET29_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET30_MASK     (0x40000000)
#define DMA_DMAUSEBURSTSET_R_SET30_BIT      (30)
#define DMA_DMAUSEBURSTSET_R_SET30_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET30_BURST     (0x40000000)

#define DMA_DMAUSEBURSTSET_SET30_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET30_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET30_BURST       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTSET_R_SET31_MASK     (0x80000000)
#define DMA_DMAUSEBURSTSET_R_SET31_BIT      (31)
#define DMA_DMAUSEBURSTSET_R_SET31_BOTH   (0x00000000)
#define DMA_DMAUSEBURSTSET_R_SET31_BURST     (0x80000000)

#define DMA_DMAUSEBURSTSET_SET31_MASK       (0x00000001)
#define DMA_DMAUSEBURSTSET_SET31_BOTH     (0x00000000)
#define DMA_DMAUSEBURSTSET_SET31_BURST       (0x00000001)
//--------


#define DMA_DMAUSEBURSTSET_SET0_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(0*4))))
#define DMA_DMAUSEBURSTSET_SET1_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(1*4))))
#define DMA_DMAUSEBURSTSET_SET2_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(2*4))))
#define DMA_DMAUSEBURSTSET_SET3_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(3*4))))
#define DMA_DMAUSEBURSTSET_SET4_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(4*4))))
#define DMA_DMAUSEBURSTSET_SET5_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(5*4))))
#define DMA_DMAUSEBURSTSET_SET6_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(6*4))))
#define DMA_DMAUSEBURSTSET_SET7_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(7*4))))
#define DMA_DMAUSEBURSTSET_SET8_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(8*4))))
#define DMA_DMAUSEBURSTSET_SET9_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(9*4))))
#define DMA_DMAUSEBURSTSET_SET10_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(10*4))))
#define DMA_DMAUSEBURSTSET_SET11_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(11*4))))
#define DMA_DMAUSEBURSTSET_SET12_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(12*4))))
#define DMA_DMAUSEBURSTSET_SET13_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(13*4))))
#define DMA_DMAUSEBURSTSET_SET14_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(14*4))))
#define DMA_DMAUSEBURSTSET_SET15_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(15*4))))
#define DMA_DMAUSEBURSTSET_SET16_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(16*4))))
#define DMA_DMAUSEBURSTSET_SET17_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(17*4))))
#define DMA_DMAUSEBURSTSET_SET18_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(18*4))))
#define DMA_DMAUSEBURSTSET_SET19_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(19*4))))
#define DMA_DMAUSEBURSTSET_SET20_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(20*4))))
#define DMA_DMAUSEBURSTSET_SET21_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(21*4))))
#define DMA_DMAUSEBURSTSET_SET22_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(22*4))))
#define DMA_DMAUSEBURSTSET_SET23_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(23*4))))
#define DMA_DMAUSEBURSTSET_SET24_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(24*4))))
#define DMA_DMAUSEBURSTSET_SET25_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(25*4))))
#define DMA_DMAUSEBURSTSET_SET26_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(26*4))))
#define DMA_DMAUSEBURSTSET_SET27_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(27*4))))
#define DMA_DMAUSEBURSTSET_SET28_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(28*4))))
#define DMA_DMAUSEBURSTSET_SET29_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(29*4))))
#define DMA_DMAUSEBURSTSET_SET30_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(30*4))))
#define DMA_DMAUSEBURSTSET_SET31_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTSET_OFFSET)*32)+(31*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 11 DMAUSEBURSTCLR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAUSEBURSTCLR            (((DMAUSEBURSTCLR_TypeDef*)(DMA_BASE+DMA_DMAUSEBURSTCLR_OFFSET )))
#define DMA_DMAUSEBURSTCLR_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAUSEBURSTCLR_OFFSET)))




//--------
#define DMA_DMAUSEBURSTCLR_R_CLR0_MASK     (0x00000001)
#define DMA_DMAUSEBURSTCLR_R_CLR0_BIT      (0)
#define DMA_DMAUSEBURSTCLR_R_CLR0_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR0_CLR     (0x00000001)

#define DMA_DMAUSEBURSTCLR_CLR0_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR0_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR0_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR1_MASK     (0x00000002)
#define DMA_DMAUSEBURSTCLR_R_CLR1_BIT      (1)
#define DMA_DMAUSEBURSTCLR_R_CLR1_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR1_CLR     (0x00000002)

#define DMA_DMAUSEBURSTCLR_CLR1_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR1_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR1_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR2_MASK     (0x00000004)
#define DMA_DMAUSEBURSTCLR_R_CLR2_BIT      (2)
#define DMA_DMAUSEBURSTCLR_R_CLR2_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR2_CLR     (0x00000004)

#define DMA_DMAUSEBURSTCLR_CLR2_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR2_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR2_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR3_MASK     (0x00000008)
#define DMA_DMAUSEBURSTCLR_R_CLR3_BIT      (3)
#define DMA_DMAUSEBURSTCLR_R_CLR3_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR3_CLR     (0x00000008)

#define DMA_DMAUSEBURSTCLR_CLR3_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR3_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR3_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR4_MASK     (0x00000010)
#define DMA_DMAUSEBURSTCLR_R_CLR4_BIT      (4)
#define DMA_DMAUSEBURSTCLR_R_CLR4_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR4_CLR     (0x00000010)

#define DMA_DMAUSEBURSTCLR_CLR4_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR4_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR4_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR5_MASK     (0x00000020)
#define DMA_DMAUSEBURSTCLR_R_CLR5_BIT      (5)
#define DMA_DMAUSEBURSTCLR_R_CLR5_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR5_CLR     (0x00000020)

#define DMA_DMAUSEBURSTCLR_CLR5_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR5_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR5_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR6_MASK     (0x00000040)
#define DMA_DMAUSEBURSTCLR_R_CLR6_BIT      (6)
#define DMA_DMAUSEBURSTCLR_R_CLR6_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR6_CLR     (0x00000040)

#define DMA_DMAUSEBURSTCLR_CLR6_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR6_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR6_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR7_MASK     (0x00000080)
#define DMA_DMAUSEBURSTCLR_R_CLR7_BIT      (7)
#define DMA_DMAUSEBURSTCLR_R_CLR7_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR7_CLR     (0x00000080)

#define DMA_DMAUSEBURSTCLR_CLR7_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR7_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR7_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR8_MASK     (0x00000100)
#define DMA_DMAUSEBURSTCLR_R_CLR8_BIT      (8)
#define DMA_DMAUSEBURSTCLR_R_CLR8_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR8_CLR     (0x00000100)

#define DMA_DMAUSEBURSTCLR_CLR8_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR8_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR8_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR9_MASK     (0x00000200)
#define DMA_DMAUSEBURSTCLR_R_CLR9_BIT      (9)
#define DMA_DMAUSEBURSTCLR_R_CLR9_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR9_CLR     (0x00000200)

#define DMA_DMAUSEBURSTCLR_CLR9_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR9_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR9_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR10_MASK     (0x00000400)
#define DMA_DMAUSEBURSTCLR_R_CLR10_BIT      (10)
#define DMA_DMAUSEBURSTCLR_R_CLR10_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR10_CLR     (0x00000400)

#define DMA_DMAUSEBURSTCLR_CLR10_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR10_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR10_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR11_MASK     (0x00000800)
#define DMA_DMAUSEBURSTCLR_R_CLR11_BIT      (11)
#define DMA_DMAUSEBURSTCLR_R_CLR11_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR11_CLR     (0x00000800)

#define DMA_DMAUSEBURSTCLR_CLR11_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR11_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR11_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR12_MASK     (0x00001000)
#define DMA_DMAUSEBURSTCLR_R_CLR12_BIT      (12)
#define DMA_DMAUSEBURSTCLR_R_CLR12_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR12_CLR     (0x00001000)

#define DMA_DMAUSEBURSTCLR_CLR12_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR12_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR12_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR13_MASK     (0x00002000)
#define DMA_DMAUSEBURSTCLR_R_CLR13_BIT      (13)
#define DMA_DMAUSEBURSTCLR_R_CLR13_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR13_CLR     (0x00002000)

#define DMA_DMAUSEBURSTCLR_CLR13_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR13_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR13_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR14_MASK     (0x00004000)
#define DMA_DMAUSEBURSTCLR_R_CLR14_BIT      (14)
#define DMA_DMAUSEBURSTCLR_R_CLR14_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR14_CLR     (0x00004000)

#define DMA_DMAUSEBURSTCLR_CLR14_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR14_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR14_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR15_MASK     (0x00008000)
#define DMA_DMAUSEBURSTCLR_R_CLR15_BIT      (15)
#define DMA_DMAUSEBURSTCLR_R_CLR15_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR15_CLR     (0x00008000)

#define DMA_DMAUSEBURSTCLR_CLR15_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR15_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR15_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR16_MASK     (0x00010000)
#define DMA_DMAUSEBURSTCLR_R_CLR16_BIT      (16)
#define DMA_DMAUSEBURSTCLR_R_CLR16_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR16_CLR     (0x00010000)

#define DMA_DMAUSEBURSTCLR_CLR16_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR16_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR16_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR17_MASK     (0x00020000)
#define DMA_DMAUSEBURSTCLR_R_CLR17_BIT      (17)
#define DMA_DMAUSEBURSTCLR_R_CLR17_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR17_CLR     (0x00020000)

#define DMA_DMAUSEBURSTCLR_CLR17_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR17_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR17_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR18_MASK     (0x00040000)
#define DMA_DMAUSEBURSTCLR_R_CLR18_BIT      (18)
#define DMA_DMAUSEBURSTCLR_R_CLR18_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR18_CLR     (0x00040000)

#define DMA_DMAUSEBURSTCLR_CLR18_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR18_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR18_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR19_MASK     (0x00080000)
#define DMA_DMAUSEBURSTCLR_R_CLR19_BIT      (19)
#define DMA_DMAUSEBURSTCLR_R_CLR19_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR19_CLR     (0x00080000)

#define DMA_DMAUSEBURSTCLR_CLR19_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR19_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR19_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR20_MASK     (0x00100000)
#define DMA_DMAUSEBURSTCLR_R_CLR20_BIT      (20)
#define DMA_DMAUSEBURSTCLR_R_CLR20_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR20_CLR     (0x00100000)

#define DMA_DMAUSEBURSTCLR_CLR20_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR20_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR20_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR21_MASK     (0x00200000)
#define DMA_DMAUSEBURSTCLR_R_CLR21_BIT      (21)
#define DMA_DMAUSEBURSTCLR_R_CLR21_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR21_CLR     (0x00200000)

#define DMA_DMAUSEBURSTCLR_CLR21_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR21_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR21_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR22_MASK     (0x00400000)
#define DMA_DMAUSEBURSTCLR_R_CLR22_BIT      (22)
#define DMA_DMAUSEBURSTCLR_R_CLR22_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR22_CLR     (0x00400000)

#define DMA_DMAUSEBURSTCLR_CLR22_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR22_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR22_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR23_MASK     (0x00800000)
#define DMA_DMAUSEBURSTCLR_R_CLR23_BIT      (23)
#define DMA_DMAUSEBURSTCLR_R_CLR23_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR23_CLR     (0x00800000)

#define DMA_DMAUSEBURSTCLR_CLR23_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR23_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR23_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR24_MASK     (0x01000000)
#define DMA_DMAUSEBURSTCLR_R_CLR24_BIT      (24)
#define DMA_DMAUSEBURSTCLR_R_CLR24_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR24_CLR     (0x01000000)

#define DMA_DMAUSEBURSTCLR_CLR24_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR24_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR24_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR25_MASK     (0x02000000)
#define DMA_DMAUSEBURSTCLR_R_CLR25_BIT      (25)
#define DMA_DMAUSEBURSTCLR_R_CLR25_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR25_CLR     (0x02000000)

#define DMA_DMAUSEBURSTCLR_CLR25_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR25_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR25_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR26_MASK     (0x04000000)
#define DMA_DMAUSEBURSTCLR_R_CLR26_BIT      (26)
#define DMA_DMAUSEBURSTCLR_R_CLR26_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR26_CLR     (0x04000000)

#define DMA_DMAUSEBURSTCLR_CLR26_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR26_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR26_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR27_MASK     (0x08000000)
#define DMA_DMAUSEBURSTCLR_R_CLR27_BIT      (27)
#define DMA_DMAUSEBURSTCLR_R_CLR27_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR27_CLR     (0x08000000)

#define DMA_DMAUSEBURSTCLR_CLR27_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR27_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR27_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR28_MASK     (0x10000000)
#define DMA_DMAUSEBURSTCLR_R_CLR28_BIT      (28)
#define DMA_DMAUSEBURSTCLR_R_CLR28_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR28_CLR     (0x10000000)

#define DMA_DMAUSEBURSTCLR_CLR28_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR28_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR28_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR29_MASK     (0x20000000)
#define DMA_DMAUSEBURSTCLR_R_CLR29_BIT      (29)
#define DMA_DMAUSEBURSTCLR_R_CLR29_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR29_CLR     (0x20000000)

#define DMA_DMAUSEBURSTCLR_CLR29_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR29_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR29_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR30_MASK     (0x40000000)
#define DMA_DMAUSEBURSTCLR_R_CLR30_BIT      (30)
#define DMA_DMAUSEBURSTCLR_R_CLR30_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR30_CLR     (0x40000000)

#define DMA_DMAUSEBURSTCLR_CLR30_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR30_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR30_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAUSEBURSTCLR_R_CLR31_MASK     (0x80000000)
#define DMA_DMAUSEBURSTCLR_R_CLR31_BIT      (31)
#define DMA_DMAUSEBURSTCLR_R_CLR31_NA   (0x00000000)
#define DMA_DMAUSEBURSTCLR_R_CLR31_CLR     (0x80000000)

#define DMA_DMAUSEBURSTCLR_CLR31_MASK       (0x00000001)
#define DMA_DMAUSEBURSTCLR_CLR31_NA     (0x00000000)
#define DMA_DMAUSEBURSTCLR_CLR31_CLR       (0x00000001)
//--------

#define DMA_DMAUSEBURSTCLR_CLR0_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(0*4))))
#define DMA_DMAUSEBURSTCLR_CLR1_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(1*4))))
#define DMA_DMAUSEBURSTCLR_CLR2_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(2*4))))
#define DMA_DMAUSEBURSTCLR_CLR3_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(3*4))))
#define DMA_DMAUSEBURSTCLR_CLR4_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(4*4))))
#define DMA_DMAUSEBURSTCLR_CLR5_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(5*4))))
#define DMA_DMAUSEBURSTCLR_CLR6_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(6*4))))
#define DMA_DMAUSEBURSTCLR_CLR7_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(7*4))))
#define DMA_DMAUSEBURSTCLR_CLR8_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(8*4))))
#define DMA_DMAUSEBURSTCLR_CLR9_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(9*4))))
#define DMA_DMAUSEBURSTCLR_CLR10_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(10*4))))
#define DMA_DMAUSEBURSTCLR_CLR11_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(11*4))))
#define DMA_DMAUSEBURSTCLR_CLR12_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(12*4))))
#define DMA_DMAUSEBURSTCLR_CLR13_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(13*4))))
#define DMA_DMAUSEBURSTCLR_CLR14_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(14*4))))
#define DMA_DMAUSEBURSTCLR_CLR15_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(15*4))))
#define DMA_DMAUSEBURSTCLR_CLR16_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(16*4))))
#define DMA_DMAUSEBURSTCLR_CLR17_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(17*4))))
#define DMA_DMAUSEBURSTCLR_CLR18_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(18*4))))
#define DMA_DMAUSEBURSTCLR_CLR19_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(19*4))))
#define DMA_DMAUSEBURSTCLR_CLR20_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(20*4))))
#define DMA_DMAUSEBURSTCLR_CLR21_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(21*4))))
#define DMA_DMAUSEBURSTCLR_CLR22_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(22*4))))
#define DMA_DMAUSEBURSTCLR_CLR23_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(23*4))))
#define DMA_DMAUSEBURSTCLR_CLR24_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(24*4))))
#define DMA_DMAUSEBURSTCLR_CLR25_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(25*4))))
#define DMA_DMAUSEBURSTCLR_CLR26_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(26*4))))
#define DMA_DMAUSEBURSTCLR_CLR27_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(27*4))))
#define DMA_DMAUSEBURSTCLR_CLR28_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(28*4))))
#define DMA_DMAUSEBURSTCLR_CLR29_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(29*4))))
#define DMA_DMAUSEBURSTCLR_CLR30_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(30*4))))
#define DMA_DMAUSEBURSTCLR_CLR31_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAUSEBURSTCLR_OFFSET)*32)+(31*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 12 DMAREQMASKSET ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAREQMASKSET            (((DMAREQMASKSET_TypeDef*)(DMA_BASE+DMA_DMAREQMASKSET_OFFSET )))
#define DMA_DMAREQMASKSET_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAREQMASKSET_OFFSET)))


//--------
#define DMA_DMAREQMASKSET_R_SET0_MASK     (0x00000001)
#define DMA_DMAREQMASKSET_R_SET0_BIT      (0)
#define DMA_DMAREQMASKSET_R_SET0_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET0_DIS     (0x00000001)

#define DMA_DMAREQMASKSET_SET0_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET0_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET0_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET1_MASK     (0x00000002)
#define DMA_DMAREQMASKSET_R_SET1_BIT      (1)
#define DMA_DMAREQMASKSET_R_SET1_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET1_DIS     (0x00000002)

#define DMA_DMAREQMASKSET_SET1_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET1_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET1_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET2_MASK     (0x00000004)
#define DMA_DMAREQMASKSET_R_SET2_BIT      (2)
#define DMA_DMAREQMASKSET_R_SET2_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET2_DIS     (0x00000004)

#define DMA_DMAREQMASKSET_SET2_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET2_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET2_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET3_MASK     (0x00000008)
#define DMA_DMAREQMASKSET_R_SET3_BIT      (3)
#define DMA_DMAREQMASKSET_R_SET3_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET3_DIS     (0x00000008)

#define DMA_DMAREQMASKSET_SET3_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET3_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET3_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET4_MASK     (0x00000010)
#define DMA_DMAREQMASKSET_R_SET4_BIT      (4)
#define DMA_DMAREQMASKSET_R_SET4_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET4_DIS     (0x00000010)

#define DMA_DMAREQMASKSET_SET4_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET4_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET4_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET5_MASK     (0x00000020)
#define DMA_DMAREQMASKSET_R_SET5_BIT      (5)
#define DMA_DMAREQMASKSET_R_SET5_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET5_DIS     (0x00000020)

#define DMA_DMAREQMASKSET_SET5_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET5_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET5_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET6_MASK     (0x00000040)
#define DMA_DMAREQMASKSET_R_SET6_BIT      (6)
#define DMA_DMAREQMASKSET_R_SET6_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET6_DIS     (0x00000040)

#define DMA_DMAREQMASKSET_SET6_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET6_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET6_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET7_MASK     (0x00000080)
#define DMA_DMAREQMASKSET_R_SET7_BIT      (7)
#define DMA_DMAREQMASKSET_R_SET7_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET7_DIS     (0x00000080)

#define DMA_DMAREQMASKSET_SET7_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET7_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET7_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET8_MASK     (0x00000100)
#define DMA_DMAREQMASKSET_R_SET8_BIT      (8)
#define DMA_DMAREQMASKSET_R_SET8_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET8_DIS     (0x00000100)

#define DMA_DMAREQMASKSET_SET8_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET8_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET8_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET9_MASK     (0x00000200)
#define DMA_DMAREQMASKSET_R_SET9_BIT      (9)
#define DMA_DMAREQMASKSET_R_SET9_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET9_DIS     (0x00000200)

#define DMA_DMAREQMASKSET_SET9_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET9_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET9_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET10_MASK     (0x00000400)
#define DMA_DMAREQMASKSET_R_SET10_BIT      (10)
#define DMA_DMAREQMASKSET_R_SET10_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET10_DIS     (0x00000400)

#define DMA_DMAREQMASKSET_SET10_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET10_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET10_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET11_MASK     (0x00000800)
#define DMA_DMAREQMASKSET_R_SET11_BIT      (11)
#define DMA_DMAREQMASKSET_R_SET11_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET11_DIS     (0x00000800)

#define DMA_DMAREQMASKSET_SET11_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET11_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET11_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET12_MASK     (0x00001000)
#define DMA_DMAREQMASKSET_R_SET12_BIT      (12)
#define DMA_DMAREQMASKSET_R_SET12_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET12_DIS     (0x00001000)

#define DMA_DMAREQMASKSET_SET12_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET12_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET12_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET13_MASK     (0x00002000)
#define DMA_DMAREQMASKSET_R_SET13_BIT      (13)
#define DMA_DMAREQMASKSET_R_SET13_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET13_DIS     (0x00002000)

#define DMA_DMAREQMASKSET_SET13_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET13_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET13_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET14_MASK     (0x00004000)
#define DMA_DMAREQMASKSET_R_SET14_BIT      (14)
#define DMA_DMAREQMASKSET_R_SET14_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET14_DIS     (0x00004000)

#define DMA_DMAREQMASKSET_SET14_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET14_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET14_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET15_MASK     (0x00008000)
#define DMA_DMAREQMASKSET_R_SET15_BIT      (15)
#define DMA_DMAREQMASKSET_R_SET15_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET15_DIS     (0x00008000)

#define DMA_DMAREQMASKSET_SET15_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET15_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET15_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET16_MASK     (0x00010000)
#define DMA_DMAREQMASKSET_R_SET16_BIT      (16)
#define DMA_DMAREQMASKSET_R_SET16_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET16_DIS     (0x00010000)

#define DMA_DMAREQMASKSET_SET16_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET16_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET16_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET17_MASK     (0x00020000)
#define DMA_DMAREQMASKSET_R_SET17_BIT      (17)
#define DMA_DMAREQMASKSET_R_SET17_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET17_DIS     (0x00020000)

#define DMA_DMAREQMASKSET_SET17_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET17_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET17_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET18_MASK     (0x00040000)
#define DMA_DMAREQMASKSET_R_SET18_BIT      (18)
#define DMA_DMAREQMASKSET_R_SET18_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET18_DIS     (0x00040000)

#define DMA_DMAREQMASKSET_SET18_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET18_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET18_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET19_MASK     (0x00080000)
#define DMA_DMAREQMASKSET_R_SET19_BIT      (19)
#define DMA_DMAREQMASKSET_R_SET19_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET19_DIS     (0x00080000)

#define DMA_DMAREQMASKSET_SET19_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET19_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET19_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET20_MASK     (0x00100000)
#define DMA_DMAREQMASKSET_R_SET20_BIT      (20)
#define DMA_DMAREQMASKSET_R_SET20_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET20_DIS     (0x00100000)

#define DMA_DMAREQMASKSET_SET20_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET20_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET20_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET21_MASK     (0x00200000)
#define DMA_DMAREQMASKSET_R_SET21_BIT      (21)
#define DMA_DMAREQMASKSET_R_SET21_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET21_DIS     (0x00200000)

#define DMA_DMAREQMASKSET_SET21_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET21_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET21_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET22_MASK     (0x00400000)
#define DMA_DMAREQMASKSET_R_SET22_BIT      (22)
#define DMA_DMAREQMASKSET_R_SET22_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET22_DIS     (0x00400000)

#define DMA_DMAREQMASKSET_SET22_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET22_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET22_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET23_MASK     (0x00800000)
#define DMA_DMAREQMASKSET_R_SET23_BIT      (23)
#define DMA_DMAREQMASKSET_R_SET23_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET23_DIS     (0x00800000)

#define DMA_DMAREQMASKSET_SET23_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET23_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET23_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET24_MASK     (0x01000000)
#define DMA_DMAREQMASKSET_R_SET24_BIT      (24)
#define DMA_DMAREQMASKSET_R_SET24_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET24_DIS     (0x01000000)

#define DMA_DMAREQMASKSET_SET24_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET24_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET24_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET25_MASK     (0x02000000)
#define DMA_DMAREQMASKSET_R_SET25_BIT      (25)
#define DMA_DMAREQMASKSET_R_SET25_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET25_DIS     (0x02000000)

#define DMA_DMAREQMASKSET_SET25_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET25_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET25_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET26_MASK     (0x04000000)
#define DMA_DMAREQMASKSET_R_SET26_BIT      (26)
#define DMA_DMAREQMASKSET_R_SET26_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET26_DIS     (0x04000000)

#define DMA_DMAREQMASKSET_SET26_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET26_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET26_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET27_MASK     (0x08000000)
#define DMA_DMAREQMASKSET_R_SET27_BIT      (27)
#define DMA_DMAREQMASKSET_R_SET27_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET27_DIS     (0x08000000)

#define DMA_DMAREQMASKSET_SET27_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET27_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET27_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET28_MASK     (0x10000000)
#define DMA_DMAREQMASKSET_R_SET28_BIT      (28)
#define DMA_DMAREQMASKSET_R_SET28_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET28_DIS     (0x10000000)

#define DMA_DMAREQMASKSET_SET28_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET28_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET28_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET29_MASK     (0x20000000)
#define DMA_DMAREQMASKSET_R_SET29_BIT      (29)
#define DMA_DMAREQMASKSET_R_SET29_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET29_DIS     (0x20000000)

#define DMA_DMAREQMASKSET_SET29_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET29_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET29_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET30_MASK     (0x40000000)
#define DMA_DMAREQMASKSET_R_SET30_BIT      (30)
#define DMA_DMAREQMASKSET_R_SET30_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET30_DIS     (0x40000000)

#define DMA_DMAREQMASKSET_SET30_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET30_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET30_DIS       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKSET_R_SET31_MASK     (0x80000000)
#define DMA_DMAREQMASKSET_R_SET31_BIT      (31)
#define DMA_DMAREQMASKSET_R_SET31_EN   (0x00000000)
#define DMA_DMAREQMASKSET_R_SET31_DIS     (0x80000000)

#define DMA_DMAREQMASKSET_SET31_MASK       (0x00000001)
#define DMA_DMAREQMASKSET_SET31_EN     (0x00000000)
#define DMA_DMAREQMASKSET_SET31_DIS       (0x00000001)
//--------


#define DMA_DMAREQMASKSET_SET0_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(0*4))))
#define DMA_DMAREQMASKSET_SET1_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(1*4))))
#define DMA_DMAREQMASKSET_SET2_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(2*4))))
#define DMA_DMAREQMASKSET_SET3_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(3*4))))
#define DMA_DMAREQMASKSET_SET4_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(4*4))))
#define DMA_DMAREQMASKSET_SET5_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(5*4))))
#define DMA_DMAREQMASKSET_SET6_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(6*4))))
#define DMA_DMAREQMASKSET_SET7_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(7*4))))
#define DMA_DMAREQMASKSET_SET8_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(8*4))))
#define DMA_DMAREQMASKSET_SET9_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(9*4))))
#define DMA_DMAREQMASKSET_SET10_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(10*4))))
#define DMA_DMAREQMASKSET_SET11_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(11*4))))
#define DMA_DMAREQMASKSET_SET12_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(12*4))))
#define DMA_DMAREQMASKSET_SET13_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(13*4))))
#define DMA_DMAREQMASKSET_SET14_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(14*4))))
#define DMA_DMAREQMASKSET_SET15_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(15*4))))
#define DMA_DMAREQMASKSET_SET16_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(16*4))))
#define DMA_DMAREQMASKSET_SET17_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(17*4))))
#define DMA_DMAREQMASKSET_SET18_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(18*4))))
#define DMA_DMAREQMASKSET_SET19_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(19*4))))
#define DMA_DMAREQMASKSET_SET20_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(20*4))))
#define DMA_DMAREQMASKSET_SET21_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(21*4))))
#define DMA_DMAREQMASKSET_SET22_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(22*4))))
#define DMA_DMAREQMASKSET_SET23_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(23*4))))
#define DMA_DMAREQMASKSET_SET24_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(24*4))))
#define DMA_DMAREQMASKSET_SET25_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(25*4))))
#define DMA_DMAREQMASKSET_SET26_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(26*4))))
#define DMA_DMAREQMASKSET_SET27_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(27*4))))
#define DMA_DMAREQMASKSET_SET28_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(28*4))))
#define DMA_DMAREQMASKSET_SET29_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(29*4))))
#define DMA_DMAREQMASKSET_SET30_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(30*4))))
#define DMA_DMAREQMASKSET_SET31_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKSET_OFFSET)*32)+(31*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 13 DMAREQMASKCLR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAREQMASKCLR            (((DMAREQMASKCLR_TypeDef*)(DMA_BASE+DMA_DMAREQMASKCLR_OFFSET )))
#define DMA_DMAREQMASKCLR_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAREQMASKCLR_OFFSET)))




//--------
#define DMA_DMAREQMASKCLR_R_CLR0_MASK     (0x00000001)
#define DMA_DMAREQMASKCLR_R_CLR0_BIT      (0)
#define DMA_DMAREQMASKCLR_R_CLR0_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR0_CLR     (0x00000001)

#define DMA_DMAREQMASKCLR_CLR0_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR0_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR0_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR1_MASK     (0x00000002)
#define DMA_DMAREQMASKCLR_R_CLR1_BIT      (1)
#define DMA_DMAREQMASKCLR_R_CLR1_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR1_CLR     (0x00000002)

#define DMA_DMAREQMASKCLR_CLR1_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR1_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR1_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR2_MASK     (0x00000004)
#define DMA_DMAREQMASKCLR_R_CLR2_BIT      (2)
#define DMA_DMAREQMASKCLR_R_CLR2_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR2_CLR     (0x00000004)

#define DMA_DMAREQMASKCLR_CLR2_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR2_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR2_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR3_MASK     (0x00000008)
#define DMA_DMAREQMASKCLR_R_CLR3_BIT      (3)
#define DMA_DMAREQMASKCLR_R_CLR3_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR3_CLR     (0x00000008)

#define DMA_DMAREQMASKCLR_CLR3_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR3_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR3_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR4_MASK     (0x00000010)
#define DMA_DMAREQMASKCLR_R_CLR4_BIT      (4)
#define DMA_DMAREQMASKCLR_R_CLR4_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR4_CLR     (0x00000010)

#define DMA_DMAREQMASKCLR_CLR4_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR4_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR4_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR5_MASK     (0x00000020)
#define DMA_DMAREQMASKCLR_R_CLR5_BIT      (5)
#define DMA_DMAREQMASKCLR_R_CLR5_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR5_CLR     (0x00000020)

#define DMA_DMAREQMASKCLR_CLR5_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR5_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR5_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR6_MASK     (0x00000040)
#define DMA_DMAREQMASKCLR_R_CLR6_BIT      (6)
#define DMA_DMAREQMASKCLR_R_CLR6_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR6_CLR     (0x00000040)

#define DMA_DMAREQMASKCLR_CLR6_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR6_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR6_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR7_MASK     (0x00000080)
#define DMA_DMAREQMASKCLR_R_CLR7_BIT      (7)
#define DMA_DMAREQMASKCLR_R_CLR7_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR7_CLR     (0x00000080)

#define DMA_DMAREQMASKCLR_CLR7_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR7_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR7_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR8_MASK     (0x00000100)
#define DMA_DMAREQMASKCLR_R_CLR8_BIT      (8)
#define DMA_DMAREQMASKCLR_R_CLR8_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR8_CLR     (0x00000100)

#define DMA_DMAREQMASKCLR_CLR8_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR8_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR8_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR9_MASK     (0x00000200)
#define DMA_DMAREQMASKCLR_R_CLR9_BIT      (9)
#define DMA_DMAREQMASKCLR_R_CLR9_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR9_CLR     (0x00000200)

#define DMA_DMAREQMASKCLR_CLR9_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR9_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR9_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR10_MASK     (0x00000400)
#define DMA_DMAREQMASKCLR_R_CLR10_BIT      (10)
#define DMA_DMAREQMASKCLR_R_CLR10_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR10_CLR     (0x00000400)

#define DMA_DMAREQMASKCLR_CLR10_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR10_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR10_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR11_MASK     (0x00000800)
#define DMA_DMAREQMASKCLR_R_CLR11_BIT      (11)
#define DMA_DMAREQMASKCLR_R_CLR11_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR11_CLR     (0x00000800)

#define DMA_DMAREQMASKCLR_CLR11_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR11_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR11_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR12_MASK     (0x00001000)
#define DMA_DMAREQMASKCLR_R_CLR12_BIT      (12)
#define DMA_DMAREQMASKCLR_R_CLR12_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR12_CLR     (0x00001000)

#define DMA_DMAREQMASKCLR_CLR12_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR12_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR12_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR13_MASK     (0x00002000)
#define DMA_DMAREQMASKCLR_R_CLR13_BIT      (13)
#define DMA_DMAREQMASKCLR_R_CLR13_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR13_CLR     (0x00002000)

#define DMA_DMAREQMASKCLR_CLR13_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR13_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR13_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR14_MASK     (0x00004000)
#define DMA_DMAREQMASKCLR_R_CLR14_BIT      (14)
#define DMA_DMAREQMASKCLR_R_CLR14_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR14_CLR     (0x00004000)

#define DMA_DMAREQMASKCLR_CLR14_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR14_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR14_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR15_MASK     (0x00008000)
#define DMA_DMAREQMASKCLR_R_CLR15_BIT      (15)
#define DMA_DMAREQMASKCLR_R_CLR15_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR15_CLR     (0x00008000)

#define DMA_DMAREQMASKCLR_CLR15_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR15_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR15_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR16_MASK     (0x00010000)
#define DMA_DMAREQMASKCLR_R_CLR16_BIT      (16)
#define DMA_DMAREQMASKCLR_R_CLR16_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR16_CLR     (0x00010000)

#define DMA_DMAREQMASKCLR_CLR16_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR16_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR16_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR17_MASK     (0x00020000)
#define DMA_DMAREQMASKCLR_R_CLR17_BIT      (17)
#define DMA_DMAREQMASKCLR_R_CLR17_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR17_CLR     (0x00020000)

#define DMA_DMAREQMASKCLR_CLR17_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR17_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR17_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR18_MASK     (0x00040000)
#define DMA_DMAREQMASKCLR_R_CLR18_BIT      (18)
#define DMA_DMAREQMASKCLR_R_CLR18_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR18_CLR     (0x00040000)

#define DMA_DMAREQMASKCLR_CLR18_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR18_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR18_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR19_MASK     (0x00080000)
#define DMA_DMAREQMASKCLR_R_CLR19_BIT      (19)
#define DMA_DMAREQMASKCLR_R_CLR19_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR19_CLR     (0x00080000)

#define DMA_DMAREQMASKCLR_CLR19_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR19_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR19_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR20_MASK     (0x00100000)
#define DMA_DMAREQMASKCLR_R_CLR20_BIT      (20)
#define DMA_DMAREQMASKCLR_R_CLR20_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR20_CLR     (0x00100000)

#define DMA_DMAREQMASKCLR_CLR20_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR20_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR20_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR21_MASK     (0x00200000)
#define DMA_DMAREQMASKCLR_R_CLR21_BIT      (21)
#define DMA_DMAREQMASKCLR_R_CLR21_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR21_CLR     (0x00200000)

#define DMA_DMAREQMASKCLR_CLR21_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR21_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR21_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR22_MASK     (0x00400000)
#define DMA_DMAREQMASKCLR_R_CLR22_BIT      (22)
#define DMA_DMAREQMASKCLR_R_CLR22_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR22_CLR     (0x00400000)

#define DMA_DMAREQMASKCLR_CLR22_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR22_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR22_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR23_MASK     (0x00800000)
#define DMA_DMAREQMASKCLR_R_CLR23_BIT      (23)
#define DMA_DMAREQMASKCLR_R_CLR23_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR23_CLR     (0x00800000)

#define DMA_DMAREQMASKCLR_CLR23_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR23_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR23_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR24_MASK     (0x01000000)
#define DMA_DMAREQMASKCLR_R_CLR24_BIT      (24)
#define DMA_DMAREQMASKCLR_R_CLR24_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR24_CLR     (0x01000000)

#define DMA_DMAREQMASKCLR_CLR24_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR24_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR24_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR25_MASK     (0x02000000)
#define DMA_DMAREQMASKCLR_R_CLR25_BIT      (25)
#define DMA_DMAREQMASKCLR_R_CLR25_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR25_CLR     (0x02000000)

#define DMA_DMAREQMASKCLR_CLR25_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR25_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR25_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR26_MASK     (0x04000000)
#define DMA_DMAREQMASKCLR_R_CLR26_BIT      (26)
#define DMA_DMAREQMASKCLR_R_CLR26_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR26_CLR     (0x04000000)

#define DMA_DMAREQMASKCLR_CLR26_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR26_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR26_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR27_MASK     (0x08000000)
#define DMA_DMAREQMASKCLR_R_CLR27_BIT      (27)
#define DMA_DMAREQMASKCLR_R_CLR27_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR27_CLR     (0x08000000)

#define DMA_DMAREQMASKCLR_CLR27_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR27_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR27_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR28_MASK     (0x10000000)
#define DMA_DMAREQMASKCLR_R_CLR28_BIT      (28)
#define DMA_DMAREQMASKCLR_R_CLR28_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR28_CLR     (0x10000000)

#define DMA_DMAREQMASKCLR_CLR28_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR28_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR28_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR29_MASK     (0x20000000)
#define DMA_DMAREQMASKCLR_R_CLR29_BIT      (29)
#define DMA_DMAREQMASKCLR_R_CLR29_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR29_CLR     (0x20000000)

#define DMA_DMAREQMASKCLR_CLR29_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR29_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR29_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR30_MASK     (0x40000000)
#define DMA_DMAREQMASKCLR_R_CLR30_BIT      (30)
#define DMA_DMAREQMASKCLR_R_CLR30_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR30_CLR     (0x40000000)

#define DMA_DMAREQMASKCLR_CLR30_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR30_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR30_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAREQMASKCLR_R_CLR31_MASK     (0x80000000)
#define DMA_DMAREQMASKCLR_R_CLR31_BIT      (31)
#define DMA_DMAREQMASKCLR_R_CLR31_NA   (0x00000000)
#define DMA_DMAREQMASKCLR_R_CLR31_CLR     (0x80000000)

#define DMA_DMAREQMASKCLR_CLR31_MASK       (0x00000001)
#define DMA_DMAREQMASKCLR_CLR31_NA     (0x00000000)
#define DMA_DMAREQMASKCLR_CLR31_CLR       (0x00000001)
//--------


#define DMA_DMAREQMASKCLR_CLR0_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(0*4))))
#define DMA_DMAREQMASKCLR_CLR1_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(1*4))))
#define DMA_DMAREQMASKCLR_CLR2_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(2*4))))
#define DMA_DMAREQMASKCLR_CLR3_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(3*4))))
#define DMA_DMAREQMASKCLR_CLR4_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(4*4))))
#define DMA_DMAREQMASKCLR_CLR5_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(5*4))))
#define DMA_DMAREQMASKCLR_CLR6_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(6*4))))
#define DMA_DMAREQMASKCLR_CLR7_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(7*4))))
#define DMA_DMAREQMASKCLR_CLR8_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(8*4))))
#define DMA_DMAREQMASKCLR_CLR9_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(9*4))))
#define DMA_DMAREQMASKCLR_CLR10_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(10*4))))
#define DMA_DMAREQMASKCLR_CLR11_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(11*4))))
#define DMA_DMAREQMASKCLR_CLR12_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(12*4))))
#define DMA_DMAREQMASKCLR_CLR13_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(13*4))))
#define DMA_DMAREQMASKCLR_CLR14_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(14*4))))
#define DMA_DMAREQMASKCLR_CLR15_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(15*4))))
#define DMA_DMAREQMASKCLR_CLR16_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(16*4))))
#define DMA_DMAREQMASKCLR_CLR17_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(17*4))))
#define DMA_DMAREQMASKCLR_CLR18_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(18*4))))
#define DMA_DMAREQMASKCLR_CLR19_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(19*4))))
#define DMA_DMAREQMASKCLR_CLR20_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(20*4))))
#define DMA_DMAREQMASKCLR_CLR21_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(21*4))))
#define DMA_DMAREQMASKCLR_CLR22_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(22*4))))
#define DMA_DMAREQMASKCLR_CLR23_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(23*4))))
#define DMA_DMAREQMASKCLR_CLR24_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(24*4))))
#define DMA_DMAREQMASKCLR_CLR25_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(25*4))))
#define DMA_DMAREQMASKCLR_CLR26_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(26*4))))
#define DMA_DMAREQMASKCLR_CLR27_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(27*4))))
#define DMA_DMAREQMASKCLR_CLR28_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(28*4))))
#define DMA_DMAREQMASKCLR_CLR29_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(29*4))))
#define DMA_DMAREQMASKCLR_CLR30_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(30*4))))
#define DMA_DMAREQMASKCLR_CLR31_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAREQMASKCLR_OFFSET)*32)+(31*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 14 DMAENASET ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAENASET            (((DMAENASET_TypeDef*)(DMA_BASE+DMA_DMAENASET_OFFSET )))
#define DMA_DMAENASET_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAENASET_OFFSET)))




//--------
#define DMA_DMAENASET_R_SET0_MASK     (0x00000001)
#define DMA_DMAENASET_R_SET0_BIT      (0)
#define DMA_DMAENASET_R_SET0_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET0_EN     (0x00000001)

#define DMA_DMAENASET_SET0_MASK       (0x00000001)
#define DMA_DMAENASET_SET0_DIS     (0x00000000)
#define DMA_DMAENASET_SET0_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET1_MASK     (0x00000002)
#define DMA_DMAENASET_R_SET1_BIT      (1)
#define DMA_DMAENASET_R_SET1_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET1_EN     (0x00000002)

#define DMA_DMAENASET_SET1_MASK       (0x00000001)
#define DMA_DMAENASET_SET1_DIS     (0x00000000)
#define DMA_DMAENASET_SET1_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET2_MASK     (0x00000004)
#define DMA_DMAENASET_R_SET2_BIT      (2)
#define DMA_DMAENASET_R_SET2_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET2_EN     (0x00000004)

#define DMA_DMAENASET_SET2_MASK       (0x00000001)
#define DMA_DMAENASET_SET2_DIS     (0x00000000)
#define DMA_DMAENASET_SET2_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET3_MASK     (0x00000008)
#define DMA_DMAENASET_R_SET3_BIT      (3)
#define DMA_DMAENASET_R_SET3_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET3_EN     (0x00000008)

#define DMA_DMAENASET_SET3_MASK       (0x00000001)
#define DMA_DMAENASET_SET3_DIS     (0x00000000)
#define DMA_DMAENASET_SET3_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET4_MASK     (0x00000010)
#define DMA_DMAENASET_R_SET4_BIT      (4)
#define DMA_DMAENASET_R_SET4_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET4_EN     (0x00000010)

#define DMA_DMAENASET_SET4_MASK       (0x00000001)
#define DMA_DMAENASET_SET4_DIS     (0x00000000)
#define DMA_DMAENASET_SET4_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET5_MASK     (0x00000020)
#define DMA_DMAENASET_R_SET5_BIT      (5)
#define DMA_DMAENASET_R_SET5_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET5_EN     (0x00000020)

#define DMA_DMAENASET_SET5_MASK       (0x00000001)
#define DMA_DMAENASET_SET5_DIS     (0x00000000)
#define DMA_DMAENASET_SET5_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET6_MASK     (0x00000040)
#define DMA_DMAENASET_R_SET6_BIT      (6)
#define DMA_DMAENASET_R_SET6_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET6_EN     (0x00000040)

#define DMA_DMAENASET_SET6_MASK       (0x00000001)
#define DMA_DMAENASET_SET6_DIS     (0x00000000)
#define DMA_DMAENASET_SET6_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET7_MASK     (0x00000080)
#define DMA_DMAENASET_R_SET7_BIT      (7)
#define DMA_DMAENASET_R_SET7_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET7_EN     (0x00000080)

#define DMA_DMAENASET_SET7_MASK       (0x00000001)
#define DMA_DMAENASET_SET7_DIS     (0x00000000)
#define DMA_DMAENASET_SET7_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET8_MASK     (0x00000100)
#define DMA_DMAENASET_R_SET8_BIT      (8)
#define DMA_DMAENASET_R_SET8_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET8_EN     (0x00000100)

#define DMA_DMAENASET_SET8_MASK       (0x00000001)
#define DMA_DMAENASET_SET8_DIS     (0x00000000)
#define DMA_DMAENASET_SET8_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET9_MASK     (0x00000200)
#define DMA_DMAENASET_R_SET9_BIT      (9)
#define DMA_DMAENASET_R_SET9_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET9_EN     (0x00000200)

#define DMA_DMAENASET_SET9_MASK       (0x00000001)
#define DMA_DMAENASET_SET9_DIS     (0x00000000)
#define DMA_DMAENASET_SET9_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET10_MASK     (0x00000400)
#define DMA_DMAENASET_R_SET10_BIT      (10)
#define DMA_DMAENASET_R_SET10_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET10_EN     (0x00000400)

#define DMA_DMAENASET_SET10_MASK       (0x00000001)
#define DMA_DMAENASET_SET10_DIS     (0x00000000)
#define DMA_DMAENASET_SET10_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET11_MASK     (0x00000800)
#define DMA_DMAENASET_R_SET11_BIT      (11)
#define DMA_DMAENASET_R_SET11_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET11_EN     (0x00000800)

#define DMA_DMAENASET_SET11_MASK       (0x00000001)
#define DMA_DMAENASET_SET11_DIS     (0x00000000)
#define DMA_DMAENASET_SET11_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET12_MASK     (0x00001000)
#define DMA_DMAENASET_R_SET12_BIT      (12)
#define DMA_DMAENASET_R_SET12_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET12_EN     (0x00001000)

#define DMA_DMAENASET_SET12_MASK       (0x00000001)
#define DMA_DMAENASET_SET12_DIS     (0x00000000)
#define DMA_DMAENASET_SET12_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET13_MASK     (0x00002000)
#define DMA_DMAENASET_R_SET13_BIT      (13)
#define DMA_DMAENASET_R_SET13_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET13_EN     (0x00002000)

#define DMA_DMAENASET_SET13_MASK       (0x00000001)
#define DMA_DMAENASET_SET13_DIS     (0x00000000)
#define DMA_DMAENASET_SET13_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET14_MASK     (0x00004000)
#define DMA_DMAENASET_R_SET14_BIT      (14)
#define DMA_DMAENASET_R_SET14_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET14_EN     (0x00004000)

#define DMA_DMAENASET_SET14_MASK       (0x00000001)
#define DMA_DMAENASET_SET14_DIS     (0x00000000)
#define DMA_DMAENASET_SET14_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET15_MASK     (0x00008000)
#define DMA_DMAENASET_R_SET15_BIT      (15)
#define DMA_DMAENASET_R_SET15_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET15_EN     (0x00008000)

#define DMA_DMAENASET_SET15_MASK       (0x00000001)
#define DMA_DMAENASET_SET15_DIS     (0x00000000)
#define DMA_DMAENASET_SET15_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET16_MASK     (0x00010000)
#define DMA_DMAENASET_R_SET16_BIT      (16)
#define DMA_DMAENASET_R_SET16_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET16_EN     (0x00010000)

#define DMA_DMAENASET_SET16_MASK       (0x00000001)
#define DMA_DMAENASET_SET16_DIS     (0x00000000)
#define DMA_DMAENASET_SET16_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET17_MASK     (0x00020000)
#define DMA_DMAENASET_R_SET17_BIT      (17)
#define DMA_DMAENASET_R_SET17_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET17_EN     (0x00020000)

#define DMA_DMAENASET_SET17_MASK       (0x00000001)
#define DMA_DMAENASET_SET17_DIS     (0x00000000)
#define DMA_DMAENASET_SET17_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET18_MASK     (0x00040000)
#define DMA_DMAENASET_R_SET18_BIT      (18)
#define DMA_DMAENASET_R_SET18_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET18_EN     (0x00040000)

#define DMA_DMAENASET_SET18_MASK       (0x00000001)
#define DMA_DMAENASET_SET18_DIS     (0x00000000)
#define DMA_DMAENASET_SET18_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET19_MASK     (0x00080000)
#define DMA_DMAENASET_R_SET19_BIT      (19)
#define DMA_DMAENASET_R_SET19_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET19_EN     (0x00080000)

#define DMA_DMAENASET_SET19_MASK       (0x00000001)
#define DMA_DMAENASET_SET19_DIS     (0x00000000)
#define DMA_DMAENASET_SET19_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET20_MASK     (0x00100000)
#define DMA_DMAENASET_R_SET20_BIT      (20)
#define DMA_DMAENASET_R_SET20_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET20_EN     (0x00100000)

#define DMA_DMAENASET_SET20_MASK       (0x00000001)
#define DMA_DMAENASET_SET20_DIS     (0x00000000)
#define DMA_DMAENASET_SET20_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET21_MASK     (0x00200000)
#define DMA_DMAENASET_R_SET21_BIT      (21)
#define DMA_DMAENASET_R_SET21_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET21_EN     (0x00200000)

#define DMA_DMAENASET_SET21_MASK       (0x00000001)
#define DMA_DMAENASET_SET21_DIS     (0x00000000)
#define DMA_DMAENASET_SET21_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET22_MASK     (0x00400000)
#define DMA_DMAENASET_R_SET22_BIT      (22)
#define DMA_DMAENASET_R_SET22_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET22_EN     (0x00400000)

#define DMA_DMAENASET_SET22_MASK       (0x00000001)
#define DMA_DMAENASET_SET22_DIS     (0x00000000)
#define DMA_DMAENASET_SET22_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET23_MASK     (0x00800000)
#define DMA_DMAENASET_R_SET23_BIT      (23)
#define DMA_DMAENASET_R_SET23_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET23_EN     (0x00800000)

#define DMA_DMAENASET_SET23_MASK       (0x00000001)
#define DMA_DMAENASET_SET23_DIS     (0x00000000)
#define DMA_DMAENASET_SET23_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET24_MASK     (0x01000000)
#define DMA_DMAENASET_R_SET24_BIT      (24)
#define DMA_DMAENASET_R_SET24_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET24_EN     (0x01000000)

#define DMA_DMAENASET_SET24_MASK       (0x00000001)
#define DMA_DMAENASET_SET24_DIS     (0x00000000)
#define DMA_DMAENASET_SET24_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET25_MASK     (0x02000000)
#define DMA_DMAENASET_R_SET25_BIT      (25)
#define DMA_DMAENASET_R_SET25_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET25_EN     (0x02000000)

#define DMA_DMAENASET_SET25_MASK       (0x00000001)
#define DMA_DMAENASET_SET25_DIS     (0x00000000)
#define DMA_DMAENASET_SET25_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET26_MASK     (0x04000000)
#define DMA_DMAENASET_R_SET26_BIT      (26)
#define DMA_DMAENASET_R_SET26_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET26_EN     (0x04000000)

#define DMA_DMAENASET_SET26_MASK       (0x00000001)
#define DMA_DMAENASET_SET26_DIS     (0x00000000)
#define DMA_DMAENASET_SET26_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET27_MASK     (0x08000000)
#define DMA_DMAENASET_R_SET27_BIT      (27)
#define DMA_DMAENASET_R_SET27_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET27_EN     (0x08000000)

#define DMA_DMAENASET_SET27_MASK       (0x00000001)
#define DMA_DMAENASET_SET27_DIS     (0x00000000)
#define DMA_DMAENASET_SET27_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET28_MASK     (0x10000000)
#define DMA_DMAENASET_R_SET28_BIT      (28)
#define DMA_DMAENASET_R_SET28_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET28_EN     (0x10000000)

#define DMA_DMAENASET_SET28_MASK       (0x00000001)
#define DMA_DMAENASET_SET28_DIS     (0x00000000)
#define DMA_DMAENASET_SET28_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET29_MASK     (0x20000000)
#define DMA_DMAENASET_R_SET29_BIT      (29)
#define DMA_DMAENASET_R_SET29_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET29_EN     (0x20000000)

#define DMA_DMAENASET_SET29_MASK       (0x00000001)
#define DMA_DMAENASET_SET29_DIS     (0x00000000)
#define DMA_DMAENASET_SET29_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET30_MASK     (0x40000000)
#define DMA_DMAENASET_R_SET30_BIT      (30)
#define DMA_DMAENASET_R_SET30_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET30_EN     (0x40000000)

#define DMA_DMAENASET_SET30_MASK       (0x00000001)
#define DMA_DMAENASET_SET30_DIS     (0x00000000)
#define DMA_DMAENASET_SET30_EN       (0x00000001)
//--------

//--------
#define DMA_DMAENASET_R_SET31_MASK     (0x80000000)
#define DMA_DMAENASET_R_SET31_BIT      (31)
#define DMA_DMAENASET_R_SET31_DIS   (0x00000000)
#define DMA_DMAENASET_R_SET31_EN     (0x80000000)

#define DMA_DMAENASET_SET31_MASK       (0x00000001)
#define DMA_DMAENASET_SET31_DIS     (0x00000000)
#define DMA_DMAENASET_SET31_EN       (0x00000001)
//--------



#define DMA_DMAENASET_SET0_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(0*4))))
#define DMA_DMAENASET_SET1_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(1*4))))
#define DMA_DMAENASET_SET2_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(2*4))))
#define DMA_DMAENASET_SET3_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(3*4))))
#define DMA_DMAENASET_SET4_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(4*4))))
#define DMA_DMAENASET_SET5_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(5*4))))
#define DMA_DMAENASET_SET6_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(6*4))))
#define DMA_DMAENASET_SET7_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(7*4))))
#define DMA_DMAENASET_SET8_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(8*4))))
#define DMA_DMAENASET_SET9_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(9*4))))
#define DMA_DMAENASET_SET10_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(10*4))))
#define DMA_DMAENASET_SET11_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(11*4))))
#define DMA_DMAENASET_SET12_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(12*4))))
#define DMA_DMAENASET_SET13_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(13*4))))
#define DMA_DMAENASET_SET14_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(14*4))))
#define DMA_DMAENASET_SET15_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(15*4))))
#define DMA_DMAENASET_SET16_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(16*4))))
#define DMA_DMAENASET_SET17_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(17*4))))
#define DMA_DMAENASET_SET18_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(18*4))))
#define DMA_DMAENASET_SET19_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(19*4))))
#define DMA_DMAENASET_SET20_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(20*4))))
#define DMA_DMAENASET_SET21_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(21*4))))
#define DMA_DMAENASET_SET22_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(22*4))))
#define DMA_DMAENASET_SET23_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(23*4))))
#define DMA_DMAENASET_SET24_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(24*4))))
#define DMA_DMAENASET_SET25_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(25*4))))
#define DMA_DMAENASET_SET26_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(26*4))))
#define DMA_DMAENASET_SET27_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(27*4))))
#define DMA_DMAENASET_SET28_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(28*4))))
#define DMA_DMAENASET_SET29_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(29*4))))
#define DMA_DMAENASET_SET30_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(30*4))))
#define DMA_DMAENASET_SET31_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENASET_OFFSET)*32)+(31*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 15 DMAENACLR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAENACLR            (((DMAENACLR_TypeDef*)(DMA_BASE+DMA_DMAENACLR_OFFSET )))
#define DMA_DMAENACLR_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAENACLR_OFFSET)))



//--------
#define DMA_DMAENACLR_R_CLR0_MASK     (0x00000001)
#define DMA_DMAENACLR_R_CLR0_BIT      (0)
#define DMA_DMAENACLR_R_CLR0_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR0_CLR     (0x00000001)

#define DMA_DMAENACLR_CLR0_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR0_NA     (0x00000000)
#define DMA_DMAENACLR_CLR0_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR1_MASK     (0x00000002)
#define DMA_DMAENACLR_R_CLR1_BIT      (1)
#define DMA_DMAENACLR_R_CLR1_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR1_CLR     (0x00000002)

#define DMA_DMAENACLR_CLR1_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR1_NA     (0x00000000)
#define DMA_DMAENACLR_CLR1_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR2_MASK     (0x00000004)
#define DMA_DMAENACLR_R_CLR2_BIT      (2)
#define DMA_DMAENACLR_R_CLR2_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR2_CLR     (0x00000004)

#define DMA_DMAENACLR_CLR2_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR2_NA     (0x00000000)
#define DMA_DMAENACLR_CLR2_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR3_MASK     (0x00000008)
#define DMA_DMAENACLR_R_CLR3_BIT      (3)
#define DMA_DMAENACLR_R_CLR3_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR3_CLR     (0x00000008)

#define DMA_DMAENACLR_CLR3_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR3_NA     (0x00000000)
#define DMA_DMAENACLR_CLR3_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR4_MASK     (0x00000010)
#define DMA_DMAENACLR_R_CLR4_BIT      (4)
#define DMA_DMAENACLR_R_CLR4_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR4_CLR     (0x00000010)

#define DMA_DMAENACLR_CLR4_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR4_NA     (0x00000000)
#define DMA_DMAENACLR_CLR4_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR5_MASK     (0x00000020)
#define DMA_DMAENACLR_R_CLR5_BIT      (5)
#define DMA_DMAENACLR_R_CLR5_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR5_CLR     (0x00000020)

#define DMA_DMAENACLR_CLR5_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR5_NA     (0x00000000)
#define DMA_DMAENACLR_CLR5_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR6_MASK     (0x00000040)
#define DMA_DMAENACLR_R_CLR6_BIT      (6)
#define DMA_DMAENACLR_R_CLR6_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR6_CLR     (0x00000040)

#define DMA_DMAENACLR_CLR6_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR6_NA     (0x00000000)
#define DMA_DMAENACLR_CLR6_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR7_MASK     (0x00000080)
#define DMA_DMAENACLR_R_CLR7_BIT      (7)
#define DMA_DMAENACLR_R_CLR7_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR7_CLR     (0x00000080)

#define DMA_DMAENACLR_CLR7_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR7_NA     (0x00000000)
#define DMA_DMAENACLR_CLR7_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR8_MASK     (0x00000100)
#define DMA_DMAENACLR_R_CLR8_BIT      (8)
#define DMA_DMAENACLR_R_CLR8_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR8_CLR     (0x00000100)

#define DMA_DMAENACLR_CLR8_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR8_NA     (0x00000000)
#define DMA_DMAENACLR_CLR8_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR9_MASK     (0x00000200)
#define DMA_DMAENACLR_R_CLR9_BIT      (9)
#define DMA_DMAENACLR_R_CLR9_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR9_CLR     (0x00000200)

#define DMA_DMAENACLR_CLR9_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR9_NA     (0x00000000)
#define DMA_DMAENACLR_CLR9_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR10_MASK     (0x00000400)
#define DMA_DMAENACLR_R_CLR10_BIT      (10)
#define DMA_DMAENACLR_R_CLR10_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR10_CLR     (0x00000400)

#define DMA_DMAENACLR_CLR10_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR10_NA     (0x00000000)
#define DMA_DMAENACLR_CLR10_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR11_MASK     (0x00000800)
#define DMA_DMAENACLR_R_CLR11_BIT      (11)
#define DMA_DMAENACLR_R_CLR11_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR11_CLR     (0x00000800)

#define DMA_DMAENACLR_CLR11_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR11_NA     (0x00000000)
#define DMA_DMAENACLR_CLR11_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR12_MASK     (0x00001000)
#define DMA_DMAENACLR_R_CLR12_BIT      (12)
#define DMA_DMAENACLR_R_CLR12_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR12_CLR     (0x00001000)

#define DMA_DMAENACLR_CLR12_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR12_NA     (0x00000000)
#define DMA_DMAENACLR_CLR12_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR13_MASK     (0x00002000)
#define DMA_DMAENACLR_R_CLR13_BIT      (13)
#define DMA_DMAENACLR_R_CLR13_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR13_CLR     (0x00002000)

#define DMA_DMAENACLR_CLR13_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR13_NA     (0x00000000)
#define DMA_DMAENACLR_CLR13_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR14_MASK     (0x00004000)
#define DMA_DMAENACLR_R_CLR14_BIT      (14)
#define DMA_DMAENACLR_R_CLR14_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR14_CLR     (0x00004000)

#define DMA_DMAENACLR_CLR14_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR14_NA     (0x00000000)
#define DMA_DMAENACLR_CLR14_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR15_MASK     (0x00008000)
#define DMA_DMAENACLR_R_CLR15_BIT      (15)
#define DMA_DMAENACLR_R_CLR15_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR15_CLR     (0x00008000)

#define DMA_DMAENACLR_CLR15_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR15_NA     (0x00000000)
#define DMA_DMAENACLR_CLR15_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR16_MASK     (0x00010000)
#define DMA_DMAENACLR_R_CLR16_BIT      (16)
#define DMA_DMAENACLR_R_CLR16_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR16_CLR     (0x00010000)

#define DMA_DMAENACLR_CLR16_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR16_NA     (0x00000000)
#define DMA_DMAENACLR_CLR16_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR17_MASK     (0x00020000)
#define DMA_DMAENACLR_R_CLR17_BIT      (17)
#define DMA_DMAENACLR_R_CLR17_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR17_CLR     (0x00020000)

#define DMA_DMAENACLR_CLR17_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR17_NA     (0x00000000)
#define DMA_DMAENACLR_CLR17_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR18_MASK     (0x00040000)
#define DMA_DMAENACLR_R_CLR18_BIT      (18)
#define DMA_DMAENACLR_R_CLR18_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR18_CLR     (0x00040000)

#define DMA_DMAENACLR_CLR18_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR18_NA     (0x00000000)
#define DMA_DMAENACLR_CLR18_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR19_MASK     (0x00080000)
#define DMA_DMAENACLR_R_CLR19_BIT      (19)
#define DMA_DMAENACLR_R_CLR19_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR19_CLR     (0x00080000)

#define DMA_DMAENACLR_CLR19_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR19_NA     (0x00000000)
#define DMA_DMAENACLR_CLR19_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR20_MASK     (0x00100000)
#define DMA_DMAENACLR_R_CLR20_BIT      (20)
#define DMA_DMAENACLR_R_CLR20_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR20_CLR     (0x00100000)

#define DMA_DMAENACLR_CLR20_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR20_NA     (0x00000000)
#define DMA_DMAENACLR_CLR20_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR21_MASK     (0x00200000)
#define DMA_DMAENACLR_R_CLR21_BIT      (21)
#define DMA_DMAENACLR_R_CLR21_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR21_CLR     (0x00200000)

#define DMA_DMAENACLR_CLR21_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR21_NA     (0x00000000)
#define DMA_DMAENACLR_CLR21_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR22_MASK     (0x00400000)
#define DMA_DMAENACLR_R_CLR22_BIT      (22)
#define DMA_DMAENACLR_R_CLR22_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR22_CLR     (0x00400000)

#define DMA_DMAENACLR_CLR22_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR22_NA     (0x00000000)
#define DMA_DMAENACLR_CLR22_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR23_MASK     (0x00800000)
#define DMA_DMAENACLR_R_CLR23_BIT      (23)
#define DMA_DMAENACLR_R_CLR23_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR23_CLR     (0x00800000)

#define DMA_DMAENACLR_CLR23_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR23_NA     (0x00000000)
#define DMA_DMAENACLR_CLR23_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR24_MASK     (0x01000000)
#define DMA_DMAENACLR_R_CLR24_BIT      (24)
#define DMA_DMAENACLR_R_CLR24_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR24_CLR     (0x01000000)

#define DMA_DMAENACLR_CLR24_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR24_NA     (0x00000000)
#define DMA_DMAENACLR_CLR24_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR25_MASK     (0x02000000)
#define DMA_DMAENACLR_R_CLR25_BIT      (25)
#define DMA_DMAENACLR_R_CLR25_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR25_CLR     (0x02000000)

#define DMA_DMAENACLR_CLR25_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR25_NA     (0x00000000)
#define DMA_DMAENACLR_CLR25_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR26_MASK     (0x04000000)
#define DMA_DMAENACLR_R_CLR26_BIT      (26)
#define DMA_DMAENACLR_R_CLR26_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR26_CLR     (0x04000000)

#define DMA_DMAENACLR_CLR26_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR26_NA     (0x00000000)
#define DMA_DMAENACLR_CLR26_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR27_MASK     (0x08000000)
#define DMA_DMAENACLR_R_CLR27_BIT      (27)
#define DMA_DMAENACLR_R_CLR27_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR27_CLR     (0x08000000)

#define DMA_DMAENACLR_CLR27_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR27_NA     (0x00000000)
#define DMA_DMAENACLR_CLR27_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR28_MASK     (0x10000000)
#define DMA_DMAENACLR_R_CLR28_BIT      (28)
#define DMA_DMAENACLR_R_CLR28_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR28_CLR     (0x10000000)

#define DMA_DMAENACLR_CLR28_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR28_NA     (0x00000000)
#define DMA_DMAENACLR_CLR28_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR29_MASK     (0x20000000)
#define DMA_DMAENACLR_R_CLR29_BIT      (29)
#define DMA_DMAENACLR_R_CLR29_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR29_CLR     (0x20000000)

#define DMA_DMAENACLR_CLR29_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR29_NA     (0x00000000)
#define DMA_DMAENACLR_CLR29_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR30_MASK     (0x40000000)
#define DMA_DMAENACLR_R_CLR30_BIT      (30)
#define DMA_DMAENACLR_R_CLR30_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR30_CLR     (0x40000000)

#define DMA_DMAENACLR_CLR30_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR30_NA     (0x00000000)
#define DMA_DMAENACLR_CLR30_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAENACLR_R_CLR31_MASK     (0x80000000)
#define DMA_DMAENACLR_R_CLR31_BIT      (31)
#define DMA_DMAENACLR_R_CLR31_NA   (0x00000000)
#define DMA_DMAENACLR_R_CLR31_CLR     (0x80000000)

#define DMA_DMAENACLR_CLR31_MASK       (0x00000001)
#define DMA_DMAENACLR_CLR31_NA     (0x00000000)
#define DMA_DMAENACLR_CLR31_CLR       (0x00000001)
//--------


#define DMA_DMAENACLR_CLR0_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(0*4))))
#define DMA_DMAENACLR_CLR1_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(1*4))))
#define DMA_DMAENACLR_CLR2_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(2*4))))
#define DMA_DMAENACLR_CLR3_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(3*4))))
#define DMA_DMAENACLR_CLR4_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(4*4))))
#define DMA_DMAENACLR_CLR5_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(5*4))))
#define DMA_DMAENACLR_CLR6_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(6*4))))
#define DMA_DMAENACLR_CLR7_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(7*4))))
#define DMA_DMAENACLR_CLR8_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(8*4))))
#define DMA_DMAENACLR_CLR9_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(9*4))))
#define DMA_DMAENACLR_CLR10_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(10*4))))
#define DMA_DMAENACLR_CLR11_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(11*4))))
#define DMA_DMAENACLR_CLR12_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(12*4))))
#define DMA_DMAENACLR_CLR13_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(13*4))))
#define DMA_DMAENACLR_CLR14_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(14*4))))
#define DMA_DMAENACLR_CLR15_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(15*4))))
#define DMA_DMAENACLR_CLR16_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(16*4))))
#define DMA_DMAENACLR_CLR17_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(17*4))))
#define DMA_DMAENACLR_CLR18_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(18*4))))
#define DMA_DMAENACLR_CLR19_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(19*4))))
#define DMA_DMAENACLR_CLR20_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(20*4))))
#define DMA_DMAENACLR_CLR21_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(21*4))))
#define DMA_DMAENACLR_CLR22_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(22*4))))
#define DMA_DMAENACLR_CLR23_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(23*4))))
#define DMA_DMAENACLR_CLR24_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(24*4))))
#define DMA_DMAENACLR_CLR25_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(25*4))))
#define DMA_DMAENACLR_CLR26_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(26*4))))
#define DMA_DMAENACLR_CLR27_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(27*4))))
#define DMA_DMAENACLR_CLR28_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(28*4))))
#define DMA_DMAENACLR_CLR29_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(29*4))))
#define DMA_DMAENACLR_CLR30_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(30*4))))
#define DMA_DMAENACLR_CLR31_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAENACLR_OFFSET)*32)+(31*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 16 DMAALTSET ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAALTSET            (((DMAALTSET_TypeDef*)(DMA_BASE+DMA_DMAALTSET_OFFSET )))
#define DMA_DMAALTSET_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAALTSET_OFFSET)))




//--------
#define DMA_DMAALTSET_R_SET0_MASK     (0x00000001)
#define DMA_DMAALTSET_R_SET0_BIT      (0)
#define DMA_DMAALTSET_R_SET0_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET0_ALT     (0x00000001)

#define DMA_DMAALTSET_SET0_MASK       (0x00000001)
#define DMA_DMAALTSET_SET0_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET0_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET1_MASK     (0x00000002)
#define DMA_DMAALTSET_R_SET1_BIT      (1)
#define DMA_DMAALTSET_R_SET1_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET1_ALT     (0x00000002)

#define DMA_DMAALTSET_SET1_MASK       (0x00000001)
#define DMA_DMAALTSET_SET1_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET1_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET2_MASK     (0x00000004)
#define DMA_DMAALTSET_R_SET2_BIT      (2)
#define DMA_DMAALTSET_R_SET2_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET2_ALT     (0x00000004)

#define DMA_DMAALTSET_SET2_MASK       (0x00000001)
#define DMA_DMAALTSET_SET2_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET2_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET3_MASK     (0x00000008)
#define DMA_DMAALTSET_R_SET3_BIT      (3)
#define DMA_DMAALTSET_R_SET3_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET3_ALT     (0x00000008)

#define DMA_DMAALTSET_SET3_MASK       (0x00000001)
#define DMA_DMAALTSET_SET3_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET3_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET4_MASK     (0x00000010)
#define DMA_DMAALTSET_R_SET4_BIT      (4)
#define DMA_DMAALTSET_R_SET4_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET4_ALT     (0x00000010)

#define DMA_DMAALTSET_SET4_MASK       (0x00000001)
#define DMA_DMAALTSET_SET4_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET4_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET5_MASK     (0x00000020)
#define DMA_DMAALTSET_R_SET5_BIT      (5)
#define DMA_DMAALTSET_R_SET5_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET5_ALT     (0x00000020)

#define DMA_DMAALTSET_SET5_MASK       (0x00000001)
#define DMA_DMAALTSET_SET5_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET5_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET6_MASK     (0x00000040)
#define DMA_DMAALTSET_R_SET6_BIT      (6)
#define DMA_DMAALTSET_R_SET6_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET6_ALT     (0x00000040)

#define DMA_DMAALTSET_SET6_MASK       (0x00000001)
#define DMA_DMAALTSET_SET6_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET6_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET7_MASK     (0x00000080)
#define DMA_DMAALTSET_R_SET7_BIT      (7)
#define DMA_DMAALTSET_R_SET7_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET7_ALT     (0x00000080)

#define DMA_DMAALTSET_SET7_MASK       (0x00000001)
#define DMA_DMAALTSET_SET7_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET7_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET8_MASK     (0x00000100)
#define DMA_DMAALTSET_R_SET8_BIT      (8)
#define DMA_DMAALTSET_R_SET8_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET8_ALT     (0x00000100)

#define DMA_DMAALTSET_SET8_MASK       (0x00000001)
#define DMA_DMAALTSET_SET8_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET8_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET9_MASK     (0x00000200)
#define DMA_DMAALTSET_R_SET9_BIT      (9)
#define DMA_DMAALTSET_R_SET9_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET9_ALT     (0x00000200)

#define DMA_DMAALTSET_SET9_MASK       (0x00000001)
#define DMA_DMAALTSET_SET9_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET9_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET10_MASK     (0x00000400)
#define DMA_DMAALTSET_R_SET10_BIT      (10)
#define DMA_DMAALTSET_R_SET10_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET10_ALT     (0x00000400)

#define DMA_DMAALTSET_SET10_MASK       (0x00000001)
#define DMA_DMAALTSET_SET10_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET10_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET11_MASK     (0x00000800)
#define DMA_DMAALTSET_R_SET11_BIT      (11)
#define DMA_DMAALTSET_R_SET11_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET11_ALT     (0x00000800)

#define DMA_DMAALTSET_SET11_MASK       (0x00000001)
#define DMA_DMAALTSET_SET11_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET11_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET12_MASK     (0x00001000)
#define DMA_DMAALTSET_R_SET12_BIT      (12)
#define DMA_DMAALTSET_R_SET12_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET12_ALT     (0x00001000)

#define DMA_DMAALTSET_SET12_MASK       (0x00000001)
#define DMA_DMAALTSET_SET12_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET12_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET13_MASK     (0x00002000)
#define DMA_DMAALTSET_R_SET13_BIT      (13)
#define DMA_DMAALTSET_R_SET13_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET13_ALT     (0x00002000)

#define DMA_DMAALTSET_SET13_MASK       (0x00000001)
#define DMA_DMAALTSET_SET13_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET13_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET14_MASK     (0x00004000)
#define DMA_DMAALTSET_R_SET14_BIT      (14)
#define DMA_DMAALTSET_R_SET14_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET14_ALT     (0x00004000)

#define DMA_DMAALTSET_SET14_MASK       (0x00000001)
#define DMA_DMAALTSET_SET14_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET14_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET15_MASK     (0x00008000)
#define DMA_DMAALTSET_R_SET15_BIT      (15)
#define DMA_DMAALTSET_R_SET15_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET15_ALT     (0x00008000)

#define DMA_DMAALTSET_SET15_MASK       (0x00000001)
#define DMA_DMAALTSET_SET15_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET15_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET16_MASK     (0x00010000)
#define DMA_DMAALTSET_R_SET16_BIT      (16)
#define DMA_DMAALTSET_R_SET16_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET16_ALT     (0x00010000)

#define DMA_DMAALTSET_SET16_MASK       (0x00000001)
#define DMA_DMAALTSET_SET16_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET16_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET17_MASK     (0x00020000)
#define DMA_DMAALTSET_R_SET17_BIT      (17)
#define DMA_DMAALTSET_R_SET17_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET17_ALT     (0x00020000)

#define DMA_DMAALTSET_SET17_MASK       (0x00000001)
#define DMA_DMAALTSET_SET17_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET17_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET18_MASK     (0x00040000)
#define DMA_DMAALTSET_R_SET18_BIT      (18)
#define DMA_DMAALTSET_R_SET18_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET18_ALT     (0x00040000)

#define DMA_DMAALTSET_SET18_MASK       (0x00000001)
#define DMA_DMAALTSET_SET18_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET18_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET19_MASK     (0x00080000)
#define DMA_DMAALTSET_R_SET19_BIT      (19)
#define DMA_DMAALTSET_R_SET19_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET19_ALT     (0x00080000)

#define DMA_DMAALTSET_SET19_MASK       (0x00000001)
#define DMA_DMAALTSET_SET19_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET19_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET20_MASK     (0x00100000)
#define DMA_DMAALTSET_R_SET20_BIT      (20)
#define DMA_DMAALTSET_R_SET20_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET20_ALT     (0x00100000)

#define DMA_DMAALTSET_SET20_MASK       (0x00000001)
#define DMA_DMAALTSET_SET20_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET20_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET21_MASK     (0x00200000)
#define DMA_DMAALTSET_R_SET21_BIT      (21)
#define DMA_DMAALTSET_R_SET21_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET21_ALT     (0x00200000)

#define DMA_DMAALTSET_SET21_MASK       (0x00000001)
#define DMA_DMAALTSET_SET21_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET21_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET22_MASK     (0x00400000)
#define DMA_DMAALTSET_R_SET22_BIT      (22)
#define DMA_DMAALTSET_R_SET22_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET22_ALT     (0x00400000)

#define DMA_DMAALTSET_SET22_MASK       (0x00000001)
#define DMA_DMAALTSET_SET22_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET22_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET23_MASK     (0x00800000)
#define DMA_DMAALTSET_R_SET23_BIT      (23)
#define DMA_DMAALTSET_R_SET23_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET23_ALT     (0x00800000)

#define DMA_DMAALTSET_SET23_MASK       (0x00000001)
#define DMA_DMAALTSET_SET23_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET23_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET24_MASK     (0x01000000)
#define DMA_DMAALTSET_R_SET24_BIT      (24)
#define DMA_DMAALTSET_R_SET24_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET24_ALT     (0x01000000)

#define DMA_DMAALTSET_SET24_MASK       (0x00000001)
#define DMA_DMAALTSET_SET24_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET24_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET25_MASK     (0x02000000)
#define DMA_DMAALTSET_R_SET25_BIT      (25)
#define DMA_DMAALTSET_R_SET25_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET25_ALT     (0x02000000)

#define DMA_DMAALTSET_SET25_MASK       (0x00000001)
#define DMA_DMAALTSET_SET25_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET25_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET26_MASK     (0x04000000)
#define DMA_DMAALTSET_R_SET26_BIT      (26)
#define DMA_DMAALTSET_R_SET26_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET26_ALT     (0x04000000)

#define DMA_DMAALTSET_SET26_MASK       (0x00000001)
#define DMA_DMAALTSET_SET26_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET26_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET27_MASK     (0x08000000)
#define DMA_DMAALTSET_R_SET27_BIT      (27)
#define DMA_DMAALTSET_R_SET27_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET27_ALT     (0x08000000)

#define DMA_DMAALTSET_SET27_MASK       (0x00000001)
#define DMA_DMAALTSET_SET27_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET27_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET28_MASK     (0x10000000)
#define DMA_DMAALTSET_R_SET28_BIT      (28)
#define DMA_DMAALTSET_R_SET28_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET28_ALT     (0x10000000)

#define DMA_DMAALTSET_SET28_MASK       (0x00000001)
#define DMA_DMAALTSET_SET28_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET28_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET29_MASK     (0x20000000)
#define DMA_DMAALTSET_R_SET29_BIT      (29)
#define DMA_DMAALTSET_R_SET29_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET29_ALT     (0x20000000)

#define DMA_DMAALTSET_SET29_MASK       (0x00000001)
#define DMA_DMAALTSET_SET29_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET29_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET30_MASK     (0x40000000)
#define DMA_DMAALTSET_R_SET30_BIT      (30)
#define DMA_DMAALTSET_R_SET30_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET30_ALT     (0x40000000)

#define DMA_DMAALTSET_SET30_MASK       (0x00000001)
#define DMA_DMAALTSET_SET30_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET30_ALT       (0x00000001)
//--------

//--------
#define DMA_DMAALTSET_R_SET31_MASK     (0x80000000)
#define DMA_DMAALTSET_R_SET31_BIT      (31)
#define DMA_DMAALTSET_R_SET31_PRIM   (0x00000000)
#define DMA_DMAALTSET_R_SET31_ALT     (0x80000000)

#define DMA_DMAALTSET_SET31_MASK       (0x00000001)
#define DMA_DMAALTSET_SET31_PRIM     (0x00000000)
#define DMA_DMAALTSET_SET31_ALT       (0x00000001)
//--------


#define DMA_DMAALTSET_SET0_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(0*4))))
#define DMA_DMAALTSET_SET1_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(1*4))))
#define DMA_DMAALTSET_SET2_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(2*4))))
#define DMA_DMAALTSET_SET3_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(3*4))))
#define DMA_DMAALTSET_SET4_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(4*4))))
#define DMA_DMAALTSET_SET5_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(5*4))))
#define DMA_DMAALTSET_SET6_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(6*4))))
#define DMA_DMAALTSET_SET7_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(7*4))))
#define DMA_DMAALTSET_SET8_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(8*4))))
#define DMA_DMAALTSET_SET9_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(9*4))))
#define DMA_DMAALTSET_SET10_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(10*4))))
#define DMA_DMAALTSET_SET11_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(11*4))))
#define DMA_DMAALTSET_SET12_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(12*4))))
#define DMA_DMAALTSET_SET13_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(13*4))))
#define DMA_DMAALTSET_SET14_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(14*4))))
#define DMA_DMAALTSET_SET15_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(15*4))))
#define DMA_DMAALTSET_SET16_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(16*4))))
#define DMA_DMAALTSET_SET17_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(17*4))))
#define DMA_DMAALTSET_SET18_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(18*4))))
#define DMA_DMAALTSET_SET19_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(19*4))))
#define DMA_DMAALTSET_SET20_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(20*4))))
#define DMA_DMAALTSET_SET21_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(21*4))))
#define DMA_DMAALTSET_SET22_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(22*4))))
#define DMA_DMAALTSET_SET23_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(23*4))))
#define DMA_DMAALTSET_SET24_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(24*4))))
#define DMA_DMAALTSET_SET25_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(25*4))))
#define DMA_DMAALTSET_SET26_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(26*4))))
#define DMA_DMAALTSET_SET27_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(27*4))))
#define DMA_DMAALTSET_SET28_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(28*4))))
#define DMA_DMAALTSET_SET29_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(29*4))))
#define DMA_DMAALTSET_SET30_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(30*4))))
#define DMA_DMAALTSET_SET31_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTSET_OFFSET)*32)+(31*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 17 DMAALTCLR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAALTCLR            (((DMAALTCLR_TypeDef*)(DMA_BASE+DMA_DMAALTCLR_OFFSET )))
#define DMA_DMAALTCLR_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAALTCLR_OFFSET)))




//--------
#define DMA_DMAALTCLR_R_CLR0_MASK     (0x00000001)
#define DMA_DMAALTCLR_R_CLR0_BIT      (0)
#define DMA_DMAALTCLR_R_CLR0_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR0_CLR     (0x00000001)

#define DMA_DMAALTCLR_CLR0_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR0_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR0_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR1_MASK     (0x00000002)
#define DMA_DMAALTCLR_R_CLR1_BIT      (1)
#define DMA_DMAALTCLR_R_CLR1_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR1_CLR     (0x00000002)

#define DMA_DMAALTCLR_CLR1_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR1_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR1_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR2_MASK     (0x00000004)
#define DMA_DMAALTCLR_R_CLR2_BIT      (2)
#define DMA_DMAALTCLR_R_CLR2_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR2_CLR     (0x00000004)

#define DMA_DMAALTCLR_CLR2_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR2_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR2_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR3_MASK     (0x00000008)
#define DMA_DMAALTCLR_R_CLR3_BIT      (3)
#define DMA_DMAALTCLR_R_CLR3_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR3_CLR     (0x00000008)

#define DMA_DMAALTCLR_CLR3_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR3_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR3_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR4_MASK     (0x00000010)
#define DMA_DMAALTCLR_R_CLR4_BIT      (4)
#define DMA_DMAALTCLR_R_CLR4_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR4_CLR     (0x00000010)

#define DMA_DMAALTCLR_CLR4_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR4_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR4_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR5_MASK     (0x00000020)
#define DMA_DMAALTCLR_R_CLR5_BIT      (5)
#define DMA_DMAALTCLR_R_CLR5_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR5_CLR     (0x00000020)

#define DMA_DMAALTCLR_CLR5_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR5_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR5_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR6_MASK     (0x00000040)
#define DMA_DMAALTCLR_R_CLR6_BIT      (6)
#define DMA_DMAALTCLR_R_CLR6_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR6_CLR     (0x00000040)

#define DMA_DMAALTCLR_CLR6_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR6_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR6_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR7_MASK     (0x00000080)
#define DMA_DMAALTCLR_R_CLR7_BIT      (7)
#define DMA_DMAALTCLR_R_CLR7_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR7_CLR     (0x00000080)

#define DMA_DMAALTCLR_CLR7_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR7_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR7_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR8_MASK     (0x00000100)
#define DMA_DMAALTCLR_R_CLR8_BIT      (8)
#define DMA_DMAALTCLR_R_CLR8_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR8_CLR     (0x00000100)

#define DMA_DMAALTCLR_CLR8_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR8_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR8_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR9_MASK     (0x00000200)
#define DMA_DMAALTCLR_R_CLR9_BIT      (9)
#define DMA_DMAALTCLR_R_CLR9_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR9_CLR     (0x00000200)

#define DMA_DMAALTCLR_CLR9_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR9_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR9_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR10_MASK     (0x00000400)
#define DMA_DMAALTCLR_R_CLR10_BIT      (10)
#define DMA_DMAALTCLR_R_CLR10_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR10_CLR     (0x00000400)

#define DMA_DMAALTCLR_CLR10_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR10_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR10_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR11_MASK     (0x00000800)
#define DMA_DMAALTCLR_R_CLR11_BIT      (11)
#define DMA_DMAALTCLR_R_CLR11_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR11_CLR     (0x00000800)

#define DMA_DMAALTCLR_CLR11_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR11_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR11_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR12_MASK     (0x00001000)
#define DMA_DMAALTCLR_R_CLR12_BIT      (12)
#define DMA_DMAALTCLR_R_CLR12_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR12_CLR     (0x00001000)

#define DMA_DMAALTCLR_CLR12_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR12_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR12_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR13_MASK     (0x00002000)
#define DMA_DMAALTCLR_R_CLR13_BIT      (13)
#define DMA_DMAALTCLR_R_CLR13_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR13_CLR     (0x00002000)

#define DMA_DMAALTCLR_CLR13_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR13_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR13_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR14_MASK     (0x00004000)
#define DMA_DMAALTCLR_R_CLR14_BIT      (14)
#define DMA_DMAALTCLR_R_CLR14_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR14_CLR     (0x00004000)

#define DMA_DMAALTCLR_CLR14_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR14_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR14_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR15_MASK     (0x00008000)
#define DMA_DMAALTCLR_R_CLR15_BIT      (15)
#define DMA_DMAALTCLR_R_CLR15_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR15_CLR     (0x00008000)

#define DMA_DMAALTCLR_CLR15_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR15_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR15_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR16_MASK     (0x00010000)
#define DMA_DMAALTCLR_R_CLR16_BIT      (16)
#define DMA_DMAALTCLR_R_CLR16_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR16_CLR     (0x00010000)

#define DMA_DMAALTCLR_CLR16_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR16_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR16_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR17_MASK     (0x00020000)
#define DMA_DMAALTCLR_R_CLR17_BIT      (17)
#define DMA_DMAALTCLR_R_CLR17_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR17_CLR     (0x00020000)

#define DMA_DMAALTCLR_CLR17_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR17_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR17_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR18_MASK     (0x00040000)
#define DMA_DMAALTCLR_R_CLR18_BIT      (18)
#define DMA_DMAALTCLR_R_CLR18_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR18_CLR     (0x00040000)

#define DMA_DMAALTCLR_CLR18_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR18_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR18_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR19_MASK     (0x00080000)
#define DMA_DMAALTCLR_R_CLR19_BIT      (19)
#define DMA_DMAALTCLR_R_CLR19_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR19_CLR     (0x00080000)

#define DMA_DMAALTCLR_CLR19_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR19_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR19_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR20_MASK     (0x00100000)
#define DMA_DMAALTCLR_R_CLR20_BIT      (20)
#define DMA_DMAALTCLR_R_CLR20_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR20_CLR     (0x00100000)

#define DMA_DMAALTCLR_CLR20_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR20_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR20_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR21_MASK     (0x00200000)
#define DMA_DMAALTCLR_R_CLR21_BIT      (21)
#define DMA_DMAALTCLR_R_CLR21_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR21_CLR     (0x00200000)

#define DMA_DMAALTCLR_CLR21_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR21_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR21_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR22_MASK     (0x00400000)
#define DMA_DMAALTCLR_R_CLR22_BIT      (22)
#define DMA_DMAALTCLR_R_CLR22_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR22_CLR     (0x00400000)

#define DMA_DMAALTCLR_CLR22_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR22_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR22_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR23_MASK     (0x00800000)
#define DMA_DMAALTCLR_R_CLR23_BIT      (23)
#define DMA_DMAALTCLR_R_CLR23_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR23_CLR     (0x00800000)

#define DMA_DMAALTCLR_CLR23_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR23_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR23_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR24_MASK     (0x01000000)
#define DMA_DMAALTCLR_R_CLR24_BIT      (24)
#define DMA_DMAALTCLR_R_CLR24_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR24_CLR     (0x01000000)

#define DMA_DMAALTCLR_CLR24_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR24_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR24_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR25_MASK     (0x02000000)
#define DMA_DMAALTCLR_R_CLR25_BIT      (25)
#define DMA_DMAALTCLR_R_CLR25_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR25_CLR     (0x02000000)

#define DMA_DMAALTCLR_CLR25_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR25_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR25_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR26_MASK     (0x04000000)
#define DMA_DMAALTCLR_R_CLR26_BIT      (26)
#define DMA_DMAALTCLR_R_CLR26_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR26_CLR     (0x04000000)

#define DMA_DMAALTCLR_CLR26_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR26_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR26_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR27_MASK     (0x08000000)
#define DMA_DMAALTCLR_R_CLR27_BIT      (27)
#define DMA_DMAALTCLR_R_CLR27_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR27_CLR     (0x08000000)

#define DMA_DMAALTCLR_CLR27_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR27_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR27_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR28_MASK     (0x10000000)
#define DMA_DMAALTCLR_R_CLR28_BIT      (28)
#define DMA_DMAALTCLR_R_CLR28_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR28_CLR     (0x10000000)

#define DMA_DMAALTCLR_CLR28_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR28_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR28_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR29_MASK     (0x20000000)
#define DMA_DMAALTCLR_R_CLR29_BIT      (29)
#define DMA_DMAALTCLR_R_CLR29_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR29_CLR     (0x20000000)

#define DMA_DMAALTCLR_CLR29_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR29_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR29_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR30_MASK     (0x40000000)
#define DMA_DMAALTCLR_R_CLR30_BIT      (30)
#define DMA_DMAALTCLR_R_CLR30_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR30_CLR     (0x40000000)

#define DMA_DMAALTCLR_CLR30_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR30_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR30_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAALTCLR_R_CLR31_MASK     (0x80000000)
#define DMA_DMAALTCLR_R_CLR31_BIT      (31)
#define DMA_DMAALTCLR_R_CLR31_NA   (0x00000000)
#define DMA_DMAALTCLR_R_CLR31_CLR     (0x80000000)

#define DMA_DMAALTCLR_CLR31_MASK       (0x00000001)
#define DMA_DMAALTCLR_CLR31_NA     (0x00000000)
#define DMA_DMAALTCLR_CLR31_CLR       (0x00000001)
//--------


#define DMA_DMAALTCLR_CLR0_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(0*4))))
#define DMA_DMAALTCLR_CLR1_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(1*4))))
#define DMA_DMAALTCLR_CLR2_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(2*4))))
#define DMA_DMAALTCLR_CLR3_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(3*4))))
#define DMA_DMAALTCLR_CLR4_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(4*4))))
#define DMA_DMAALTCLR_CLR5_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(5*4))))
#define DMA_DMAALTCLR_CLR6_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(6*4))))
#define DMA_DMAALTCLR_CLR7_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(7*4))))
#define DMA_DMAALTCLR_CLR8_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(8*4))))
#define DMA_DMAALTCLR_CLR9_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(9*4))))
#define DMA_DMAALTCLR_CLR10_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(10*4))))
#define DMA_DMAALTCLR_CLR11_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(11*4))))
#define DMA_DMAALTCLR_CLR12_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(12*4))))
#define DMA_DMAALTCLR_CLR13_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(13*4))))
#define DMA_DMAALTCLR_CLR14_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(14*4))))
#define DMA_DMAALTCLR_CLR15_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(15*4))))
#define DMA_DMAALTCLR_CLR16_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(16*4))))
#define DMA_DMAALTCLR_CLR17_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(17*4))))
#define DMA_DMAALTCLR_CLR18_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(18*4))))
#define DMA_DMAALTCLR_CLR19_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(19*4))))
#define DMA_DMAALTCLR_CLR20_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(20*4))))
#define DMA_DMAALTCLR_CLR21_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(21*4))))
#define DMA_DMAALTCLR_CLR22_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(22*4))))
#define DMA_DMAALTCLR_CLR23_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(23*4))))
#define DMA_DMAALTCLR_CLR24_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(24*4))))
#define DMA_DMAALTCLR_CLR25_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(25*4))))
#define DMA_DMAALTCLR_CLR26_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(26*4))))
#define DMA_DMAALTCLR_CLR27_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(27*4))))
#define DMA_DMAALTCLR_CLR28_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(28*4))))
#define DMA_DMAALTCLR_CLR29_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(29*4))))
#define DMA_DMAALTCLR_CLR30_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(30*4))))
#define DMA_DMAALTCLR_CLR31_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAALTCLR_OFFSET)*32)+(31*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 18 DMAPRIOSET ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAPRIOSET            (((DMAPRIOSET_TypeDef*)(DMA_BASE+DMA_DMAPRIOSET_OFFSET )))
#define DMA_DMAPRIOSET_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAPRIOSET_OFFSET)))




//--------
#define DMA_DMAPRIOSET_R_SET0_MASK     (0x00000001)
#define DMA_DMAPRIOSET_R_SET0_BIT      (0)
#define DMA_DMAPRIOSET_R_SET0_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET0_HIGH     (0x00000001)

#define DMA_DMAPRIOSET_SET0_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET0_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET0_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET1_MASK     (0x00000002)
#define DMA_DMAPRIOSET_R_SET1_BIT      (1)
#define DMA_DMAPRIOSET_R_SET1_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET1_HIGH     (0x00000002)

#define DMA_DMAPRIOSET_SET1_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET1_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET1_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET2_MASK     (0x00000004)
#define DMA_DMAPRIOSET_R_SET2_BIT      (2)
#define DMA_DMAPRIOSET_R_SET2_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET2_HIGH     (0x00000004)

#define DMA_DMAPRIOSET_SET2_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET2_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET2_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET3_MASK     (0x00000008)
#define DMA_DMAPRIOSET_R_SET3_BIT      (3)
#define DMA_DMAPRIOSET_R_SET3_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET3_HIGH     (0x00000008)

#define DMA_DMAPRIOSET_SET3_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET3_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET3_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET4_MASK     (0x00000010)
#define DMA_DMAPRIOSET_R_SET4_BIT      (4)
#define DMA_DMAPRIOSET_R_SET4_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET4_HIGH     (0x00000010)

#define DMA_DMAPRIOSET_SET4_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET4_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET4_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET5_MASK     (0x00000020)
#define DMA_DMAPRIOSET_R_SET5_BIT      (5)
#define DMA_DMAPRIOSET_R_SET5_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET5_HIGH     (0x00000020)

#define DMA_DMAPRIOSET_SET5_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET5_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET5_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET6_MASK     (0x00000040)
#define DMA_DMAPRIOSET_R_SET6_BIT      (6)
#define DMA_DMAPRIOSET_R_SET6_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET6_HIGH     (0x00000040)

#define DMA_DMAPRIOSET_SET6_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET6_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET6_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET7_MASK     (0x00000080)
#define DMA_DMAPRIOSET_R_SET7_BIT      (7)
#define DMA_DMAPRIOSET_R_SET7_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET7_HIGH     (0x00000080)

#define DMA_DMAPRIOSET_SET7_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET7_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET7_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET8_MASK     (0x00000100)
#define DMA_DMAPRIOSET_R_SET8_BIT      (8)
#define DMA_DMAPRIOSET_R_SET8_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET8_HIGH     (0x00000100)

#define DMA_DMAPRIOSET_SET8_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET8_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET8_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET9_MASK     (0x00000200)
#define DMA_DMAPRIOSET_R_SET9_BIT      (9)
#define DMA_DMAPRIOSET_R_SET9_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET9_HIGH     (0x00000200)

#define DMA_DMAPRIOSET_SET9_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET9_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET9_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET10_MASK     (0x00000400)
#define DMA_DMAPRIOSET_R_SET10_BIT      (10)
#define DMA_DMAPRIOSET_R_SET10_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET10_HIGH     (0x00000400)

#define DMA_DMAPRIOSET_SET10_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET10_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET10_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET11_MASK     (0x00000800)
#define DMA_DMAPRIOSET_R_SET11_BIT      (11)
#define DMA_DMAPRIOSET_R_SET11_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET11_HIGH     (0x00000800)

#define DMA_DMAPRIOSET_SET11_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET11_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET11_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET12_MASK     (0x00001000)
#define DMA_DMAPRIOSET_R_SET12_BIT      (12)
#define DMA_DMAPRIOSET_R_SET12_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET12_HIGH     (0x00001000)

#define DMA_DMAPRIOSET_SET12_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET12_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET12_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET13_MASK     (0x00002000)
#define DMA_DMAPRIOSET_R_SET13_BIT      (13)
#define DMA_DMAPRIOSET_R_SET13_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET13_HIGH     (0x00002000)

#define DMA_DMAPRIOSET_SET13_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET13_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET13_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET14_MASK     (0x00004000)
#define DMA_DMAPRIOSET_R_SET14_BIT      (14)
#define DMA_DMAPRIOSET_R_SET14_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET14_HIGH     (0x00004000)

#define DMA_DMAPRIOSET_SET14_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET14_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET14_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET15_MASK     (0x00008000)
#define DMA_DMAPRIOSET_R_SET15_BIT      (15)
#define DMA_DMAPRIOSET_R_SET15_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET15_HIGH     (0x00008000)

#define DMA_DMAPRIOSET_SET15_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET15_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET15_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET16_MASK     (0x00010000)
#define DMA_DMAPRIOSET_R_SET16_BIT      (16)
#define DMA_DMAPRIOSET_R_SET16_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET16_HIGH     (0x00010000)

#define DMA_DMAPRIOSET_SET16_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET16_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET16_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET17_MASK     (0x00020000)
#define DMA_DMAPRIOSET_R_SET17_BIT      (17)
#define DMA_DMAPRIOSET_R_SET17_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET17_HIGH     (0x00020000)

#define DMA_DMAPRIOSET_SET17_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET17_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET17_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET18_MASK     (0x00040000)
#define DMA_DMAPRIOSET_R_SET18_BIT      (18)
#define DMA_DMAPRIOSET_R_SET18_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET18_HIGH     (0x00040000)

#define DMA_DMAPRIOSET_SET18_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET18_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET18_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET19_MASK     (0x00080000)
#define DMA_DMAPRIOSET_R_SET19_BIT      (19)
#define DMA_DMAPRIOSET_R_SET19_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET19_HIGH     (0x00080000)

#define DMA_DMAPRIOSET_SET19_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET19_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET19_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET20_MASK     (0x00100000)
#define DMA_DMAPRIOSET_R_SET20_BIT      (20)
#define DMA_DMAPRIOSET_R_SET20_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET20_HIGH     (0x00100000)

#define DMA_DMAPRIOSET_SET20_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET20_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET20_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET21_MASK     (0x00200000)
#define DMA_DMAPRIOSET_R_SET21_BIT      (21)
#define DMA_DMAPRIOSET_R_SET21_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET21_HIGH     (0x00200000)

#define DMA_DMAPRIOSET_SET21_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET21_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET21_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET22_MASK     (0x00400000)
#define DMA_DMAPRIOSET_R_SET22_BIT      (22)
#define DMA_DMAPRIOSET_R_SET22_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET22_HIGH     (0x00400000)

#define DMA_DMAPRIOSET_SET22_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET22_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET22_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET23_MASK     (0x00800000)
#define DMA_DMAPRIOSET_R_SET23_BIT      (23)
#define DMA_DMAPRIOSET_R_SET23_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET23_HIGH     (0x00800000)

#define DMA_DMAPRIOSET_SET23_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET23_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET23_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET24_MASK     (0x01000000)
#define DMA_DMAPRIOSET_R_SET24_BIT      (24)
#define DMA_DMAPRIOSET_R_SET24_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET24_HIGH     (0x01000000)

#define DMA_DMAPRIOSET_SET24_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET24_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET24_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET25_MASK     (0x02000000)
#define DMA_DMAPRIOSET_R_SET25_BIT      (25)
#define DMA_DMAPRIOSET_R_SET25_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET25_HIGH     (0x02000000)

#define DMA_DMAPRIOSET_SET25_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET25_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET25_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET26_MASK     (0x04000000)
#define DMA_DMAPRIOSET_R_SET26_BIT      (26)
#define DMA_DMAPRIOSET_R_SET26_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET26_HIGH     (0x04000000)

#define DMA_DMAPRIOSET_SET26_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET26_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET26_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET27_MASK     (0x08000000)
#define DMA_DMAPRIOSET_R_SET27_BIT      (27)
#define DMA_DMAPRIOSET_R_SET27_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET27_HIGH     (0x08000000)

#define DMA_DMAPRIOSET_SET27_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET27_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET27_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET28_MASK     (0x10000000)
#define DMA_DMAPRIOSET_R_SET28_BIT      (28)
#define DMA_DMAPRIOSET_R_SET28_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET28_HIGH     (0x10000000)

#define DMA_DMAPRIOSET_SET28_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET28_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET28_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET29_MASK     (0x20000000)
#define DMA_DMAPRIOSET_R_SET29_BIT      (29)
#define DMA_DMAPRIOSET_R_SET29_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET29_HIGH     (0x20000000)

#define DMA_DMAPRIOSET_SET29_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET29_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET29_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET30_MASK     (0x40000000)
#define DMA_DMAPRIOSET_R_SET30_BIT      (30)
#define DMA_DMAPRIOSET_R_SET30_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET30_HIGH     (0x40000000)

#define DMA_DMAPRIOSET_SET30_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET30_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET30_HIGH       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOSET_R_SET31_MASK     (0x80000000)
#define DMA_DMAPRIOSET_R_SET31_BIT      (31)
#define DMA_DMAPRIOSET_R_SET31_DEFAULT   (0x00000000)
#define DMA_DMAPRIOSET_R_SET31_HIGH     (0x80000000)

#define DMA_DMAPRIOSET_SET31_MASK       (0x00000001)
#define DMA_DMAPRIOSET_SET31_DEFAULT     (0x00000000)
#define DMA_DMAPRIOSET_SET31_HIGH       (0x00000001)
//--------


#define DMA_DMAPRIOSET_SET0_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(0*4))))
#define DMA_DMAPRIOSET_SET1_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(1*4))))
#define DMA_DMAPRIOSET_SET2_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(2*4))))
#define DMA_DMAPRIOSET_SET3_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(3*4))))
#define DMA_DMAPRIOSET_SET4_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(4*4))))
#define DMA_DMAPRIOSET_SET5_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(5*4))))
#define DMA_DMAPRIOSET_SET6_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(6*4))))
#define DMA_DMAPRIOSET_SET7_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(7*4))))
#define DMA_DMAPRIOSET_SET8_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(8*4))))
#define DMA_DMAPRIOSET_SET9_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(9*4))))
#define DMA_DMAPRIOSET_SET10_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(10*4))))
#define DMA_DMAPRIOSET_SET11_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(11*4))))
#define DMA_DMAPRIOSET_SET12_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(12*4))))
#define DMA_DMAPRIOSET_SET13_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(13*4))))
#define DMA_DMAPRIOSET_SET14_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(14*4))))
#define DMA_DMAPRIOSET_SET15_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(15*4))))
#define DMA_DMAPRIOSET_SET16_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(16*4))))
#define DMA_DMAPRIOSET_SET17_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(17*4))))
#define DMA_DMAPRIOSET_SET18_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(18*4))))
#define DMA_DMAPRIOSET_SET19_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(19*4))))
#define DMA_DMAPRIOSET_SET20_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(20*4))))
#define DMA_DMAPRIOSET_SET21_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(21*4))))
#define DMA_DMAPRIOSET_SET22_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(22*4))))
#define DMA_DMAPRIOSET_SET23_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(23*4))))
#define DMA_DMAPRIOSET_SET24_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(24*4))))
#define DMA_DMAPRIOSET_SET25_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(25*4))))
#define DMA_DMAPRIOSET_SET26_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(26*4))))
#define DMA_DMAPRIOSET_SET27_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(27*4))))
#define DMA_DMAPRIOSET_SET28_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(28*4))))
#define DMA_DMAPRIOSET_SET29_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(29*4))))
#define DMA_DMAPRIOSET_SET30_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(30*4))))
#define DMA_DMAPRIOSET_SET31_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOSET_OFFSET)*32)+(31*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 19 DMAPRIOCLR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAPRIOCLR            (((DMAPRIOCLR_TypeDef*)(DMA_BASE+DMA_DMAPRIOCLR_OFFSET )))
#define DMA_DMAPRIOCLR_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAPRIOCLR_OFFSET)))


//--------
#define DMA_DMAPRIOCLR_R_CLR0_MASK     (0x00000001)
#define DMA_DMAPRIOCLR_R_CLR0_BIT      (0)
#define DMA_DMAPRIOCLR_R_CLR0_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR0_CLR     (0x00000001)

#define DMA_DMAPRIOCLR_CLR0_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR0_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR0_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR1_MASK     (0x00000002)
#define DMA_DMAPRIOCLR_R_CLR1_BIT      (1)
#define DMA_DMAPRIOCLR_R_CLR1_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR1_CLR     (0x00000002)

#define DMA_DMAPRIOCLR_CLR1_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR1_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR1_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR2_MASK     (0x00000004)
#define DMA_DMAPRIOCLR_R_CLR2_BIT      (2)
#define DMA_DMAPRIOCLR_R_CLR2_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR2_CLR     (0x00000004)

#define DMA_DMAPRIOCLR_CLR2_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR2_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR2_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR3_MASK     (0x00000008)
#define DMA_DMAPRIOCLR_R_CLR3_BIT      (3)
#define DMA_DMAPRIOCLR_R_CLR3_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR3_CLR     (0x00000008)

#define DMA_DMAPRIOCLR_CLR3_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR3_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR3_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR4_MASK     (0x00000010)
#define DMA_DMAPRIOCLR_R_CLR4_BIT      (4)
#define DMA_DMAPRIOCLR_R_CLR4_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR4_CLR     (0x00000010)

#define DMA_DMAPRIOCLR_CLR4_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR4_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR4_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR5_MASK     (0x00000020)
#define DMA_DMAPRIOCLR_R_CLR5_BIT      (5)
#define DMA_DMAPRIOCLR_R_CLR5_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR5_CLR     (0x00000020)

#define DMA_DMAPRIOCLR_CLR5_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR5_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR5_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR6_MASK     (0x00000040)
#define DMA_DMAPRIOCLR_R_CLR6_BIT      (6)
#define DMA_DMAPRIOCLR_R_CLR6_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR6_CLR     (0x00000040)

#define DMA_DMAPRIOCLR_CLR6_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR6_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR6_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR7_MASK     (0x00000080)
#define DMA_DMAPRIOCLR_R_CLR7_BIT      (7)
#define DMA_DMAPRIOCLR_R_CLR7_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR7_CLR     (0x00000080)

#define DMA_DMAPRIOCLR_CLR7_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR7_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR7_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR8_MASK     (0x00000100)
#define DMA_DMAPRIOCLR_R_CLR8_BIT      (8)
#define DMA_DMAPRIOCLR_R_CLR8_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR8_CLR     (0x00000100)

#define DMA_DMAPRIOCLR_CLR8_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR8_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR8_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR9_MASK     (0x00000200)
#define DMA_DMAPRIOCLR_R_CLR9_BIT      (9)
#define DMA_DMAPRIOCLR_R_CLR9_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR9_CLR     (0x00000200)

#define DMA_DMAPRIOCLR_CLR9_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR9_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR9_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR10_MASK     (0x00000400)
#define DMA_DMAPRIOCLR_R_CLR10_BIT      (10)
#define DMA_DMAPRIOCLR_R_CLR10_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR10_CLR     (0x00000400)

#define DMA_DMAPRIOCLR_CLR10_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR10_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR10_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR11_MASK     (0x00000800)
#define DMA_DMAPRIOCLR_R_CLR11_BIT      (11)
#define DMA_DMAPRIOCLR_R_CLR11_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR11_CLR     (0x00000800)

#define DMA_DMAPRIOCLR_CLR11_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR11_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR11_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR12_MASK     (0x00001000)
#define DMA_DMAPRIOCLR_R_CLR12_BIT      (12)
#define DMA_DMAPRIOCLR_R_CLR12_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR12_CLR     (0x00001000)

#define DMA_DMAPRIOCLR_CLR12_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR12_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR12_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR13_MASK     (0x00002000)
#define DMA_DMAPRIOCLR_R_CLR13_BIT      (13)
#define DMA_DMAPRIOCLR_R_CLR13_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR13_CLR     (0x00002000)

#define DMA_DMAPRIOCLR_CLR13_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR13_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR13_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR14_MASK     (0x00004000)
#define DMA_DMAPRIOCLR_R_CLR14_BIT      (14)
#define DMA_DMAPRIOCLR_R_CLR14_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR14_CLR     (0x00004000)

#define DMA_DMAPRIOCLR_CLR14_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR14_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR14_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR15_MASK     (0x00008000)
#define DMA_DMAPRIOCLR_R_CLR15_BIT      (15)
#define DMA_DMAPRIOCLR_R_CLR15_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR15_CLR     (0x00008000)

#define DMA_DMAPRIOCLR_CLR15_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR15_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR15_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR16_MASK     (0x00010000)
#define DMA_DMAPRIOCLR_R_CLR16_BIT      (16)
#define DMA_DMAPRIOCLR_R_CLR16_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR16_CLR     (0x00010000)

#define DMA_DMAPRIOCLR_CLR16_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR16_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR16_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR17_MASK     (0x00020000)
#define DMA_DMAPRIOCLR_R_CLR17_BIT      (17)
#define DMA_DMAPRIOCLR_R_CLR17_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR17_CLR     (0x00020000)

#define DMA_DMAPRIOCLR_CLR17_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR17_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR17_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR18_MASK     (0x00040000)
#define DMA_DMAPRIOCLR_R_CLR18_BIT      (18)
#define DMA_DMAPRIOCLR_R_CLR18_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR18_CLR     (0x00040000)

#define DMA_DMAPRIOCLR_CLR18_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR18_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR18_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR19_MASK     (0x00080000)
#define DMA_DMAPRIOCLR_R_CLR19_BIT      (19)
#define DMA_DMAPRIOCLR_R_CLR19_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR19_CLR     (0x00080000)

#define DMA_DMAPRIOCLR_CLR19_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR19_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR19_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR20_MASK     (0x00100000)
#define DMA_DMAPRIOCLR_R_CLR20_BIT      (20)
#define DMA_DMAPRIOCLR_R_CLR20_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR20_CLR     (0x00100000)

#define DMA_DMAPRIOCLR_CLR20_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR20_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR20_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR21_MASK     (0x00200000)
#define DMA_DMAPRIOCLR_R_CLR21_BIT      (21)
#define DMA_DMAPRIOCLR_R_CLR21_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR21_CLR     (0x00200000)

#define DMA_DMAPRIOCLR_CLR21_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR21_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR21_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR22_MASK     (0x00400000)
#define DMA_DMAPRIOCLR_R_CLR22_BIT      (22)
#define DMA_DMAPRIOCLR_R_CLR22_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR22_CLR     (0x00400000)

#define DMA_DMAPRIOCLR_CLR22_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR22_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR22_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR23_MASK     (0x00800000)
#define DMA_DMAPRIOCLR_R_CLR23_BIT      (23)
#define DMA_DMAPRIOCLR_R_CLR23_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR23_CLR     (0x00800000)

#define DMA_DMAPRIOCLR_CLR23_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR23_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR23_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR24_MASK     (0x01000000)
#define DMA_DMAPRIOCLR_R_CLR24_BIT      (24)
#define DMA_DMAPRIOCLR_R_CLR24_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR24_CLR     (0x01000000)

#define DMA_DMAPRIOCLR_CLR24_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR24_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR24_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR25_MASK     (0x02000000)
#define DMA_DMAPRIOCLR_R_CLR25_BIT      (25)
#define DMA_DMAPRIOCLR_R_CLR25_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR25_CLR     (0x02000000)

#define DMA_DMAPRIOCLR_CLR25_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR25_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR25_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR26_MASK     (0x04000000)
#define DMA_DMAPRIOCLR_R_CLR26_BIT      (26)
#define DMA_DMAPRIOCLR_R_CLR26_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR26_CLR     (0x04000000)

#define DMA_DMAPRIOCLR_CLR26_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR26_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR26_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR27_MASK     (0x08000000)
#define DMA_DMAPRIOCLR_R_CLR27_BIT      (27)
#define DMA_DMAPRIOCLR_R_CLR27_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR27_CLR     (0x08000000)

#define DMA_DMAPRIOCLR_CLR27_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR27_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR27_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR28_MASK     (0x10000000)
#define DMA_DMAPRIOCLR_R_CLR28_BIT      (28)
#define DMA_DMAPRIOCLR_R_CLR28_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR28_CLR     (0x10000000)

#define DMA_DMAPRIOCLR_CLR28_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR28_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR28_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR29_MASK     (0x20000000)
#define DMA_DMAPRIOCLR_R_CLR29_BIT      (29)
#define DMA_DMAPRIOCLR_R_CLR29_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR29_CLR     (0x20000000)

#define DMA_DMAPRIOCLR_CLR29_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR29_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR29_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR30_MASK     (0x40000000)
#define DMA_DMAPRIOCLR_R_CLR30_BIT      (30)
#define DMA_DMAPRIOCLR_R_CLR30_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR30_CLR     (0x40000000)

#define DMA_DMAPRIOCLR_CLR30_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR30_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR30_CLR       (0x00000001)
//--------

//--------
#define DMA_DMAPRIOCLR_R_CLR31_MASK     (0x80000000)
#define DMA_DMAPRIOCLR_R_CLR31_BIT      (31)
#define DMA_DMAPRIOCLR_R_CLR31_NA   (0x00000000)
#define DMA_DMAPRIOCLR_R_CLR31_CLR     (0x80000000)

#define DMA_DMAPRIOCLR_CLR31_MASK       (0x00000001)
#define DMA_DMAPRIOCLR_CLR31_NA     (0x00000000)
#define DMA_DMAPRIOCLR_CLR31_CLR       (0x00000001)
//--------

#define DMA_DMAPRIOCLR_CLR0_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(0*4))))
#define DMA_DMAPRIOCLR_CLR1_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(1*4))))
#define DMA_DMAPRIOCLR_CLR2_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(2*4))))
#define DMA_DMAPRIOCLR_CLR3_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(3*4))))
#define DMA_DMAPRIOCLR_CLR4_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(4*4))))
#define DMA_DMAPRIOCLR_CLR5_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(5*4))))
#define DMA_DMAPRIOCLR_CLR6_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(6*4))))
#define DMA_DMAPRIOCLR_CLR7_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(7*4))))
#define DMA_DMAPRIOCLR_CLR8_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(8*4))))
#define DMA_DMAPRIOCLR_CLR9_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(9*4))))
#define DMA_DMAPRIOCLR_CLR10_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(10*4))))
#define DMA_DMAPRIOCLR_CLR11_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(11*4))))
#define DMA_DMAPRIOCLR_CLR12_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(12*4))))
#define DMA_DMAPRIOCLR_CLR13_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(13*4))))
#define DMA_DMAPRIOCLR_CLR14_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(14*4))))
#define DMA_DMAPRIOCLR_CLR15_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(15*4))))
#define DMA_DMAPRIOCLR_CLR16_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(16*4))))
#define DMA_DMAPRIOCLR_CLR17_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(17*4))))
#define DMA_DMAPRIOCLR_CLR18_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(18*4))))
#define DMA_DMAPRIOCLR_CLR19_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(19*4))))
#define DMA_DMAPRIOCLR_CLR20_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(20*4))))
#define DMA_DMAPRIOCLR_CLR21_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(21*4))))
#define DMA_DMAPRIOCLR_CLR22_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(22*4))))
#define DMA_DMAPRIOCLR_CLR23_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(23*4))))
#define DMA_DMAPRIOCLR_CLR24_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(24*4))))
#define DMA_DMAPRIOCLR_CLR25_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(25*4))))
#define DMA_DMAPRIOCLR_CLR26_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(26*4))))
#define DMA_DMAPRIOCLR_CLR27_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(27*4))))
#define DMA_DMAPRIOCLR_CLR28_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(28*4))))
#define DMA_DMAPRIOCLR_CLR29_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(29*4))))
#define DMA_DMAPRIOCLR_CLR30_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(30*4))))
#define DMA_DMAPRIOCLR_CLR31_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAPRIOCLR_OFFSET)*32)+(31*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 20 DMAERRCLR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAERRCLR            (((DMAERRCLR_TypeDef*)(DMA_BASE+DMA_DMAERRCLR_OFFSET )))
#define DMA_DMAERRCLR_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAERRCLR_OFFSET)))


//--------
#define DMA_DMAERRCLR_R_ERRCLR_MASK      (0x00000001)
#define DMA_DMAERRCLR_R_ERRCLR_BIT       (0)
#define DMA_DMAERRCLR_R_ERRCLR_NOERROR   (0x00000000)
#define DMA_DMAERRCLR_R_ERRCLR_ERROR     (0x00000001)

#define DMA_DMAERRCLR_ERRCLR_MASK        (0x00000001)
#define DMA_DMAERRCLR_ERRCLR_NOERROR     (0x00000000)
#define DMA_DMAERRCLR_ERRCLR_ERROR       (0x00000001)
//--------

#define DMA_DMAERRCLR_ERRCLR_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMAERRCLR_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 21 DMACHASGN ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMACHASGN            (((DMACHASGN_TypeDef*)(DMA_BASE+DMA_DMACHASGN_OFFSET )))
#define DMA_DMACHASGN_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMACHASGN_OFFSET)))





//--------
#define DMA_DMACHASGN_R_CHASGN0_MASK     (0x00000001)
#define DMA_DMACHASGN_R_CHASGN0_BIT      (0)
#define DMA_DMACHASGN_R_CHASGN0_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN0_SECUNDARY     (0x00000001)

#define DMA_DMACHASGN_CHASGN0_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN0_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN0_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN1_MASK     (0x00000002)
#define DMA_DMACHASGN_R_CHASGN1_BIT      (1)
#define DMA_DMACHASGN_R_CHASGN1_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN1_SECUNDARY     (0x00000002)

#define DMA_DMACHASGN_CHASGN1_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN1_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN1_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN2_MASK     (0x00000004)
#define DMA_DMACHASGN_R_CHASGN2_BIT      (2)
#define DMA_DMACHASGN_R_CHASGN2_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN2_SECUNDARY     (0x00000004)

#define DMA_DMACHASGN_CHASGN2_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN2_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN2_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN3_MASK     (0x00000008)
#define DMA_DMACHASGN_R_CHASGN3_BIT      (3)
#define DMA_DMACHASGN_R_CHASGN3_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN3_SECUNDARY     (0x00000008)

#define DMA_DMACHASGN_CHASGN3_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN3_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN3_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN4_MASK     (0x00000010)
#define DMA_DMACHASGN_R_CHASGN4_BIT      (4)
#define DMA_DMACHASGN_R_CHASGN4_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN4_SECUNDARY     (0x00000010)

#define DMA_DMACHASGN_CHASGN4_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN4_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN4_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN5_MASK     (0x00000020)
#define DMA_DMACHASGN_R_CHASGN5_BIT      (5)
#define DMA_DMACHASGN_R_CHASGN5_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN5_SECUNDARY     (0x00000020)

#define DMA_DMACHASGN_CHASGN5_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN5_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN5_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN6_MASK     (0x00000040)
#define DMA_DMACHASGN_R_CHASGN6_BIT      (6)
#define DMA_DMACHASGN_R_CHASGN6_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN6_SECUNDARY     (0x00000040)

#define DMA_DMACHASGN_CHASGN6_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN6_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN6_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN7_MASK     (0x00000080)
#define DMA_DMACHASGN_R_CHASGN7_BIT      (7)
#define DMA_DMACHASGN_R_CHASGN7_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN7_SECUNDARY     (0x00000080)

#define DMA_DMACHASGN_CHASGN7_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN7_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN7_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN8_MASK     (0x00000100)
#define DMA_DMACHASGN_R_CHASGN8_BIT      (8)
#define DMA_DMACHASGN_R_CHASGN8_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN8_SECUNDARY     (0x00000100)

#define DMA_DMACHASGN_CHASGN8_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN8_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN8_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN9_MASK     (0x00000200)
#define DMA_DMACHASGN_R_CHASGN9_BIT      (9)
#define DMA_DMACHASGN_R_CHASGN9_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN9_SECUNDARY     (0x00000200)

#define DMA_DMACHASGN_CHASGN9_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN9_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN9_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN10_MASK     (0x00000400)
#define DMA_DMACHASGN_R_CHASGN10_BIT      (10)
#define DMA_DMACHASGN_R_CHASGN10_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN10_SECUNDARY     (0x00000400)

#define DMA_DMACHASGN_CHASGN10_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN10_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN10_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN11_MASK     (0x00000800)
#define DMA_DMACHASGN_R_CHASGN11_BIT      (11)
#define DMA_DMACHASGN_R_CHASGN11_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN11_SECUNDARY     (0x00000800)

#define DMA_DMACHASGN_CHASGN11_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN11_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN11_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN12_MASK     (0x00001000)
#define DMA_DMACHASGN_R_CHASGN12_BIT      (12)
#define DMA_DMACHASGN_R_CHASGN12_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN12_SECUNDARY     (0x00001000)

#define DMA_DMACHASGN_CHASGN12_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN12_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN12_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN13_MASK     (0x00002000)
#define DMA_DMACHASGN_R_CHASGN13_BIT      (13)
#define DMA_DMACHASGN_R_CHASGN13_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN13_SECUNDARY     (0x00002000)

#define DMA_DMACHASGN_CHASGN13_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN13_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN13_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN14_MASK     (0x00004000)
#define DMA_DMACHASGN_R_CHASGN14_BIT      (14)
#define DMA_DMACHASGN_R_CHASGN14_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN14_SECUNDARY     (0x00004000)

#define DMA_DMACHASGN_CHASGN14_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN14_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN14_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN15_MASK     (0x00008000)
#define DMA_DMACHASGN_R_CHASGN15_BIT      (15)
#define DMA_DMACHASGN_R_CHASGN15_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN15_SECUNDARY     (0x00008000)

#define DMA_DMACHASGN_CHASGN15_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN15_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN15_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN16_MASK     (0x00010000)
#define DMA_DMACHASGN_R_CHASGN16_BIT      (16)
#define DMA_DMACHASGN_R_CHASGN16_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN16_SECUNDARY     (0x00010000)

#define DMA_DMACHASGN_CHASGN16_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN16_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN16_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN17_MASK     (0x00020000)
#define DMA_DMACHASGN_R_CHASGN17_BIT      (17)
#define DMA_DMACHASGN_R_CHASGN17_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN17_SECUNDARY     (0x00020000)

#define DMA_DMACHASGN_CHASGN17_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN17_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN17_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN18_MASK     (0x00040000)
#define DMA_DMACHASGN_R_CHASGN18_BIT      (18)
#define DMA_DMACHASGN_R_CHASGN18_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN18_SECUNDARY     (0x00040000)

#define DMA_DMACHASGN_CHASGN18_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN18_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN18_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN19_MASK     (0x00080000)
#define DMA_DMACHASGN_R_CHASGN19_BIT      (19)
#define DMA_DMACHASGN_R_CHASGN19_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN19_SECUNDARY     (0x00080000)

#define DMA_DMACHASGN_CHASGN19_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN19_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN19_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN20_MASK     (0x00100000)
#define DMA_DMACHASGN_R_CHASGN20_BIT      (20)
#define DMA_DMACHASGN_R_CHASGN20_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN20_SECUNDARY     (0x00100000)

#define DMA_DMACHASGN_CHASGN20_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN20_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN20_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN21_MASK     (0x00200000)
#define DMA_DMACHASGN_R_CHASGN21_BIT      (21)
#define DMA_DMACHASGN_R_CHASGN21_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN21_SECUNDARY     (0x00200000)

#define DMA_DMACHASGN_CHASGN21_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN21_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN21_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN22_MASK     (0x00400000)
#define DMA_DMACHASGN_R_CHASGN22_BIT      (22)
#define DMA_DMACHASGN_R_CHASGN22_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN22_SECUNDARY     (0x00400000)

#define DMA_DMACHASGN_CHASGN22_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN22_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN22_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN23_MASK     (0x00800000)
#define DMA_DMACHASGN_R_CHASGN23_BIT      (23)
#define DMA_DMACHASGN_R_CHASGN23_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN23_SECUNDARY     (0x00800000)

#define DMA_DMACHASGN_CHASGN23_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN23_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN23_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN24_MASK     (0x01000000)
#define DMA_DMACHASGN_R_CHASGN24_BIT      (24)
#define DMA_DMACHASGN_R_CHASGN24_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN24_SECUNDARY     (0x01000000)

#define DMA_DMACHASGN_CHASGN24_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN24_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN24_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN25_MASK     (0x02000000)
#define DMA_DMACHASGN_R_CHASGN25_BIT      (25)
#define DMA_DMACHASGN_R_CHASGN25_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN25_SECUNDARY     (0x02000000)

#define DMA_DMACHASGN_CHASGN25_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN25_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN25_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN26_MASK     (0x04000000)
#define DMA_DMACHASGN_R_CHASGN26_BIT      (26)
#define DMA_DMACHASGN_R_CHASGN26_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN26_SECUNDARY     (0x04000000)

#define DMA_DMACHASGN_CHASGN26_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN26_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN26_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN27_MASK     (0x08000000)
#define DMA_DMACHASGN_R_CHASGN27_BIT      (27)
#define DMA_DMACHASGN_R_CHASGN27_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN27_SECUNDARY     (0x08000000)

#define DMA_DMACHASGN_CHASGN27_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN27_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN27_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN28_MASK     (0x10000000)
#define DMA_DMACHASGN_R_CHASGN28_BIT      (28)
#define DMA_DMACHASGN_R_CHASGN28_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN28_SECUNDARY     (0x10000000)

#define DMA_DMACHASGN_CHASGN28_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN28_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN28_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN29_MASK     (0x20000000)
#define DMA_DMACHASGN_R_CHASGN29_BIT      (29)
#define DMA_DMACHASGN_R_CHASGN29_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN29_SECUNDARY     (0x20000000)

#define DMA_DMACHASGN_CHASGN29_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN29_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN29_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN30_MASK     (0x40000000)
#define DMA_DMACHASGN_R_CHASGN30_BIT      (30)
#define DMA_DMACHASGN_R_CHASGN30_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN30_SECUNDARY     (0x40000000)

#define DMA_DMACHASGN_CHASGN30_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN30_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN30_SECUNDARY       (0x00000001)
//--------

//--------
#define DMA_DMACHASGN_R_CHASGN31_MASK     (0x80000000)
#define DMA_DMACHASGN_R_CHASGN31_BIT      (31)
#define DMA_DMACHASGN_R_CHASGN31_PRIMARY   (0x00000000)
#define DMA_DMACHASGN_R_CHASGN31_SECUNDARY     (0x80000000)

#define DMA_DMACHASGN_CHASGN31_MASK       (0x00000001)
#define DMA_DMACHASGN_CHASGN31_PRIMARY     (0x00000000)
#define DMA_DMACHASGN_CHASGN31_SECUNDARY       (0x00000001)
//--------

#define DMA_DMACHASGN_CHASGN0_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(0*4))))
#define DMA_DMACHASGN_CHASGN1_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(1*4))))
#define DMA_DMACHASGN_CHASGN2_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(2*4))))
#define DMA_DMACHASGN_CHASGN3_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(3*4))))
#define DMA_DMACHASGN_CHASGN4_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(4*4))))
#define DMA_DMACHASGN_CHASGN5_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(5*4))))
#define DMA_DMACHASGN_CHASGN6_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(6*4))))
#define DMA_DMACHASGN_CHASGN7_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(7*4))))
#define DMA_DMACHASGN_CHASGN8_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(8*4))))
#define DMA_DMACHASGN_CHASGN9_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(9*4))))
#define DMA_DMACHASGN_CHASGN10_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(10*4))))
#define DMA_DMACHASGN_CHASGN11_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(11*4))))
#define DMA_DMACHASGN_CHASGN12_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(12*4))))
#define DMA_DMACHASGN_CHASGN13_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(13*4))))
#define DMA_DMACHASGN_CHASGN14_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(14*4))))
#define DMA_DMACHASGN_CHASGN15_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(15*4))))
#define DMA_DMACHASGN_CHASGN16_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(16*4))))
#define DMA_DMACHASGN_CHASGN17_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(17*4))))
#define DMA_DMACHASGN_CHASGN18_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(18*4))))
#define DMA_DMACHASGN_CHASGN19_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(19*4))))
#define DMA_DMACHASGN_CHASGN20_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(20*4))))
#define DMA_DMACHASGN_CHASGN21_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(21*4))))
#define DMA_DMACHASGN_CHASGN22_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(22*4))))
#define DMA_DMACHASGN_CHASGN23_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(23*4))))
#define DMA_DMACHASGN_CHASGN24_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(24*4))))
#define DMA_DMACHASGN_CHASGN25_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(25*4))))
#define DMA_DMACHASGN_CHASGN26_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(26*4))))
#define DMA_DMACHASGN_CHASGN27_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(27*4))))
#define DMA_DMACHASGN_CHASGN28_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(28*4))))
#define DMA_DMACHASGN_CHASGN29_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(29*4))))
#define DMA_DMACHASGN_CHASGN30_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(30*4))))
#define DMA_DMACHASGN_CHASGN31_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHASGN_OFFSET)*32)+(31*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 22 DMACHIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMACHIS            (((DMACHIS_TypeDef*)(DMA_BASE+DMA_DMACHIS_OFFSET )))
#define DMA_DMACHIS_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMACHIS_OFFSET)))


//--------
#define DMA_DMACHIS_R_CHIS0_MASK       (0x00000001)
#define DMA_DMACHIS_R_CHIS0_BIT        (0)
#define DMA_DMACHIS_R_CHIS0_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS0_OCCUR      (0x00000001)
#define DMA_DMACHIS_R_CHIS0_CLEAR      (0x00000001)

#define DMA_DMACHIS_CHIS0_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS0_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS0_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS0_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS1_MASK       (0x00000002)
#define DMA_DMACHIS_R_CHIS1_BIT        (1)
#define DMA_DMACHIS_R_CHIS1_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS1_OCCUR      (0x00000002)
#define DMA_DMACHIS_R_CHIS1_CLEAR      (0x00000002)

#define DMA_DMACHIS_CHIS1_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS1_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS1_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS1_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS2_MASK       (0x00000004)
#define DMA_DMACHIS_R_CHIS2_BIT        (2)
#define DMA_DMACHIS_R_CHIS2_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS2_OCCUR      (0x00000004)
#define DMA_DMACHIS_R_CHIS2_CLEAR      (0x00000004)

#define DMA_DMACHIS_CHIS2_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS2_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS2_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS2_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS3_MASK       (0x00000008)
#define DMA_DMACHIS_R_CHIS3_BIT        (3)
#define DMA_DMACHIS_R_CHIS3_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS3_OCCUR      (0x00000008)
#define DMA_DMACHIS_R_CHIS3_CLEAR      (0x00000008)

#define DMA_DMACHIS_CHIS3_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS3_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS3_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS3_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS4_MASK       (0x00000010)
#define DMA_DMACHIS_R_CHIS4_BIT        (4)
#define DMA_DMACHIS_R_CHIS4_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS4_OCCUR      (0x00000010)
#define DMA_DMACHIS_R_CHIS4_CLEAR      (0x00000010)

#define DMA_DMACHIS_CHIS4_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS4_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS4_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS4_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS5_MASK       (0x00000020)
#define DMA_DMACHIS_R_CHIS5_BIT        (5)
#define DMA_DMACHIS_R_CHIS5_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS5_OCCUR      (0x00000020)
#define DMA_DMACHIS_R_CHIS5_CLEAR      (0x00000020)

#define DMA_DMACHIS_CHIS5_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS5_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS5_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS5_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS6_MASK       (0x00000040)
#define DMA_DMACHIS_R_CHIS6_BIT        (6)
#define DMA_DMACHIS_R_CHIS6_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS6_OCCUR      (0x00000040)
#define DMA_DMACHIS_R_CHIS6_CLEAR      (0x00000040)

#define DMA_DMACHIS_CHIS6_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS6_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS6_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS6_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS7_MASK       (0x00000080)
#define DMA_DMACHIS_R_CHIS7_BIT        (7)
#define DMA_DMACHIS_R_CHIS7_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS7_OCCUR      (0x00000080)
#define DMA_DMACHIS_R_CHIS7_CLEAR      (0x00000080)

#define DMA_DMACHIS_CHIS7_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS7_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS7_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS7_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS8_MASK       (0x00000100)
#define DMA_DMACHIS_R_CHIS8_BIT        (8)
#define DMA_DMACHIS_R_CHIS8_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS8_OCCUR      (0x00000100)
#define DMA_DMACHIS_R_CHIS8_CLEAR      (0x00000100)

#define DMA_DMACHIS_CHIS8_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS8_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS8_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS8_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS9_MASK       (0x00000200)
#define DMA_DMACHIS_R_CHIS9_BIT        (9)
#define DMA_DMACHIS_R_CHIS9_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS9_OCCUR      (0x00000200)
#define DMA_DMACHIS_R_CHIS9_CLEAR      (0x00000200)

#define DMA_DMACHIS_CHIS9_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS9_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS9_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS9_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS10_MASK       (0x00000400)
#define DMA_DMACHIS_R_CHIS10_BIT        (10)
#define DMA_DMACHIS_R_CHIS10_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS10_OCCUR      (0x00000400)
#define DMA_DMACHIS_R_CHIS10_CLEAR      (0x00000400)

#define DMA_DMACHIS_CHIS10_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS10_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS10_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS10_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS11_MASK       (0x00000800)
#define DMA_DMACHIS_R_CHIS11_BIT        (11)
#define DMA_DMACHIS_R_CHIS11_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS11_OCCUR      (0x00000800)
#define DMA_DMACHIS_R_CHIS11_CLEAR      (0x00000800)

#define DMA_DMACHIS_CHIS11_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS11_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS11_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS11_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS12_MASK       (0x00001000)
#define DMA_DMACHIS_R_CHIS12_BIT        (12)
#define DMA_DMACHIS_R_CHIS12_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS12_OCCUR      (0x00001000)
#define DMA_DMACHIS_R_CHIS12_CLEAR      (0x00001000)

#define DMA_DMACHIS_CHIS12_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS12_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS12_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS12_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS13_MASK       (0x00002000)
#define DMA_DMACHIS_R_CHIS13_BIT        (13)
#define DMA_DMACHIS_R_CHIS13_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS13_OCCUR      (0x00002000)
#define DMA_DMACHIS_R_CHIS13_CLEAR      (0x00002000)

#define DMA_DMACHIS_CHIS13_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS13_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS13_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS13_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS14_MASK       (0x00004000)
#define DMA_DMACHIS_R_CHIS14_BIT        (14)
#define DMA_DMACHIS_R_CHIS14_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS14_OCCUR      (0x00004000)
#define DMA_DMACHIS_R_CHIS14_CLEAR      (0x00004000)

#define DMA_DMACHIS_CHIS14_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS14_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS14_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS14_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS15_MASK       (0x00008000)
#define DMA_DMACHIS_R_CHIS15_BIT        (15)
#define DMA_DMACHIS_R_CHIS15_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS15_OCCUR      (0x00008000)
#define DMA_DMACHIS_R_CHIS15_CLEAR      (0x00008000)

#define DMA_DMACHIS_CHIS15_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS15_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS15_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS15_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS16_MASK       (0x00010000)
#define DMA_DMACHIS_R_CHIS16_BIT        (16)
#define DMA_DMACHIS_R_CHIS16_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS16_OCCUR      (0x00010000)
#define DMA_DMACHIS_R_CHIS16_CLEAR      (0x00010000)

#define DMA_DMACHIS_CHIS16_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS16_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS16_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS16_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS17_MASK       (0x00020000)
#define DMA_DMACHIS_R_CHIS17_BIT        (17)
#define DMA_DMACHIS_R_CHIS17_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS17_OCCUR      (0x00020000)
#define DMA_DMACHIS_R_CHIS17_CLEAR      (0x00020000)

#define DMA_DMACHIS_CHIS17_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS17_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS17_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS17_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS18_MASK       (0x00040000)
#define DMA_DMACHIS_R_CHIS18_BIT        (18)
#define DMA_DMACHIS_R_CHIS18_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS18_OCCUR      (0x00040000)
#define DMA_DMACHIS_R_CHIS18_CLEAR      (0x00040000)

#define DMA_DMACHIS_CHIS18_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS18_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS18_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS18_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS19_MASK       (0x00080000)
#define DMA_DMACHIS_R_CHIS19_BIT        (19)
#define DMA_DMACHIS_R_CHIS19_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS19_OCCUR      (0x00080000)
#define DMA_DMACHIS_R_CHIS19_CLEAR      (0x00080000)

#define DMA_DMACHIS_CHIS19_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS19_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS19_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS19_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS20_MASK       (0x00100000)
#define DMA_DMACHIS_R_CHIS20_BIT        (20)
#define DMA_DMACHIS_R_CHIS20_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS20_OCCUR      (0x00100000)
#define DMA_DMACHIS_R_CHIS20_CLEAR      (0x00100000)

#define DMA_DMACHIS_CHIS20_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS20_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS20_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS20_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS21_MASK       (0x00200000)
#define DMA_DMACHIS_R_CHIS21_BIT        (21)
#define DMA_DMACHIS_R_CHIS21_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS21_OCCUR      (0x00200000)
#define DMA_DMACHIS_R_CHIS21_CLEAR      (0x00200000)

#define DMA_DMACHIS_CHIS21_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS21_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS21_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS21_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS22_MASK       (0x00400000)
#define DMA_DMACHIS_R_CHIS22_BIT        (22)
#define DMA_DMACHIS_R_CHIS22_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS22_OCCUR      (0x00400000)
#define DMA_DMACHIS_R_CHIS22_CLEAR      (0x00400000)

#define DMA_DMACHIS_CHIS22_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS22_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS22_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS22_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS23_MASK       (0x00800000)
#define DMA_DMACHIS_R_CHIS23_BIT        (23)
#define DMA_DMACHIS_R_CHIS23_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS23_OCCUR      (0x00800000)
#define DMA_DMACHIS_R_CHIS23_CLEAR      (0x00800000)

#define DMA_DMACHIS_CHIS23_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS23_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS23_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS23_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS24_MASK       (0x01000000)
#define DMA_DMACHIS_R_CHIS24_BIT        (24)
#define DMA_DMACHIS_R_CHIS24_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS24_OCCUR      (0x01000000)
#define DMA_DMACHIS_R_CHIS24_CLEAR      (0x01000000)

#define DMA_DMACHIS_CHIS24_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS24_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS24_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS24_CLEAR      (0x00000001)
//--------
//--------
#define DMA_DMACHIS_R_CHIS25_MASK       (0x02000000)
#define DMA_DMACHIS_R_CHIS25_BIT        (25)
#define DMA_DMACHIS_R_CHIS25_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS25_OCCUR      (0x02000000)
#define DMA_DMACHIS_R_CHIS25_CLEAR      (0x02000000)

#define DMA_DMACHIS_CHIS25_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS25_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS25_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS25_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS26_MASK       (0x04000000)
#define DMA_DMACHIS_R_CHIS26_BIT        (26)
#define DMA_DMACHIS_R_CHIS26_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS26_OCCUR      (0x04000000)
#define DMA_DMACHIS_R_CHIS26_CLEAR      (0x04000000)

#define DMA_DMACHIS_CHIS26_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS26_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS26_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS26_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS27_MASK       (0x08000000)
#define DMA_DMACHIS_R_CHIS27_BIT        (27)
#define DMA_DMACHIS_R_CHIS27_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS27_OCCUR      (0x08000000)
#define DMA_DMACHIS_R_CHIS27_CLEAR      (0x08000000)

#define DMA_DMACHIS_CHIS27_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS27_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS27_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS27_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS28_MASK       (0x10000000)
#define DMA_DMACHIS_R_CHIS28_BIT        (28)
#define DMA_DMACHIS_R_CHIS28_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS28_OCCUR      (0x10000000)
#define DMA_DMACHIS_R_CHIS28_CLEAR      (0x10000000)

#define DMA_DMACHIS_CHIS28_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS28_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS28_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS28_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS29_MASK       (0x20000000)
#define DMA_DMACHIS_R_CHIS29_BIT        (29)
#define DMA_DMACHIS_R_CHIS29_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS29_OCCUR      (0x20000000)
#define DMA_DMACHIS_R_CHIS29_CLEAR      (0x20000000)

#define DMA_DMACHIS_CHIS29_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS29_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS29_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS29_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS30_MASK       (0x40000000)
#define DMA_DMACHIS_R_CHIS30_BIT        (30)
#define DMA_DMACHIS_R_CHIS30_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS30_OCCUR      (0x40000000)
#define DMA_DMACHIS_R_CHIS30_CLEAR      (0x40000000)

#define DMA_DMACHIS_CHIS30_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS30_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS30_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS30_CLEAR      (0x00000001)
//--------

//--------
#define DMA_DMACHIS_R_CHIS31_MASK       (0x80000000)
#define DMA_DMACHIS_R_CHIS31_BIT        (31)
#define DMA_DMACHIS_R_CHIS31_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_R_CHIS31_OCCUR      (0x80000000)
#define DMA_DMACHIS_R_CHIS31_CLEAR      (0x80000000)

#define DMA_DMACHIS_CHIS31_MASK       (0x00000001)
#define DMA_DMACHIS_CHIS31_NOOCCUR    (0x00000000)
#define DMA_DMACHIS_CHIS31_OCCUR      (0x00000001)
#define DMA_DMACHIS_CHIS31_CLEAR      (0x00000001)
//--------


#define DMA_DMACHIS_CHIS0_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(0*4))))
#define DMA_DMACHIS_CHIS1_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(1*4))))
#define DMA_DMACHIS_CHIS2_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(2*4))))
#define DMA_DMACHIS_CHIS3_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(3*4))))
#define DMA_DMACHIS_CHIS4_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(4*4))))
#define DMA_DMACHIS_CHIS5_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(5*4))))
#define DMA_DMACHIS_CHIS6_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(6*4))))
#define DMA_DMACHIS_CHIS7_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(7*4))))
#define DMA_DMACHIS_CHIS8_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(8*4))))
#define DMA_DMACHIS_CHIS9_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(9*4))))
#define DMA_DMACHIS_CHIS10_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(10*4))))
#define DMA_DMACHIS_CHIS11_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(11*4))))
#define DMA_DMACHIS_CHIS12_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(12*4))))
#define DMA_DMACHIS_CHIS13_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(13*4))))
#define DMA_DMACHIS_CHIS14_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(14*4))))
#define DMA_DMACHIS_CHIS15_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(15*4))))
#define DMA_DMACHIS_CHIS16_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(16*4))))
#define DMA_DMACHIS_CHIS17_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(17*4))))
#define DMA_DMACHIS_CHIS18_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(18*4))))
#define DMA_DMACHIS_CHIS19_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(19*4))))
#define DMA_DMACHIS_CHIS20_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(20*4))))
#define DMA_DMACHIS_CHIS21_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(21*4))))
#define DMA_DMACHIS_CHIS22_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(22*4))))
#define DMA_DMACHIS_CHIS23_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(23*4))))
#define DMA_DMACHIS_CHIS24_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(24*4))))
#define DMA_DMACHIS_CHIS25_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(25*4))))
#define DMA_DMACHIS_CHIS26_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(26*4))))
#define DMA_DMACHIS_CHIS27_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(27*4))))
#define DMA_DMACHIS_CHIS28_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(28*4))))
#define DMA_DMACHIS_CHIS29_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(29*4))))
#define DMA_DMACHIS_CHIS30_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(30*4))))
#define DMA_DMACHIS_CHIS31_BB     (*((volatile uint32_t *)(0x42000000+((DMA_OFFSET+DMA_DMACHIS_OFFSET)*32)+(31*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 23 DMACHMAP0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMACHMAP0            (((DMACHMAP0_TypeDef*)(DMA_BASE+DMA_DMACHMAP0_OFFSET )))
#define DMA_DMACHMAP0_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMACHMAP0_OFFSET)))


//--------
#define DMA_DMACHMAP0_R_CH0SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP0_R_CH0SEL_BIT        (0)
#define DMA_DMACHMAP0_R_CH0SEL_USB0_EP1RX (0x00000000)
#define DMA_DMACHMAP0_R_CH0SEL_UART2_RX   (0x00000001)
#define DMA_DMACHMAP0_R_CH0SEL_SOFTWARE   (0x00000002)
#define DMA_DMACHMAP0_R_CH0SEL_TIMER4A    (0x00000003)

#define DMA_DMACHMAP0_CH0SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP0_CH0SEL_USB0_EP1RX (0x00000000)
#define DMA_DMACHMAP0_CH0SEL_UART2_RX   (0x00000001)
#define DMA_DMACHMAP0_CH0SEL_SOFTWARE   (0x00000002)
#define DMA_DMACHMAP0_CH0SEL_TIMER4A    (0x00000003)
//--------

//--------
#define DMA_DMACHMAP0_R_CH1SEL_MASK       (0x000000F0)
#define DMA_DMACHMAP0_R_CH1SEL_BIT        (4)
#define DMA_DMACHMAP0_R_CH1SEL_USB0_EP1TX (0x00000000)
#define DMA_DMACHMAP0_R_CH1SEL_UART2_TX   (0x00000010)
#define DMA_DMACHMAP0_R_CH1SEL_SOFTWARE   (0x00000020)
#define DMA_DMACHMAP0_R_CH1SEL_TIMER4B    (0x00000030)

#define DMA_DMACHMAP0_CH1SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP0_CH1SEL_USB0_EP1TX (0x00000000)
#define DMA_DMACHMAP0_CH1SEL_UART2_TX   (0x00000001)
#define DMA_DMACHMAP0_CH1SEL_SOFTWARE   (0x00000002)
#define DMA_DMACHMAP0_CH1SEL_TIMER4B    (0x00000003)
//--------

//--------
#define DMA_DMACHMAP0_R_CH2SEL_MASK       (0x00000F00)
#define DMA_DMACHMAP0_R_CH2SEL_BIT        (8)
#define DMA_DMACHMAP0_R_CH2SEL_USB0_EP2RX (0x00000000)
#define DMA_DMACHMAP0_R_CH2SEL_TIMER3A    (0x00000100)
#define DMA_DMACHMAP0_R_CH2SEL_SOFTWARE   (0x00000200)

#define DMA_DMACHMAP0_CH2SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP0_CH2SEL_USB0_EP2RX (0x00000000)
#define DMA_DMACHMAP0_CH2SEL_TIMER3A    (0x00000001)
#define DMA_DMACHMAP0_CH2SEL_SOFTWARE   (0x00000002)
//--------

//--------
#define DMA_DMACHMAP0_R_CH3SEL_MASK       (0x0000F000)
#define DMA_DMACHMAP0_R_CH3SEL_BIT        (12)
#define DMA_DMACHMAP0_R_CH3SEL_USB0_EP2TX (0x00000000)
#define DMA_DMACHMAP0_R_CH3SEL_TIMER3B    (0x00001000)
#define DMA_DMACHMAP0_R_CH3SEL_SOFTWARE   (0x00002000)

#define DMA_DMACHMAP0_CH3SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP0_CH3SEL_USB0_EP2TX (0x00000000)
#define DMA_DMACHMAP0_CH3SEL_TIMER3B    (0x00000001)
#define DMA_DMACHMAP0_CH3SEL_SOFTWARE   (0x00000002)
//--------

//--------
#define DMA_DMACHMAP0_R_CH4SEL_MASK       (0x000F0000)
#define DMA_DMACHMAP0_R_CH4SEL_BIT        (16)
#define DMA_DMACHMAP0_R_CH4SEL_USB0_EP3RX (0x00000000)
#define DMA_DMACHMAP0_R_CH4SEL_TIMER2A    (0x00010000)
#define DMA_DMACHMAP0_R_CH4SEL_SOFTWARE   (0x00020000)
#define DMA_DMACHMAP0_R_CH4SEL_GPIOA      (0x00030000)

#define DMA_DMACHMAP0_CH4SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP0_CH4SEL_USB0_EP3RX (0x00000000)
#define DMA_DMACHMAP0_CH4SEL_TIMER2A    (0x00000001)
#define DMA_DMACHMAP0_CH4SEL_SOFTWARE   (0x00000002)
#define DMA_DMACHMAP0_CH4SEL_GPIOA      (0x00000003)
//--------

//--------
#define DMA_DMACHMAP0_R_CH5SEL_MASK       (0x00F00000)
#define DMA_DMACHMAP0_R_CH5SEL_BIT        (20)
#define DMA_DMACHMAP0_R_CH5SEL_USB0_EP3TX (0x00000000)
#define DMA_DMACHMAP0_R_CH5SEL_TIMER2B    (0x00100000)
#define DMA_DMACHMAP0_R_CH5SEL_SOFTWARE   (0x00200000)
#define DMA_DMACHMAP0_R_CH5SEL_GPIOB      (0x00300000)

#define DMA_DMACHMAP0_CH5SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP0_CH5SEL_USB0_EP3TX (0x00000000)
#define DMA_DMACHMAP0_CH5SEL_TIMER2B    (0x00000001)
#define DMA_DMACHMAP0_CH5SEL_SOFTWARE   (0x00000002)
#define DMA_DMACHMAP0_CH5SEL_GPIOB      (0x00000003)
//--------

//--------
#define DMA_DMACHMAP0_R_CH6SEL_MASK       (0x0F000000)
#define DMA_DMACHMAP0_R_CH6SEL_BIT        (24)
#define DMA_DMACHMAP0_R_CH6SEL_SOFTWARE   (0x00000000)
#define DMA_DMACHMAP0_R_CH6SEL_TIMER2A    (0x01000000)
#define DMA_DMACHMAP0_R_CH6SEL_UART5_RX   (0x02000000)
#define DMA_DMACHMAP0_R_CH6SEL_GPIOC      (0x03000000)

#define DMA_DMACHMAP0_CH6SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP0_CH6SEL_SOFTWARE   (0x00000000)
#define DMA_DMACHMAP0_CH6SEL_TIMER2A    (0x00000001)
#define DMA_DMACHMAP0_CH6SEL_UART5_RX   (0x00000002)
#define DMA_DMACHMAP0_CH6SEL_GPIOC      (0x00000003)
//--------

//--------
#define DMA_DMACHMAP0_R_CH7SEL_MASK       (0xF0000000)
#define DMA_DMACHMAP0_R_CH7SEL_BIT        (28)
#define DMA_DMACHMAP0_R_CH7SEL_SOFTWARE   (0x00000000)
#define DMA_DMACHMAP0_R_CH7SEL_TIMER2B    (0x10000000)
#define DMA_DMACHMAP0_R_CH7SEL_UART5_TX   (0x20000000)
#define DMA_DMACHMAP0_R_CH7SEL_GPIOD      (0x30000000)

#define DMA_DMACHMAP0_CH7SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP0_CH7SEL_SOFTWARE   (0x00000000)
#define DMA_DMACHMAP0_CH7SEL_TIMER2B    (0x00000001)
#define DMA_DMACHMAP0_CH7SEL_UART5_TX   (0x00000002)
#define DMA_DMACHMAP0_CH7SEL_GPIOD      (0x00000003)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 24 DMACHMAP1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMACHMAP1            (((DMACHMAP1_TypeDef*)(DMA_BASE+DMA_DMACHMAP1_OFFSET )))
#define DMA_DMACHMAP1_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMACHMAP1_OFFSET)))


//--------
#define DMA_DMACHMAP1_R_CH8SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP1_R_CH8SEL_BIT        (0)
#define DMA_DMACHMAP1_R_CH8SEL_UART0_RX   (0x00000000)
#define DMA_DMACHMAP1_R_CH8SEL_UART1_RX   (0x00000001)
#define DMA_DMACHMAP1_R_CH8SEL_SOFTWARE   (0x00000002)
#define DMA_DMACHMAP1_R_CH8SEL_TIMER5A    (0x00000003)

#define DMA_DMACHMAP1_CH8SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP1_CH8SEL_UART0_RX   (0x00000000)
#define DMA_DMACHMAP1_CH8SEL_UART1_RX   (0x00000001)
#define DMA_DMACHMAP1_CH8SEL_SOFTWARE   (0x00000002)
#define DMA_DMACHMAP1_CH8SEL_TIMER5A    (0x00000003)
//--------

//--------
#define DMA_DMACHMAP1_R_CH9SEL_MASK       (0x000000F0)
#define DMA_DMACHMAP1_R_CH9SEL_BIT        (4)
#define DMA_DMACHMAP1_R_CH9SEL_UART0_TX   (0x00000000)
#define DMA_DMACHMAP1_R_CH9SEL_UART1_TX   (0x00000010)
#define DMA_DMACHMAP1_R_CH9SEL_SOFTWARE   (0x00000020)
#define DMA_DMACHMAP1_R_CH9SEL_TIMER5B    (0x00000030)

#define DMA_DMACHMAP1_CH9SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP1_CH9SEL_UART0_TX   (0x00000000)
#define DMA_DMACHMAP1_CH9SEL_UART1_TX   (0x00000001)
#define DMA_DMACHMAP1_CH9SEL_SOFTWARE   (0x00000002)
#define DMA_DMACHMAP1_CH9SEL_TIMER5B    (0x00000003)
//--------

//--------
#define DMA_DMACHMAP1_R_CH10SEL_MASK       (0x00000F00)
#define DMA_DMACHMAP1_R_CH10SEL_BIT        (8)
#define DMA_DMACHMAP1_R_CH10SEL_SSI0_RX    (0x00000000)
#define DMA_DMACHMAP1_R_CH10SEL_SSI1_RX    (0x00000100)
#define DMA_DMACHMAP1_R_CH10SEL_UART6_RX   (0x00000200)
#define DMA_DMACHMAP1_R_CH10SEL_WTIMER0A   (0x00000300)
#define DMA_DMACHMAP1_R_CH10SEL_SOFTWARE   (0x00000400)

#define DMA_DMACHMAP1_CH10SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP1_CH10SEL_UART0_RX   (0x00000000)
#define DMA_DMACHMAP1_CH10SEL_UART1_RX   (0x00000001)
#define DMA_DMACHMAP1_CH10SEL_UART6_RX   (0x00000002)
#define DMA_DMACHMAP1_CH10SEL_WTIMER0A   (0x00000003)
#define DMA_DMACHMAP1_CH10SEL_SOFTWARE   (0x00000004)
//--------

//--------
#define DMA_DMACHMAP1_R_CH11SEL_MASK       (0x0000F000)
#define DMA_DMACHMAP1_R_CH11SEL_BIT        (12)
#define DMA_DMACHMAP1_R_CH11SEL_SSI0_TX    (0x00000000)
#define DMA_DMACHMAP1_R_CH11SEL_SSI1_TX    (0x00001000)
#define DMA_DMACHMAP1_R_CH11SEL_UART6_TX   (0x00002000)
#define DMA_DMACHMAP1_R_CH11SEL_WTIMER0B   (0x00003000)
#define DMA_DMACHMAP1_R_CH11SEL_SOFTWARE   (0x00004000)

#define DMA_DMACHMAP1_CH11SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP1_CH11SEL_UART0_TX   (0x00000000)
#define DMA_DMACHMAP1_CH11SEL_UART1_TX   (0x00000001)
#define DMA_DMACHMAP1_CH11SEL_UART6_TX   (0x00000002)
#define DMA_DMACHMAP1_CH11SEL_WTIMER0B   (0x00000003)
#define DMA_DMACHMAP1_CH11SEL_SOFTWARE   (0x00000004)
//--------

//--------
#define DMA_DMACHMAP1_R_CH12SEL_MASK       (0x000F0000)
#define DMA_DMACHMAP1_R_CH12SEL_BIT        (16)
#define DMA_DMACHMAP1_R_CH12SEL_SOFTWARE   (0x00000000)
#define DMA_DMACHMAP1_R_CH12SEL_UART2_RX   (0x00010000)
#define DMA_DMACHMAP1_R_CH12SEL_SSI2_RX    (0x00020000)
#define DMA_DMACHMAP1_R_CH12SEL_WTIMER1A   (0x00030000)

#define DMA_DMACHMAP1_CH12SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP1_CH12SEL_SOFTWARE   (0x00000000)
#define DMA_DMACHMAP1_CH12SEL_UART2_RX   (0x00000001)
#define DMA_DMACHMAP1_CH12SEL_SSI2_RX    (0x00000002)
#define DMA_DMACHMAP1_CH12SEL_WTIMER1A   (0x00000003)
//--------

//--------
#define DMA_DMACHMAP1_R_CH13SEL_MASK       (0x00F00000)
#define DMA_DMACHMAP1_R_CH13SEL_BIT        (20)
#define DMA_DMACHMAP1_R_CH13SEL_SOFTWARE   (0x00000000)
#define DMA_DMACHMAP1_R_CH13SEL_UART2_TX   (0x00100000)
#define DMA_DMACHMAP1_R_CH13SEL_SSI2_TX    (0x00200000)
#define DMA_DMACHMAP1_R_CH13SEL_WTIMER1B   (0x00300000)

#define DMA_DMACHMAP1_CH13SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP1_CH13SEL_SOFTWARE   (0x00000000)
#define DMA_DMACHMAP1_CH13SEL_UART2_TX   (0x00000001)
#define DMA_DMACHMAP1_CH13SEL_SSI2_TX    (0x00000002)
#define DMA_DMACHMAP1_CH13SEL_WTIMER1B   (0x00000003)
//--------

//--------
#define DMA_DMACHMAP1_R_CH14SEL_MASK       (0x0F000000)
#define DMA_DMACHMAP1_R_CH14SEL_BIT        (24)
#define DMA_DMACHMAP1_R_CH14SEL_ADC0_SS0   (0x00000000)
#define DMA_DMACHMAP1_R_CH14SEL_TIMER2A    (0x01000000)
#define DMA_DMACHMAP1_R_CH14SEL_SSI3_RX    (0x02000000)
#define DMA_DMACHMAP1_R_CH14SEL_GPIOE      (0x03000000)
#define DMA_DMACHMAP1_R_CH14SEL_SOFTWARE   (0x04000000)

#define DMA_DMACHMAP1_CH14SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP1_CH14SEL_ADC0_SS0   (0x00000000)
#define DMA_DMACHMAP1_CH14SEL_TIMER2A    (0x00000001)
#define DMA_DMACHMAP1_CH14SEL_SSI3_RX    (0x00000002)
#define DMA_DMACHMAP1_CH14SEL_GPIOE      (0x00000003)
#define DMA_DMACHMAP1_CH14SEL_SOFTWARE   (0x00000004)
//--------

//--------
#define DMA_DMACHMAP1_R_CH15SEL_MASK       (0xF0000000)
#define DMA_DMACHMAP1_R_CH15SEL_BIT        (28)
#define DMA_DMACHMAP1_R_CH15SEL_ADC0_SS1   (0x00000000)
#define DMA_DMACHMAP1_R_CH15SEL_TIMER2B    (0x10000000)
#define DMA_DMACHMAP1_R_CH15SEL_SSI3_TX    (0x20000000)
#define DMA_DMACHMAP1_R_CH15SEL_GPIOF      (0x30000000)
#define DMA_DMACHMAP1_R_CH15SEL_SOFTWARE   (0x40000000)

#define DMA_DMACHMAP1_CH15SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP1_CH15SEL_ADC0_SS1   (0x00000000)
#define DMA_DMACHMAP1_CH15SEL_TIMER2B    (0x00000001)
#define DMA_DMACHMAP1_CH15SEL_SSI3_TX    (0x00000002)
#define DMA_DMACHMAP1_CH15SEL_GPIOF      (0x00000003)
#define DMA_DMACHMAP1_CH15SEL_SOFTWARE   (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 25 DMACHMAP2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMACHMAP2            (((DMACHMAP2_TypeDef*)(DMA_BASE+DMA_DMACHMAP2_OFFSET )))
#define DMA_DMACHMAP2_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMACHMAP2_OFFSET)))

//--------
#define DMA_DMACHMAP2_R_CH16SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP2_R_CH16SEL_BIT        (0)
#define DMA_DMACHMAP2_R_CH16SEL_ADC0_SS2   (0x00000000)
#define DMA_DMACHMAP2_R_CH16SEL_SOFTWARE   (0x00000001)
#define DMA_DMACHMAP2_R_CH16SEL_UART3_RX   (0x00000002)
#define DMA_DMACHMAP2_R_CH16SEL_WTIMER2A   (0x00000003)

#define DMA_DMACHMAP2_CH16SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP2_CH16SEL_ADC0_SS2   (0x00000000)
#define DMA_DMACHMAP2_CH16SEL_SOFTWARE   (0x00000001)
#define DMA_DMACHMAP2_CH16SEL_UART3_RX   (0x00000002)
#define DMA_DMACHMAP2_CH16SEL_WTIMER2A   (0x00000003)
//--------

//--------
#define DMA_DMACHMAP2_R_CH17SEL_MASK       (0x000000F0)
#define DMA_DMACHMAP2_R_CH17SEL_BIT        (4)
#define DMA_DMACHMAP2_R_CH17SEL_ADC0_SS3   (0x00000000)
#define DMA_DMACHMAP2_R_CH17SEL_SOFTWARE   (0x00000010)
#define DMA_DMACHMAP2_R_CH17SEL_UART3_TX   (0x00000020)
#define DMA_DMACHMAP2_R_CH17SEL_WTIMER2B   (0x00000030)

#define DMA_DMACHMAP2_CH17SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP2_CH17SEL_ADC0_SS3   (0x00000000)
#define DMA_DMACHMAP2_CH17SEL_SOFTWARE   (0x00000001)
#define DMA_DMACHMAP2_CH17SEL_UART3_TX   (0x00000002)
#define DMA_DMACHMAP2_CH17SEL_WTIMER2B   (0x00000003)
//--------

//--------
#define DMA_DMACHMAP2_R_CH18SEL_MASK       (0x00000F00)
#define DMA_DMACHMAP2_R_CH18SEL_BIT        (8)
#define DMA_DMACHMAP2_R_CH18SEL_TIMER0A    (0x00000000)
#define DMA_DMACHMAP2_R_CH18SEL_TIMER1A    (0x00000100)
#define DMA_DMACHMAP2_R_CH18SEL_UART4_RX   (0x00000200)
#define DMA_DMACHMAP2_R_CH18SEL_GPIOB      (0x00000300)
#define DMA_DMACHMAP2_R_CH18SEL_SOFTWARE   (0x00000400)

#define DMA_DMACHMAP2_CH18SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP2_CH18SEL_TIMER0A    (0x00000000)
#define DMA_DMACHMAP2_CH18SEL_TIMER1A    (0x00000001)
#define DMA_DMACHMAP2_CH18SEL_UART4_RX   (0x00000002)
#define DMA_DMACHMAP2_CH18SEL_GPIOB      (0x00000003)
#define DMA_DMACHMAP2_CH18SEL_SOFTWARE   (0x00000004)
//--------

//--------
#define DMA_DMACHMAP2_R_CH19SEL_MASK       (0x0000F000)
#define DMA_DMACHMAP2_R_CH19SEL_BIT        (12)
#define DMA_DMACHMAP2_R_CH19SEL_TIMER0B    (0x00000000)
#define DMA_DMACHMAP2_R_CH19SEL_TIMER1B    (0x00001000)
#define DMA_DMACHMAP2_R_CH19SEL_UART4_TX   (0x00002000)
#define DMA_DMACHMAP2_R_CH19SEL_SOFTWARE   (0x00003000)

#define DMA_DMACHMAP2_CH19SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP2_CH19SEL_TIMER0B    (0x00000000)
#define DMA_DMACHMAP2_CH19SEL_TIMER1B    (0x00000001)
#define DMA_DMACHMAP2_CH19SEL_UART4_TX   (0x00000002)
#define DMA_DMACHMAP2_CH19SEL_SOFTWARE   (0x00000003)
//--------

//--------
#define DMA_DMACHMAP2_R_CH20SEL_MASK       (0x000F0000)
#define DMA_DMACHMAP2_R_CH20SEL_BIT        (16)
#define DMA_DMACHMAP2_R_CH20SEL_TIMER1A    (0x00000000)
#define DMA_DMACHMAP2_R_CH20SEL_SOFTWARE   (0x00010000)
#define DMA_DMACHMAP2_R_CH20SEL_UART7_RX   (0x00020000)

#define DMA_DMACHMAP2_CH20SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP2_CH20SEL_TIMER1A    (0x00000000)
#define DMA_DMACHMAP2_CH20SEL_SOFTWARE   (0x00000001)
#define DMA_DMACHMAP2_CH20SEL_UART7_RX   (0x00000002)
//--------

//--------
#define DMA_DMACHMAP2_R_CH21SEL_MASK       (0x00F00000)
#define DMA_DMACHMAP2_R_CH21SEL_BIT        (20)
#define DMA_DMACHMAP2_R_CH21SEL_TIMER2A    (0x00000000)
#define DMA_DMACHMAP2_R_CH21SEL_SOFTWARE   (0x00100000)
#define DMA_DMACHMAP2_R_CH21SEL_UART7_TX   (0x00200000)

#define DMA_DMACHMAP2_CH21SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP2_CH21SEL_TIMER2A    (0x00000000)
#define DMA_DMACHMAP2_CH21SEL_SOFTWARE   (0x00000001)
#define DMA_DMACHMAP2_CH21SEL_UART7_TX   (0x00000002)
//--------

//--------
#define DMA_DMACHMAP2_R_CH22SEL_MASK       (0x0F000000)
#define DMA_DMACHMAP2_R_CH22SEL_BIT        (24)
#define DMA_DMACHMAP2_R_CH22SEL_UART1_RX   (0x00000000)
#define DMA_DMACHMAP2_R_CH22SEL_SOFTWARE   (0x01000000)

#define DMA_DMACHMAP2_CH22SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP2_CH22SEL_UART1_RX   (0x00000000)
#define DMA_DMACHMAP2_CH22SEL_SOFTWARE   (0x00000001)
//--------

//--------
#define DMA_DMACHMAP2_R_CH23SEL_MASK       (0xF0000000)
#define DMA_DMACHMAP2_R_CH23SEL_BIT        (28)
#define DMA_DMACHMAP2_R_CH23SEL_UART1_TX   (0x00000000)
#define DMA_DMACHMAP2_R_CH23SEL_SOFTWARE   (0x10000000)

#define DMA_DMACHMAP2_CH23SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP2_CH23SEL_UART1_TX   (0x00000000)
#define DMA_DMACHMAP2_CH23SEL_SOFTWARE   (0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 26 DMACHMAP3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMACHMAP3            (((DMACHMAP3_TypeDef*)(DMA_BASE+DMA_DMACHMAP3_OFFSET )))
#define DMA_DMACHMAP3_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMACHMAP3_OFFSET)))

//--------
#define DMA_DMACHMAP3_R_CH24SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP3_R_CH24SEL_BIT        (0)
#define DMA_DMACHMAP3_R_CH24SEL_SSI1_RX    (0x00000000)
#define DMA_DMACHMAP3_R_CH24SEL_ADC1_SS0   (0x00000001)
#define DMA_DMACHMAP3_R_CH24SEL_SOFTWARE   (0x00000002)
#define DMA_DMACHMAP3_R_CH24SEL_WTIMER3A   (0x00000003)

#define DMA_DMACHMAP3_CH24SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP3_CH24SEL_SSI1_RX    (0x00000000)
#define DMA_DMACHMAP3_CH24SEL_ADC1_SS0   (0x00000001)
#define DMA_DMACHMAP3_CH24SEL_SOFTWARE   (0x00000002)
#define DMA_DMACHMAP3_CH24SEL_WTIMER3A   (0x00000003)
//--------

//--------
#define DMA_DMACHMAP3_R_CH25SEL_MASK       (0x000000F0)
#define DMA_DMACHMAP3_R_CH25SEL_BIT        (4)
#define DMA_DMACHMAP3_R_CH25SEL_SSI1_TX    (0x00000000)
#define DMA_DMACHMAP3_R_CH25SEL_ADC1_SS1   (0x00000010)
#define DMA_DMACHMAP3_R_CH25SEL_SOFTWARE   (0x00000020)
#define DMA_DMACHMAP3_R_CH25SEL_WTIMER3B   (0x00000030)

#define DMA_DMACHMAP3_CH25SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP3_CH25SEL_SSI1_TX    (0x00000000)
#define DMA_DMACHMAP3_CH25SEL_ADC1_SS1   (0x00000001)
#define DMA_DMACHMAP3_CH25SEL_SOFTWARE   (0x00000002)
#define DMA_DMACHMAP3_CH25SEL_WTIMER3B   (0x00000003)
//--------

//--------
#define DMA_DMACHMAP3_R_CH26SEL_MASK       (0x00000F00)
#define DMA_DMACHMAP3_R_CH26SEL_BIT        (8)
#define DMA_DMACHMAP3_R_CH26SEL_SOFTWARE   (0x00000000)
#define DMA_DMACHMAP3_R_CH26SEL_ADC1_SS2   (0x00000100)
#define DMA_DMACHMAP3_R_CH26SEL_WTIMER4A   (0x00000300)

#define DMA_DMACHMAP3_CH26SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP3_CH26SEL_SOFTWARE   (0x00000000)
#define DMA_DMACHMAP3_CH26SEL_ADC1_SS2   (0x00000001)
#define DMA_DMACHMAP3_CH26SEL_WTIMER4A   (0x00000003)
//--------

//--------
#define DMA_DMACHMAP3_R_CH27SEL_MASK       (0x0000F000)
#define DMA_DMACHMAP3_R_CH27SEL_BIT        (12)
#define DMA_DMACHMAP3_R_CH27SEL_SOFTWARE   (0x00000000)
#define DMA_DMACHMAP3_R_CH27SEL_ADC1_SS3   (0x00001000)
#define DMA_DMACHMAP3_R_CH27SEL_WTIMER4B   (0x00003000)

#define DMA_DMACHMAP3_CH27SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP3_CH27SEL_SOFTWARE   (0x00000000)
#define DMA_DMACHMAP3_CH27SEL_ADC1_SS3   (0x00000001)
#define DMA_DMACHMAP3_CH27SEL_WTIMER4B   (0x00000003)
//--------

//--------
#define DMA_DMACHMAP3_R_CH28SEL_MASK       (0x000F0000)
#define DMA_DMACHMAP3_R_CH28SEL_BIT        (16)
#define DMA_DMACHMAP3_R_CH28SEL_SOFTWARE   (0x00000000)
#define DMA_DMACHMAP3_R_CH28SEL_WTIMER5A   (0x00030000)

#define DMA_DMACHMAP3_CH28SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP3_CH28SEL_SOFTWARE   (0x00000000)
#define DMA_DMACHMAP3_CH28SEL_WTIMER5A   (0x00000003)
//--------

//--------
#define DMA_DMACHMAP3_R_CH29SEL_MASK       (0x00F00000)
#define DMA_DMACHMAP3_R_CH29SEL_BIT        (20)
#define DMA_DMACHMAP3_R_CH29SEL_SOFTWARE   (0x00000000)
#define DMA_DMACHMAP3_R_CH29SEL_WTIMER5B   (0x00300000)

#define DMA_DMACHMAP3_CH29SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP3_CH29SEL_SOFTWARE   (0x00000000)
#define DMA_DMACHMAP3_CH29SEL_WTIMER5B   (0x00000003)
//--------

//--------
#define DMA_DMACHMAP3_R_CH30SEL_MASK       (0x0F000000)
#define DMA_DMACHMAP3_R_CH30SEL_BIT        (24)
#define DMA_DMACHMAP3_R_CH30SEL_SOFTWARE   (0x00000000)

#define DMA_DMACHMAP3_CH30SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP3_CH30SEL_SOFTWARE   (0x00000000)
//--------

//--------
#define DMA_DMACHMAP3_R_CH31SEL_MASK       (0xF0000000)
#define DMA_DMACHMAP3_R_CH31SEL_BIT        (28)
#define DMA_DMACHMAP3_R_CH31SEL_SOFTWARE   (0x00000000)

#define DMA_DMACHMAP3_CH31SEL_MASK       (0x0000000F)
#define DMA_DMACHMAP3_CH31SEL_RESERVED   (0x00000000)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 27 DMAPeriphID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAPeriphID0            (((DMAPeriphID0_TypeDef*)(DMA_BASE+DMA_DMAPeriphID0_OFFSET )))
#define DMA_DMAPeriphID0_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAPeriphID0_OFFSET)))

//--------
#define DMA_DMAPeriphID0_R_PID0_MASK       (0x000000FF)
#define DMA_DMAPeriphID0_R_PID0_BIT        (0)
#define DMA_DMAPeriphID0_R_PID0_RESET      (0x00000030)

#define DMA_DMAPeriphID0_PID0_MASK       (0x000000FF)
#define DMA_DMAPeriphID0_PID0_RESET      (0x00000030)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 28 DMAPeriphID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAPeriphID1            (((DMAPeriphID1_TypeDef*)(DMA_BASE+DMA_DMAPeriphID1_OFFSET )))
#define DMA_DMAPeriphID1_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAPeriphID1_OFFSET)))

//--------
#define DMA_DMAPeriphID1_R_PID1_MASK       (0x000000FF)
#define DMA_DMAPeriphID1_R_PID1_BIT        (0)
#define DMA_DMAPeriphID1_R_PID1_RESET      (0x000000B2)

#define DMA_DMAPeriphID1_PID1_MASK       (0x000000FF)
#define DMA_DMAPeriphID1_PID1_RESET      (0x000000B2)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 29 DMAPeriphID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAPeriphID2            (((DMAPeriphID2_TypeDef*)(DMA_BASE+DMA_DMAPeriphID2_OFFSET )))
#define DMA_DMAPeriphID2_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAPeriphID2_OFFSET)))

//--------
#define DMA_DMAPeriphID2_R_PID2_MASK       (0x000000FF)
#define DMA_DMAPeriphID2_R_PID2_BIT        (0)
#define DMA_DMAPeriphID2_R_PID2_RESET      (0x0000000B)

#define DMA_DMAPeriphID2_PID2_MASK       (0x000000FF)
#define DMA_DMAPeriphID2_PID2_RESET      (0x0000000B)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 30 DMAPeriphID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAPeriphID3            (((DMAPeriphID3_TypeDef*)(DMA_BASE+DMA_DMAPeriphID3_OFFSET )))
#define DMA_DMAPeriphID3_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAPeriphID3_OFFSET)))

//--------
#define DMA_DMAPeriphID3_R_PID3_MASK       (0x000000FF)
#define DMA_DMAPeriphID3_R_PID3_BIT        (0)
#define DMA_DMAPeriphID3_R_PID3_RESET      (0x00000000)

#define DMA_DMAPeriphID3_PID3_MASK       (0x000000FF)
#define DMA_DMAPeriphID3_PID3_RESET      (0x00000000)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 31 DMAPeriphID4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAPeriphID4            (((DMAPeriphID4_TypeDef*)(DMA_BASE+DMA_DMAPeriphID4_OFFSET )))
#define DMA_DMAPeriphID4_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAPeriphID4_OFFSET)))

//--------
#define DMA_DMAPeriphID4_R_PID4_MASK       (0x000000FF)
#define DMA_DMAPeriphID4_R_PID4_BIT        (0)
#define DMA_DMAPeriphID4_R_PID4_RESET      (0x00000004)

#define DMA_DMAPeriphID4_PID4_MASK       (0x000000FF)
#define DMA_DMAPeriphID4_PID4_RESET      (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 32 DMAPCellID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAPCellID0            (((DMAPCellID0_TypeDef*)(DMA_BASE+DMA_DMAPCellID0_OFFSET )))
#define DMA_DMAPCellID0_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAPCellID0_OFFSET)))

//--------
#define DMA_DMAPCellID0_R_CID0_MASK       (0x000000FF)
#define DMA_DMAPCellID0_R_CID0_BIT        (0)
#define DMA_DMAPCellID0_R_CID0_RESET      (0x0000000D)

#define DMA_DMAPCellID0_CID0_MASK       (0x000000FF)
#define DMA_DMAPCellID0_CID0_RESET      (0x0000000D)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 33 DMAPCellID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAPCellID1            (((DMAPCellID1_TypeDef*)(DMA_BASE+DMA_DMAPCellID1_OFFSET )))
#define DMA_DMAPCellID1_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAPCellID1_OFFSET)))

//--------
#define DMA_DMAPCellID1_R_CID1_MASK       (0x000000FF)
#define DMA_DMAPCellID1_R_CID1_BIT        (0)
#define DMA_DMAPCellID1_R_CID1_RESET      (0x000000F0)

#define DMA_DMAPCellID1_CID1_MASK       (0x000000FF)
#define DMA_DMAPCellID1_CID1_RESET      (0x000000F0)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 34 DMAPCellID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAPCellID2            (((DMAPCellID2_TypeDef*)(DMA_BASE+DMA_DMAPCellID2_OFFSET )))
#define DMA_DMAPCellID2_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAPCellID2_OFFSET)))

//--------
#define DMA_DMAPCellID2_R_CID2_MASK       (0x000000FF)
#define DMA_DMAPCellID2_R_CID2_BIT        (0)
#define DMA_DMAPCellID2_R_CID2_RESET      (0x00000005)

#define DMA_DMAPCellID2_CID2_MASK       (0x000000FF)
#define DMA_DMAPCellID2_CID2_RESET      (0x00000005)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 35 DMAPCellID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define DMA_DMAPCellID3_OFFSET     (0x0FFC)
#define DMA_DMAPCellID3            (((DMAPCellID3_TypeDef*)(DMA_BASE+DMA_DMAPCellID3_OFFSET )))
#define DMA_DMAPCellID3_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAPCellID3_OFFSET)))

//--------
#define DMA_DMAPCellID3_R_CID3_MASK       (0x000000FF)
#define DMA_DMAPCellID3_R_CID3_BIT        (0)
#define DMA_DMAPCellID3_R_CID3_RESET      (0x000000B1)

#define DMA_DMAPCellID3_CID3_MASK       (0x000000FF)
#define DMA_DMAPCellID3_CID3_RESET      (0x000000B1)
//--------

#endif /* UDMA_H_ */
