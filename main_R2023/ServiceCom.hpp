#pragma once
/******************************************************************************/
/* File   : ServiceCom.hpp                                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infServiceCom_ServiceNvM_Types.hpp"
#include "CfgServiceCom.hpp"
#include "ServiceCom_core.hpp"
#include "infServiceCom_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceCom:
      INTERFACES_EXPORTED_SERVICECOM
      public abstract_module
   ,  public class_ServiceCom_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceCom_Type* lptrConst = (ConstServiceCom_Type*)NULL_PTR;
      infServicePduRClient_Up infServicePduRClient_ServiceCom;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICECOM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICECOM_CONST,       SERVICECOM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICECOM_CONFIG_DATA, SERVICECOM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICECOM_CODE) DeInitFunction (void);
      FUNC(void, SERVICECOM_CODE) MainFunction   (void);
      SERVICECOM_CORE_FUNCTIONALITIES

      FUNC(void, SERVICECOM_CODE) MainFunctionRx (void);
      FUNC(void, SERVICECOM_CODE) MainFunctionTx (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceCom, SERVICECOM_VAR) ServiceCom;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

