/******************************************************************************/
/* File   : Com.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.hpp"
#include "infCom_EcuM.hpp"
#include "infCom_Dcm.hpp"
#include "infCom_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define COM_AR_RELEASE_MAJOR_VERSION                                           4
#define COM_AR_RELEASE_MINOR_VERSION                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(COM_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible COM_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(COM_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible COM_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Com:
      public abstract_module
{
   public:
      module_Com(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, COM_CODE) InitFunction   (void);
      FUNC(void, COM_CODE) DeInitFunction (void);
      FUNC(void, COM_CODE) MainFunction   (void);

      FUNC(void, COM_CODE) MainFunctionRx (void);
      FUNC(void, COM_CODE) MainFunctionTx (void);
};

extern VAR(module_Com, COM_VAR) Com;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, COM_VAR, COM_CONST) gptrinfEcuMClient_Com = &Com;
CONSTP2VAR(infDcmClient,  COM_VAR, COM_CONST) gptrinfDcmClient_Com  = &Com;
CONSTP2VAR(infSchMClient, COM_VAR, COM_CONST) gptrinfSchMClient_Com = &Com;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgCom.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Com, COM_VAR) Com(
   {
         0x0000
      ,  0xFFFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, COM_CODE) module_Com::InitFunction(void){
   Com.IsInitDone = E_OK;
}

FUNC(void, COM_CODE) module_Com::DeInitFunction(void){
   Com.IsInitDone = E_NOT_OK;
}

FUNC(void, COM_CODE) module_Com::MainFunction(void){
}

FUNC(void, COM_CODE) module_Com::MainFunctionRx(void){
}

FUNC(void, COM_CODE) module_Com::MainFunctionTx(void){
}

class class_Com_Unused{
   public:
      FUNC(void, COM_CODE) IpduGroupStart              (void);
      FUNC(void, COM_CODE) IpduGroupStop               (void);
      FUNC(void, COM_CODE) EnableReceptionDM           (void);
      FUNC(void, COM_CODE) DisableReceptionDM          (void);
      FUNC(void, COM_CODE) GetStatus                   (void);
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

FUNC(void, COM_CODE) class_Com_Unused::IpduGroupStart(void){
}

FUNC(void, COM_CODE) class_Com_Unused::IpduGroupStop(void){
}

FUNC(void, COM_CODE) class_Com_Unused::EnableReceptionDM(void){
}

FUNC(void, COM_CODE) class_Com_Unused::DisableReceptionDM(void){
}

FUNC(void, COM_CODE) class_Com_Unused::GetStatus(void){
}

FUNC(void, COM_CODE) class_Com_Unused::SendSignal(void){
}

FUNC(void, COM_CODE) class_Com_Unused::SendDynSignal(void){
}

FUNC(void, COM_CODE) class_Com_Unused::ReceiveSignal(void){
}

FUNC(void, COM_CODE) class_Com_Unused::ReceiveDynSignal(void){
}

FUNC(void, COM_CODE) class_Com_Unused::SendSignalGroup(void){
}

FUNC(void, COM_CODE) class_Com_Unused::ReceiveSignalGroup(void){
}

FUNC(void, COM_CODE) class_Com_Unused::SendSignalGroupArray(void){
}

FUNC(void, COM_CODE) class_Com_Unused::ReceiveSignalGroupArray(void){
}

FUNC(void, COM_CODE) class_Com_Unused::InvalidateSignal(void){
}

FUNC(void, COM_CODE) class_Com_Unused::InvalidateSignalGroup(void){
}

FUNC(void, COM_CODE) class_Com_Unused::TriggerIpduSend(void){
}

FUNC(void, COM_CODE) class_Com_Unused::TriggerIpduSendWithMetaData(void){
}

FUNC(void, COM_CODE) class_Com_Unused::SwitchIpduTxMode(void){
}

FUNC(void, COM_CODE) class_Com_Unused::CbTriggerTransmit(void){
}

FUNC(void, COM_CODE) class_Com_Unused::CbRxIndication(void){
}

FUNC(void, COM_CODE) class_Com_Unused::CbTpRxIndication(void){
}

FUNC(void, COM_CODE) class_Com_Unused::CbTxConfirmation(void){
}

FUNC(void, COM_CODE) class_Com_Unused::CbTpTxConfirmation(void){
}

FUNC(void, COM_CODE) class_Com_Unused::CbStartOfReception(void){
}

FUNC(void, COM_CODE) class_Com_Unused::CbCopyRxData(void){
}

FUNC(void, COM_CODE) class_Com_Unused::CbCopyTxData(void){
}

FUNC(void, COM_CODE) class_Com_Unused::CbTxAck(void){
}

FUNC(void, COM_CODE) class_Com_Unused::CbTxErr(void){
}

FUNC(void, COM_CODE) class_Com_Unused::CbTxTOut(void){
}

FUNC(void, COM_CODE) class_Com_Unused::CbRxAck(void){
}

FUNC(void, COM_CODE) class_Com_Unused::CbRxTOut(void){
}

FUNC(void, COM_CODE) class_Com_Unused::CbRxInv(void){
}

FUNC(void, COM_CODE) class_Com_Unused::CbCounterErr(void){
}

FUNC(void, COM_CODE) class_Com_Unused::CallOutRxIpdu(void){
}

FUNC(void, COM_CODE) class_Com_Unused::CallOutTxIpdu(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

