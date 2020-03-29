/*
 * PWM.h
 *
 *  Created on: May 31, 2018
 *      Author: GOS_TD
 */

#ifndef PWM_H_
#define PWM_H_



#include <stdint.h>
#include <SYSCTL.h>
#include <GPIO.h>
#include <NVIC.h>



#define PWM_BASE            (0x40028000)
#define PWM_OFFSET          (0x00028000)

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PWM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

typedef volatile struct
{
    volatile uint32_t GLOBALSYNC0  : 1;
    volatile uint32_t GLOBALSYNC1  : 1;
    volatile uint32_t GLOBALSYNC2  : 1;
    volatile uint32_t GLOBALSYNC3  : 1;
    const    uint32_t reserved     : 28;
}PWMCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t SYNC0     : 1;
    volatile uint32_t SYNC1     : 1;
    volatile uint32_t SYNC2     : 1;
    volatile uint32_t SYNC3     : 1;
    const    uint32_t reserved  : 28;
}PWMSYNC_TypeDef;


typedef volatile struct
{
    volatile uint32_t PWM0EN    : 1;
    volatile uint32_t PWM1EN    : 1;
    volatile uint32_t PWM2EN    : 1;
    volatile uint32_t PWM3EN    : 1;
    volatile uint32_t PWM4EN    : 1;
    volatile uint32_t PWM5EN    : 1;
    volatile uint32_t PWM6EN    : 1;
    volatile uint32_t PWM7EN    : 1;
    const    uint32_t reserved  : 24;
}PWMENABLE_TypeDef;


typedef volatile struct
{
    volatile uint32_t PWM0INV  : 1;
    volatile uint32_t PWM1INV  : 1;
    volatile uint32_t PWM2INV  : 1;
    volatile uint32_t PWM3INV  : 1;
    volatile uint32_t PWM4INV  : 1;
    volatile uint32_t PWM5INV  : 1;
    volatile uint32_t PWM6INV  : 1;
    volatile uint32_t PWM7INV  : 1;
    const    uint32_t reserved : 24;
}PWMINVERT_TypeDef;

typedef volatile struct
{
    volatile uint32_t FAULT0  : 1;
    volatile uint32_t FAULT1  : 1;
    volatile uint32_t FAULT2  : 1;
    volatile uint32_t FAULT3  : 1;
    volatile uint32_t FAULT4  : 1;
    volatile uint32_t FAULT5  : 1;
    volatile uint32_t FAULT6  : 1;
    volatile uint32_t FAULT7  : 1;
    const    uint32_t reserved: 24;
}PWMFAULT_TypeDef;


typedef volatile struct
{
    volatile uint32_t INTPWM0    : 1;
    volatile uint32_t INTPWM1    : 1;
    volatile uint32_t INTPWM2    : 1;
    volatile uint32_t INTPWM3    : 1;
    const    uint32_t reserved   : 12;
    volatile uint32_t INTFAULT0  : 1;
    volatile uint32_t INTFAULT1  : 1;
    const    uint32_t reserved1  : 14;
}PWMINTEN_TypeDef;


typedef volatile struct
{
    volatile const uint32_t INTPWM0    : 1;
    volatile const uint32_t INTPWM1    : 1;
    volatile const uint32_t INTPWM2    : 1;
    volatile const uint32_t INTPWM3    : 1;
    const    uint32_t       reserved   : 12;
    volatile const uint32_t INTFAULT0  : 1;
    volatile const uint32_t INTFAULT1  : 1;
    const    uint32_t       reserved1  : 14;
}PWMRIS_TypeDef;


typedef volatile struct
{
    volatile const uint32_t INTPWM0    : 1;
    volatile const uint32_t INTPWM1    : 1;
    volatile const uint32_t INTPWM2    : 1;
    volatile const uint32_t INTPWM3    : 1;
    const    uint32_t       reserved   : 12;
    volatile uint32_t       INTFAULT0  : 1;
    volatile uint32_t       INTFAULT1  : 1;
    const    uint32_t       reserved1  : 14;
}PWMISC_TypeDef;


typedef volatile struct
{
    volatile const uint32_t FAULT0  : 1;
    volatile const uint32_t FAULT1  : 1;
    const uint32_t          reserved: 30;
}PWMSTATUS_TypeDef;


typedef volatile struct
{
    volatile uint32_t PWM0      : 1;
    volatile uint32_t PWM1      : 1;
    volatile uint32_t PWM2      : 1;
    volatile uint32_t PWM3      : 1;
    volatile uint32_t PWM4      : 1;
    volatile uint32_t PWM5      : 1;
    volatile uint32_t PWM6      : 1;
    volatile uint32_t PWM7      : 1;
    const uint32_t    reserved  : 24;
}PWMFAULTVAL_TypeDef;

typedef volatile struct
{
    volatile uint32_t ENUPD0  : 2;
    volatile uint32_t ENUPD1  : 2;
    volatile uint32_t ENUPD2  : 2;
    volatile uint32_t ENUPD3  : 2;
    volatile uint32_t ENUPD4  : 2;
    volatile uint32_t ENUPD5  : 2;
    volatile uint32_t ENUPD6  : 2;
    volatile uint32_t ENUPD7  : 2;
    const    uint32_t reserved: 16;
}PWMENUPD_TypeDef;


typedef volatile struct
{
    volatile uint32_t ENABLE    : 1;
    volatile uint32_t MODE      : 1;
    volatile uint32_t DEBUG     : 1;
    volatile uint32_t LOADUPD   : 1;
    volatile uint32_t CMPAUPD   : 1;
    volatile uint32_t CMPBUPD   : 1;
    volatile uint32_t GENAUPD   : 2;
    volatile uint32_t GENBUPD   : 2;
    volatile uint32_t DBCTLUPD  : 2;
    volatile uint32_t DBRISEUPD : 2;
    volatile uint32_t DBFALLUPD : 2;
    volatile uint32_t FLTSRC    : 1;
    volatile uint32_t MINFLTPER : 1;
    volatile uint32_t LATCH     : 1;
    const    uint32_t reserved  : 13;
}PWM0CTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t ENABLE    : 1;
    volatile uint32_t MODE      : 1;
    volatile uint32_t DEBUG     : 1;
    volatile uint32_t LOADUPD   : 1;
    volatile uint32_t CMPAUPD   : 1;
    volatile uint32_t CMPBUPD   : 1;
    volatile uint32_t GENAUPD   : 2;
    volatile uint32_t GENBUPD   : 2;
    volatile uint32_t DBCTLUPD  : 2;
    volatile uint32_t DBRISEUPD : 2;
    volatile uint32_t DBFALLUPD : 2;
    volatile uint32_t FLTSRC    : 1;
    volatile uint32_t MINFLTPER : 1;
    volatile uint32_t LATCH     : 1;
    const    uint32_t reserved  : 13;
}PWM1CTL_TypeDef;


typedef volatile struct
{
    volatile uint32_t ENABLE    : 1;
    volatile uint32_t MODE      : 1;
    volatile uint32_t DEBUG     : 1;
    volatile uint32_t LOADUPD   : 1;
    volatile uint32_t CMPAUPD   : 1;
    volatile uint32_t CMPBUPD   : 1;
    volatile uint32_t GENAUPD   : 2;
    volatile uint32_t GENBUPD   : 2;
    volatile uint32_t DBCTLUPD  : 2;
    volatile uint32_t DBRISEUPD : 2;
    volatile uint32_t DBFALLUPD : 2;
    volatile uint32_t FLTSRC    : 1;
    volatile uint32_t MINFLTPER : 1;
    volatile uint32_t LATCH     : 1;
    const    uint32_t reserved  : 13;
}PWM2CTL_TypeDef;


typedef volatile struct
{
    volatile uint32_t ENABLE    : 1;
    volatile uint32_t MODE      : 1;
    volatile uint32_t DEBUG     : 1;
    volatile uint32_t LOADUPD   : 1;
    volatile uint32_t CMPAUPD   : 1;
    volatile uint32_t CMPBUPD   : 1;
    volatile uint32_t GENAUPD   : 2;
    volatile uint32_t GENBUPD   : 2;
    volatile uint32_t DBCTLUPD  : 2;
    volatile uint32_t DBRISEUPD : 2;
    volatile uint32_t DBFALLUPD : 2;
    volatile uint32_t FLTSRC    : 1;
    volatile uint32_t MINFLTPER : 1;
    volatile uint32_t LATCH     : 1;
    const    uint32_t reserved  : 13;
}PWM3CTL_TypeDef;



typedef volatile struct
{
    volatile uint32_t INTCNTZERO  : 1;
    volatile uint32_t INTCNTLOAD  : 1;
    volatile uint32_t INTCMPAU    : 1;
    volatile uint32_t INTCMPAD    : 1;
    volatile uint32_t INTCMPBU    : 1;
    volatile uint32_t INTCMPBD    : 1;
    const    uint32_t reserved    : 2;
    volatile uint32_t TRCNTZERO   : 1;
    volatile uint32_t TRCNTLOAD   : 1;
    volatile uint32_t TRCMPAU     : 1;
    volatile uint32_t TRCMPAD     : 1;
    volatile uint32_t TRCMPBU     : 1;
    volatile uint32_t TRCMPBD     : 1;
    const uint32_t    reserved1   : 18;
}PWM0INTEN_TypeDef;


typedef volatile struct
{
    volatile uint32_t INTCNTZERO  : 1;
    volatile uint32_t INTCNTLOAD  : 1;
    volatile uint32_t INTCMPAU    : 1;
    volatile uint32_t INTCMPAD    : 1;
    volatile uint32_t INTCMPBU    : 1;
    volatile uint32_t INTCMPBD    : 1;
    const    uint32_t reserved    : 2;
    volatile uint32_t TRCNTZERO   : 1;
    volatile uint32_t TRCNTLOAD   : 1;
    volatile uint32_t TRCMPAU     : 1;
    volatile uint32_t TRCMPAD     : 1;
    volatile uint32_t TRCMPBU     : 1;
    volatile uint32_t TRCMPBD     : 1;
    const uint32_t    reserved1   : 18;
}PWM1INTEN_TypeDef;


typedef volatile struct
{
    volatile uint32_t INTCNTZERO  : 1;
    volatile uint32_t INTCNTLOAD  : 1;
    volatile uint32_t INTCMPAU    : 1;
    volatile uint32_t INTCMPAD    : 1;
    volatile uint32_t INTCMPBU    : 1;
    volatile uint32_t INTCMPBD    : 1;
    const    uint32_t reserved    : 2;
    volatile uint32_t TRCNTZERO   : 1;
    volatile uint32_t TRCNTLOAD   : 1;
    volatile uint32_t TRCMPAU     : 1;
    volatile uint32_t TRCMPAD     : 1;
    volatile uint32_t TRCMPBU     : 1;
    volatile uint32_t TRCMPBD     : 1;
    const uint32_t    reserved1   : 18;
}PWM2INTEN_TypeDef;




typedef volatile struct
{
    volatile uint32_t INTCNTZERO  : 1;
    volatile uint32_t INTCNTLOAD  : 1;
    volatile uint32_t INTCMPAU    : 1;
    volatile uint32_t INTCMPAD    : 1;
    volatile uint32_t INTCMPBU    : 1;
    volatile uint32_t INTCMPBD    : 1;
    const    uint32_t reserved    : 2;
    volatile uint32_t TRCNTZERO   : 1;
    volatile uint32_t TRCNTLOAD   : 1;
    volatile uint32_t TRCMPAU     : 1;
    volatile uint32_t TRCMPAD     : 1;
    volatile uint32_t TRCMPBU     : 1;
    volatile uint32_t TRCMPBD     : 1;
    const uint32_t    reserved1   : 18;
}PWM3INTEN_TypeDef;



typedef volatile struct
{
    volatile const uint32_t INTCNTZERO : 1;
    volatile const uint32_t INTCNTLOAD : 1;
    volatile const uint32_t INTCMPAU   : 1;
    volatile const uint32_t INTCMPAD   : 1;
    volatile const uint32_t INTCMPBU   : 1;
    volatile const uint32_t INTCMPBD   : 1;
    const    uint32_t       reserved   : 26;
}PWM0RIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t INTCNTZERO : 1;
    volatile const uint32_t INTCNTLOAD : 1;
    volatile const uint32_t INTCMPAU   : 1;
    volatile const uint32_t INTCMPAD   : 1;
    volatile const uint32_t INTCMPBU   : 1;
    volatile const uint32_t INTCMPBD   : 1;
    const    uint32_t       reserved   : 26;
}PWM1RIS_TypeDef;


