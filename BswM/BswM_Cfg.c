#ifndef BSWM_CFG_C
#define BSWM_CFG_C
#include "BswM_Cfg.h"


BswMLogicalExpressionType BswMLogicalExpressions[BSWM_LOGICAL_EXPRESSION_CNT] =
{
// we'd better implement by a function pointer.
};

BswMModeConditionType BswMModeConditions[BSWM_MODE_CONDITION_CNT] =
{
	BSWM_EQUALS, //BswMConditionEnumType BswMConditionEnum;
	0, //BswMModeRequestPortIdType BswMModeRequestPortId;
	0, //BswMConditionValueIdType BswMConditionValueId;
};

BswMModeRequestPortType BswMModeRequestPorts[BSWM_MODE_REQUEST_PORT_CNT] =
{
	0, //BswMModeInitValueType BswMModeInitValue;
	FALSE, //BooleanType BswMReqModeUndefAfterInit;
	BSWM_DEFERRED, //BswMRequestProcessingType BswMRequestProcessing;
	//BswMModeRequestSourceType BswMModeRequestSource;
	{
		BSWM_COMM_INDICATION_TYPE,//BswMModeRequestSourceChioceType BswMModeRequestSourceChioce;
//		union
//		{
//			BswMCanSMIndicationType BswMCanSMIndication;
//			BswMDcmComModeRequestType BswMDcmComModeRequest;
//			BswMDcmResetModeRequestType BswMDcmResetModeRequest;
//			BswMDcmSessionModeRequestType BswMDcmSessionModeRequest;
//			BswMEcuMIndicationType BswMEcuMIndication;
//			BswMEcuMWakeupSourceType BswMEcuMWakeupSource;
//			BswMEthSMIndicationType BswMEthSMIndication;
//			BswMFrSMIndicationType BswMFrSMIndication;
//			BswMComMIndicationType BswMComMIndication;
//			BswMNvMRequestType BswMNvMRequest;
//			BswMLinScheduleIndicationType BswMLinScheduleIndication;
//			BswMLinTpModeRequestType BswMLinTpModeRequest;
//			BswMGenericRequestType BswMGenericRequest;
//			BswMLinSMIndicationType BswMLinSMIndication;
//			BswMSwcModeRequestType BswMSwcModeRequest;
//			BswMSwcModeNotificationType BswMSwcModeNotification;
//			BswMWdgMRequestPartitionResetType BswMWdgMRequestPartitionReset;
//		}BswMModeRequestSourceParam;
		{
			0,
		},
	},
};

BswMRuleType BswMRules[BSWM_RULE_CNT] =
{
	{
		BSWM_FALSE, //BswMRuleInitStateType BswMRuleInitState;
		0, //BswMLogicalExpressionIdType BswMLogicalExpressionId;
		0, //BswMRuleActionListIdType BswMRuleFalseActionListId;
		0, //BswMRuleActionListIdType BswMRuleTrueActionListId;
	},
};

BswMArbitrationType BswMArbitration =
{
	BswMLogicalExpressions, //BswMLogicalExpressionRefType BswMLogicalExpressionPtr;
	BswMModeConditions, //BswMModeConditionRefType BswMModeConditionPtr;
	BswMModeRequestPorts, //BswMModeRequestPortRefType BswMModeRequestPortPtr;
	BswMRules //BswMRuleRefType	BswMRulePtr;
};

BswMActionType BswMActions[BSWM_ACTION_CNT] =
{
	{
		BSWM_COMM_MODE_SWITCH,//BswMAvailableActionsChoiceType BswMAvailableActionChoice;
		{
							//typedef struct
							//{
			BSWM_FULL_COM, //	BswMComMRequestedModeType BswMComMRequestedMode;
			0,  			//	BswMComMUserIdType BswMComMUserId;
							//}BswMComModeSwitchType
		}
	},
};

BswMActionListItemType BswMActionList0_Items[] =
{
	{
		FALSE, //BooleanType BswMAbortOnFail;
		0, //BswMActionListItemIdType BswMActionListItemIndex; // the priority, it should be guaranteed by the configure tools.
		FALSE, //BooleanType BswMReportFailToDem;
		BSWM_ACTION_TYPE, //BswMActionListItemChoiceType BswMActionListItemChoice;
		//union
		//{
		//	BswMActionIdType BswMActionId;
		//	BswMActionListIdType BswMActionListId;
		//	BswMRuleIdType BswMRuleId;
		//}ActionItemId;
		{
			0,
		},
	},
};

BswMActionListType BswMActionLists[BSWM_ACTION_LIST_CNT] =
{
	{
		2,		//BswMActionListItemIdType BswMActionListItemCnt;
		BswMActionList0_Items //BswMActionListItemRefType BswMActionListItemPtr;
	},
};

BswMModeControlType BswMModeControl =
{
	BswMActions, //BswMActionRefType BswMActionPtr;
	BswMActionLists, //BswMActionListRefType BswMActionListPtr;
};

BswMConfigType BswMConfig =
{
	&BswMArbitration, //BswMArbitrationRefType BswMArbitrationPtr;
	&BswMModeControl, //BswMModeControlRefType BswMModeControlPtr;
};
#endif
