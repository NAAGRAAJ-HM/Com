/*****************************************************/
/* File   : Com.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Com.h"

#include "Com_EcuM.h"
#include "ComRx_SchM.h"
#include "ComTx_SchM.h"
#include "ComRouteSignals_SchM.h"

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_Com_EcuM Com_EcuM;
class_EcuM_Client *EcuM_Client_ptr_Com = &Com_EcuM;
class_ComRx_SchM ComRx_SchM;
class_SchM_Client *SchM_Client_ptr_ComRx = &ComRx_SchM;
class_ComTx_SchM ComTx_SchM;
class_SchM_Client *SchM_Client_ptr_ComTx = &ComTx_SchM;
class_ComRouteSignals_SchM ComRouteSignals_SchM;
class_SchM_Client *SchM_Client_ptr_ComRouteSignals = &ComRouteSignals_SchM;
class_Com Com;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, COM_CODE) class_Com_EcuM::InitFunction(void){
}

FUNC(void, COM_CODE) class_Com_EcuM::DeInitFunction(void){
}

FUNC(void, COM_CODE) class_ComRx_SchM::MainFunction(void){
}

FUNC(void, COM_CODE) class_ComTx_SchM::MainFunction(void){
}

FUNC(void, COM_CODE) class_ComRouteSignals_SchM::MainFunction(void){
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