typedef volatile struct
{
    volatile const uint32_t INTCNTZERO : 1;
    volatile const uint32_t INTCNTLOAD : 1;
    volatile const uint32_t INTCMPAU   : 1;
    volatile const uint32_t INTCMPAD   : 1;
    volatile const uint32_t INTCMPBU   : 1;
    volatile const uint32_t INTCMPBD   : 1;
    const    uint32_t       reserved   : 26;
}PWM2RIS_TypeDef;


typedef volatile struct
{
    volatile const uint32_t INTCNTZERO : 1;
    volatile const uint32_t INTCNTLOAD : 1;
    volatile const uint32_t INTCMPAU   : 1;
    volatile const uint32_t INTCMPAD   : 1;
    volatile const uint32_t INTCMPBU   : 1;
    volatile const uint32_t INTCMPBD   : 1;
    const    uint32_t       reserved   : 26;
}PWM3RIS_TypeDef;



typedef volatile struct
{
    volatile uint32_t INTCNTZERO : 1;
    volatile uint32_t INTCNTLOAD : 1;
    volatile uint32_t INTCMPAU   : 1;
    volatile uint32_t INTCMPAD   : 1;
    volatile uint32_t INTCMPBU   : 1;
    volatile uint32_t INTCMPBD   : 1;
    const    uint32_t reserved   : 26;
}PWM0ISC_TypeDef;



typedef volatile struct
{
    volatile uint32_t INTCNTZERO : 1;
    volatile uint32_t INTCNTLOAD : 1;
    volatile uint32_t INTCMPAU   : 1;
    volatile uint32_t INTCMPAD   : 1;
    volatile uint32_t INTCMPBU   : 1;
    volatile uint32_t INTCMPBD   : 1;
    const    uint32_t reserved   : 26;
}PWM1ISC_TypeDef;



typedef volatile struct
{
    volatile uint32_t INTCNTZERO : 1;
    volatile uint32_t INTCNTLOAD : 1;
    volatile uint32_t INTCMPAU   : 1;
    volatile uint32_t INTCMPAD   : 1;
    volatile uint32_t INTCMPBU   : 1;
    volatile uint32_t INTCMPBD   : 1;
    const    uint32_t reserved   : 26;
}PWM2ISC_TypeDef;



typedef volatile struct
{
    volatile uint32_t INTCNTZERO : 1;
    volatile uint32_t INTCNTLOAD : 1;
    volatile uint32_t INTCMPAU   : 1;
    volatile uint32_t INTCMPAD   : 1;
    volatile uint32_t INTCMPBU   : 1;
    volatile uint32_t INTCMPBD   : 1;
    const    uint32_t reserved   : 26;
}PWM3ISC_TypeDef;


typedef volatile struct
{
    volatile uint32_t LOAD      : 16;
    const    uint32_t reserved  : 16;
}PWM0LOAD_TypeDef;



typedef volatile struct
{
    volatile uint32_t LOAD      : 16;
    const    uint32_t reserved  : 16;
}PWM1LOAD_TypeDef;


typedef volatile struct
{
    volatile uint32_t LOAD      : 16;
    const    uint32_t reserved  : 16;
}PWM2LOAD_TypeDef;



typedef volatile struct
{
    volatile uint32_t LOAD      : 16;
    const    uint32_t reserved  : 16;
}PWM3LOAD_TypeDef;



typedef volatile struct
{
    volatile const uint32_t COUNT      : 16;
    const    uint32_t       reserved   : 16;
}PWM0COUNT_TypeDef;



typedef volatile struct
{
    volatile const uint32_t COUNT      : 16;
    const    uint32_t       reserved   : 16;
}PWM1COUNT_TypeDef;


typedef volatile struct
{
    volatile const uint32_t COUNT      : 16;
    const    uint32_t       reserved   : 16;
}PWM2COUNT_TypeDef;



typedef volatile struct
{
    volatile const uint32_t COUNT      : 16;
    const    uint32_t       reserved   : 16;
}PWM3COUNT_TypeDef;







typedef volatile struct
{
    volatile uint32_t COMPA      : 16;
    const    uint32_t reserved   : 16;
}PWM0CMPA_TypeDef;



typedef volatile struct
{
    volatile uint32_t COMPA      : 16;
    const    uint32_t reserved   : 16;
}PWM1CMPA_TypeDef;


typedef volatile struct
{
    volatile uint32_t COMPA      : 16;
    const    uint32_t reserved   : 16;
}PWM2CMPA_TypeDef;



typedef volatile struct
{
    volatile uint32_t COMPA      : 16;
    const    uint32_t reserved   : 16;
}PWM3CMPA_TypeDef;





typedef volatile struct
{
    volatile uint32_t COMPB     : 16;
    const    uint32_t reserved  : 16;
}PWM0CMPB_TypeDef;



typedef volatile struct
{
    volatile uint32_t COMPB     : 16;
    const    uint32_t reserved  : 16;
}PWM1CMPB_TypeDef;


typedef volatile struct
{
    volatile uint32_t COMPB     : 16;
    const    uint32_t reserved  : 16;
}PWM2CMPB_TypeDef;



typedef volatile struct
{
    volatile uint32_t COMPB     : 16;
    const    uint32_t reserved  : 16;
}PWM3CMPB_TypeDef;



typedef volatile struct
{
    volatile uint32_t ACTZERO   : 2;
    volatile uint32_t ACTLOAD   : 2;
    volatile uint32_t ACTCMPAU  : 2;
    volatile uint32_t ACTCMPAD  : 2;
    volatile uint32_t ACTCMPBU  : 2;
    volatile uint32_t ACTCMPBD  : 2;
    const    uint32_t reserved  : 20;
}PWM0GENA_TypeDef;


typedef volatile struct
{
    volatile uint32_t ACTZERO   : 2;
    volatile uint32_t ACTLOAD   : 2;
    volatile uint32_t ACTCMPAU  : 2;
    volatile uint32_t ACTCMPAD  : 2;
    volatile uint32_t ACTCMPBU  : 2;
    volatile uint32_t ACTCMPBD  : 2;
    const    uint32_t reserved  : 20;
}PWM1GENA_TypeDef;



typedef volatile struct
{
    volatile uint32_t ACTZERO   : 2;
    volatile uint32_t ACTLOAD   : 2;
    volatile uint32_t ACTCMPAU  : 2;
    volatile uint32_t ACTCMPAD  : 2;
    volatile uint32_t ACTCMPBU  : 2;
    volatile uint32_t ACTCMPBD  : 2;
    const    uint32_t reserved  : 20;
}PWM2GENA_TypeDef;



typedef volatile struct
{
    volatile uint32_t ACTZERO   : 2;
    volatile uint32_t ACTLOAD   : 2;
    volatile uint32_t ACTCMPAU  : 2;
    volatile uint32_t ACTCMPAD  : 2;
    volatile uint32_t ACTCMPBU  : 2;
    volatile uint32_t ACTCMPBD  : 2;
    const    uint32_t reserved  : 20;
}PWM3GENA_TypeDef;




typedef volatile struct
{
    volatile uint32_t ACTZERO   : 2;
    volatile uint32_t ACTLOAD   : 2;
    volatile uint32_t ACTCMPAU  : 2;
    volatile uint32_t ACTCMPAD  : 2;
    volatile uint32_t ACTCMPBU  : 2;
    volatile uint32_t ACTCMPBD  : 2;
    const    uint32_t reserved  : 20;
}PWM0GENB_TypeDef;


typedef volatile struct
{
    volatile uint32_t ACTZERO   : 2;
    volatile uint32_t ACTLOAD   : 2;
    volatile uint32_t ACTCMPAU  : 2;
    volatile uint32_t ACTCMPAD  : 2;
    volatile uint32_t ACTCMPBU  : 2;
    volatile uint32_t ACTCMPBD  : 2;
    const    uint32_t reserved  : 20;
}PWM1GENB_TypeDef;



typedef volatile struct
{
    volatile uint32_t ACTZERO   : 2;
    volatile uint32_t ACTLOAD   : 2;
    volatile uint32_t ACTCMPAU  : 2;
    volatile uint32_t ACTCMPAD  : 2;
    volatile uint32_t ACTCMPBU  : 2;
    volatile uint32_t ACTCMPBD  : 2;
    const    uint32_t reserved  : 20;
}PWM2GENB_TypeDef;



typedef volatile struct
{
    volatile uint32_t ACTZERO   : 2;
    volatile uint32_t ACTLOAD   : 2;
    volatile uint32_t ACTCMPAU  : 2;
    volatile uint32_t ACTCMPAD  : 2;
    volatile uint32_t ACTCMPBU  : 2;
    volatile uint32_t ACTCMPBD  : 2;
    const    uint32_t reserved  : 20;
}PWM3GENB_TypeDef;





typedef volatile struct
{
    volatile uint32_t ENABLE      : 1;
    const    uint32_t reserved    : 31;
}PWM0DBCTL_TypeDef;


typedef volatile struct
{
    volatile uint32_t ENABLE      : 1;
    const    uint32_t reserved    : 31;
}PWM1DBCTL_TypeDef;



typedef volatile struct
{
    volatile uint32_t ENABLE      : 1;
    const    uint32_t reserved    : 31;
}PWM2DBCTL_TypeDef;


typedef volatile struct
{
    volatile uint32_t ENABLE      : 1;
    const    uint32_t reserved    : 31;
}PWM3DBCTL_TypeDef;




typedef volatile struct
{
    volatile uint32_t RISEDELAY  : 12;
    const    uint32_t reserved   : 20;
}PWM0DBRISE_TypeDef;


typedef volatile struct
{
    volatile uint32_t RISEDELAY  : 12;
    const    uint32_t reserved   : 20;
}PWM1DBRISE_TypeDef;

typedef volatile struct
{
    volatile uint32_t RISEDELAY  : 12;
    const    uint32_t reserved   : 20;
}PWM2DBRISE_TypeDef;


typedef volatile struct
{
    volatile uint32_t RISEDELAY  : 12;
    const    uint32_t reserved   : 20;
}PWM3DBRISE_TypeDef;






typedef volatile struct
{
    volatile uint32_t FALLDELAY  : 12;
    const    uint32_t reserved   : 20;
}PWM0DBFALL_TypeDef;


typedef volatile struct
{
    volatile uint32_t FALLDELAY  : 12;
    const    uint32_t reserved   : 20;
}PWM1DBFALL_TypeDef;

typedef volatile struct
{
    volatile uint32_t FALLDELAY  : 12;
    const    uint32_t reserved   : 20;
}PWM2DBFALL_TypeDef;


typedef volatile struct
{
    volatile uint32_t FALLDELAY  : 12;
    const    uint32_t reserved   : 20;
}PWM3DBFALL_TypeDef;




typedef volatile struct
{
    volatile uint32_t FAULT0      : 1;
    volatile uint32_t FAULT1      : 1;
    const    uint32_t reserved    : 30;
}PWM0FLTSRC0_TypeDef;


typedef volatile struct
{
    volatile uint32_t FAULT0      : 1;
    volatile uint32_t FAULT1      : 1;
    const    uint32_t reserved    : 30;
}PWM1FLTSRC0_TypeDef;

typedef volatile struct
{
    volatile uint32_t FAULT0      : 1;
    volatile uint32_t FAULT1      : 1;
    const    uint32_t reserved    : 30;
}PWM2FLTSRC0_TypeDef;


typedef volatile struct
{
    volatile uint32_t FAULT0      : 1;
    volatile uint32_t FAULT1      : 1;
    const    uint32_t reserved    : 30;
}PWM3FLTSRC0_TypeDef;


typedef volatile struct
{
    volatile uint32_t DCMP0      : 1;
    volatile uint32_t DCMP1      : 1;
    volatile uint32_t DCMP2      : 1;
    volatile uint32_t DCMP3      : 1;
    volatile uint32_t DCMP4      : 1;
    volatile uint32_t DCMP5      : 1;
    volatile uint32_t DCMP6      : 1;
    volatile uint32_t DCMP7      : 1;
    const    uint32_t reserved   : 24;
}PWM0FLTSRC1_TypeDef;


typedef volatile struct
{
    volatile uint32_t DCMP0      : 1;
    volatile uint32_t DCMP1      : 1;
    volatile uint32_t DCMP2      : 1;
    volatile uint32_t DCMP3      : 1;
    volatile uint32_t DCMP4      : 1;
    volatile uint32_t DCMP5      : 1;
    volatile uint32_t DCMP6      : 1;
    volatile uint32_t DCMP7      : 1;
    const    uint32_t reserved   : 24;
}PWM1FLTSRC1_TypeDef;


