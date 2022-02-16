/*****************************************************/
/* File   : Com.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"

#include "Com_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_Com : public class_module{
   public:
      FUNC(void, COM_CODE) InitFunction   (void);
      FUNC(void, COM_CODE) DeInitFunction (void);
      FUNC(void, COM_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_Com Com;

interface_EcuM_Client *EcuM_Client_ptr_Com = &Com;
interface_SchM_Client *SchM_Client_ptr_Com = &Com;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, COM_CODE) module_Com::InitFunction(void){
}

FUNC(void, COM_CODE) module_Com::DeInitFunction(void){
}

FUNC(void, COM_CODE) module_Com::MainFunction(void){
//TBD MainFunctionRx, MainFunctionTx
}

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

FUNC(void, COM_CODE) class_Com_Unused::GetVersionInfo(void){
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

/*****************************************************/
/* EOF                                               */
/*****************************************************/

