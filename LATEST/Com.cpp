/*****************************************************/
/* File   : Com.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Com.h"

#include "Com_EcuM.h"
#include "Com_SchM.h"

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
interface_Com_EcuM_Init Com_EcuM_Init;
interface_Com_EcuM_DeInit Com_EcuM_DeInit;
interface_ComRouteSignals_SchM_Main ComRouteSignals_SchM_Main;
interface_ComRx_SchM_Main ComRx_SchM_Main;
interface_ComTx_SchM_Main ComTx_SchM_Main;
class_Com Com;

interface_EcuM_Init_Client *EcuM_Init_Client_ptr_Com = &Com_EcuM_Init;
interface_EcuM_DeInit_Client *EcuM_DeInit_Client_ptr_Com = &Com_EcuM_DeInit;
interface_SchM_Main_Client *SchM_Main_Client_ptr_ComRx = &ComRx_SchM_Main;
interface_SchM_Main_Client *SchM_Main_Client_ptr_ComTx = &ComTx_SchM_Main;
interface_SchM_Main_Client *SchM_Main_Client_ptr_ComRouteSignals = &ComRouteSignals_SchM_Main;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, COM_CODE) interface_Com_EcuM_Init::InitFunction(void){
}

FUNC(void, COM_CODE) interface_Com_EcuM_DeInit::DeInitFunction(void){
}

FUNC(void, COM_CODE) interface_ComRouteSignals_SchM_Main::MainFunction(void){
}

FUNC(void, COM_CODE) interface_ComRx_SchM_Main::MainFunction(void){
}

FUNC(void, COM_CODE) interface_ComTx_SchM_Main::MainFunction(void){
}

FUNC(void, COM_CODE) class_Com::IpduGroupStart(void){
}

FUNC(void, COM_CODE) class_Com::IpduGroupStop(void){
}

FUNC(void, COM_CODE) class_Com::EnableReceptionDM(void){
}

FUNC(void, COM_CODE) class_Com::DisableReceptionDM(void){
}

FUNC(void, COM_CODE) class_Com::GetStatus(void){
}

FUNC(void, COM_CODE) class_Com::GetVersionInfo(void){
}

FUNC(void, COM_CODE) class_Com::SendSignal(void){
}

FUNC(void, COM_CODE) class_Com::SendDynSignal(void){
}

FUNC(void, COM_CODE) class_Com::ReceiveSignal(void){
}

FUNC(void, COM_CODE) class_Com::ReceiveDynSignal(void){
}

FUNC(void, COM_CODE) class_Com::SendSignalGroup(void){
}

FUNC(void, COM_CODE) class_Com::ReceiveSignalGroup(void){
}

FUNC(void, COM_CODE) class_Com::SendSignalGroupArray(void){
}

FUNC(void, COM_CODE) class_Com::ReceiveSignalGroupArray(void){
}

FUNC(void, COM_CODE) class_Com::InvalidateSignal(void){
}

FUNC(void, COM_CODE) class_Com::InvalidateSignalGroup(void){
}

FUNC(void, COM_CODE) class_Com::TriggerIpduSend(void){
}

FUNC(void, COM_CODE) class_Com::TriggerIpduSendWithMetaData(void){
}

FUNC(void, COM_CODE) class_Com::SwitchIpduTxMode(void){
}

FUNC(void, COM_CODE) class_Com::CbTriggerTransmit(void){
}

FUNC(void, COM_CODE) class_Com::CbRxIndication(void){
}

FUNC(void, COM_CODE) class_Com::CbTpRxIndication(void){
}

FUNC(void, COM_CODE) class_Com::CbTxConfirmation(void){
}

FUNC(void, COM_CODE) class_Com::CbTpTxConfirmation(void){
}

FUNC(void, COM_CODE) class_Com::CbStartOfReception(void){
}

FUNC(void, COM_CODE) class_Com::CbCopyRxData(void){
}

FUNC(void, COM_CODE) class_Com::CbCopyTxData(void){
}

FUNC(void, COM_CODE) class_Com::CbTxAck(void){
}

FUNC(void, COM_CODE) class_Com::CbTxErr(void){
}

FUNC(void, COM_CODE) class_Com::CbTxTOut(void){
}

FUNC(void, COM_CODE) class_Com::CbRxAck(void){
}

FUNC(void, COM_CODE) class_Com::CbRxTOut(void){
}

FUNC(void, COM_CODE) class_Com::CbRxInv(void){
}

FUNC(void, COM_CODE) class_Com::CbCounterErr(void){
}

FUNC(void, COM_CODE) class_Com::CallOutRxIpdu(void){
}

FUNC(void, COM_CODE) class_Com::CallOutTxIpdu(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

