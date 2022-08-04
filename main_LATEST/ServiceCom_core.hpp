#pragma once
/******************************************************************************/
/* File   : ServiceCom_core.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ServiceCom.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define COM_CORE_FUNCTIONALITIES                                               \
              FUNC(void, COM_CODE) IpduGroupStart              (void);         \
              FUNC(void, COM_CODE) IpduGroupStop               (void);         \
              FUNC(void, COM_CODE) EnableReceptionDM           (void);         \
              FUNC(void, COM_CODE) DisableReceptionDM          (void);         \
              FUNC(void, COM_CODE) GetStatus                   (void);         \
              FUNC(void, COM_CODE) SendSignal                  (void);         \
              FUNC(void, COM_CODE) SendDynSignal               (void);         \
              FUNC(void, COM_CODE) ReceiveSignal               (void);         \
              FUNC(void, COM_CODE) ReceiveDynSignal            (void);         \
              FUNC(void, COM_CODE) SendSignalGroup             (void);         \
              FUNC(void, COM_CODE) ReceiveSignalGroup          (void);         \
              FUNC(void, COM_CODE) SendSignalGroupArray        (void);         \
              FUNC(void, COM_CODE) ReceiveSignalGroupArray     (void);         \
              FUNC(void, COM_CODE) InvalidateSignal            (void);         \
              FUNC(void, COM_CODE) InvalidateSignalGroup       (void);         \
              FUNC(void, COM_CODE) TriggerIpduSend             (void);         \
              FUNC(void, COM_CODE) TriggerIpduSendWithMetaData (void);         \
              FUNC(void, COM_CODE) SwitchIpduTxMode            (void);         \
              FUNC(void, COM_CODE) CbTriggerTransmit           (void);         \
              FUNC(void, COM_CODE) RxIndication                (void);         \
              FUNC(void, COM_CODE) CbTpRxIndication            (void);         \
              FUNC(void, COM_CODE) TxConfirmation              (void);         \
              FUNC(void, COM_CODE) CbTpTxConfirmation          (void);         \
              FUNC(void, COM_CODE) CbStartOfReception          (void);         \
              FUNC(void, COM_CODE) CbCopyRxData                (void);         \
              FUNC(void, COM_CODE) CbCopyTxData                (void);         \
              FUNC(void, COM_CODE) CbTxAck                     (void);         \
              FUNC(void, COM_CODE) CbTxErr                     (void);         \
              FUNC(void, COM_CODE) CbTxTOut                    (void);         \
              FUNC(void, COM_CODE) CbRxAck                     (void);         \
              FUNC(void, COM_CODE) CbRxTOut                    (void);         \
              FUNC(void, COM_CODE) CbRxInv                     (void);         \
              FUNC(void, COM_CODE) CbCounterErr                (void);         \
              FUNC(void, COM_CODE) CallOutRxIpdu               (void);         \
              FUNC(void, COM_CODE) CallOutTxIpdu               (void);         \

#define COM_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, COM_CODE) IpduGroupStart              (void) = 0;     \
      virtual FUNC(void, COM_CODE) IpduGroupStop               (void) = 0;     \
      virtual FUNC(void, COM_CODE) EnableReceptionDM           (void) = 0;     \
      virtual FUNC(void, COM_CODE) DisableReceptionDM          (void) = 0;     \
      virtual FUNC(void, COM_CODE) GetStatus                   (void) = 0;     \
      virtual FUNC(void, COM_CODE) SendSignal                  (void) = 0;     \
      virtual FUNC(void, COM_CODE) SendDynSignal               (void) = 0;     \
      virtual FUNC(void, COM_CODE) ReceiveSignal               (void) = 0;     \
      virtual FUNC(void, COM_CODE) ReceiveDynSignal            (void) = 0;     \
      virtual FUNC(void, COM_CODE) SendSignalGroup             (void) = 0;     \
      virtual FUNC(void, COM_CODE) ReceiveSignalGroup          (void) = 0;     \
      virtual FUNC(void, COM_CODE) SendSignalGroupArray        (void) = 0;     \
      virtual FUNC(void, COM_CODE) ReceiveSignalGroupArray     (void) = 0;     \
      virtual FUNC(void, COM_CODE) InvalidateSignal            (void) = 0;     \
      virtual FUNC(void, COM_CODE) InvalidateSignalGroup       (void) = 0;     \
      virtual FUNC(void, COM_CODE) TriggerIpduSend             (void) = 0;     \
      virtual FUNC(void, COM_CODE) TriggerIpduSendWithMetaData (void) = 0;     \
      virtual FUNC(void, COM_CODE) SwitchIpduTxMode            (void) = 0;     \
      virtual FUNC(void, COM_CODE) CbTriggerTransmit           (void) = 0;     \
      virtual FUNC(void, COM_CODE) RxIndication                (void) = 0;     \
      virtual FUNC(void, COM_CODE) CbTpRxIndication            (void) = 0;     \
      virtual FUNC(void, COM_CODE) TxConfirmation              (void) = 0;     \
      virtual FUNC(void, COM_CODE) CbTpTxConfirmation          (void) = 0;     \
      virtual FUNC(void, COM_CODE) CbStartOfReception          (void) = 0;     \
      virtual FUNC(void, COM_CODE) CbCopyRxData                (void) = 0;     \
      virtual FUNC(void, COM_CODE) CbCopyTxData                (void) = 0;     \
      virtual FUNC(void, COM_CODE) CbTxAck                     (void) = 0;     \
      virtual FUNC(void, COM_CODE) CbTxErr                     (void) = 0;     \
      virtual FUNC(void, COM_CODE) CbTxTOut                    (void) = 0;     \
      virtual FUNC(void, COM_CODE) CbRxAck                     (void) = 0;     \
      virtual FUNC(void, COM_CODE) CbRxTOut                    (void) = 0;     \
      virtual FUNC(void, COM_CODE) CbRxInv                     (void) = 0;     \
      virtual FUNC(void, COM_CODE) CbCounterErr                (void) = 0;     \
      virtual FUNC(void, COM_CODE) CallOutRxIpdu               (void) = 0;     \
      virtual FUNC(void, COM_CODE) CallOutTxIpdu               (void) = 0;     \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServiceCom_Functionality{
   public:
      COM_CORE_FUNCTIONALITIES_VIRTUAL
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

