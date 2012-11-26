#ifndef BSWM_TYPES_H
#define BSWM_TYPES_H

#define STD_ON	1
#define STD_OFF	0

typedef unsigned char uint8;
typedef unsigned short int uint16;

typedef uint8 BooleanType;
typedef uint8 BswMLogicalExpressionCntType, BswMLogicalExpressionIdType;
typedef uint8 BswMRuleActionListCntType, BswMRuleActionListIdType;
typedef uint16 BswMModeInitValueType;
typedef uint8 BswMCanSMChannelIdType;
typedef uint8 BswMDcmComMNetworkIdType;
typedef uint8 BswMEcuMWakeupSrcType, *BswMEcuMWakeupSrcRefType;
typedef uint8 BswMEthSMChannelIdType;
typedef uint8 BswMFrSMChannelIdType;
typedef uint8 BswMComMChannelIdType;
typedef uint8 BswMNvMBlockIdType;
typedef uint8 BswMLinScheduleIdType;
typedef uint8 BswMLinTpChannelIdType;
typedef uint8 BswMModeRequesterIdType;
typedef uint8 BswMRequestedModeType;
typedef uint8 BswMLinSMChannelIdType;
typedef uint8 BswMSwcModeRequestPortType, *BswMSwcModeRequestPortRefType;
typedef void (*BswMSwcModeNotificationfcRefType)(void);
typedef uint8 BswMWdgMPartionIdType;
typedef uint8 BswMModeRequestPortIdType;
typedef uint8 BswMConditionValueIdType;
typedef uint16 BswMBswRequestedModeType;
typedef uint16 *BswMSwcModeDelRefType;
typedef uint8 BswMBswModeIdType;
typedef uint8 BswMSwcModeIdType;
typedef uint8 BswMActionIdType;
typedef uint8 BswMActionListIdType;
typedef uint8 BswMRuleIdType;
typedef uint8 BswMActionListItemIdType;
typedef uint8 BswMComMUserIdType;
typedef uint8 BswMIPduGroupIdType;
typedef uint8 BswMIPduIdType;
typedef uint8 BswMNMChannelIdType;
typedef void (*BswMUserCalloutFunctionType) (void);
typedef uint8 BswMPduRoutingPathGroupIdType;

/*
BswMRuleInitStateType
*/
typedef enum
{
    BSWM_FALSE = 0,
    BSWM_TRUE = 1,
    BSWM_UNDEFINED
}BswMRuleInitStateType;

/*
BswMRequestProcessingType
This parameter defines if the processing of the mode arbitration shall be done immediately when a mode request is received or if it shall be deferred to the processing of the main function of BswM.
*/
typedef enum
{
    BSWM_DEFERRED = 0,
    BSWM_IMMEDIATE = 1    
}BswMRequestProcessingType;

typedef enum
{
	BSWM_AND = 0,
	BSWM_NAND = 1,
	BSWM_OR,
	BSWM_XOR,
}BswMLogicalOperatorType;

typedef struct
{
	BswMLogicalOperatorType BswMLogicalOperator;
	//BswMArgumentRefType BswMArgumentRef;
	// TODO: it's better to use a function to indicate the expression.
}BswMLogicalExpressionType, *BswMLogicalExpressionRefType;

typedef struct
{


}BswMLogicalExpressionType, *BswMLogicalExpressionRefType;


typedef struct
{
	BswMRuleInitStateType BswMRuleInitState;
	BswMLogicalExpressionIdType BswMLogicalExpressionId;
	BswMRuleActionListIdType BswMRuleFalseActionListId;
	BswMRuleActionListIdType BswMRuleTrueActionListId;

}BswMRuleType, *BswMRuleRefType;

typedef struct
{
	BswMCanSMChannelIdType BswMCanSMChannelId;
}BswMCanSMIndicationType;

typedef struct
{
	BswMDcmComMNetworkIdType BswMDcmComMNetworkId;
}BswMDcmComModeRequestType;

typedef struct
{

}BswMDcmResetModeRequestType;

typedef struct
{

}BswMDcmSessionModeRequestType;

typedef struct
{

}BswMEcuMIndicationType;

