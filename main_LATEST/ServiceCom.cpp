/******************************************************************************/
/* File   : ServiceCom.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServiceCom.hpp"
#include "infServiceCom_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define COM_AR_RELEASE_VERSION_MAJOR                                           4
#define COM_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(COM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible COM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(COM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible COM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ServiceCom, COM_VAR) ServiceCom;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, COM_CODE) module_ServiceCom::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, COM_CONST,       COM_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   COM_CONFIG_DATA, COM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceCom_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstServiceCom_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceCom_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceCom_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceCom_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  COM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, COM_CODE) module_ServiceCom::DeInitFunction(
   void
){
#if(STD_ON == ServiceCom_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceCom_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceCom_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  COM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, COM_CODE) module_ServiceCom::MainFunction(
   void
){
#if(STD_ON == ServiceCom_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceCom_InitCheck)
   }
   else{
#if(STD_ON == ServiceCom_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  COM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, COM_CODE) module_ServiceCom::MainFunctionRx(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::MainFunctionTx(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::IpduGroupStart(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::IpduGroupStop(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::EnableReceptionDM(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::DisableReceptionDM(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::GetStatus(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::SendSignal(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::SendDynSignal(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::ReceiveSignal(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::ReceiveDynSignal(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::SendSignalGroup(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::ReceiveSignalGroup(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::SendSignalGroupArray(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::ReceiveSignalGroupArray(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::InvalidateSignal(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::InvalidateSignalGroup(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::TriggerIpduSend(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::TriggerIpduSendWithMetaData(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::SwitchIpduTxMode(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::CbTriggerTransmit(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::RxIndication(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::CbTpRxIndication(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::TxConfirmation(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::CbTpTxConfirmation(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::CbStartOfReception(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::CbCopyRxData(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::CbCopyTxData(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::CbTxAck(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::CbTxErr(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::CbTxTOut(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::CbRxAck(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::CbRxTOut(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::CbRxInv(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::CbCounterErr(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::CallOutRxIpdu(
   void
){
}

FUNC(void, COM_CODE) module_ServiceCom::CallOutTxIpdu(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

