#pragma once

#include "Std_Types.h"

class class_Com{
   public:
      void InitFunction                (void);
      void DeInitFunction              (void);
      void IpduGroupStart              (void);
      void IpduGroupStop               (void);
      void EnableReceptionDM           (void);
      void DisableReceptionDM          (void);
      void GetStatus                   (void);
      void GetVersionInfo              (void);
      void SendSignal                  (void);
      void SendDynSignal               (void);
      void ReceiveSignal               (void);
      void ReceiveDynSignal            (void);
      void SendSignalGroup             (void);
      void ReceiveSignalGroup          (void);
      void SendSignalGroupArray        (void);
      void ReceiveSignalGroupArray     (void);
      void InvalidateSignal            (void);
      void InvalidateSignalGroup       (void);
      void TriggerIpduSend             (void);
      void TriggerIpduSendWithMetaData (void);
      void SwitchIpduTxMode            (void);
      void CbTriggerTransmit           (void);
      void CbRxIndication              (void);
      void CbTpRxIndication            (void);
      void CbTxConfirmation            (void);
      void CbTpTxConfirmation          (void);
      void CbStartOfReception          (void);
      void CbCopyRxData                (void);
      void CbCopyTxData                (void);
      void MainFunctionRx              (void);
      void MainFunctionTx              (void);
      void MainFunctionRouteSignals    (void);
      void CbTxAck                     (void);
      void CbTxErr                     (void);
      void CbTxTOut                    (void);
      void CbRxAck                     (void);
      void CbRxTOut                    (void);
      void CbRxInv                     (void);
      void CbCounterErr                (void);
      void CallOutRxIpdu               (void);
      void CallOutTxIpdu               (void);
};

extern class_Com Com;

