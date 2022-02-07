#pragma once
/*****************************************************/
/* File   : Com.h                                    */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Std_Types.h"
#include "Compiler_Cfg_Com.h"

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class class_Com{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      FUNC(void, COM_CODE) IpduGroupStart              (void);
      FUNC(void, COM_CODE) IpduGroupStop               (void);
      FUNC(void, COM_CODE) EnableReceptionDM           (void);
      FUNC(void, COM_CODE) DisableReceptionDM          (void);
      FUNC(void, COM_CODE) GetStatus                   (void);
      FUNC(void, COM_CODE) GetVersionInfo              (void);
      FUNC(void, COM_CODE) SendSignal                  (void);
      FUNC(void, COM_CODE) SendDynSignal               (void);
      FUNC(void, COM_CODE) ReceiveSignal               (void);
      FUNC(void, COM_CODE) ReceiveDynSignal            (void);
      FUNC(void, COM_CODE) SendSignalGroup             (void);
      FUNC(void, COM_CODE) ReceiveSignalGroup          (void);
      FUNC(void, COM_CODE) SendSignalGroupArray        (void);
      FUNC(void, COM_CODE) ReceiveSignalGroupArray     (void);
      FUNC(void, COM_CODE) InvalidateSignal            (void);
      FUNC(void, COM_CODE) InvalidateSignalGroup       (void);
      FUNC(void, COM_CODE) TriggerIpduSend             (void);
      FUNC(void, COM_CODE) TriggerIpduSendWithMetaData (void);
      FUNC(void, COM_CODE) SwitchIpduTxMode            (void);
      FUNC(void, COM_CODE) CbTriggerTransmit           (void);
      FUNC(void, COM_CODE) CbRxIndication              (void);
      FUNC(void, COM_CODE) CbTpRxIndication            (void);
      FUNC(void, COM_CODE) CbTxConfirmation            (void);
      FUNC(void, COM_CODE) CbTpTxConfirmation          (void);
      FUNC(void, COM_CODE) CbStartOfReception          (void);
      FUNC(void, COM_CODE) CbCopyRxData                (void);
      FUNC(void, COM_CODE) CbCopyTxData                (void);
      FUNC(void, COM_CODE) MainFunctionRx              (void);
      FUNC(void, COM_CODE) MainFunctionTx              (void);
      FUNC(void, COM_CODE) MainFunctionRouteSignals    (void);
      FUNC(void, COM_CODE) CbTxAck                     (void);
      FUNC(void, COM_CODE) CbTxErr                     (void);
      FUNC(void, COM_CODE) CbTxTOut                    (void);
      FUNC(void, COM_CODE) CbRxAck                     (void);
      FUNC(void, COM_CODE) CbRxTOut                    (void);
      FUNC(void, COM_CODE) CbRxInv                     (void);
      FUNC(void, COM_CODE) CbCounterErr                (void);
      FUNC(void, COM_CODE) CallOutRxIpdu               (void);
      FUNC(void, COM_CODE) CallOutTxIpdu               (void);
};

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern class_Com Com;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