typedef volatile struct
{
    volatile uint32_t DCMP0      : 1;
    volatile uint32_t DCMP1      : 1;
    volatile uint32_t DCMP2      : 1;
    volatile uint32_t DCMP3      : 1;
    volatile uint32_t DCMP4      : 1;
    volatile uint32_t DCMP5      : 1;
    volatile uint32_t DCMP6      : 1;
    volatile uint32_t DCMP7      : 1;
    const    uint32_t reserved   : 24;
}PWM2FLTSRC1_TypeDef;


typedef volatile struct
{
    volatile uint32_t DCMP0      : 1;
    volatile uint32_t DCMP1      : 1;
    volatile uint32_t DCMP2      : 1;
    volatile uint32_t DCMP3      : 1;
    volatile uint32_t DCMP4      : 1;
    volatile uint32_t DCMP5      : 1;
    volatile uint32_t DCMP6      : 1;
    volatile uint32_t DCMP7      : 1;
    const    uint32_t reserved   : 24;
}PWM3FLTSRC1_TypeDef;




typedef volatile struct
{
    volatile uint32_t MFP       : 16;
    const    uint32_t reserved  : 16;
}PWM0MINFLTPER_TypeDef;

typedef volatile struct
{
    volatile uint32_t MFP       : 16;
    const    uint32_t reserved  : 16;
}PWM1MINFLTPER_TypeDef;

typedef volatile struct
{
    volatile uint32_t MFP       : 16;
    const    uint32_t reserved  : 16;
}PWM2MINFLTPER_TypeDef;

typedef volatile struct
{
    volatile uint32_t MFP       : 16;
    const    uint32_t reserved  : 16;
}PWM3MINFLTPER_TypeDef;


typedef volatile struct
{
    volatile uint32_t FAULT0      : 1;
    volatile uint32_t FAULT1      : 1;
    const    uint32_t reserved    : 30;
}PWM0FLTSEN_TypeDef;

typedef volatile struct
{
    volatile uint32_t FAULT0      : 1;
    volatile uint32_t FAULT1      : 1;
    const    uint32_t reserved    : 30;
}PWM1FLTSEN_TypeDef;



typedef volatile struct
{
    volatile uint32_t FAULT0      : 1;
    volatile uint32_t FAULT1      : 1;
    const    uint32_t reserved    : 30;
}PWM0FLTSTAT0_TypeDef;

typedef volatile struct
{
    volatile uint32_t FAULT0      : 1;
    volatile uint32_t FAULT1      : 1;
    const    uint32_t reserved    : 30;
}PWM1FLTSTAT0_TypeDef;

typedef volatile struct
{
    volatile uint32_t FAULT0      : 1;
    volatile uint32_t FAULT1      : 1;
    const    uint32_t reserved    : 30;
}PWM2FLTSTAT0_TypeDef;

typedef volatile struct
{
    volatile uint32_t FAULT0      : 1;
    volatile uint32_t FAULT1      : 1;
    const    uint32_t reserved    : 30;
}PWM3FLTSTAT0_TypeDef;



typedef volatile struct
{
    volatile uint32_t DCMP0      : 1;
    volatile uint32_t DCMP1      : 1;
    volatile uint32_t DCMP2      : 1;
    volatile uint32_t DCMP3      : 1;
    volatile uint32_t DCMP4      : 1;
    volatile uint32_t DCMP5      : 1;
    volatile uint32_t DCMP6      : 1;
    volatile uint32_t DCMP7      : 1;
    const    uint32_t reserved   : 24;
}PWM0FLTSTAT1_TypeDef;


typedef volatile struct
{
    volatile uint32_t DCMP0      : 1;
    volatile uint32_t DCMP1      : 1;
    volatile uint32_t DCMP2      : 1;
    volatile uint32_t DCMP3      : 1;
    volatile uint32_t DCMP4      : 1;
    volatile uint32_t DCMP5      : 1;
    volatile uint32_t DCMP6      : 1;
    volatile uint32_t DCMP7      : 1;
    const    uint32_t reserved   : 24;
}PWM1FLTSTAT1_TypeDef;


typedef volatile struct
{
    volatile uint32_t DCMP0      : 1;
    volatile uint32_t DCMP1      : 1;
    volatile uint32_t DCMP2      : 1;
    volatile uint32_t DCMP3      : 1;
    volatile uint32_t DCMP4      : 1;
    volatile uint32_t DCMP5      : 1;
    volatile uint32_t DCMP6      : 1;
    volatile uint32_t DCMP7      : 1;
    const    uint32_t reserved   : 24;
}PWM2FLTSTAT1_TypeDef;


typedef volatile struct
{
    volatile uint32_t DCMP0      : 1;
    volatile uint32_t DCMP1      : 1;
    volatile uint32_t DCMP2      : 1;
    volatile uint32_t DCMP3      : 1;
    volatile uint32_t DCMP4      : 1;
    volatile uint32_t DCMP5      : 1;
    volatile uint32_t DCMP6      : 1;
    volatile uint32_t DCMP7      : 1;
    const    uint32_t reserved   : 24;
}PWM3FLTSTAT1_TypeDef;


typedef volatile struct
{
    volatile uint32_t GCNT      : 4;
    volatile uint32_t FCNT      : 4;
    volatile uint32_t ESYNC     : 1;
    volatile uint32_t EFAULT    : 1;
    volatile uint32_t ONE       : 1;
    const    uint32_t reserved  : 21;
}PWMPP_TypeDef;


typedef volatile struct
{
    union
    {
        volatile uint32_t   PWMCTL;
        PWMCTL_TypeDef      PWMCTL_Bit;
    };
    union
    {
        volatile uint32_t   PWMSYNC;
        PWMSYNC_TypeDef     PWMSYNC_Bit;
    };
    union
    {
        volatile uint32_t   PWMENABLE;
        PWMENABLE_TypeDef   PWMENABLE_Bit;
    };
    union
    {
        volatile uint32_t   PWMINVERT;
        PWMINVERT_TypeDef   PWMINVERTL_Bit;
    };
    union
    {
        volatile uint32_t   PWMFAULT;
        PWMFAULT_TypeDef    PWMFAULT_Bit;
    };
    union
    {
        volatile uint32_t   PWMINTEN;
        PWMINTEN_TypeDef    PWMINTEN_Bit;
    };
    union
    {
        volatile uint32_t   PWMRIS;
        PWMRIS_TypeDef      PWMRIS_Bit;
    };
    union
    {
        volatile uint32_t   PWMISC;
        PWMISC_TypeDef      PWMISC_Bit;
    };
    union
    {
        volatile uint32_t   PWMSTATUS;
        PWMSTATUS_TypeDef   PWMSTATUS_Bit;
    };
    union
    {
        volatile uint32_t   PWMFAULTVAL;
        PWMFAULTVAL_TypeDef PWMFAULTVAL_Bit;
    };
    union
    {
        volatile uint32_t   PWMENUPD;
        PWMENUPD_TypeDef    PWMENUPD_Bit;
    };
    const uint32_t          reserved[5];
    union
    {
        volatile uint32_t   PWM0CTL;
        PWM0CTL_TypeDef     PWM0CTL_Bit;
    };
    union
    {
        volatile uint32_t   PWM0INTEN;
        PWM0INTEN_TypeDef   PWM0INTEN_Bit;
    };
    union
    {
        volatile uint32_t   PWM0RIS;
        PWM0RIS_TypeDef     PWM0RIS_Bit;
    };
    union
    {
        volatile uint32_t   PWM0ISC;
        PWM0ISC_TypeDef     PWM0ISC_Bit;
    };
    union
    {
        volatile uint32_t   PWM0LOAD;
        PWM0LOAD_TypeDef    PWM0LOAD_Bit;
    };
    union
    {
        volatile uint32_t   PWM0COUNT;
        PWM0COUNT_TypeDef   PWM0COUNT_Bit;
    };
    union
    {
        volatile uint32_t   PWM0CMPA;
        PWM0CMPA_TypeDef    PWM0CMPA_Bit;
    };
    union
    {
        volatile uint32_t   PWM0CMPB;
        PWM0CMPB_TypeDef    PWM0CMPB_Bit;
    };
    union
    {
        volatile uint32_t   PWM0GENA;
        PWM0GENA_TypeDef    PWM0GENA_Bit;
    };
    union
    {
        volatile uint32_t   PWM0GENB;
        PWM0GENB_TypeDef    PWM0GENB_Bit;
    };
    union
    {
        volatile uint32_t   PWM0DBCTL;
        PWM0DBCTL_TypeDef   PWM0DBCTL_Bit;
    };
    union
    {
        volatile uint32_t   PWM0DBRISE;
        PWM0DBRISE_TypeDef  PWM0DBRISE_Bit;
    };
    union
    {
        volatile uint32_t   PWM0DBFALL;
        PWM0DBFALL_TypeDef  PWM0DBFALL_Bit;
    };
    union
    {
        volatile uint32_t   PWM0FLTSRC0;
        PWM0FLTSRC0_TypeDef PWM0FLTSRC0_Bit;
    };
    union
    {
        volatile uint32_t   PWM0FLTSRC1;
        PWM0FLTSRC1_TypeDef PWM0FLTSRC1_Bit;
    };
    union
    {
        volatile uint32_t   PWM0MINFLTPER;
        PWM0MINFLTPER_TypeDef  PWM0MINFLTPER_Bit;
    };
    union
    {
        volatile uint32_t   PWM1CTL;
        PWM1CTL_TypeDef     PWM1CTL_Bit;
    };
    union
    {
        volatile uint32_t   PWM1INTEN;
        PWM1INTEN_TypeDef   PWM1INTEN_Bit;
    };
    union
    {
        volatile uint32_t   PWM1RIS;
        PWM1RIS_TypeDef     PWM1RIS_Bit;
    };
    union
    {
        volatile uint32_t   PWM1ISC;
        PWM1ISC_TypeDef     PWM1ISC_Bit;
    };
    union
    {
        volatile uint32_t   PWM1LOAD;
        PWM1LOAD_TypeDef    PWM1LOAD_Bit;
    };
    union
    {
        volatile uint32_t   PWM1COUNT;
        PWM1COUNT_TypeDef   PWM1COUNT_Bit;
    };
    union
    {
        volatile uint32_t   PWM1CMPA;
        PWM1CMPA_TypeDef    PWM1CMPA_Bit;
    };
    union
    {
        volatile uint32_t   PWM1CMPB;
        PWM1CMPB_TypeDef    PWM1CMPB_Bit;
    };
    union
    {
        volatile uint32_t   PWM1GENA;
        PWM1GENA_TypeDef    PWM1GENA_Bit;
    };
    union
    {
        volatile uint32_t   PWM1GENB;
        PWM1GENB_TypeDef    PWM1GENB_Bit;
    };
    union
    {
        volatile uint32_t   PWM1DBCTL;
        PWM1DBCTL_TypeDef   PWM1DBCTL_Bit;
    };
    union
    {
        volatile uint32_t   PWM1DBRISE;
        PWM1DBRISE_TypeDef  PWM1DBRISE_Bit;
    };
    union
    {
        volatile uint32_t   PWM1DBFALL;
        PWM1DBFALL_TypeDef  PWM1DBFALL_Bit;
    };
    union
    {
        volatile uint32_t   PWM1FLTSRC0;
        PWM1FLTSRC0_TypeDef PWM1FLTSRC0_Bit;
    };
    union
    {
        volatile uint32_t   PWM1FLTSRC1;
        PWM1FLTSRC1_TypeDef PWM1FLTSRC1_Bit;
    };
    union
    {
        volatile uint32_t   PWM1MINFLTPER;
        PWM1MINFLTPER_TypeDef   PWM1MINFLTPER_Bit;
    };
    union
    {
        volatile uint32_t   PWM2CTL;
        PWM2CTL_TypeDef     PWM2CTL_Bit;
    };
    union
    {
        volatile uint32_t   PWM2INTEN;
        PWM2INTEN_TypeDef   PWM2INTEN_Bit;
    };
    union
    {
        volatile uint32_t   PWM2RIS;
        PWM2RIS_TypeDef     PWM2RIS_Bit;
    };
    union
    {
        volatile uint32_t   PWM2ISC;
        PWM2ISC_TypeDef     PWM2ISC_Bit;
    };
    union
    {
        volatile uint32_t   PWM2LOAD;
        PWM2LOAD_TypeDef    PWM2LOAD_Bit;
    };
    union
    {
        volatile uint32_t   PWM2COUNT;
        PWM2COUNT_TypeDef   PWM2COUNT_Bit;
    };
    union
    {
        volatile uint32_t   PWM2CMPA;
        PWM2CMPA_TypeDef    PWM2CMPA_Bit;
    };
    union
    {
        volatile uint32_t   PWM2CMPB;
        PWM2CMPB_TypeDef    PWM2CMPB_Bit;
    };
    union
    {
        volatile uint32_t   PWM2GENA;
        PWM2GENA_TypeDef    PWM2GENA_Bit;
    };
    union
    {
        volatile uint32_t   PWM2GENB;
        PWM2GENB_TypeDef    PWM2GENB_Bit;
    };
    union
    {
        volatile uint32_t   PWM2DBCTL;
        PWM2DBCTL_TypeDef   PWM2DBCTL_Bit;
    };
    union
    {
        volatile uint32_t   PWM2DBRISE;
        PWM2DBRISE_TypeDef  PWM2DBRISE_Bit;
    };
    union
    {
        volatile uint32_t   PWM2DBFALL;
        PWM2DBFALL_TypeDef  PWM2DBFALL_Bit;
    };
    union
    {
        volatile uint32_t   PWM2FLTSRC0;
        PWM2FLTSRC0_TypeDef PWM2FLTSRC0_Bit;
    };
    union
    {
        volatile uint32_t   PWM2FLTSRC1;
        PWM2FLTSRC1_TypeDef PWM2FLTSRC1_Bit;
    };
    union
    {
        volatile uint32_t   PWM2MINFLTPER;
        PWM2MINFLTPER_TypeDef   PWM2MINFLTPER_Bit;
    };
    union
    {
        volatile uint32_t   PWM3CTL;
        PWM3CTL_TypeDef     PWM3CTL_Bit;
    };
    union
    {
        volatile uint32_t   PWM3INTEN;
        PWM3INTEN_TypeDef   PWM3INTEN_Bit;
    };
    union
    {
        volatile uint32_t   PWM3RIS;
        PWM3RIS_TypeDef     PWM3RIS_Bit;
    };
    union
    {
        volatile uint32_t   PWM3ISC;
        PWM3ISC_TypeDef     PWM3ISC_Bit;
    };
    union
    {
        volatile uint32_t   PWM3LOAD;
        PWM3LOAD_TypeDef    PWM3LOAD_Bit;
    };
    union
    {
        volatile uint32_t   PWM3COUNT;
        PWM3COUNT_TypeDef   PWM3COUNT_Bit;
    };
    union
    {
        volatile uint32_t   PWM3CMPA;
        PWM3CMPA_TypeDef    PWM3CMPA_Bit;
    };
    union
    {
        volatile uint32_t   PWM3CMPB;
        PWM3CMPB_TypeDef    PWM3CMPB_Bit;
    };
    union
    {
        volatile uint32_t   PWM3GENA;
        PWM3GENA_TypeDef    PWM3GENA_Bit;
    };
    union
    {
        volatile uint32_t   PWM3GENB;
        PWM3GENB_TypeDef    PWM3GENB_Bit;
    };
    union
    {
        volatile uint32_t   PWM3DBCTL;
        PWM3DBCTL_TypeDef   PWM3DBCTL_Bit;
    };
    union
    {
        volatile uint32_t   PWM3DBRISE;
        PWM3DBRISE_TypeDef  PWM3DBRISE_Bit;
    };
    union
    {
        volatile uint32_t   PWM3DBFALL;
        PWM3DBFALL_TypeDef  PWM3DBFALL_Bit;
    };
    union
    {
        volatile uint32_t   PWM3FLTSRC0;
        PWM3FLTSRC0_TypeDef PWM3FLTSRC0_Bit;
    };
    union
    {
        volatile uint32_t   PWM3FLTSRC1;
        PWM3FLTSRC1_TypeDef PWM3FLTSRC1_Bit;
    };
    union
    {
        volatile uint32_t   PWM3MINFLTPER;
        PWM3MINFLTPER_TypeDef   PWM3MINFLTPER_Bit;
    };
    const uint32_t          reserved1[432];
    union
    {
        volatile uint32_t   PWM0FLTSEN;
        PWM0FLTSEN_TypeDef  PWM0FLTSEN_Bit;
    };
    union
    {
        volatile uint32_t   PWM0FLTSTAT0;
        PWM0FLTSTAT0_TypeDef PWM0FLTSTAT0_Bit;
    };
    union
    {
        volatile uint32_t   PWM0FLTSTAT1;
        PWM0FLTSTAT1_TypeDef    PWM0FLTSTAT1_Bit;
    };
    const uint32_t          reserved2[29];
    union
    {
        volatile uint32_t   PWM1FLTSEN;
        PWM1FLTSEN_TypeDef  PWM1FLTSEN_Bit;
    };
    union
    {
        volatile uint32_t       PWM1FLTSTAT0;
        PWM1FLTSTAT0_TypeDef    PWM1FLTSTAT0_Bit;
    };
    union
    {
        volatile uint32_t   PWM1FLTSTAT1;
        PWM1FLTSTAT1_TypeDef    PWM1FLTSTAT1_Bit;
    };
    const uint32_t          reserved3[30];
    union
    {
        volatile uint32_t   PWM2FLTSTAT0;
        PWM2FLTSTAT0_TypeDef    PWM2FLTSTAT0_Bit;
    };
    union
    {
        volatile uint32_t   PWM2FLTSTAT1;
        PWM2FLTSTAT1_TypeDef    PWM2FLTSTAT1_Bit;
    };
    const uint32_t          reserved4[30];
    union
    {
        volatile uint32_t       PWM3FLTSTAT0;
        PWM3FLTSTAT0_TypeDef    PWM3FLTSTAT0_Bit;
    };
    union
    {
        volatile uint32_t       PWM3FLTSTAT1;
        PWM3FLTSTAT1_TypeDef    PWM3FLTSTAT1_Bit;
    };
    const uint32_t              reserved5[397];
    union
    {
        volatile uint32_t       PWMPP;
        PWMPP_TypeDef           PWMPP_Bit;
    };
    const uint32_t  reserved6[15];
}PWM_TypeDef;

