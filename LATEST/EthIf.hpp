#pragma once
/******************************************************************************/
/* File   : EthIf.hpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgEthIf.hpp"
#include "EthIf_core.hpp"
#include "infEthIf_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EthIf:
      INTERFACES_EXPORTED_ETHIF
      public abstract_module
   ,  public class_EthIf_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      infPduRClient_Lo infPduRClient_EthIf;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, ETHIF_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, ETHIF_CONFIG_DATA, ETHIF_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ETHIF_CODE) DeInitFunction    (void);
      FUNC(void, ETHIF_CODE) MainFunction      (void);
      ETHIF_CORE_FUNCTIONALITIES

      FUNC(void, ETHIF_CODE) MainFunctionRx    (void);
      FUNC(void, ETHIF_CODE) MainFunctionTx    (void);
      FUNC(void, ETHIF_CODE) MainFunctionState (void);
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
extern VAR(module_EthIf, ETHIF_VAR) EthIf;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

