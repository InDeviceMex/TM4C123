/**
 *
 * @file TIMER_ModeStruct.c
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
 * @verbatim 16 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_App/TIMER_Mode/TIMER_ModeStruct.h>

#include <stdlib.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Peripheral.h>

void TIMER__vCreateModeStructPointer(TIMER_nMODE enMode,TIMER_MODE_Typedef* psMode)
{

    if(psMode!=0)
    {
        psMode->enDirection=(TIMER_nCOUNT_DIR)((uint32_t)enMode&1u);
        psMode->enAltMode=(TIMER_nALT_MODE)(((uint32_t)enMode>>4u)&1u);
        psMode->enEdgeMode=(TIMER_nEDGE_MODE)(((uint32_t)enMode>>8u)&1u);
        psMode->enSubMode=(TIMER_nSUB_MODE)(((uint32_t)enMode>>12u)&3u);
        psMode->enConfig=(TIMER_nCONFIG)(((uint32_t)enMode>>16u)&7u);
        psMode->enPWMOut=(TIMER_nPWM_OUTPUT)(((uint32_t)enMode>>20u)&1u);
        psMode->enPWMOutInit=(TIMER_nPWM_OUT_INIT)(((uint32_t)enMode>>24u)&1u);
        psMode->enEdgeEvent=(TIMER_nEDGE_EVENT)(((uint32_t)enMode>>28u)&3u);
        psMode->enSnapShot=(TIMER_nSNAPSHOT)(((uint32_t)enMode>>30u)&1u);
    }
}

TIMER_MODE_Typedef* TIMER__psCreateModeStruct(TIMER_nMODE enMode)
{
    TIMER_MODE_Typedef* psMode=0;
    #if defined ( __TI_ARM__ )
    psMode = (TIMER_MODE_Typedef*) memalign((size_t)4,(size_t)sizeof(TIMER_MODE_Typedef));
    #elif defined ( __GNUC__ )
    psMode = (TIMER_MODE_Typedef*) malloc((size_t)sizeof(TIMER_MODE_Typedef));
    #endif
    if(psMode!=0)
    {
        psMode->enDirection=(TIMER_nCOUNT_DIR)((uint32_t)enMode&1u);
        psMode->enAltMode=(TIMER_nALT_MODE)(((uint32_t)enMode>>4u)&1u);
        psMode->enEdgeMode=(TIMER_nEDGE_MODE)(((uint32_t)enMode>>8u)&1u);
        psMode->enSubMode=(TIMER_nSUB_MODE)(((uint32_t)enMode>>12u)&3u);
        psMode->enConfig=(TIMER_nCONFIG)(((uint32_t)enMode>>16u)&7u);
        psMode->enPWMOut=(TIMER_nPWM_OUTPUT)(((uint32_t)enMode>>20u)&1u);
        psMode->enPWMOutInit=(TIMER_nPWM_OUT_INIT)(((uint32_t)enMode>>24u)&1u);
        psMode->enEdgeEvent=(TIMER_nEDGE_EVENT)(((uint32_t)enMode>>28u)&3u);
        psMode->enSnapShot=(TIMER_nSNAPSHOT)(((uint32_t)enMode>>30u)&1u);
    }
    return psMode;
}

void TIMER__vDeleteModeStruct(TIMER_MODE_Typedef* psMode)
{
    free(psMode);
}