typedef volatile struct
{
    PWM_TypeDef PW[2];
}PWMS_TypeDef;




#define PWM0_BASE         (0x40028000)
#define PWM0_OFFSET       (0x00028000)
#define PWM1_BASE         (0x40029000)
#define PWM1_OFFSET       (0x00029000)

#define PWM               (((PWMS_TypeDef*)(PWM_BASE)))
#define PWM0              (((PWM_TypeDef*)(PWM0_BASE)))
#define PWM1              (((PWM_TypeDef*)(PWM1_BASE)))


#define PWM_PWMCTL_OFFSET      (0x0000)
#define PWM_PWMSYNC_OFFSET     (0x0004)
#define PWM_PWMENABLE_OFFSET   (0x0008)
#define PWM_PWMINVERT_OFFSET   (0x000C)
#define PWM_PWMFAULT_OFFSET    (0x0010)
#define PWM_PWMINTEN_OFFSET    (0x0014)
#define PWM_PWMRIS_OFFSET      (0x0018)
#define PWM_PWMISC_OFFSET      (0x001C)
#define PWM_PWMSTATUS_OFFSET   (0x0020)
#define PWM_PWMFAULTVAL_OFFSET (0x0024)
#define PWM_PWMENUPD_OFFSET    (0x0028)

#define PWM_PWM0CTL_OFFSET     (0x0040)
#define PWM_PWM0INTEN_OFFSET   (0x0044)
#define PWM_PWM0RIS_OFFSET     (0x0048)
#define PWM_PWM0ISC_OFFSET     (0x004C)
#define PWM_PWM0LOAD_OFFSET    (0x0050)
#define PWM_PWM0COUNT_OFFSET   (0x0054)
#define PWM_PWM0CMPA_OFFSET    (0x0058)
#define PWM_PWM0CMPB_OFFSET    (0x005C)
#define PWM_PWM0GENA_OFFSET    (0x0060)
#define PWM_PWM0GENB_OFFSET    (0x0064)
#define PWM_PWM0DBCTL_OFFSET   (0x0068)
#define PWM_PWM0DBRISE_OFFSET  (0x006C)
#define PWM_PWM0DBFALL_OFFSET  (0x0070)
#define PWM_PWM0FLTSRC0_OFFSET (0x0074)
#define PWM_PWM0FLTSRC1_OFFSET (0x0078)
#define PWM_PWM0MINFLTPER_OFFSET (0x007C)
#define PWM_PWM0FLTSEN_OFFSET  (0x0800)
#define PWM_PWM0FLTSTAT0_OFFSET  (0x0804)
#define PWM_PWM0FLTSTAT1_OFFSET  (0x0808)

#define PWM_PWM1CTL_OFFSET     (0x0080)
#define PWM_PWM1INTEN_OFFSET   (0x0084)
#define PWM_PWM1RIS_OFFSET     (0x0088)
#define PWM_PWM1ISC_OFFSET     (0x008C)
#define PWM_PWM1LOAD_OFFSET    (0x0090)
#define PWM_PWM1COUNT_OFFSET   (0x0094)
#define PWM_PWM1CMPA_OFFSET    (0x0098)
#define PWM_PWM1CMPB_OFFSET    (0x009C)
#define PWM_PWM1GENA_OFFSET    (0x00A0)
#define PWM_PWM1GENB_OFFSET    (0x00A4)
#define PWM_PWM1DBCTL_OFFSET   (0x00A8)
#define PWM_PWM1DBRISE_OFFSET  (0x00AC)
#define PWM_PWM1DBFALL_OFFSET  (0x00B0)
#define PWM_PWM1FLTSRC0_OFFSET (0x00B4)
#define PWM_PWM1FLTSRC1_OFFSET (0x00B8)
#define PWM_PWM1MINFLTPER_OFFSET (0x00BC)
#define PWM_PWM1FLTSEN_OFFSET  (0x0880)
#define PWM_PWM1FLTSTAT0_OFFSET  (0x0884)
#define PWM_PWM1FLTSTAT1_OFFSET  (0x0888)

#define PWM_PWM2CTL_OFFSET     (0x00C0)
#define PWM_PWM2INTEN_OFFSET   (0x00C4)
#define PWM_PWM2RIS_OFFSET     (0x00C8)
#define PWM_PWM2ISC_OFFSET     (0x00CC)
#define PWM_PWM2LOAD_OFFSET    (0x00D0)
#define PWM_PWM2COUNT_OFFSET   (0x00D4)
#define PWM_PWM2CMPA_OFFSET    (0x00D8)
#define PWM_PWM2CMPB_OFFSET    (0x00DC)
#define PWM_PWM2GENA_OFFSET    (0x00E0)
#define PWM_PWM2GENB_OFFSET    (0x00E4)
#define PWM_PWM2DBCTL_OFFSET   (0x00E8)
#define PWM_PWM2DBRISE_OFFSET  (0x00EC)
#define PWM_PWM2DBFALL_OFFSET  (0x00F0)
#define PWM_PWM2FLTSRC0_OFFSET (0x00F4)
#define PWM_PWM2FLTSRC1_OFFSET (0x00F8)
#define PWM_PWM2MINFLTPER_OFFSET (0x00FC)
#define PWM_PWM2FLTSTAT0_OFFSET  (0x0904)
#define PWM_PWM2FLTSTAT1_OFFSET  (0x0908)

#define PWM_PWM3CTL_OFFSET     (0x0100)
#define PWM_PWM3INTEN_OFFSET   (0x0104)
#define PWM_PWM3RIS_OFFSET     (0x0108)
#define PWM_PWM3ISC_OFFSET     (0x010C)
#define PWM_PWM3LOAD_OFFSET    (0x0110)
#define PWM_PWM3COUNT_OFFSET   (0x0114)
#define PWM_PWM3CMPA_OFFSET    (0x0118)
#define PWM_PWM3CMPB_OFFSET    (0x011C)
#define PWM_PWM3GENA_OFFSET    (0x0120)
#define PWM_PWM3GENB_OFFSET    (0x0124)
#define PWM_PWM3DBCTL_OFFSET   (0x0128)
#define PWM_PWM3DBRISE_OFFSET  (0x012C)
#define PWM_PWM3DBFALL_OFFSET  (0x0130)
#define PWM_PWM3FLTSRC0_OFFSET (0x0134)
#define PWM_PWM3FLTSRC1_OFFSET (0x0138)
#define PWM_PWM3MINFLTPER_OFFSET (0x013C)
#define PWM_PWM3FLTSTAT0_OFFSET  (0x0984)
#define PWM_PWM3FLTSTAT1_OFFSET  (0x0988)