typedef struct
{
	BswMEcuMWakeupSrcRefType BswMEcuMWakeupSrcPtr;
}BswMEcuMWakeupSourceType;

typedef struct
{
	BswMEthSMChannelIdType BswMEthSMChannelId;
}BswMEthSMIndicationType;

typedef struct
{
	BswMFrSMChannelIdType BswMFrSMChannelId;
}BswMFrSMIndicationType;

typedef struct
{
	BswMComMChannelIdType BswMComMChannelId;
}BswMComMIndicationType;

typedef struct
{
	BswMNvMBlockIdType BswMNvMBlockId;
}BswMNvMRequestType;

typedef struct
{
	BswMLinScheduleIdType BswMLinScheduleId;
}BswMLinScheduleIndicationType;

typedef struct
{
	BswMLinTpChannelIdType BswMLinTpChannelId;
}BswMLinTpModeRequestType;

typedef struct
{
	BswMModeRequesterIdType BswMModeRequesterId;
	BswMRequestedModeType BswMRequestedMax;
}BswMGenericRequestType;

typedef struct
{
	BswMLinSMChannelIdType BswMLinSMChannelId;
}BswMLinSMIndicationType;

typedef struct
{
	BswMSwcModeRequestPortRefType BswMSwcModeRequestPortPtr;
}BswMSwcModeRequestType;

typedef struct
{
	BswMSwcModeNotificationfcRefType BswMSwcModeNotificationfcPtr;
}BswMSwcModeNotificationType;

typedef struct
{
	BswMWdgMPartionIdType BswMWdgMRequestPartitionId;
}BswMWdgMRequestPartitionResetType;

typedef enum
{
	BSWM_CANSM_INDICATION_TYPE = 0,
	BSWM_COMM_INDICATION_TYPE = 1,
	BSWM_DCM_COM_REQUEST_TYPE = 2,
	BSWM_DCM_RESET_REQUEST_TYPE = 3,
	BSWM_DCM_SESSION_REQUEST_TYPE,
	BSWM_ECUM_INDICATION_TYPE,
	BSWM_ECUM_WAKEUP_SOUCE_TYPE,
	BSWM_ETHSM_INDICATION_TYPE,
	BSWM_FRSM_INDICATION_TYPE,
	BSWM_GENERIC_REQUEST_TYPE,
	BSWM_LINSM_INDICATION_TYPE,
	BSWM_LINTP_MODE_REQUEST_TYPE,
	BSWM_LIN_SCHEDULE_INDICATION_TYPE,
	BSWM_NVM_REQUEST_TYPE,
	BSWM_SWC_NOTIFICATION_TYPE,
	BSWM_SWC_REQUEST_TYPE,
	BSWM_WDGM_REQUEST_PARTITION_RESET_TYPE,
}BswMModeRequestSourceChioceType;

typedef struct
{
	BswMModeRequestSourceChioceType BswMModeRequestSourceChioce;
	union
	{
		BswMCanSMIndicationType BswMCanSMIndication;
		BswMDcmComModeRequestType BswMDcmComModeRequest;
		BswMDcmResetModeRequestType BswMDcmResetModeRequest;
		BswMDcmSessionModeRequestType BswMDcmSessionModeRequest;
		BswMEcuMIndicationType BswMEcuMIndication;
		BswMEcuMWakeupSourceType BswMEcuMWakeupSource;
		BswMEthSMIndicationType BswMEthSMIndication;
		BswMFrSMIndicationType BswMFrSMIndication;
		BswMComMIndicationType BswMComMIndication;
		BswMNvMRequestType BswMNvMRequest;
		BswMLinScheduleIndicationType BswMLinScheduleIndication;
		BswMLinTpModeRequestType BswMLinTpModeRequest;
		BswMGenericRequestType BswMGenericRequest;
		BswMLinSMIndicationType BswMLinSMIndication;
		BswMSwcModeRequestType BswMSwcModeRequest;
		BswMSwcModeNotificationType BswMSwcModeNotification;
		BswMWdgMRequestPartitionResetType BswMWdgMRequestPartitionReset;
	}BswMModeRequestSourceParam;
}BswMModeRequestSourceType;

