/**
 *
 * @file TIMER_RegisterDefines_Standard_32_MIS.h
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
 * @verbatim 6 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_MIS_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_MIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_GPTMMIS_R_TATOMIS_MASK                 ((uint32_t)0x00000001u)
#define GPTM_GPTMMIS_R_TATOMIS_BIT                  (0u)
#define GPTM_GPTMMIS_R_TATOMIS_NOOCCUR              ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_R_TATOMIS_OCCUR                ((uint32_t)0x00000001u)

#define GPTM_GPTMMIS_TATOMIS_MASK                   ((uint32_t)0x00000001u)
#define GPTM_GPTMMIS_TATOMIS_NOOCCUR                ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_TATOMIS_OCCUR                  ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_GPTMMIS_R_CAMMIS_MASK                  ((uint32_t)0x00000002u)
#define GPTM_GPTMMIS_R_CAMMIS_BIT                   (1u)
#define GPTM_GPTMMIS_R_CAMMIS_NOOCCUR               ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_R_CAMMIS_OCCUR                 ((uint32_t)0x00000002u)

#define GPTM_GPTMMIS_CAMMIS_MASK                    ((uint32_t)0x00000001u)
#define GPTM_GPTMMIS_CAMMIS_NOOCCUR                 ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_CAMMIS_OCCUR                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_GPTMMIS_R_CAEMIS_MASK                  ((uint32_t)0x00000004u)
#define GPTM_GPTMMIS_R_CAEMIS_BIT                   (2u)
#define GPTM_GPTMMIS_R_CAEMIS_NOOCCUR               ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_R_CAEMIS_OCCUR                 ((uint32_t)0x00000004u)

#define GPTM_GPTMMIS_CAEMIS_MASK                    ((uint32_t)0x00000001u)
#define GPTM_GPTMMIS_CAEMIS_NOOCCUR                 ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_CAEMIS_OCCUR                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_GPTMMIS_R_RTCMIS_MASK                  ((uint32_t)0x00000008u)
#define GPTM_GPTMMIS_R_RTCMIS_BIT                   (3u)
#define GPTM_GPTMMIS_R_RTCMIS_NOOCCUR               ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_R_RTCMIS_OCCUR                 ((uint32_t)0x00000008u)

#define GPTM_GPTMMIS_RTCMIS_MASK                    ((uint32_t)0x00000001u)
#define GPTM_GPTMMIS_RTCMIS_NOOCCUR                 ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_RTCMIS_OCCUR                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_GPTMMIS_R_TAMMIS_MASK                  ((uint32_t)0x00000010u)
#define GPTM_GPTMMIS_R_TAMMIS_BIT                   (4u)
#define GPTM_GPTMMIS_R_TAMMIS_NOOCCUR               ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_R_TAMMIS_OCCUR                 ((uint32_t)0x00000010u)

#define GPTM_GPTMMIS_TAMMIS_MASK                    ((uint32_t)0x00000001u)
#define GPTM_GPTMMIS_TAMMIS_NOOCCUR                 ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_TAMMIS_OCCUR                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_GPTMMIS_R_TBTOMIS_MASK                 ((uint32_t)0x00000100u)
#define GPTM_GPTMMIS_R_TBTOMIS_BIT                  (8u)
#define GPTM_GPTMMIS_R_TBTOMIS_NOOCCUR              ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_R_TBTOMIS_OCCUR                ((uint32_t)0x00000100u)

#define GPTM_GPTMMIS_TBTOMIS_MASK                   ((uint32_t)0x00000001u)
#define GPTM_GPTMMIS_TBTOMIS_NOOCCUR                ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_TBTOMIS_OCCUR                  ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_GPTMMIS_R_CBMMIS_MASK                  ((uint32_t)0x00000200u)
#define GPTM_GPTMMIS_R_CBMMIS_BIT                   (9u)
#define GPTM_GPTMMIS_R_CBMMIS_NOOCCUR               ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_R_CBMMIS_OCCUR                 ((uint32_t)0x00000200u)

#define GPTM_GPTMMIS_CBMMIS_MASK                    ((uint32_t)0x00000001u)
#define GPTM_GPTMMIS_CBMMIS_NOOCCUR                 ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_CBMMIS_OCCUR                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_GPTMMIS_R_CBEMIS_MASK                  ((uint32_t)0x00000400u)
#define GPTM_GPTMMIS_R_CBEMIS_BIT                   (10u)
#define GPTM_GPTMMIS_R_CBEMIS_NOOCCUR               ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_R_CBEMIS_OCCUR                 ((uint32_t)0x00000400u)

#define GPTM_GPTMMIS_CBEMIS_MASK                    ((uint32_t)0x00000001u)
#define GPTM_GPTMMIS_CBEMIS_NOOCCUR                 ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_CBEMIS_OCCUR                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_GPTMMIS_R_TBMMIS_MASK                  ((uint32_t)0x00000800u)
#define GPTM_GPTMMIS_R_TBMMIS_BIT                   (11u)
#define GPTM_GPTMMIS_R_TBMMIS_NOOCCUR               ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_R_TBMMIS_OCCUR                 ((uint32_t)0x00000800u)

#define GPTM_GPTMMIS_TBMMIS_MASK                    ((uint32_t)0x00000001u)
#define GPTM_GPTMMIS_TBMMIS_NOOCCUR                 ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_TBMMIS_OCCUR                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_GPTMMIS_R_WUEMIS_MASK                  ((uint32_t)0x00010000u)
#define GPTM_GPTMMIS_R_WUEMIS_BIT                   (16u)
#define GPTM_GPTMMIS_R_WUEMIS_NOOCCUR               ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_R_WUEMIS_OCCUR                 ((uint32_t)0x00010000u)

#define GPTM_GPTMMIS_WUEMIS_MASK                    ((uint32_t)0x00000001u)
#define GPTM_GPTMMIS_WUEMIS_NOOCCUR                 ((uint32_t)0x00000000u)
#define GPTM_GPTMMIS_WUEMIS_OCCUR                   ((uint32_t)0x00000001u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_MIS_H_ */
