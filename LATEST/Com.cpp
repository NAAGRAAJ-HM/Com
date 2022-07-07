/******************************************************************************/
/* File   : Com.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "Com.hpp"
#include "infCom_Imp.hpp"

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
VAR(module_Com, COM_VAR) Com;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, COM_CODE) module_Com::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, COM_CONFIG_DATA, COM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Com_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         lptrCfg = lptrCfgModule;
      }
      else{
#if(STD_ON == Com_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == Com_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == Com_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  COM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, COM_CODE) module_Com::DeInitFunction(
   void
){
#if(STD_ON == Com_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Com_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == Com_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  COM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, COM_CODE) module_Com::MainFunction(
   void
){
#if(STD_ON == Com_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Com_InitCheck)
   }
   else{
#if(STD_ON == Com_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  COM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, COM_CODE) module_Com::MainFunctionRx(
   void
){
}

FUNC(void, COM_CODE) module_Com::MainFunctionTx(
   void
){
}

FUNC(void, COM_CODE) module_Com::IpduGroupStart(
   void
){
}

FUNC(void, COM_CODE) module_Com::IpduGroupStop(
   void
){
}

FUNC(void, COM_CODE) module_Com::EnableReceptionDM(
   void
){
}

FUNC(void, COM_CODE) module_Com::DisableReceptionDM(
   void
){
}

FUNC(void, COM_CODE) module_Com::GetStatus(
   void
){
}

FUNC(void, COM_CODE) module_Com::SendSignal(
   void
){
}

FUNC(void, COM_CODE) module_Com::SendDynSignal(
   void
){
}

FUNC(void, COM_CODE) module_Com::ReceiveSignal(
   void
){
}

FUNC(void, COM_CODE) module_Com::ReceiveDynSignal(
   void
){
}

FUNC(void, COM_CODE) module_Com::SendSignalGroup(
   void
){
}

FUNC(void, COM_CODE) module_Com::ReceiveSignalGroup(
   void
){
}

FUNC(void, COM_CODE) module_Com::SendSignalGroupArray(
   void
){
}

FUNC(void, COM_CODE) module_Com::ReceiveSignalGroupArray(
   void
){
}

FUNC(void, COM_CODE) module_Com::InvalidateSignal(
   void
){
}

FUNC(void, COM_CODE) module_Com::InvalidateSignalGroup(
   void
){
}

FUNC(void, COM_CODE) module_Com::TriggerIpduSend(
   void
){
}

FUNC(void, COM_CODE) module_Com::TriggerIpduSendWithMetaData(
   void
){
}

FUNC(void, COM_CODE) module_Com::SwitchIpduTxMode(
   void
){
}

FUNC(void, COM_CODE) module_Com::CbTriggerTransmit(
   void
){
}

FUNC(void, COM_CODE) module_Com::RxIndication(
   void
){
}

FUNC(void, COM_CODE) module_Com::CbTpRxIndication(
   void
){
}

FUNC(void, COM_CODE) module_Com::TxConfirmation(
   void
){
}

FUNC(void, COM_CODE) module_Com::CbTpTxConfirmation(
   void
){
}

FUNC(void, COM_CODE) module_Com::CbStartOfReception(
   void
){
}

FUNC(void, COM_CODE) module_Com::CbCopyRxData(
   void
){
}

FUNC(void, COM_CODE) module_Com::CbCopyTxData(
   void
){
}

FUNC(void, COM_CODE) module_Com::CbTxAck(
   void
){
}

FUNC(void, COM_CODE) module_Com::CbTxErr(
   void
){
}

FUNC(void, COM_CODE) module_Com::CbTxTOut(
   void
){
}

FUNC(void, COM_CODE) module_Com::CbRxAck(
   void
){
}

FUNC(void, COM_CODE) module_Com::CbRxTOut(
   void
){
}

FUNC(void, COM_CODE) module_Com::CbRxInv(
   void
){
}

FUNC(void, COM_CODE) module_Com::CbCounterErr(
   void
){
}

FUNC(void, COM_CODE) module_Com::CallOutRxIpdu(
   void
){
}

FUNC(void, COM_CODE) module_Com::CallOutTxIpdu(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

