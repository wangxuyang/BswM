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

typedef struct
{


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
	BSWM_DCM_COM_MODE_REQUEST_TYPE = 1,
	BSWM_DCM_RESET_MODE_REQUEST_TYPE = 2,
	BSWM_DCM_SESSION_MODE_REQUEST_TYPE,
	BSWM_ECUM_INDICATION_TYPE,
	BSWM_ECUM_WAKEUP_SOUCE_TYPE,
	BSWM_ETHSM_INDICATION_TYPE,
	BSWM_FRSM_INDICATION_TYPE,
	BSWM_COMM_INDICATION_TYPE,
	BSWM_NVM_REQUEST_TYPE,
	BSWM_LIN_SCHEDULE_INDICATION_TYPE,
	BSWM_LINTP_MODE_REQUEST_TYPE,
	BSWM_GENERIC_REQUEST_TYPE,
	BSWM_LINSM_INDICATION_TYPE,
	BSWM_SWC_MODE_REQUEST_TYPE,
	BSWM_SWC_MODE_NOTIFICATION_TYPE,
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
	}BswMModeRequestSourceParamType;
}BswMModeRequestSourceType;

typedef struct
{
	BswMModeInitValueType BswMModeInitValue;
	BooleanType BswMReqModeUndefAfterInit;
	BswMRequestProcessingType BswMRequestProcessing;
	BswMModeRequestSourceType BswMModeRequestSource;
}BswMModeRequestPortType, *BswMModeRequestPortRefType;

typedef struct
{
	BswMLogicalExpressionRefType BswMLogicalExpressionPtr;
	BswMModeConditionRefType BswMModeConditionPtr;
	BswMModeRequestPortRefType BswMModeRequestPortPtr;
	BswMRuleRefType	BswMRulePtr;
}BswMArbitrationType, *BswMArbitrationRefType;

typedef struct
{

}BswMModeControlType, *BswMModeControlRefType;

typedef struct
{
	BswMArbitrationRefType BswMArbitrationPtr;
	BswMModeControlRefType BswMModeControlPtr;
}BswMConfigType, *BswMConfigRefType;

#endif
