/******************************************************************************/
/* File   : Com.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "Com_core.hpp"
#include "infCom_EcuM.hpp"
#include "infCom_Dcm.hpp"
#include "infCom_SchM.hpp"

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
class module_Com:
      public abstract_module
   ,  public class_Com_Functionality
{
   public:
      module_Com(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, COM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, COM_CONFIG_DATA, COM_APPL_CONST) lptrCfgModule
      );
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
         COM_AR_RELEASE_VERSION_MAJOR
      ,  COM_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, COM_CODE) module_Com::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, COM_CONFIG_DATA, COM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Com_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == Com_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == Com_DevErrorDetect)
         Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgCom;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == Com_InitCheck)
   }
#endif
}

FUNC(void, COM_CODE) module_Com::DeInitFunction(void){
#if(STD_ON == Com_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Com_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == Com_InitCheck)
   }
#endif
}

FUNC(void, COM_CODE) module_Com::MainFunction(void){
#if(STD_ON == Com_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Com_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
#if(STD_ON == Com_InitCheck)
   }
#endif
}

FUNC(void, COM_CODE) module_Com::MainFunctionRx(void){
}

FUNC(void, COM_CODE) module_Com::MainFunctionTx(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::IpduGroupStart(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::IpduGroupStop(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::EnableReceptionDM(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::DisableReceptionDM(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::GetStatus(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::SendSignal(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::SendDynSignal(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::ReceiveSignal(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::ReceiveDynSignal(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::SendSignalGroup(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::ReceiveSignalGroup(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::SendSignalGroupArray(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::ReceiveSignalGroupArray(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::InvalidateSignal(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::InvalidateSignalGroup(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::TriggerIpduSend(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::TriggerIpduSendWithMetaData(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::SwitchIpduTxMode(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::CbTriggerTransmit(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::CbRxIndication(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::CbTpRxIndication(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::CbTxConfirmation(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::CbTpTxConfirmation(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::CbStartOfReception(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::CbCopyRxData(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::CbCopyTxData(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::CbTxAck(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::CbTxErr(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::CbTxTOut(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::CbRxAck(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::CbRxTOut(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::CbRxInv(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::CbCounterErr(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::CallOutRxIpdu(void){
}

FUNC(void, COM_CODE) class_Com_Functionality::CallOutTxIpdu(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

