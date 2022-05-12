/******************************************************************************
 *
 * Default Linker Command file for the Texas Instruments TM4C123GH6PM
 *
 * This is derived from revision 15071 of the TivaWare Library.
 *
 *****************************************************************************/

--retain=g_pfnVectors

MEMORY
{
    FLASH_VTABLE (RX) 	: origin = 0x00000000, length = 0x00000400
    FLASH_CODE (RX) 	: origin = 0x00000400, length = 0x0002FC00
    FLASH_CONST (R) 	: origin = 0x00030000, length = 0x00010000
    SRAM_VTABLE (RWX) 	: origin = 0x20000000, length = 0x00000400
    SRAM_CODE (RWX) 	: origin = 0x20000400, length = 0x00001400
    SRAM_VARIABLE (RW) 	: origin = 0x20001800, length = 0x00005400
    SRAM_DMA   (RW)		: origin = 0x20006C00, length = 0x00000200
    SRAM_DMAALT (RW)	: origin = 0x20006E00, length = 0x00000200
    SRAM_DYNAMIC (RW) 	: origin = 0x20007000, length = 0x00000A00
    SRAM_MAIN_STACK (RW)   	: origin = 0x20007A00, length = 0x00000600
}

/* The following command line options are set as part of the CCS project.    */
/* If you are building using the command line, or for some reason want to    */
/* define them here, you can uncomment and modify these lines as needed.     */
/* If you are using CCS for building, it is probably better to make any such */
/* modifications in your CCS project and leave this file alone.              */
/*                                                                           */
--library=rtsv7M4_T_le_v4SPD16_xo_eabi.lib

/* Section allocation in memory */
--stack_size=0x00000600
--heap_size=0x00000A00
SECTIONS
{
    .intvecs:   > 0x00000000
    .text   :   > FLASH_CODE
    .glue_7 : > FLASH_CODE
    .glue_7t : > FLASH_CODE
    .eh_frame : > FLASH_CODE
    .ctor: > FLASH_CODE
    .dtor: > FLASH_CODE

    .switch :   > FLASH_CODE
    .const  :   > FLASH_CONST
    .rodata  :   > FLASH_CONST
    .cinit  :   > FLASH_CODE
    .pinit  :   > FLASH_CODE
    .preinit_array: > FLASH_CONST
    .binit  :   > FLASH_CODE
    .init_array : > FLASH_CODE
    .fini_array : > FLASH_CONST
    .ARM.exidx : > FLASH_CODE
    .ARM.extab : > FLASH_CODE

    .vtable :   > SRAM_VTABLE

    .ramcode: ALIGN(0x8) LOAD = FLASH_CONST,
                RUN = SRAM_CODE,
                LOAD_START(__ramcode_load__),
                RUN_START(__ramcode_start__),
                RUN_END(__ramcode_end__)

    .data   : ALIGN(0x8) LOAD = FLASH_CONST,
                RUN = SRAM_VARIABLE,
                LOAD_START(__data_load__),
                RUN_START(__data_start__),
                RUN_END(__data_end__)
    .bss    : ALIGN(0x8) RUN = SRAM_VARIABLE,
                RUN_START(__bss_start__),
                RUN_END(__bss_end__)
    .ppdata :   > SRAM_VARIABLE

    .sysmem :   > SRAM_DYNAMIC

    .stack : ALIGN(0x8) {
        _stack = .;
        __stack = .;
    } > SRAM_MAIN_STACK
/*
    .stack_process : ALIGN(0x8) {
        _stack_process = .;
        __stack_process = .;
    } > SRAM_PROCESS_STACK
*/
    .dma    :   > SRAM_DMA
    .dmaalt :   > SRAM_DMAALT


}
/*
	__stack_process_end__ = _stack_process + SIZE(SRAM_PROCESS_STACK);
	__stack_process_size__ = SIZE(SRAM_PROCESS_STACK);
*/
	__stack_end__ = __stack + SIZE(SRAM_MAIN_STACK);
	__stack_size__ = SIZE(SRAM_MAIN_STACK);