#define PWM_PWMPP_OFFSET       (0x0FC0)

// ToDO PWM0
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0 PWM0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.1 PWMCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define PWM0_PWMCTL            (((PWMCTL_TypeDef*)(PWM0_BASE + PWM_PWMCTL_OFFSET )))
#define PWM0_PWMCTL_R          (*((volatile uint32_t *)(PWM0_BASE +PWM_PWMCTL_OFFSET)))

//--------
#define PWM0_PWMCTL_R_GLOBALSYNC0_MASK       (0x00000001)
#define PWM0_PWMCTL_R_GLOBALSYNC0_BIT        (0)
#define PWM0_PWMCTL_R_GLOBALSYNC0_NA         (0x00000000)
#define PWM0_PWMCTL_R_GLOBALSYNC0_TIMEOUT    (0x00000001)

#define PWM0_PWMCTL_GLOBALSYNC0_MASK       (0x00000001)
#define PWM0_PWMCTL_GLOBALSYNC0_NA         (0x00000000)
#define PWM0_PWMCTL_GLOBALSYNC0_TIMEOUT    (0x00000001)
//--------

//--------
#define PWM0_PWMCTL_R_GLOBALSYNC1_MASK       (0x00000002)
#define PWM0_PWMCTL_R_GLOBALSYNC1_BIT        (1)
#define PWM0_PWMCTL_R_GLOBALSYNC1_NA         (0x00000000)
#define PWM0_PWMCTL_R_GLOBALSYNC1_TIMEOUT    (0x00000002)

#define PWM0_PWMCTL_GLOBALSYNC1_MASK       (0x00000001)
#define PWM0_PWMCTL_GLOBALSYNC1_NA         (0x00000000)
#define PWM0_PWMCTL_GLOBALSYNC1_TIMEOUT    (0x00000001)
//--------

//--------
#define PWM0_PWMCTL_R_GLOBALSYNC2_MASK       (0x00000004)
#define PWM0_PWMCTL_R_GLOBALSYNC2_BIT        (2)
#define PWM0_PWMCTL_R_GLOBALSYNC2_NA         (0x00000000)
#define PWM0_PWMCTL_R_GLOBALSYNC2_TIMEOUT    (0x00000004)

#define PWM0_PWMCTL_GLOBALSYNC2_MASK       (0x00000001)
#define PWM0_PWMCTL_GLOBALSYNC2_NA         (0x00000000)
#define PWM0_PWMCTL_GLOBALSYNC2_TIMEOUT    (0x00000001)
//--------

//--------
#define PWM0_PWMCTL_R_GLOBALSYNC3_MASK       (0x00000004)
#define PWM0_PWMCTL_R_GLOBALSYNC3_BIT        (2)
#define PWM0_PWMCTL_R_GLOBALSYNC3_NA         (0x00000000)
#define PWM0_PWMCTL_R_GLOBALSYNC3_TIMEOUT    (0x00000004)

#define PWM0_PWMCTL_GLOBALSYNC3_MASK       (0x00000001)
#define PWM0_PWMCTL_GLOBALSYNC3_NA         (0x00000000)
#define PWM0_PWMCTL_GLOBALSYNC3_TIMEOUT    (0x00000001)
//--------

#define PWM0_PWMCTL_GLOBALSYNC0_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMCTL_OFFSET)*32)+(0*4))))
#define PWM0_PWMCTL_GLOBALSYNC1_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMCTL_OFFSET)*32)+(1*4))))
#define PWM0_PWMCTL_GLOBALSYNC2_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMCTL_OFFSET)*32)+(2*4))))
#define PWM0_PWMCTL_GLOBALSYNC3_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMCTL_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.2 PWMSYNC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define PWM0_PWMSYNC            (((PWMSYNC_TypeDef*)(PWM0_BASE + PWM_PWMSYNC_OFFSET )))
#define PWM0_PWMSYNC_R          (*((volatile uint32_t *)(PWM0_BASE +PWM_PWMSYNC_OFFSET)))

//--------
#define PWM0_PWMSYNC_R_SYNC0_MASK       (0x00000001)
#define PWM0_PWMSYNC_R_SYNC0_BIT        (0)
#define PWM0_PWMSYNC_R_SYNC0_NA         (0x00000000)
#define PWM0_PWMSYNC_R_SYNC0_RESET      (0x00000001)

#define PWM0_PWMSYNC_SYNC0_MASK       (0x00000001)
#define PWM0_PWMSYNC_SYNC0_NA         (0x00000000)
#define PWM0_PWMSYNC_SYNC0_RESET      (0x00000001)
//--------

//--------
#define PWM0_PWMSYNC_R_SYNC1_MASK       (0x00000002)
#define PWM0_PWMSYNC_R_SYNC1_BIT        (1)
#define PWM0_PWMSYNC_R_SYNC1_NA         (0x00000000)
#define PWM0_PWMSYNC_R_SYNC1_RESET      (0x00000002)

#define PWM0_PWMSYNC_SYNC1_MASK       (0x00000001)
#define PWM0_PWMSYNC_SYNC1_NA         (0x00000000)
#define PWM0_PWMSYNC_SYNC1_RESET      (0x00000001)
//--------

//--------
#define PWM0_PWMSYNC_R_SYNC2_MASK       (0x00000004)
#define PWM0_PWMSYNC_R_SYNC2_BIT        (2)
#define PWM0_PWMSYNC_R_SYNC2_NA         (0x00000000)
#define PWM0_PWMSYNC_R_SYNC2_RESET      (0x00000004)

#define PWM0_PWMSYNC_SYNC2_MASK       (0x00000001)
#define PWM0_PWMSYNC_SYNC2_NA         (0x00000000)
#define PWM0_PWMSYNC_SYNC2_RESET      (0x00000001)
//--------

//--------
#define PWM0_PWMSYNC_R_SYNC3_MASK       (0x00000008)
#define PWM0_PWMSYNC_R_SYNC3_BIT        (3)
#define PWM0_PWMSYNC_R_SYNC3_NA         (0x00000000)
#define PWM0_PWMSYNC_R_SYNC3_RESET      (0x00000008)

#define PWM0_PWMSYNC_SYNC3_MASK       (0x00000001)
#define PWM0_PWMSYNC_SYNC3_NA         (0x00000000)
#define PWM0_PWMSYNC_SYNC3_RESET      (0x00000001)
//-------

#define PWM0_PWMSYNC_SYNC0_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMSYNC_OFFSET)*32)+(0*4))))
#define PWM0_PWMSYNC_SYNC1_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMSYNC_OFFSET)*32)+(1*4))))
#define PWM0_PWMSYNC_SYNC2_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMSYNC_OFFSET)*32)+(2*4))))
#define PWM0_PWMSYNC_SYNC3_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMSYNC_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.3 PWMENABLE ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define PWM0_PWMENABLE            (((PWMENABLE_TypeDef*)(PWM0_BASE + PWM_PWMENABLE_OFFSET )))
#define PWM0_PWMENABLE_R          (*((volatile uint32_t *)(PWM0_BASE +PWM_PWMENABLE_OFFSET)))

//--------
#define PWM0_PWMENABLE_R_PWM0EN_MASK       (0x00000001)
#define PWM0_PWMENABLE_R_PWM0EN_BIT        (0)
#define PWM0_PWMENABLE_R_PWM0EN_DIS        (0x00000000)
#define PWM0_PWMENABLE_R_PWM0EN_EN         (0x00000001)

#define PWM0_PWMENABLE_PWM0EN_MASK       (0x00000001)
#define PWM0_PWMENABLE_PWM0EN_DIS        (0x00000000)
#define PWM0_PWMENABLE_PWM0EN_EN         (0x00000001)
//--------

//--------
#define PWM0_PWMENABLE_R_PWM1EN_MASK       (0x00000002)
#define PWM0_PWMENABLE_R_PWM1EN_BIT        (1)
#define PWM0_PWMENABLE_R_PWM1EN_DIS        (0x00000000)
#define PWM0_PWMENABLE_R_PWM1EN_EN         (0x00000002)

#define PWM0_PWMENABLE_PWM1EN_MASK       (0x00000001)
#define PWM0_PWMENABLE_PWM1EN_DIS        (0x00000000)
#define PWM0_PWMENABLE_PWM1EN_EN         (0x00000001)
//--------

//--------
#define PWM0_PWMENABLE_R_PWM2EN_MASK       (0x00000004)
#define PWM0_PWMENABLE_R_PWM2EN_BIT        (2)
#define PWM0_PWMENABLE_R_PWM2EN_DIS        (0x00000000)
#define PWM0_PWMENABLE_R_PWM2EN_EN         (0x00000004)

#define PWM0_PWMENABLE_PWM2EN_MASK       (0x00000001)
#define PWM0_PWMENABLE_PWM2EN_DIS        (0x00000000)
#define PWM0_PWMENABLE_PWM2EN_EN         (0x00000001)
//--------

//--------
#define PWM0_PWMENABLE_R_PWM3EN_MASK       (0x00000008)
#define PWM0_PWMENABLE_R_PWM3EN_BIT        (3)
#define PWM0_PWMENABLE_R_PWM3EN_DIS        (0x00000000)
#define PWM0_PWMENABLE_R_PWM3EN_EN         (0x00000008)

#define PWM0_PWMENABLE_PWM3EN_MASK       (0x00000001)
#define PWM0_PWMENABLE_PWM3EN_DIS        (0x00000000)
#define PWM0_PWMENABLE_PWM3EN_EN         (0x00000001)
//--------

//--------
#define PWM0_PWMENABLE_R_PWM4EN_MASK       (0x00000010)
#define PWM0_PWMENABLE_R_PWM4EN_BIT        (4)
#define PWM0_PWMENABLE_R_PWM4EN_DIS        (0x00000000)
#define PWM0_PWMENABLE_R_PWM4EN_EN         (0x00000010)

#define PWM0_PWMENABLE_PWM4EN_MASK       (0x00000001)
#define PWM0_PWMENABLE_PWM4EN_DIS        (0x00000000)
#define PWM0_PWMENABLE_PWM4EN_EN         (0x00000001)
//--------

//--------
#define PWM0_PWMENABLE_R_PWM5EN_MASK       (0x00000020)
#define PWM0_PWMENABLE_R_PWM5EN_BIT        (5)
#define PWM0_PWMENABLE_R_PWM5EN_DIS        (0x00000000)
#define PWM0_PWMENABLE_R_PWM5EN_EN         (0x00000020)

#define PWM0_PWMENABLE_PWM5EN_MASK       (0x00000001)
#define PWM0_PWMENABLE_PWM5EN_DIS        (0x00000000)
#define PWM0_PWMENABLE_PWM5EN_EN         (0x00000001)
//--------

//--------
#define PWM0_PWMENABLE_R_PWM6EN_MASK       (0x00000040)
#define PWM0_PWMENABLE_R_PWM6EN_BIT        (6)
#define PWM0_PWMENABLE_R_PWM6EN_DIS        (0x00000000)
#define PWM0_PWMENABLE_R_PWM6EN_EN         (0x00000040)

#define PWM0_PWMENABLE_PWM6EN_MASK       (0x00000001)
#define PWM0_PWMENABLE_PWM6EN_DIS        (0x00000000)
#define PWM0_PWMENABLE_PWM6EN_EN         (0x00000001)
//--------

//--------
#define PWM0_PWMENABLE_R_PWM7EN_MASK       (0x00000080)
#define PWM0_PWMENABLE_R_PWM7EN_BIT        (7)
#define PWM0_PWMENABLE_R_PWM7EN_DIS        (0x00000000)
#define PWM0_PWMENABLE_R_PWM7EN_EN         (0x00000080)

#define PWM0_PWMENABLE_PWM7EN_MASK       (0x00000001)
#define PWM0_PWMENABLE_PWM7EN_DIS        (0x00000000)
#define PWM0_PWMENABLE_PWM7EN_EN         (0x00000001)
//--------

