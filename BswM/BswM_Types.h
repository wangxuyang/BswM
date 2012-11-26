#ifndef BSWM_TYPES_H
#define BSWM_TYPES_H

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
#endif
