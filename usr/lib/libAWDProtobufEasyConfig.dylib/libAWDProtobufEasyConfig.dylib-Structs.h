/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libAWDProtobufEasyConfig.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timestamp : 1;
	unsigned channelOfDestinationAP : 1;
	unsigned channelOfSWAP : 1;
	unsigned easyConfigStoppedReasonError : 1;
	unsigned rssiOfDestinationAP : 1;
	unsigned rssiOfSWAP : 1;
	unsigned secondsToApplyConfig : 1;
	unsigned secondsToCompleteFullConfig : 1;
	unsigned secondsToCompleteMFiSAPAuth : 1;
	unsigned secondsToCompletePostConfigCheck : 1;
	unsigned secondsToFindPostConfigDevice : 1;
	unsigned secondsToFindPreConfigDevice : 1;
	unsigned secondsToGetLinkUpOnDestination : 1;
	unsigned secondsToGetLinkUpOnSWAP : 1;
	unsigned snrOfDestinationAP : 1;
	unsigned snrOfSWAP : 1;
	unsigned wifiJoinDestinationAPError : 1;
	unsigned wifiJoinSWAPError : 1;
	unsigned adminPasswordSet : 1;
	unsigned destinationNetworkPSKInKeychain : 1;
	unsigned destinationNetworkRecommendationUsed : 1;
	unsigned hitJoiningDestinationAPTimeout : 1;
	unsigned hitJoiningTargetSWAPTimeout : 1;
	unsigned pauseAfterApply : 1;
	unsigned playPasswordSet : 1;
	unsigned userChangedFriendlyName : 1;
} SCD_Struct_AW1;
