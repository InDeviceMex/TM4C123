/**
 *
 * @file SYSCTL_Clock_RCC2.c
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
#include <xDriver_MCU/SYSCTL/App/Clock/xHeader/SYSCTL_Clock_RCC2.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/App/Clock/xHeader/SYSCTL_Clock_Utils.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

static uint32_t SYSCTL_enGetPLLFreq_RCC2(void);
static SYSCTL_nBYPASS SYSCTL_enGetOSCSourceFreq_RCC2(uint32_t *pu32Frequency);

static uint32_t SYSCTL_enGetPLLFreq_RCC2(void)
{
    uint32_t u32Frequency = 0UL;
    uint32_t u32RegAux = 0UL;
    uint32_t u32RCC2 = 0UL;
    uint32_t u32RCC2Div400 = 0UL;
    uint32_t u32RegSYSDIV2 = 0UL;
    uint32_t u32RegSYSDIVLSB2 = 0UL;

    u32RCC2 = MCU__u32ReadRegister( SYSCTL_BASE, SYSCTL_RCC2_OFFSET, SYSCTL_RCC2_PWRDN2_MASK, SYSCTL_RCC2_R_PWRDN2_BIT);
    /*Verify if PLL is enable*/
     if(SYSCTL_RCC2_PWRDN2_ON == u32RCC2)
     {
         /*Initial Frequencyof PLL*/
         u32Frequency = 200000000UL;

         u32RCC2Div400 = MCU__u32ReadRegister( SYSCTL_BASE, SYSCTL_RCC2_OFFSET, SYSCTL_RCC2_DIV400_MASK, SYSCTL_RCC2_R_DIV400_BIT);
         u32RegSYSDIV2 = MCU__u32ReadRegister( SYSCTL_BASE, SYSCTL_RCC2_OFFSET, SYSCTL_RCC2_SYSDIV2_MASK, SYSCTL_RCC2_R_SYSDIV2_BIT);
         /*If PLL 400MHz is enabled, SYSDIV2LSB needs to be considered*/
         if(SYSCTL_RCC2_DIV400_400MHZ == u32RCC2Div400)
         {
             u32RegSYSDIVLSB2 = MCU__u32ReadRegister( SYSCTL_BASE, SYSCTL_RCC2_OFFSET, SYSCTL_RCC2_SYSDIV2LSB_MASK, SYSCTL_RCC2_R_SYSDIV2LSB_BIT);

             u32Frequency *= 2UL;
             u32RegAux = u32RegSYSDIV2 << 1UL;
             u32RegAux += u32RegSYSDIVLSB2;
             u32RegAux += 1UL;
             u32Frequency /= u32RegAux;
         }
         else
         {
             u32RegAux = u32RegSYSDIV2 + 1UL;
             u32Frequency /= u32RegAux;
         }
     }
    return u32Frequency;
}

static SYSCTL_nBYPASS SYSCTL_enGetOSCSourceFreq_RCC2(uint32_t *pu32Frequency)
{
    uint32_t u32Frequency = 0UL;
    uint32_t u32RCC2 = 0UL;
    SYSCTL_nBYPASS enBypass = SYSCTL_enPLL;

    u32RCC2 = MCU__u32ReadRegister( SYSCTL_BASE, SYSCTL_RCC2_OFFSET, SYSCTL_RCC2_BYPASS2_MASK, SYSCTL_RCC2_R_BYPASS2_BIT);
    if((uint32_t) 0UL != (uint32_t) pu32Frequency)
    {
        if(SYSCTL_RCC2_BYPASS2_OSC == u32RCC2)
        {
            /*OSC source/div*/
            u32Frequency = SYSCTL__u32GetOSCSourceFreq_Div( *pu32Frequency);
            enBypass = SYSCTL_enOSC;
            *pu32Frequency = u32Frequency;
        }
        else{}
    }
    return enBypass;
}

uint32_t SYSCTL__u32GetClock_RCC2(void)
{
    SYSCTL_nBYPASS enBypass = SYSCTL_enPLL;
    uint32_t u32Frequency = 0UL;

    uint32_t u32Reg = 0UL;
    uint32_t u32RegOSCSRC2 = 0UL;
    uint32_t u32RegXTAL = 0UL;

    u32RegOSCSRC2 = MCU__u32ReadRegister( SYSCTL_BASE, SYSCTL_RCC2_OFFSET, SYSCTL_RCC2_OSCSRC2_MASK, SYSCTL_RCC2_R_OSCSRC2_BIT);
    /*Identify Oscillator Source*/
    switch(u32RegOSCSRC2)
    {
    /*MOSC as OSC source*/
    case SYSCTL_RCC2_OSCSRC2_MOSC:
        u32Reg = MCU__u32ReadRegister( SYSCTL_BASE, SYSCTL_RCC_OFFSET, SYSCTL_RCC_MOSCDIS_MASK, SYSCTL_RCC_R_MOSCDIS_BIT);
        /*Verify is MOSC is enable*/
        if(SYSCTL_RCC_MOSCDIS_EN == u32Reg)
        {
            u32RegXTAL = MCU__u32ReadRegister( SYSCTL_BASE, SYSCTL_RCC_OFFSET, SYSCTL_RCC_XTAL_MASK, SYSCTL_RCC_R_XTAL_BIT);
            /*Initial Frequency, from XTAL configuration*/
            u32Frequency = SYSCTL__u32GetFreqXtal( u32RegXTAL);
            /*OSC source*/
            enBypass = SYSCTL_enGetOSCSourceFreq_RCC2( &u32Frequency);
            if(SYSCTL_enPLL == enBypass)
            {
                u32Frequency = SYSCTL_enGetPLLFreq_RCC2();
            }
        }
        else
        {
            u32Frequency = 0UL; /*Invalid configuration*/
        }
        break;
    case SYSCTL_RCC2_OSCSRC2_PIOSC:
      u32Frequency = 16000000UL;
      /*OSC source*/
      enBypass = SYSCTL_enGetOSCSourceFreq_RCC2( &u32Frequency);
      if(SYSCTL_enPLL == enBypass)
      {
          u32Frequency = SYSCTL_enGetPLLFreq_RCC2();
      }
      break;
    case SYSCTL_RCC2_OSCSRC2_PIOSC4:
      u32Frequency = 4000000UL;
      /*OSC source*/
      (void)SYSCTL_enGetOSCSourceFreq_RCC2( &u32Frequency);
      break;
    case SYSCTL_RCC2_OSCSRC2_LFIOSC:
      u32Frequency = 33000UL;
      /*OSC source*/
      (void)SYSCTL_enGetOSCSourceFreq_RCC2( &u32Frequency);
      break;
    case SYSCTL_RCC2_OSCSRC2_32_768KHZ:
      u32Frequency = 32768UL;
      /*OSC source*/
      (void)SYSCTL_enGetOSCSourceFreq_RCC2( &u32Frequency);
      break;
    default:
      break;
    }
    return u32Frequency;
}
