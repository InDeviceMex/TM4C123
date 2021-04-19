/**
 *
 * @file CAN_RegisterPeripheral_Module1.h
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
 * @verbatim Apr 16, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 16, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_CAN_REGISTERPERIPHERAL_MODULE1_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_CAN_REGISTERPERIPHERAL_MODULE1_H_

#include <xDriver_MCU/CAN/Peripheral/Register/xHeader/CAN_RegisterAddress.h>
#include <xDriver_MCU/CAN/Peripheral/Struct/xHeader/CAN_StructPeripheral.h>

/******************************************************************************************
************************************ CAN1 *********************************************
******************************************************************************************/

#define CAN1    ((CAN_TypeDef*) (CAN1_BASE))

/******************************************************************************************
************************************ 1 CANCTL *********************************************
******************************************************************************************/
#define CAN1_CANCTL    ((CANCTL_TypeDef*) (CAN1_BASE + CAN_CANCTL_OFFSET))
#define CAN1_CANCTL_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANCTL_OFFSET)))

/******************************************************************************************
************************************ 2 CANSTS *********************************************
******************************************************************************************/
#define CAN1_CANSTS    ((CANSTS_TypeDef*) (CAN1_BASE + CAN_CANSTS_OFFSET))
#define CAN1_CANSTS_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANSTS_OFFSET)))

/******************************************************************************************
************************************ 3 CANERR *********************************************
******************************************************************************************/
#define CAN1_CANERR    ((CANERR_TypeDef*) (CAN1_BASE + CAN_CANERR_OFFSET))
#define CAN1_CANERR_R    (*((volatile const uint32_t*) (CAN1_BASE + CAN_CANERR_OFFSET)))

/******************************************************************************************
************************************ 4 CANBIT *********************************************
******************************************************************************************/
#define CAN1_CANBIT    ((CANBIT_TypeDef*) (CAN1_BASE + CAN_CANBIT_OFFSET))
#define CAN1_CANBIT_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANBIT_OFFSET)))

/******************************************************************************************
************************************ 5 CANINT *********************************************
******************************************************************************************/
#define CAN1_CANINT    ((CANINT_TypeDef*) (CAN1_BASE + CAN_CANINT_OFFSET))
#define CAN1_CANINT_R    (*((volatile const uint32_t*) (CAN1_BASE + CAN_CANINT_OFFSET)))

/******************************************************************************************
************************************6 CANTST *********************************************
******************************************************************************************/
#define CAN1_CANTST    ((CANTST_TypeDef*) (CAN1_BASE + CAN_CANTST_OFFSET))
#define CAN1_CANTST_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANTST_OFFSET)))

/******************************************************************************************
************************************7 CANBRPE *********************************************
******************************************************************************************/
#define CAN1_CANBRPE    ((CANBRPE_TypeDef*) (CAN1_BASE + CAN_CANBRPE_OFFSET))
#define CAN1_CANBRPE_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANBRPE_OFFSET)))

/******************************************************************************************
************************************8-9 CANIFnCRQ *********************************************
******************************************************************************************/
#define CAN1_CANIF1CRQ    ((CANIFnCRQ_TypeDef*) (CAN1_BASE + CAN_CANIF1CRQ_OFFSET))
#define CAN1_CANIF1CRQ_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF1CRQ_OFFSET)))

#define CAN1_CANIF2CRQ    ((CANIFnCRQ_TypeDef*) (CAN1_BASE + CAN_CANIF2CRQ_OFFSET))
#define CAN1_CANIF2CRQ_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF2CRQ_OFFSET)))

/******************************************************************************************
************************************10-11 CANIFnCMSK *********************************************
******************************************************************************************/
#define CAN1_CANIF1CMSK    ((CANIFnCMSK_TypeDef*) (CAN1_BASE + CAN_CANIF1CMSK_OFFSET))
#define CAN1_CANIF1CMSK_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF1CMSK_OFFSET)))

#define CAN1_CANIF2CMSK    ((CANIFnCMSK_TypeDef*) (CAN1_BASE + CAN_CANIF2CMSK_OFFSET))
#define CAN1_CANIF2CMSK_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF2CMSK_OFFSET)))

/******************************************************************************************
************************************12-13 CANIFnMSK1 *********************************************
******************************************************************************************/
#define CAN1_CANIF1MSK1    ((CANIFnMSK1_TypeDef*) (CAN1_BASE + CAN_CANIF1MSK1_OFFSET))
#define CAN1_CANIF1MSK1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF1MSK1_OFFSET)))

