/******************************************************************************/
/* File   : Com.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgCom.hpp"
#include "Com_core.hpp"
#include "infCom.hpp"

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
      COM_CORE_FUNCTIONALITIES

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
   if(E_OK != IsInitDone){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_LOW){
            // check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
            // use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgCom;
         }
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

FUNC(void, COM_CODE) module_Com::DeInitFunction(void){
#if(STD_ON == Com_InitCheck)
   if(E_OK == IsInitDone){
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

FUNC(void, COM_CODE) module_Com::MainFunction(void){
#if(STD_ON == Com_InitCheck)
   if(E_OK == IsInitDone){
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

FUNC(void, COM_CODE) module_Com::MainFunctionRx(void){
}

FUNC(void, COM_CODE) module_Com::MainFunctionTx(void){
}

FUNC(void, COM_CODE) module_Com::IpduGroupStart(void){
}

FUNC(void, COM_CODE) module_Com::IpduGroupStop(void){
}

FUNC(void, COM_CODE) module_Com::EnableReceptionDM(void){
}

FUNC(void, COM_CODE) module_Com::DisableReceptionDM(void){
}

FUNC(void, COM_CODE) module_Com::GetStatus(void){
}

FUNC(void, COM_CODE) module_Com::SendSignal(void){
}

FUNC(void, COM_CODE) module_Com::SendDynSignal(void){
}

FUNC(void, COM_CODE) module_Com::ReceiveSignal(void){
}

FUNC(void, COM_CODE) module_Com::ReceiveDynSignal(void){
}

FUNC(void, COM_CODE) module_Com::SendSignalGroup(void){
}

FUNC(void, COM_CODE) module_Com::ReceiveSignalGroup(void){
}

FUNC(void, COM_CODE) module_Com::SendSignalGroupArray(void){
}

FUNC(void, COM_CODE) module_Com::ReceiveSignalGroupArray(void){
}

FUNC(void, COM_CODE) module_Com::InvalidateSignal(void){
}

FUNC(void, COM_CODE) module_Com::InvalidateSignalGroup(void){
}

FUNC(void, COM_CODE) module_Com::TriggerIpduSend(void){
}

FUNC(void, COM_CODE) module_Com::TriggerIpduSendWithMetaData(void){
}

FUNC(void, COM_CODE) module_Com::SwitchIpduTxMode(void){
}

FUNC(void, COM_CODE) module_Com::CbTriggerTransmit(void){
}

FUNC(void, COM_CODE) module_Com::CbRxIndication(void){
}

FUNC(void, COM_CODE) module_Com::CbTpRxIndication(void){
}

FUNC(void, COM_CODE) module_Com::CbTxConfirmation(void){
}

FUNC(void, COM_CODE) module_Com::CbTpTxConfirmation(void){
}

FUNC(void, COM_CODE) module_Com::CbStartOfReception(void){
}

FUNC(void, COM_CODE) module_Com::CbCopyRxData(void){
}

FUNC(void, COM_CODE) module_Com::CbCopyTxData(void){
}

FUNC(void, COM_CODE) module_Com::CbTxAck(void){
}

FUNC(void, COM_CODE) module_Com::CbTxErr(void){
}

FUNC(void, COM_CODE) module_Com::CbTxTOut(void){
}

FUNC(void, COM_CODE) module_Com::CbRxAck(void){
}

FUNC(void, COM_CODE) module_Com::CbRxTOut(void){
}

FUNC(void, COM_CODE) module_Com::CbRxInv(void){
}

FUNC(void, COM_CODE) module_Com::CbCounterErr(void){
}

FUNC(void, COM_CODE) module_Com::CallOutRxIpdu(void){
}

FUNC(void, COM_CODE) module_Com::CallOutTxIpdu(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