typedef struct
{
	BswMModeInitValueType BswMModeInitValue;
	BooleanType BswMReqModeUndefAfterInit;
	BswMRequestProcessingType BswMRequestProcessing;
	BswMModeRequestSourceType BswMModeRequestSource;
}BswMModeRequestPortType, *BswMModeRequestPortRefType;

typedef enum
{
	BSWM_EQUALS = 0,
	BSWM_EQUALS_NOT
}BswMConditionEnumType;

typedef struct
{
	BswMConditionEnumType BswMConditionEnum;
	BswMModeRequestPortIdType BswMModeRequestPortId;
	BswMConditionValueIdType BswMConditionValueId;
}BswMModeConditionType, *BswMModeConditionRefType;

typedef struct
{
	BswMModeRequestSourceChioceType BswMModeRequestSourceChioce;
	BswMBswRequestedModeType BswMBswRequestedMode;
}BswMBswModeType, *BswMBswModeRefType;

typedef enum
{
	BSWM_SWC_MODE_NOTIFICATION = 0,
	BSWM_SWC_MODE_REQUEST,
}BswMSwcConditionType;

typedef struct
{
	BswMSwcConditionType BswMSwcCondition;
	BswMSwcModeDelRefType BswMSwcModeDelRef;
}BswMSwcModeType, *BswMSwcModeRefType;
typedef struct
{
	BswMBswModeIdType BswMBswModeId;
	BswMSwcModeIdType BswMSwcModeId;
}BswMConditionValueType, *BswMConditionValueRefType;

typedef struct
{
	BswMLogicalExpressionRefType BswMLogicalExpressionPtr;
	BswMModeConditionRefType BswMModeConditionPtr;
	BswMModeRequestPortRefType BswMModeRequestPortPtr;
	BswMRuleRefType	BswMRulePtr;
}BswMArbitrationType, *BswMArbitrationRefType;

typedef enum
{
	BSWM_COMM_ALLOW_COM = 0,
	BSWM_COMM_MODE_LIMITAION,
	BSWM_COMM_MODE_SWITCH,
	BSWM_DEADLINE_MONITORING_CONTROL,
	BSWM_LIN_SCHEDULE_SWITCH,
	BSWM_NM_CONTROL,
	BSWM_PDU_ROUTER_CONTROL,
	BSWM_RESET_SIGNAL_INIT_VALUES,
	BSWM_RTE_SWITCH,
	BSWM_SCHM_SWITCH,
	BSWM_TRIGGER_IPDU_SEND,
	BSWM_USER_CALLOUT,
}BswMAvailableActionsChoiceType;

typedef enum
{
	BSWM_FULL_COM = 0,
	BSWM_NO_COM = 1,
	BSWM_SILENT_COM = 2,
}BswMComMRequestedModeType, BswMComMLimitModeType;

typedef struct
{
	BswMComMRequestedModeType BswMComMRequestedMode;
	BswMComMUserIdType BswMComMUserId;
}BswMComModeSwitchType, *BswMComModeSwitchRefType;

typedef struct
{
	BswMComMChannelIdType BswMComMAllowChannelId;
}BswMComMAllowComType, *BswMComMAllowComRefType;

typedef struct
{
	BswMComMLimitModeType BswMComMLimitMode;
	BswMComMChannelIdType BswMComMLimitChannelId;
}BswMComMModeLimitationType, *BswMComMModeLimitationRefType;

typedef struct
{
	BswMIPduGroupIdType BswMDisableDMPduGroupId;
	BswMIPduGroupIdType BswMEnableDMPduGroupId;
}BswMDeadlineMonitoringControlType, *BswMDeadlineMonitoringControlRefType;

typedef struct
{
	BswMIPduIdType BswMTriggeredIPduId;
}BswMTriggerIPduSendType, *BswMTriggerIPduSendRefType;

typedef enum
{
	BSWM_NM_DISABLE = 0,
	BSWM_NM_ENABLE = 1,
}BswMNMActionType;