#define PWM0_PWMENABLE_PWM0EN_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMENABLE_OFFSET)*32)+(0*4))))
#define PWM0_PWMENABLE_PWM1EN_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMENABLE_OFFSET)*32)+(1*4))))
#define PWM0_PWMENABLE_PWM2EN_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMENABLE_OFFSET)*32)+(2*4))))
#define PWM0_PWMENABLE_PWM3EN_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMENABLE_OFFSET)*32)+(3*4))))
#define PWM0_PWMENABLE_PWM4EN_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMENABLE_OFFSET)*32)+(4*4))))
#define PWM0_PWMENABLE_PWM5EN_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMENABLE_OFFSET)*32)+(5*4))))
#define PWM0_PWMENABLE_PWM6EN_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMENABLE_OFFSET)*32)+(6*4))))
#define PWM0_PWMENABLE_PWM7EN_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMENABLE_OFFSET)*32)+(7*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.4 PWMINVERT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define PWM0_PWMINVERT            (((PWMINVERT_TypeDef*)(PWM0_BASE + PWM_PWMINVERT_OFFSET )))
#define PWM0_PWMINVERT_R          (*((volatile uint32_t *)(PWM0_BASE +PWM_PWMINVERT_OFFSET)))

//--------
#define PWM0_PWMINVERT_R_PWM0INV_MASK       (0x00000001)
#define PWM0_PWMINVERT_R_PWM0INV_BIT        (0)
#define PWM0_PWMINVERT_R_PWM0INV_NOINV      (0x00000000)
#define PWM0_PWMINVERT_R_PWM0INV_INV        (0x00000001)

#define PWM0_PWMINVERT_PWM0INV_MASK       (0x00000001)
#define PWM0_PWMINVERT_PWM0INV_NOINV      (0x00000000)
#define PWM0_PWMINVERT_PWM0INV_INV        (0x00000001)
//--------

//--------
#define PWM0_PWMINVERT_R_PWM1INV_MASK       (0x00000002)
#define PWM0_PWMINVERT_R_PWM1INV_BIT        (1)
#define PWM0_PWMINVERT_R_PWM1INV_NOINV      (0x00000000)
#define PWM0_PWMINVERT_R_PWM1INV_INV        (0x00000002)

#define PWM0_PWMINVERT_PWM1INV_MASK       (0x00000001)
#define PWM0_PWMINVERT_PWM1INV_NOINV      (0x00000000)
#define PWM0_PWMINVERT_PWM1INV_INV        (0x00000001)
//--------

//--------
#define PWM0_PWMINVERT_R_PWM2INV_MASK       (0x00000004)
#define PWM0_PWMINVERT_R_PWM2INV_BIT        (2)
#define PWM0_PWMINVERT_R_PWM2INV_NOINV      (0x00000000)
#define PWM0_PWMINVERT_R_PWM2INV_INV        (0x00000004)

#define PWM0_PWMINVERT_PWM2INV_MASK       (0x00000001)
#define PWM0_PWMINVERT_PWM2INV_NOINV      (0x00000000)
#define PWM0_PWMINVERT_PWM2INV_INV        (0x00000001)
//--------

//--------
#define PWM0_PWMINVERT_R_PWM3INV_MASK       (0x00000008)
#define PWM0_PWMINVERT_R_PWM3INV_BIT        (3)
#define PWM0_PWMINVERT_R_PWM3INV_NOINV      (0x00000000)
#define PWM0_PWMINVERT_R_PWM3INV_INV        (0x00000008)

#define PWM0_PWMINVERT_PWM3INV_MASK       (0x00000001)
#define PWM0_PWMINVERT_PWM3INV_NOINV      (0x00000000)
#define PWM0_PWMINVERT_PWM3INV_INV        (0x00000001)
//--------

//--------
#define PWM0_PWMINVERT_R_PWM4INV_MASK       (0x00000010)
#define PWM0_PWMINVERT_R_PWM4INV_BIT        (4)
#define PWM0_PWMINVERT_R_PWM4INV_NOINV      (0x00000000)
#define PWM0_PWMINVERT_R_PWM4INV_INV        (0x00000010)

#define PWM0_PWMINVERT_PWM4INV_MASK       (0x00000001)
#define PWM0_PWMINVERT_PWM4INV_NOINV      (0x00000000)
#define PWM0_PWMINVERT_PWM4INV_INV        (0x00000001)
//--------

//--------
#define PWM0_PWMINVERT_R_PWM5INV_MASK       (0x00000020)
#define PWM0_PWMINVERT_R_PWM5INV_BIT        (5)
#define PWM0_PWMINVERT_R_PWM5INV_NOINV      (0x00000000)
#define PWM0_PWMINVERT_R_PWM5INV_INV        (0x00000020)

#define PWM0_PWMINVERT_PWM5INV_MASK       (0x00000001)
#define PWM0_PWMINVERT_PWM5INV_NOINV      (0x00000000)
#define PWM0_PWMINVERT_PWM5INV_INV        (0x00000001)
//--------

//--------
#define PWM0_PWMINVERT_R_PWM6INV_MASK       (0x00000040)
#define PWM0_PWMINVERT_R_PWM6INV_BIT        (6)
#define PWM0_PWMINVERT_R_PWM6INV_NOINV      (0x00000000)
#define PWM0_PWMINVERT_R_PWM6INV_INV        (0x00000040)

#define PWM0_PWMINVERT_PWM6INV_MASK       (0x00000001)
#define PWM0_PWMINVERT_PWM6INV_NOINV      (0x00000000)
#define PWM0_PWMINVERT_PWM6INV_INV        (0x00000001)
//--------

//--------
#define PWM0_PWMINVERT_R_PWM7INV_MASK       (0x00000080)
#define PWM0_PWMINVERT_R_PWM7INV_BIT        (7)
#define PWM0_PWMINVERT_R_PWM7INV_NOINV      (0x00000000)
#define PWM0_PWMINVERT_R_PWM7INV_INV        (0x00000080)

#define PWM0_PWMINVERT_PWM7INV_MASK       (0x00000001)
#define PWM0_PWMINVERT_PWM7INV_NOINV      (0x00000000)
#define PWM0_PWMINVERT_PWM7INV_INV        (0x00000001)
//--------

#define PWM0_PWMINVERT_PWM0INV_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMINVERT_OFFSET)*32)+(0*4))))
#define PWM0_PWMINVERT_PWM1INV_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMINVERT_OFFSET)*32)+(1*4))))
#define PWM0_PWMINVERT_PWM3INV_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMINVERT_OFFSET)*32)+(3*4))))
#define PWM0_PWMINVERT_PWM4INV_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMINVERT_OFFSET)*32)+(4*4))))
#define PWM0_PWMINVERT_PWM5INV_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMINVERT_OFFSET)*32)+(5*4))))
#define PWM0_PWMINVERT_PWM6INV_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMINVERT_OFFSET)*32)+(6*4))))
#define PWM0_PWMINVERT_PWM7INV_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMINVERT_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.5 PWMFAULT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define PWM0_PWMFAULT            (((PWMFAULT_TypeDef*)(PWM0_BASE + PWM_PWMFAULT_OFFSET )))
#define PWM0_PWMFAULT_R          (*((volatile uint32_t *)(PWM0_BASE +PWM_PWMFAULT_OFFSET)))

//--------
#define PWM0_PWMFAULT_R_PWM0_MASK       (0x00000001)
#define PWM0_PWMFAULT_R_PWM0_BIT        (0)
#define PWM0_PWMFAULT_R_PWM0_DIS        (0x00000000)
#define PWM0_PWMFAULT_R_PWM0_EN         (0x00000001)

#define PWM0_PWMFAULT_PWM0_MASK       (0x00000001)
#define PWM0_PWMFAULT_PWM0_DIS        (0x00000000)
#define PWM0_PWMFAULT_PWM0_EN         (0x00000001)
//--------

//--------
#define PWM0_PWMFAULT_R_PWM1_MASK       (0x00000002)
#define PWM0_PWMFAULT_R_PWM1_BIT        (1)
#define PWM0_PWMFAULT_R_PWM1_DIS        (0x00000000)
#define PWM0_PWMFAULT_R_PWM1_EN         (0x00000002)

#define PWM0_PWMFAULT_PWM1_MASK       (0x00000001)
#define PWM0_PWMFAULT_PWM1_DIS        (0x00000000)
#define PWM0_PWMFAULT_PWM1_EN         (0x00000001)
//--------

//--------
#define PWM0_PWMFAULT_R_PWM2_MASK       (0x00000004)
#define PWM0_PWMFAULT_R_PWM2_BIT        (2)
#define PWM0_PWMFAULT_R_PWM2_DIS        (0x00000000)
#define PWM0_PWMFAULT_R_PWM2_EN         (0x00000004)

#define PWM0_PWMFAULT_PWM2_MASK       (0x00000001)
#define PWM0_PWMFAULT_PWM2_DIS        (0x00000000)
#define PWM0_PWMFAULT_PWM2_EN         (0x00000001)
//--------

//--------
#define PWM0_PWMFAULT_R_PWM3_MASK       (0x00000008)
#define PWM0_PWMFAULT_R_PWM3_BIT        (3)
#define PWM0_PWMFAULT_R_PWM3_DIS        (0x00000000)
#define PWM0_PWMFAULT_R_PWM3_EN         (0x00000008)

#define PWM0_PWMFAULT_PWM3_MASK       (0x00000001)
#define PWM0_PWMFAULT_PWM3_DIS        (0x00000000)
#define PWM0_PWMFAULT_PWM3_EN         (0x00000001)
//--------

//--------
#define PWM0_PWMFAULT_R_PWM4_MASK       (0x00000010)
#define PWM0_PWMFAULT_R_PWM4_BIT        (4)
#define PWM0_PWMFAULT_R_PWM4_DIS        (0x00000000)
#define PWM0_PWMFAULT_R_PWM4_EN         (0x00000010)

#define PWM0_PWMFAULT_PWM4_MASK       (0x00000001)
#define PWM0_PWMFAULT_PWM4_DIS        (0x00000000)
#define PWM0_PWMFAULT_PWM4_EN         (0x00000001)
//--------

//--------
#define PWM0_PWMFAULT_R_PWM5_MASK       (0x00000020)
#define PWM0_PWMFAULT_R_PWM5_BIT        (5)
#define PWM0_PWMFAULT_R_PWM5_DIS        (0x00000000)
#define PWM0_PWMFAULT_R_PWM5_EN         (0x00000020)

#define PWM0_PWMFAULT_PWM5_MASK       (0x00000001)
#define PWM0_PWMFAULT_PWM5_DIS        (0x00000000)
#define PWM0_PWMFAULT_PWM5_EN         (0x00000001)
//--------

//--------
#define PWM0_PWMFAULT_R_PWM6_MASK       (0x00000040)
#define PWM0_PWMFAULT_R_PWM6_BIT        (6)
#define PWM0_PWMFAULT_R_PWM6_DIS        (0x00000000)
#define PWM0_PWMFAULT_R_PWM6_EN         (0x00000040)

#define PWM0_PWMFAULT_PWM6_MASK       (0x00000001)
#define PWM0_PWMFAULT_PWM6_DIS        (0x00000000)
#define PWM0_PWMFAULT_PWM6_EN         (0x00000001)
//--------

//--------
#define PWM0_PWMFAULT_R_PWM7_MASK       (0x00000080)
#define PWM0_PWMFAULT_R_PWM7_BIT        (7)
#define PWM0_PWMFAULT_R_PWM7_DIS        (0x00000000)
#define PWM0_PWMFAULT_R_PWM7_EN         (0x00000080)

#define PWM0_PWMFAULT_PWM7_MASK       (0x00000001)
#define PWM0_PWMFAULT_PWM7_DIS        (0x00000000)
#define PWM0_PWMFAULT_PWM7_EN         (0x00000001)
//--------
#define PWM0_PWMFAULT_FAULT0_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMFAULT_OFFSET)*32)+(0*4))))
#define PWM0_PWMFAULT_FAULT1_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMFAULT_OFFSET)*32)+(1*4))))
#define PWM0_PWMFAULT_FAULT2_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMFAULT_OFFSET)*32)+(2*4))))
#define PWM0_PWMFAULT_FAULT3_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMFAULT_OFFSET)*32)+(3*4))))
#define PWM0_PWMFAULT_FAULT4_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMFAULT_OFFSET)*32)+(4*4))))
#define PWM0_PWMFAULT_FAULT5_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMFAULT_OFFSET)*32)+(5*4))))
#define PWM0_PWMFAULT_FAULT6_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMFAULT_OFFSET)*32)+(6*4))))
#define PWM0_PWMFAULT_FAULT7_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMFAULT_OFFSET)*32)+(7*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.6 PWMINTEN ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define PWM0_PWMINTEN            (((PWMINTEN_TypeDef*)(PWM0_BASE + PWM_PWMINTEN_OFFSET )))
#define PWM0_PWMINTEN_R          (*((volatile uint32_t *)(PWM0_BASE +PWM_PWMINTEN_OFFSET)))