#define CAN1_CANIF2MSK1    ((CANIFnMSK1_TypeDef*) (CAN1_BASE + CAN_CANIF2MSK1_OFFSET))
#define CAN1_CANIF2MSK1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF2MSK1_OFFSET)))

/******************************************************************************************
************************************14-15 CANIFnMSK2 *********************************************
******************************************************************************************/
#define CAN1_CANIF1MSK2    ((CANIFnMSK2_TypeDef*) (CAN1_BASE + CAN_CANIF1MSK2_OFFSET))
#define CAN1_CANIF1MSK2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF1MSK2_OFFSET)))

#define CAN1_CANIF2MSK2    ((CANIFnMSK2_TypeDef*) (CAN1_BASE + CAN_CANIF2MSK2_OFFSET))
#define CAN1_CANIF2MSK2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF2MSK2_OFFSET)))

/******************************************************************************************
************************************16-17 CANIFnARB1 *********************************************
******************************************************************************************/
#define CAN1_CANIF1ARB1    ((CANIFnARB1_TypeDef*) (CAN1_BASE + CAN_CANIF1ARB1_OFFSET))
#define CAN1_CANIF1ARB1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF1ARB1_OFFSET)))

#define CAN1_CANIF2ARB1    ((CANIFnARB1_TypeDef*) (CAN1_BASE + CAN_CANIF2ARB1_OFFSET))
#define CAN1_CANIF2ARB1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF2ARB1_OFFSET)))

/******************************************************************************************
************************************18-19 CANIFnARB2 *********************************************
******************************************************************************************/
#define CAN1_CANIF1ARB2    ((CANIFnARB2_TypeDef*) (CAN1_BASE + CAN_CANIF1ARB2_OFFSET))
#define CAN1_CANIF1ARB2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF1ARB2_OFFSET)))

#define CAN1_CANIF2ARB2    ((CANIFnARB2_TypeDef*) (CAN1_BASE + CAN_CANIF2ARB2_OFFSET))
#define CAN1_CANIF2ARB2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF2ARB2_OFFSET)))

/******************************************************************************************
************************************20-21 CANIFnMCTL *********************************************
******************************************************************************************/
#define CAN1_CANIF1MCTL    ((CANIFnMCTL_TypeDef*) (CAN1_BASE + CAN_CANIF1MCTL_OFFSET))
#define CAN1_CANIF1MCTL_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF1MCTL_OFFSET)))

#define CAN1_CANIF2MCTL    ((CANIFnMCTL_TypeDef*) (CAN1_BASE + CAN_CANIF2MCTL_OFFSET))
#define CAN1_CANIF2MCTL_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF2MCTL_OFFSET)))

/******************************************************************************************
************************************22-23 CANIFnDA1 *********************************************
******************************************************************************************/
#define CAN1_CANIF1DA1    ((CANIFnDA1_TypeDef*) (CAN1_BASE + CAN_CANIF1DA1_OFFSET))
#define CAN1_CANIF1DA1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF1DA1_OFFSET)))

#define CAN1_CANIF2DA1    ((CANIFnDA1_TypeDef*) (CAN1_BASE + CAN_CANIF2DA1_OFFSET))
#define CAN1_CANIF2DA1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF2DA1_OFFSET)))

/******************************************************************************************
************************************24-25 CANIFnDA2 *********************************************
******************************************************************************************/
#define CAN1_CANIF1DA2    ((CANIFnDA2_TypeDef*) (CAN1_BASE + CAN_CANIF1DA2_OFFSET))
#define CAN1_CANIF1DA2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF1DA2_OFFSET)))

#define CAN1_CANIF2DA2    ((CANIFnDA2_TypeDef*) (CAN1_BASE + CAN_CANIF2DA2_OFFSET))
#define CAN1_CANIF2DA2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF2DA2_OFFSET)))

/******************************************************************************************
************************************26-27 CANIFnDB1 *********************************************
******************************************************************************************/
#define CAN1_CANIF1DB1    ((CANIFnDB1_TypeDef*) (CAN1_BASE + CAN_CANIF1DB1_OFFSET))
#define CAN1_CANIF1DB1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF1DB1_OFFSET)))

