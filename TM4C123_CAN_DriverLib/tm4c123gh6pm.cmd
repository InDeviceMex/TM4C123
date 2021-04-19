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
    SRAM_DINAMIC (RW) 	: origin = 0x20007000, length = 0x00000A00
    SRAM_STACK (RW)   	: origin = 0x20007A00, length = 0x00000600
}

/* The following command line options are set as part of the CCS project.    */
/* If you are building using the command line, or for some reason want to    */
/* define them here, you can uncomment and modify these lines as needed.     */
/* If you are using CCS for building, it is probably better to make any such */
/* modifications in your CCS project and leave this file alone.              */
/*                                                                           */
 --heap_size=0x00000A00
 --stack_size=0x00000600
/* --library=rtsv7M4_T_le_eabi.lib                                           */

/* Section allocation in memory */

SECTIONS
{
    .intvecs:   > 0x00000000
    .text   :   > FLASH_CODE
    .glue_7 : > FLASH_CODE
    .glue_7t : > FLASH_CODE
    .eh_frame : > FLASH_CODE
    .ctor: > FLASH_CODE
    .dtor: > FLASH_CODE

    .const  :   > FLASH_CONST
    .cinit  :   > FLASH_CONST
    .pinit  :   > FLASH_CONST
    .preinit_array: > FLASH_CONST
    .init_array : > FLASH_CONST
    .fini_array : > FLASH_CONST

    .vtable :   > 0x20000000
    .ramcode:	> SRAM_CODE
    .data   :   > SRAM_VARIABLE
    .bss    :   > SRAM_VARIABLE
    .sysmem :   > SRAM_DINAMIC
    .stack  :   > SRAM_STACK

    .dma    :   > SRAM_DMA
    .dmaalt :   > SRAM_DMAALT
}


__STACK_TOP = __stack + 0x00000600;
