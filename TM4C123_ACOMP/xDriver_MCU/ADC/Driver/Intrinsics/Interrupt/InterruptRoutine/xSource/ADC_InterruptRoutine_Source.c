/**
 *
 * @file ADC_InterruptRoutine_Source.c
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
 * @verbatim 19 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ADC_InterruptRoutine_Source.h>

static void ADC_vIRQSourceHandler_Dummy(void);

void (*ADC_SAMPLE__vIRQSourceHandler[(uint32_t)ADC_enMODULE_MAX +1U][(uint32_t)ADC_enSEQ_MAX + 1U])(void) =
{
 {&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy},
 {&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy},
};
void (*ADC_COMP__vIRQSourceHandler[(uint32_t)ADC_enMODULE_MAX + 1U][(uint32_t)ADC_enSEQ_MAX +1U][(uint32_t)ADC_en_COMPARATOR_MAX +1U])(void) =
{
  {
   {
       &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
       &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy
   },
   {
        &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
        &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy
    },
    {
         &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
         &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy
     },
     {
          &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
          &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy
      },
  },
  {
   {
       &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
       &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy
   },
   {
        &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
        &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy
    },
    {
         &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
         &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy
     },
     {
          &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,
          &ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy,&ADC_vIRQSourceHandler_Dummy, &ADC_vIRQSourceHandler_Dummy
      },
  },
};

static void ADC_vIRQSourceHandler_Dummy(void)
{
    while(1U)
    {
    }
}