//--------
#define PWM0_PWMINTEN_R_INTPWM0_MASK       (0x00000001)
#define PWM0_PWMINTEN_R_INTPWM0_BIT        (0)
#define PWM0_PWMINTEN_R_INTPWM0_DIS        (0x00000000)
#define PWM0_PWMINTEN_R_INTPWM0_EN         (0x00000001)

#define PWM0_PWMINTEN_INTPWM0_MASK       (0x00000001)
#define PWM0_PWMINTEN_INTPWM0_DIS        (0x00000000)
#define PWM0_PWMINTEN_INTPWM0_EN         (0x00000001)
//--------

//--------
#define PWM0_PWMINTEN_R_INTPWM1_MASK       (0x00000002)
#define PWM0_PWMINTEN_R_INTPWM1_BIT        (1)
#define PWM0_PWMINTEN_R_INTPWM1_DIS        (0x00000000)
#define PWM0_PWMINTEN_R_INTPWM1_EN         (0x00000002)

#define PWM0_PWMINTEN_INTPWM1_MASK       (0x00000001)
#define PWM0_PWMINTEN_INTPWM1_DIS        (0x00000000)
#define PWM0_PWMINTEN_INTPWM1_EN         (0x00000001)
//--------

//--------
#define PWM0_PWMINTEN_R_INTPWM2_MASK       (0x00000004)
#define PWM0_PWMINTEN_R_INTPWM2_BIT        (2)
#define PWM0_PWMINTEN_R_INTPWM2_DIS        (0x00000000)
#define PWM0_PWMINTEN_R_INTPWM2_EN         (0x00000004)

#define PWM0_PWMINTEN_INTPWM2_MASK       (0x00000001)
#define PWM0_PWMINTEN_INTPWM2_DIS        (0x00000000)
#define PWM0_PWMINTEN_INTPWM2_EN         (0x00000001)
//--------

//--------
#define PWM0_PWMINTEN_R_INTPWM3_MASK       (0x00000008)
#define PWM0_PWMINTEN_R_INTPWM3_BIT        (3)
#define PWM0_PWMINTEN_R_INTPWM3_DIS        (0x00000000)
#define PWM0_PWMINTEN_R_INTPWM3_EN         (0x00000008)

#define PWM0_PWMINTEN_INTPWM3_MASK       (0x00000001)
#define PWM0_PWMINTEN_INTPWM3_DIS        (0x00000000)
#define PWM0_PWMINTEN_INTPWM3_EN         (0x00000001)
//--------


//--------
#define PWM0_PWMINTEN_R_INTFAULT0_MASK       (0x00010000)
#define PWM0_PWMINTEN_R_INTFAULT0_BIT        (16)
#define PWM0_PWMINTEN_R_INTFAULT0_DIS        (0x00000000)
#define PWM0_PWMINTEN_R_INTFAULT0_EN         (0x00010000)

#define PWM0_PWMINTEN_INTFAULT0_MASK       (0x00000001)
#define PWM0_PWMINTEN_INTFAULT0_DIS        (0x00000000)
#define PWM0_PWMINTEN_INTFAULT0_EN         (0x00000001)
//--------

//--------
#define PWM0_PWMINTEN_R_INTFAULT1_MASK       (0x00020000)
#define PWM0_PWMINTEN_R_INTFAULT1_BIT        (17)
#define PWM0_PWMINTEN_R_INTFAULT1_DIS        (0x00000000)
#define PWM0_PWMINTEN_R_INTFAULT1_EN         (0x00020000)

#define PWM0_PWMINTEN_INTFAULT1_MASK       (0x00000001)
#define PWM0_PWMINTEN_INTFAULT1_DIS        (0x00000000)
#define PWM0_PWMINTEN_INTFAULT1_EN         (0x00000001)
//--------

#define PWM0_PWMINTEN_INTPWM0_BB        (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMINTEN_OFFSET)*32)+(0*4))))
#define PWM0_PWMINTEN_INTPWM1_BB        (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMINTEN_OFFSET)*32)+(1*4))))
#define PWM0_PWMINTEN_INTPWM2_BB        (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMINTEN_OFFSET)*32)+(2*4))))
#define PWM0_PWMINTEN_INTPWM3_BB        (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMINTEN_OFFSET)*32)+(3*4))))
#define PWM0_PWMINTEN_INTFAULT0_BB      (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMINTEN_OFFSET)*32)+(16*4))))
#define PWM0_PWMINTEN_INTFAULT1_BB      (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMINTEN_OFFSET)*32)+(17*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.7 PWMRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define PWM0_PWMRIS            (((PWMRIS_TypeDef*)(PWM0_BASE + PWM_PWMRIS_OFFSET )))
#define PWM0_PWMRIS_R          (*((volatile uint32_t *)(PWM0_BASE +PWM_PWMRIS_OFFSET)))


//--------
#define PWM0_PWMRIS_R_INTPWM0_MASK       (0x00000001)
#define PWM0_PWMRIS_R_INTPWM0_BIT        (0)
#define PWM0_PWMRIS_R_INTPWM0_NOACTIVE   (0x00000000)
#define PWM0_PWMRIS_R_INTPWM0_ACTIVE     (0x00000001)

#define PWM0_PWMRIS_INTPWM0_MASK       (0x00000001)
#define PWM0_PWMRIS_INTPWM0_NOACTIVE   (0x00000000)
#define PWM0_PWMRIS_INTPWM0_ACTIVE     (0x00000001)
//--------

//--------
#define PWM0_PWMRIS_R_INTPWM1_MASK       (0x00000002)
#define PWM0_PWMRIS_R_INTPWM1_BIT        (1)
#define PWM0_PWMRIS_R_INTPWM1_NOACTIVE   (0x00000000)
#define PWM0_PWMRIS_R_INTPWM1_ACTIVE     (0x00000002)

#define PWM0_PWMRIS_INTPWM1_MASK       (0x00000001)
#define PWM0_PWMRIS_INTPWM1_NOACTIVE   (0x00000000)
#define PWM0_PWMRIS_INTPWM1_ACTIVE     (0x00000001)
//--------

//--------
#define PWM0_PWMRIS_R_INTPWM2_MASK       (0x00000004)
#define PWM0_PWMRIS_R_INTPWM2_BIT        (2)
#define PWM0_PWMRIS_R_INTPWM2_NOACTIVE   (0x00000000)
#define PWM0_PWMRIS_R_INTPWM2_ACTIVE     (0x00000004)

#define PWM0_PWMRIS_INTPWM2_MASK       (0x00000001)
#define PWM0_PWMRIS_INTPWM2_NOACTIVE   (0x00000000)
#define PWM0_PWMRIS_INTPWM2_ACTIVE     (0x00000001)
//--------

//--------
#define PWM0_PWMRIS_R_INTPWM3_MASK       (0x00000008)
#define PWM0_PWMRIS_R_INTPWM3_BIT        (3)
#define PWM0_PWMRIS_R_INTPWM3_NOACTIVE   (0x00000000)
#define PWM0_PWMRIS_R_INTPWM3_ACTIVE     (0x00000008)

#define PWM0_PWMRIS_INTPWM3_MASK       (0x00000001)
#define PWM0_PWMRIS_INTPWM3_NOACTIVE   (0x00000000)
#define PWM0_PWMRIS_INTPWM3_ACTIVE     (0x00000001)
//--------


//--------
#define PWM0_PWMRIS_R_INTFAULT0_MASK       (0x00010000)
#define PWM0_PWMRIS_R_INTFAULT0_BIT        (16)
#define PWM0_PWMRIS_R_INTFAULT0_NOACTIVE   (0x00000000)
#define PWM0_PWMRIS_R_INTFAULT0_ACTIVE     (0x00010000)

#define PWM0_PWMRIS_INTFAULT0_MASK       (0x00000001)
#define PWM0_PWMRIS_INTFAULT0_NOACTIVE   (0x00000000)
#define PWM0_PWMRIS_INTFAULT0_ACTIVE     (0x00000001)
//--------

//--------
#define PWM0_PWMRIS_R_INTFAULT1_MASK       (0x00020000)
#define PWM0_PWMRIS_R_INTFAULT1_BIT        (17)
#define PWM0_PWMRIS_R_INTFAULT1_NOACTIVE   (0x00000000)
#define PWM0_PWMRIS_R_INTFAULT1_ACTIVE     (0x00020000)

#define PWM0_PWMRIS_INTFAULT1_MASK       (0x00000001)
#define PWM0_PWMRIS_INTFAULT1_NOACTIVE   (0x00000000)
#define PWM0_PWMRIS_INTFAULT1_ACTIVE     (0x00000001)
//--------


#define PWM0_PWMRIS_INTPWM0_BB        (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMRIS_OFFSET)*32)+(0*4))))
#define PWM0_PWMRIS_INTPWM1_BB        (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMRIS_OFFSET)*32)+(1*4))))
#define PWM0_PWMRIS_INTPWM2_BB        (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMRIS_OFFSET)*32)+(2*4))))
#define PWM0_PWMRIS_INTPWM3_BB        (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMRIS_OFFSET)*32)+(3*4))))
#define PWM0_PWMRIS_INTFAULT0_BB      (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMRIS_OFFSET)*32)+(16*4))))
#define PWM0_PWMRIS_INTFAULT1_BB      (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMRIS_OFFSET)*32)+(17*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.8 PWMISC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define PWM0_PWMISC            (((PWMISC_TypeDef*)(PWM0_BASE + PWM_PWMISC_OFFSET )))
#define PWM0_PWMISC_R          (*((volatile uint32_t *)(PWM0_BASE +PWM_PWMISC_OFFSET)))


//--------
#define PWM0_PWMMISC_R_INTPWM0_MASK      (0x00000001)
#define PWM0_PWMMISC_R_INTPWM0_BIT       (0)
#define PWM0_PWMMISC_R_INTPWM0_NOOCCUR   (0x00000000)
#define PWM0_PWMMISC_R_INTPWM0_OCCUR     (0x00000001)
#define PWM0_PWMMISC_R_INTPWM0_CLEAR     (0x00000001)

#define PWM0_PWMMISC_INTPWM0_MASK      (0x00000001)
#define PWM0_PWMMISC_INTPWM0_NOOCCUR   (0x00000000)
#define PWM0_PWMMISC_INTPWM0_OCCUR     (0x00000001)
#define PWM0_PWMMISC_INTPWM0_CLEAR     (0x00000001)
//--------

//--------
#define PWM0_PWMMISC_R_INTPWM1_MASK      (0x00000002)
#define PWM0_PWMMISC_R_INTPWM1_BIT       (1)
#define PWM0_PWMMISC_R_INTPWM1_NOOCCUR   (0x00000000)
#define PWM0_PWMMISC_R_INTPWM1_OCCUR     (0x00000002)
#define PWM0_PWMMISC_R_INTPWM1_CLEAR     (0x00000002)

#define PWM0_PWMMISC_INTPWM1_MASK      (0x00000001)
#define PWM0_PWMMISC_INTPWM1_NOOCCUR   (0x00000000)
#define PWM0_PWMMISC_INTPWM1_OCCUR     (0x00000001)
#define PWM0_PWMMISC_INTPWM1_CLEAR     (0x00000001)
//--------

//--------
#define PWM0_PWMMISC_R_INTPWM2_MASK      (0x00000004)
#define PWM0_PWMMISC_R_INTPWM2_BIT       (2)
#define PWM0_PWMMISC_R_INTPWM2_NOOCCUR   (0x00000000)
#define PWM0_PWMMISC_R_INTPWM2_OCCUR     (0x00000004)
#define PWM0_PWMMISC_R_INTPWM2_CLEAR     (0x00000004)

#define PWM0_PWMMISC_INTPWM2_MASK      (0x00000001)
#define PWM0_PWMMISC_INTPWM2_NOOCCUR   (0x00000000)
#define PWM0_PWMMISC_INTPWM2_OCCUR     (0x00000001)
#define PWM0_PWMMISC_INTPWM2_CLEAR     (0x00000001)
//--------