#define CAN1_CANIF2DB1    ((CANIFnDB1_TypeDef*) (CAN1_BASE + CAN_CANIF2DB1_OFFSET))
#define CAN1_CANIF2DB1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF2DB1_OFFSET)))

/******************************************************************************************
************************************28-29 CANIFnDB2 *********************************************
******************************************************************************************/
#define CAN1_CANIF1DB2    ((CANIFnDB2_TypeDef*) (CAN1_BASE + CAN_CANIF1DB2_OFFSET))
#define CAN1_CANIF1DB2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF1DB2_OFFSET)))

#define CAN1_CANIF2DB2    ((CANIFnDB2_TypeDef*) (CAN1_BASE + CAN_CANIF2DB2_OFFSET))
#define CAN1_CANIF2DB2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANIF2DB2_OFFSET)))

/******************************************************************************************
************************************30-31 CANTXRQn *********************************************
******************************************************************************************/
#define CAN1_CANTXRQ    ((CANTXRQ_TypeDef*) (CAN1_BASE + CAN_CANTXRQ_OFFSET))
#define CAN1_CANTXRQ_R    (*((volatile uint64_t*) (CAN1_BASE + CAN_CANTXRQ_OFFSET)))

#define CAN1_CANTXRQ1    ((CANTXRQn_TypeDef*) (CAN1_BASE + CAN_CANTXRQ1_OFFSET))
#define CAN1_CANTXRQ1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANTXRQ1_OFFSET)))

#define CAN1_CANTXRQ2    ((CANTXRQn_TypeDef*) (CAN1_BASE + CAN_CANTXRQ2_OFFSET))
#define CAN1_CANTXRQ2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANTXRQ2_OFFSET)))

/******************************************************************************************
************************************32-33 CANNWDAn *********************************************
******************************************************************************************/
#define CAN1_CANNWDA    ((CANNWDA_TypeDef*) (CAN1_BASE + CAN_CANNWDA_OFFSET))
#define CAN1_CANNWDA_R    (*((volatile uint64_t*) (CAN1_BASE + CAN_CANNWDA_OFFSET)))

#define CAN1_CANNWDA1    ((CANNWDAn_TypeDef*) (CAN1_BASE + CAN_CANNWDA1_OFFSET))
#define CAN1_CANNWDA1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANNWDA1_OFFSET)))

#define CAN1_CANNWDA2    ((CANNWDAn_TypeDef*) (CAN1_BASE + CAN_CANNWDA2_OFFSET))
#define CAN1_CANNWDA2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANNWDA2_OFFSET)))

/******************************************************************************************
************************************34-35 CANMSGnINT *********************************************
******************************************************************************************/
#define CAN1_CANMSGINT    ((CANMSGINT_TypeDef*) (CAN1_BASE + CAN_CANMSGINT_OFFSET))
#define CAN1_CANMSGINT_R    (*((volatile uint64_t*) (CAN1_BASE + CAN_CANMSGINT_OFFSET)))

#define CAN1_CANMSG1INT    ((CANMSGnINT_TypeDef*) (CAN1_BASE + CAN_CANMSG1INT_OFFSET))
#define CAN1_CANMSG1INT_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANMSG1INT_OFFSET)))

#define CAN1_CANMSG2INT    ((CANMSGnINT_TypeDef*) (CAN1_BASE + CAN_CANMSG2INT_OFFSET))
#define CAN1_CANMSG2INT_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANMSG2INT_OFFSET)))

/******************************************************************************************
************************************36-37 CANMSGnVAL *********************************************
******************************************************************************************/
#define CAN1_CANMSGVAL    ((CANMSGVAL_TypeDef*) (CAN1_BASE + CAN_CANMSGVAL_OFFSET))
#define CAN1_CANMSGVAL_R    (*((volatile uint64_t*) (CAN1_BASE + CAN_CANMSGVAL_OFFSET)))

#define CAN1_CANMSG1VAL    ((CANMSGnVAL_TypeDef*) (CAN1_BASE + CAN_CANMSG1VAL_OFFSET))
#define CAN1_CANMSG1VAL_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANMSG1VAL_OFFSET)))

#define CAN1_CANMSG2VAL    ((CANMSGnVAL_TypeDef*) (CAN1_BASE + CAN_CANMSG2VAL_OFFSET))
#define CAN1_CANMSG2VAL_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CANMSG2VAL_OFFSET)))

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_CAN_REGISTERPERIPHERAL_MODULE1_H_ */