typedef struct
{
	BswMNMActionType BswMNMAction;
	BswMNMChannelIdType BswMNMChannelId;
}BswMNMControlType, *BswMNMControlRefType;

typedef struct
{
	BswMLinScheduleIdType BswMLinScheduleId;
}BswMLinScheduleSwitchType, *BswMLinScheduleSwitchRefType;

typedef struct
{
	BooleanType BswMPduGroupSwitchReinit;
	BswMIPduGroupIdType BswMDisablePduGroupId;
	BswMIPduGroupIdType BswMEnablePduGroupId;
}BswMPduGroupSwitchType, *BswMPduGroupSwitchRefType;

typedef struct
{
	BswMIPduGroupIdType BswMResetSignalPduGroupId;
}BswMResetSignalInitValuesType, *BswMResetSignalInitValuesRefType;

typedef enum
{
	BSWM_PUDR_DISABLE = 0,
	BSWM_PUDR_ENABLE = 1,
}BswMPduRouterActionType;

typedef struct
{
	BswMPduRouterActionType BswMPduRouterAction;
	BswMPduRoutingPathGroupIdType BswMPduRoutingPathGroupId;
}BswMPduRouterControlType, *BswMPduRouterControlRefType;

typedef struct
{
	BswMUserCalloutFunctionType BswMUserCalloutFunction;
}BswMUserCalloutType, *BswMUserCalloutRefType;

typedef struct
{

}BswMRteSwitchType, *BswMRteSwitchRefType;

typedef struct
{

}BswMSchMSwitchType, *BswMSchMSwitchRefType;

typedef struct
{
	BswMAvailableActionsChoiceType BswMAvailableActionChoice;
	union
	{
		BswMComModeSwitchType BswMComModeSwitch;
		BswMComMAllowComType BswMComMAllowCom;
		BswMComMModeLimitationType BswMComMModeLimitation;
		BswMDeadlineMonitoringControlType BswMDeadlineMonitoringControl;
		BswMTriggerIPduSendType BswMTriggerIPduSend;
		BswMNMControlType BswMNMControl;
		BswMLinScheduleSwitchType BswMLinScheduleSwitch;
		BswMPduGroupSwitchType BswMPduGroupSwitch;
		BswMResetSignalInitValuesType BswMResetSignalInitValues;
		BswMPduRouterControlType BswMPduRouterControl;
		BswMUserCalloutType BswMUserCallout;
		BswMRteSwitchType BswMRteSwitch;
		BswMSchMSwitchType BswMSchMSwitch;
	}BswMAction;
}BswMAvailableActionsType, *BswMAvailableActionsRefType;

typedef struct
{
	BswMAvailableActionsType BswMAvailableActions;
}BswMActionType, *BswMActionRefType;

typedef enum
{
	BSWM_CONDITION = 0,
	BSWM_TRIGGER = 1,
}BswMActionListExecutionType;

typedef enum
{
	BSWM_ACTION_TYPE = 0,
	BSWM_ACTION_LIST_TYPE,
	BSWM_RULE_TYPE
}BswMActionListItemChoiceType;

typedef struct
{
	BooleanType BswMAbortOnFail;
	BswMActionListItemIdType BswMActionListItemIndex; // the priority, it should be guaranteed by the configure tools.
	BooleanType BswMReportFailToDem;
	BswMActionListItemChoiceType BswMActionListItemChoice;
	union
	{
		BswMActionIdType BswMActionId;
		BswMActionListIdType BswMActionListId;
		BswMRuleIdType BswMRuleId;
	}ActionItemId;
}BswMActionListItemType, *BswMActionListItemRefType;
typedef struct
{
	BswMActionListItemIdType BswMActionListItemCnt;
	BswMActionListItemRefType BswMActionListItemPtr;
}BswMActionListType, BswMActionListRefType;

typedef struct
{
	BswMActionRefType BswMActionPtr;
	BswMActionListRefType BswMActionListPtr;
}BswMModeControlType, *BswMModeControlRefType;

typedef struct
{
	BswMArbitrationRefType BswMArbitrationPtr;
	BswMModeControlRefType BswMModeControlPtr;
}BswMConfigType, *BswMConfigRefType;

#endif