//--------
#define PWM0_PWMMISC_R_INTPWM3_MASK      (0x00000008)
#define PWM0_PWMMISC_R_INTPWM3_BIT       (3)
#define PWM0_PWMMISC_R_INTPWM3_NOOCCUR   (0x00000000)
#define PWM0_PWMMISC_R_INTPWM3_OCCUR     (0x00000008)
#define PWM0_PWMMISC_R_INTPWM3_CLEAR     (0x00000008)

#define PWM0_PWMMISC_INTPWM3_MASK      (0x00000001)
#define PWM0_PWMMISC_INTPWM3_NOOCCUR   (0x00000000)
#define PWM0_PWMMISC_INTPWM3_OCCUR     (0x00000001)
#define PWM0_PWMMISC_INTPWM3_CLEAR     (0x00000001)
//--------


//--------
#define PWM0_PWMMISC_R_INTFAULT0_MASK      (0x00010000)
#define PWM0_PWMMISC_R_INTFAULT0_BIT       (16)
#define PWM0_PWMMISC_R_INTFAULT0_NOOCCUR   (0x00000000)
#define PWM0_PWMMISC_R_INTFAULT0_OCCUR     (0x00010000)
#define PWM0_PWMMISC_R_INTFAULT0_CLEAR     (0x00010000)

#define PWM0_PWMMISC_INTFAULT0_MASK      (0x00000001)
#define PWM0_PWMMISC_INTFAULT0_NOOCCUR   (0x00000000)
#define PWM0_PWMMISC_INTFAULT0_OCCUR     (0x00000001)
#define PWM0_PWMMISC_INTFAULT0_CLEAR     (0x00000001)
//--------

//--------
#define PWM0_PWMMISC_R_INTFAULT1_MASK      (0x00020000)
#define PWM0_PWMMISC_R_INTFAULT1_BIT       (17)
#define PWM0_PWMMISC_R_INTFAULT1_NOOCCUR   (0x00000000)
#define PWM0_PWMMISC_R_INTFAULT1_OCCUR     (0x00020000)
#define PWM0_PWMMISC_R_INTFAULT1_CLEAR     (0x00020000)

#define PWM0_PWMMISC_INTFAULT1_MASK      (0x00000001)
#define PWM0_PWMMISC_INTFAULT1_NOOCCUR   (0x00000000)
#define PWM0_PWMMISC_INTFAULT1_OCCUR     (0x00000001)
#define PWM0_PWMMISC_INTFAULT1_CLEAR     (0x00000001)
//--------


#define PWM0_PWMISC_INTPWM0_BB        (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMISC_OFFSET)*32)+(0*4))))
#define PWM0_PWMISC_INTPWM1_BB        (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMISC_OFFSET)*32)+(1*4))))
#define PWM0_PWMISC_INTPWM2_BB        (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMISC_OFFSET)*32)+(2*4))))
#define PWM0_PWMISC_INTPWM3_BB        (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMISC_OFFSET)*32)+(3*4))))
#define PWM0_PWMISC_INTFAULT0_BB      (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMISC_OFFSET)*32)+(16*4))))
#define PWM0_PWMISC_INTFAULT1_BB      (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMISC_OFFSET)*32)+(17*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.9 PWMSTATUS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define PWM0_PWMSTATUS            (((PWMSTATUS_TypeDef*)(PWM0_BASE + PWM_PWMSTATUS_OFFSET )))
#define PWM0_PWMSTATUS_R          (*((volatile uint32_t *)(PWM0_BASE +PWM_PWMSTATUS_OFFSET)))

//--------
#define PWM0_PWMSTATUS_R_FAULT0_MASK      (0x00000001)
#define PWM0_PWMSTATUS_R_FAULT0_BIT       (0)
#define PWM0_PWMSTATUS_R_FAULT0_NOASSERT  (0x00000000)
#define PWM0_PWMSTATUS_R_FAULT0_ASSERT    (0x00000001)

#define PWM0_PWMSTATUS_FAULT0_MASK      (0x00000001)
#define PWM0_PWMSTATUS_FAULT0_NOASSERT  (0x00000000)
#define PWM0_PWMSTATUS_FAULT0_ASSERT    (0x00000001)
//--------

//--------
#define PWM0_PWMSTATUS_R_FAULT1_MASK      (0x00000002)
#define PWM0_PWMSTATUS_R_FAULT1_BIT       (1)
#define PWM0_PWMSTATUS_R_FAULT1_NOASSERT  (0x00000000)
#define PWM0_PWMSTATUS_R_FAULT1_ASSERT    (0x00000002)

#define PWM0_PWMSTATUS_FAULT1_MASK      (0x00000001)
#define PWM0_PWMSTATUS_FAULT1_NOASSERT  (0x00000000)
#define PWM0_PWMSTATUS_FAULT1_ASSERT    (0x00000001)
//--------


#define PWM0_PWMSTATUS_FAULT0_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMSTATUS_OFFSET)*32)+(0*4))))
#define PWM0_PWMSTATUS_FAULT1_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMSTATUS_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.10 PWMFAULTVAL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define PWM0_PWMFAULTVAL            (((PWMFAULTVAL_TypeDef*)(PWM0_BASE + PWM_PWMFAULTVAL_OFFSET )))
#define PWM0_PWMFAULTVAL_R          (*((volatile uint32_t *)(PWM0_BASE +PWM_PWMFAULTVAL_OFFSET)))



//--------
#define PWM0_PWMFAULTVAL_R_PWM0_MASK       (0x00000001)
#define PWM0_PWMFAULTVAL_R_PWM0_BIT        (0)
#define PWM0_PWMFAULTVAL_R_PWM0_LOW        (0x00000000)
#define PWM0_PWMFAULTVAL_R_PWM0_HIGH       (0x00000001)

#define PWM0_PWMFAULTVAL_PWM0_MASK       (0x00000001)
#define PWM0_PWMFAULTVAL_PWM0_LOW        (0x00000000)
#define PWM0_PWMFAULTVAL_PWM0_HIGH       (0x00000001)
//--------

//--------
#define PWM0_PWMFAULTVAL_R_PWM1_MASK       (0x00000002)
#define PWM0_PWMFAULTVAL_R_PWM1_BIT        (1)
#define PWM0_PWMFAULTVAL_R_PWM1_LOW        (0x00000000)
#define PWM0_PWMFAULTVAL_R_PWM1_HIGH       (0x00000002)

#define PWM0_PWMFAULTVAL_PWM1_MASK       (0x00000001)
#define PWM0_PWMFAULTVAL_PWM1_LOW        (0x00000000)
#define PWM0_PWMFAULTVAL_PWM1_HIGH       (0x00000001)
//--------

//--------
#define PWM0_PWMFAULTVAL_R_PWM2_MASK       (0x00000004)
#define PWM0_PWMFAULTVAL_R_PWM2_BIT        (2)
#define PWM0_PWMFAULTVAL_R_PWM2_LOW        (0x00000000)
#define PWM0_PWMFAULTVAL_R_PWM2_HIGH       (0x00000004)

#define PWM0_PWMFAULTVAL_PWM2_MASK       (0x00000001)
#define PWM0_PWMFAULTVAL_PWM2_LOW        (0x00000000)
#define PWM0_PWMFAULTVAL_PWM2_HIGH       (0x00000001)
//--------

//--------
#define PWM0_PWMFAULTVAL_R_PWM3_MASK       (0x00000008)
#define PWM0_PWMFAULTVAL_R_PWM3_BIT        (3)
#define PWM0_PWMFAULTVAL_R_PWM3_LOW        (0x00000000)
#define PWM0_PWMFAULTVAL_R_PWM3_HIGH       (0x00000008)

#define PWM0_PWMFAULTVAL_PWM3_MASK       (0x00000001)
#define PWM0_PWMFAULTVAL_PWM3_LOW        (0x00000000)
#define PWM0_PWMFAULTVAL_PWM3_HIGH       (0x00000001)
//--------

//--------
#define PWM0_PWMFAULTVAL_R_PWM4_MASK       (0x00000010)
#define PWM0_PWMFAULTVAL_R_PWM4_BIT        (4)
#define PWM0_PWMFAULTVAL_R_PWM4_LOW        (0x00000000)
#define PWM0_PWMFAULTVAL_R_PWM4_HIGH       (0x00000010)

#define PWM0_PWMFAULTVAL_PWM4_MASK       (0x00000001)
#define PWM0_PWMFAULTVAL_PWM4_LOW        (0x00000000)
#define PWM0_PWMFAULTVAL_PWM4_HIGH       (0x00000001)
//--------

//--------
#define PWM0_PWMFAULTVAL_R_PWM5_MASK       (0x00000020)
#define PWM0_PWMFAULTVAL_R_PWM5_BIT        (5)
#define PWM0_PWMFAULTVAL_R_PWM5_LOW        (0x00000000)
#define PWM0_PWMFAULTVAL_R_PWM5_HIGH       (0x00000020)

#define PWM0_PWMFAULTVAL_PWM5_MASK       (0x00000001)
#define PWM0_PWMFAULTVAL_PWM5_LOW        (0x00000000)
#define PWM0_PWMFAULTVAL_PWM5_HIGH       (0x00000001)
//--------

//--------
#define PWM0_PWMFAULTVAL_R_PWM6_MASK       (0x00000040)
#define PWM0_PWMFAULTVAL_R_PWM6_BIT        (6)
#define PWM0_PWMFAULTVAL_R_PWM6_LOW        (0x00000000)
#define PWM0_PWMFAULTVAL_R_PWM6_HIGH       (0x00000040)

#define PWM0_PWMFAULTVAL_PWM6_MASK       (0x00000001)
#define PWM0_PWMFAULTVAL_PWM6_LOW        (0x00000000)
#define PWM0_PWMFAULTVAL_PWM6_HIGH       (0x00000001)
//--------

//--------
#define PWM0_PWMFAULTVAL_R_PWM7_MASK       (0x00000080)
#define PWM0_PWMFAULTVAL_R_PWM7_BIT        (7)
#define PWM0_PWMFAULTVAL_R_PWM7_LOW        (0x00000000)
#define PWM0_PWMFAULTVAL_R_PWM7_HIGH       (0x00000080)

#define PWM0_PWMFAULTVAL_PWM7_MASK       (0x00000001)
#define PWM0_PWMFAULTVAL_PWM7_LOW        (0x00000000)
#define PWM0_PWMFAULTVAL_PWM7_HIGH       (0x00000001)
//--------


#define PWM0_PWMFAULTVAL_PWM0_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMFAULTVAL_OFFSET)*32)+(0*4))))
#define PWM0_PWMFAULTVAL_PWM1_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMFAULTVAL_OFFSET)*32)+(1*4))))
#define PWM0_PWMFAULTVAL_PWM2_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMFAULTVAL_OFFSET)*32)+(2*4))))
#define PWM0_PWMFAULTVAL_PWM3_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMFAULTVAL_OFFSET)*32)+(3*4))))
#define PWM0_PWMFAULTVAL_PWM4_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMFAULTVAL_OFFSET)*32)+(4*4))))
#define PWM0_PWMFAULTVAL_PWM5_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMFAULTVAL_OFFSET)*32)+(5*4))))
#define PWM0_PWMFAULTVAL_PWM6_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMFAULTVAL_OFFSET)*32)+(6*4))))
#define PWM0_PWMFAULTVAL_PWM7_BB     (*((volatile uint32_t *)(0x42000000+((PWM0_OFFSET+PWM_PWMFAULTVAL_OFFSET)*32)+(7*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.11 PWMENUPD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define PWM0_PWMENUPD            (((PWMENUPD_TypeDef*)(PWM0_BASE + PWM_PWMENUPD_OFFSET )))
#define PWM0_PWMENUPD_R          (*((volatile uint32_t *)(PWM0_BASE +PWM_PWMENUPD_OFFSET)))

#define PWM0_PWMENUPD_ENUPD0    (0x00000003)
#define PWM0_PWMENUPD_ENUPD1    (0x0000000C)
#define PWM0_PWMENUPD_ENUPD2    (0x00000030)
#define PWM0_PWMENUPD_ENUPD3    (0x000000C0)
#define PWM0_PWMENUPD_ENUPD4    (0x00000300)
#define PWM0_PWMENUPD_ENUPD5    (0x00000C00)
#define PWM0_PWMENUPD_ENUPD6    (0x00003000)
#define PWM0_PWMENUPD_ENUPD7    (0x0000C000)

void PWM0Dual_Init(uint16_t period);
void PWM0Dual_Period(uint16_t period);

#endif /* PWM_H_ */
