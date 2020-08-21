/******************************************************************************
 *
 * Default Linker script for the Texas Instruments TM4C123GH6PM
 *
 * This is derived from revision 15071 of the TivaWare Library.
 *
 *****************************************************************************/

MEMORY
{
    FLASH_VTABLE (RX) 	: ORIGIN = 0x00000000, LENGTH = 0x00000400
    FLASH_CODE (RX) 	: ORIGIN = 0x00000400, LENGTH = 0x0002FC00
    FLASH_CONST (R) 	: ORIGIN = 0x00030000, LENGTH = 0x00010000
    SRAM_VTABLE (RWX) 	: ORIGIN = 0x20000000, LENGTH = 0x00000400
    SRAM_CODE (RWX) 	: ORIGIN = 0x20000400, LENGTH = 0x00001400
    SRAM_VARIABLE (RW) 	: ORIGIN = 0x20001800, LENGTH = 0x00005400
    SRAM_DMA   (RW)		: ORIGIN = 0x20006C00, LENGTH = 0x00000200
    SRAM_DMAALT (RW)	: ORIGIN = 0x20006E00, LENGTH = 0x00000200
    SRAM_DINAMIC (RW) 	: ORIGIN = 0x20007000, LENGTH = 0x00000E00
    SRAM_STACK (RW)   	: ORIGIN = 0x20007E00, LENGTH = 0x00000200
}

ENTRY(ResetISR);
REGION_ALIAS("REGION_FVTABLE", FLASH_VTABLE);
REGION_ALIAS("REGION_TEXT", FLASH_CODE);
REGION_ALIAS("REGION_CONST", FLASH_CONST);
REGION_ALIAS("REGION_RAM_TEXT", SRAM_CODE);
REGION_ALIAS("REGION_VTABLE", SRAM_VTABLE);
REGION_ALIAS("REGION_BSS", SRAM_VARIABLE);
REGION_ALIAS("REGION_DATA", SRAM_VARIABLE);
REGION_ALIAS("REGION_DMA", SRAM_DMA);
REGION_ALIAS("REGION_DMAALT", SRAM_DMAALT);
REGION_ALIAS("REGION_STACK", SRAM_STACK);
REGION_ALIAS("REGION_HEAP", SRAM_DINAMIC);
REGION_ALIAS("REGION_ARM_EXIDX", FLASH_CODE);
REGION_ALIAS("REGION_ARM_EXTAB", FLASH_CODE);

SECTIONS {

    PROVIDE (_intvecs_base_address = 0x0);

    .intvecs (_intvecs_base_address) : AT (_intvecs_base_address) {
        KEEP (*(.intvecs))
    } > FLASH_VTABLE

    PROVIDE (_vtable_base_address = 0x20000000);

    .vtable 4_vtable_base_address) : AT (_vtable_base_address) {
        KEEP (*(.vtable))
    } > REGION_VTABLE

    .text : {
        CREATE_OBJECT_SYMBOLS
        *(.text)
        *(.text.*)
        . = ALIGN(0x4);
        KEEP (*(.ctors))
        . = ALIGN(0x4);
        KEEP (*(.dtors))
        . = ALIGN(0x4);
        __init_array_start = .;
        KEEP (*(.init_array*))
        __init_array_end = .;
        *(.init)
        *(.fini*)
    } > REGION_TEXT

    PROVIDE (__etext = .);
    PROVIDE (_etext = .);
    PROVIDE (etext = .);

    .rodata : {
        *(.rodata)
        *(.rodata*)
    } > REGION_CONST

    .data : ALIGN (4) {
        __data_load__ = LOADADDR (.data);
        __data_start__ = .;
        *(.data)
        *(.data*)
        . = ALIGN (4);
        __data_end__ = .;
    } > REGION_DATA AT> REGION_TEXT

    .ramcode : ALIGN (4) {
        __ramcode_load__ = LOADADDR (.ramcode);
        __ramcode_start__ = .;
        *(.ramcode)
        *(.ramcode*)
        . = ALIGN (4);
        __ramcode_end__ = .;
    } > REGION_RAM_TEXT AT> REGION_TEXT

    .ARM.exidx : {
        __exidx_start = .;
        *(.ARM.exidx* .gnu.linkonce.armexidx.*)
        __exidx_end = .;
    } > REGION_ARM_EXIDX

    .ARM.extab : {
        *(.ARM.extab* .gnu.linkonce.armextab.*)
    } > REGION_ARM_EXTAB

    .bss : {
        __bss_start__ = .;
        *(.shbss)
        *(.bss)
        *(.bss.*)
        *(COMMON)
        . = ALIGN (4);
        __bss_end__ = .;
    } > REGION_BSS

    .dma : {
        __dma_start__ = .;
        *(.shdma)
        *(.dma)
        *(.dma.*)
        *(COMMON)
        . = ALIGN (4);
        __dma_end__ = .;
    } > REGION_DMA

    .dmaalt : {
        __dmaalt_start__ = .;
        *(.shdmaalt)
        *(.dmaalt)
        *(.dmaalt.*)
        *(COMMON)
        . = ALIGN (4);
        __dma_end__ = .;
    } > REGION_DMAALT

    .heap : {
        __heap_start__ = .;
        end = __heap_start__;
        _end = end;
        __end = end;
        KEEP(*(.heap))
        __heap_end__ = .;
        __HeapLimit = __heap_end__;
    } > REGION_HEAP

    .stack : ALIGN(0x8) {
        _stack = .;
        __stack = .;
        KEEP(*(.stack))
    } > REGION_STACK
}
