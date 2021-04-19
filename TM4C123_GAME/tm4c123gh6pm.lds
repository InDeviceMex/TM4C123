/******************************************************************************
 *
 * Default Linker script for the Texas Instruments TM4C123GH6PM
 *
 * This is derived from revision 15071 of the TivaWare Library.
 *
 *****************************************************************************/

MEMORY
{
    FLASH_VTABLE (RX) 	: ORIGIN = 0x00000000, LENGTH = 0x00000400 /*1K*/
    FLASH_CODE (RX) 	: ORIGIN = 0x00000400, LENGTH = 0x0002FC00 /*63K*/
    FLASH_CONST (R) 	: ORIGIN = 0x00030000, LENGTH = 0x00010000 /*64K*/
    SRAM_VTABLE (RWX) 	: ORIGIN = 0x20000000, LENGTH = 0x00000400 /*1K*/
    SRAM_CODE (RWX) 	: ORIGIN = 0x20000400, LENGTH = 0x00001400 /*5K*/
    SRAM_VARIABLE (RW) 	: ORIGIN = 0x20001800, LENGTH = 0x00005400 /*21K*/
    SRAM_DMA   (RW)		: ORIGIN = 0x20006C00, LENGTH = 0x00000200 /*512*/
    SRAM_DMAALT (RW)	: ORIGIN = 0x20006E00, LENGTH = 0x00000200 /*512*/
    SRAM_DINAMIC (RW) 	: ORIGIN = 0x20007000, LENGTH = 0x00000A00 /*2.5K*/
    SRAM_STACK (RW)   	: ORIGIN = 0x20007A00, LENGTH = 0x00000600 /*1.5K*/
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

SECTIONS {

    /* The startup code into "FLASH" Rom type memory */

    PROVIDE (_intvecs_base_address = 0x0);

    .intvecs (_intvecs_base_address) : AT (_intvecs_base_address) {
        . = ALIGN(4);
        KEEP (*(.intvecs)) /* Startup code */
        . = ALIGN(4);
    } > REGION_FVTABLE

    PROVIDE (_vtable_base_address = 0x20000000);

    .vtable (_vtable_base_address) : AT (_vtable_base_address) {
        . = ALIGN(4);
        KEEP (*(.vtable))
        . = ALIGN(4);
    } > REGION_VTABLE

    /* The program code and other data into "FLASH" Rom type memory */

    .text : {

        . = ALIGN(4);
        CREATE_OBJECT_SYMBOLS
        *(.text)
        *(.text*)          /* .text* sections (code) */
        *(.text.*)
        *(.glue_7)         /* glue arm to thumb code */
        *(.glue_7t)        /* glue thumb to arm code */
        *(.eh_frame)

        . = ALIGN(0x4);
        KEEP (*(.ctors))

        . = ALIGN(0x4);
        KEEP (*(.dtors))

        . = ALIGN(0x4);
        KEEP (*(.init))
        KEEP (*(.fini))

        . = ALIGN(4);
        PROVIDE (__etext = .);
        PROVIDE (_etext = .);
        PROVIDE (etext = .);
    } > REGION_TEXT

    /* Constant data into "FLASH" Rom type memory */

    .rodata : {
        . = ALIGN(0x4);
        *(.rodata)
        *(.rodata*)
        . = ALIGN(0x4);
    } > REGION_CONST

    .ARM.extab : {
        . = ALIGN(0x4);
        *(.ARM.extab* .gnu.linkonce.armextab.*)
        . = ALIGN(0x4);
    } > REGION_CONST

    .ARM.exidx : {
        . = ALIGN(0x4);
        PROVIDE (__exidx_start = .);
        *(.ARM.exidx* .gnu.linkonce.armexidx.*)
        PROVIDE (__exidx_end = .);
        . = ALIGN(0x4);
    } > REGION_CONST

    .preinit_array     :
    {
        . = ALIGN(4);
        PROVIDE (__preinit_array_start = .);
        KEEP (*(.preinit_array*))
        PROVIDE (__preinit_array_end = .);
        . = ALIGN(4);
    } > REGION_CONST

    .init_array :
    {
        . = ALIGN(4);
        PROVIDE (__init_array_start = .);
        KEEP (*(SORT(.init_array.*)))
        KEEP (*(.init_array*))
        PROVIDE (__init_array_end = .);
        . = ALIGN(4);
    } > REGION_CONST

    .fini_array :
    {
        . = ALIGN(4);
        PROVIDE (__fini_array_start = .);
        KEEP (*(SORT(.fini_array.*)))
        KEEP (*(.fini_array*))
        PROVIDE (__fini_array_end = .);
        . = ALIGN(4);
    } > REGION_CONST

    /* Initialized data sections into "RAM" Ram type memory */

    .data : {
        . = ALIGN(4);
        __data_load__ = LOADADDR (.data);
        __data_start__ = .;
        *(.data)
        *(.data*)
        . = ALIGN (4);
        __data_end__ = .;
    } > REGION_DATA AT> REGION_CONST

    .ramcode : {
        . = ALIGN(4);
        __ramcode_load__ = LOADADDR (.ramcode);
        __ramcode_start__ = .;
        *(.RamFunc)        /* .RamFunc sections */
        *(.RamFunc*)       /* .RamFunc* sections */
        *(.ramcode)
        *(.ramcode*)
        . = ALIGN (4);
        __ramcode_end__ = .;
    } > REGION_RAM_TEXT AT> REGION_TEXT

    /* Uninitialized data section into "RAM" Ram type memory */

    .bss : {
        . = ALIGN(4);
        __bss_start__ = .;
        *(.shbss)
        *(.bss)
        *(.bss*)
        *(.bss.*)
        *(COMMON)
        . = ALIGN (4);
        __bss_end__ = .;
    } > REGION_BSS

    .dma : {
        . = ALIGN(4);
        __dma_start__ = .;
        *(.shdma)
        *(.dma)
        *(.dma.*)
        . = ALIGN (4);
        __dma_end__ = .;
    } > REGION_DMA

    .dmaalt : {
        . = ALIGN(4);
        __dmaalt_start__ = .;
        *(.shdmaalt)
        *(.dmaalt)
        *(.dmaalt.*)
        . = ALIGN (4);
        __dma_end__ = .;
    } > REGION_DMAALT

    /* User_heap_stack section, used to check that there is enough "RAM" Ram  type memory left */
    .sysmem : {
        . = ALIGN (4);
        __sysmem_start__ = .;
        end = __sysmem_start__;
        _end = end;
        __end = end;
        KEEP(*(.sysmem))
        . = ALIGN (4);
        __sysmem_end__ = .;
        __sysmemLimit = __sysmem_end__;
    } > REGION_HEAP

    .stack : ALIGN(0x8) {
        _stack = .;
        __stack = .;
        KEEP(*(.stack))
    } > REGION_STACK
}
