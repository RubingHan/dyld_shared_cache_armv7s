/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libAWDProtobufPower.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timestamp : 1;
	unsigned allAppsCount : 1;
	unsigned avgBrightness : 1;
	unsigned avgMicroAmps : 1;
	unsigned cPUEnergyMicroWatt : 1;
	unsigned dispOnCount : 1;
	unsigned dispOnDuration : 1;
	unsigned energyChargedMicroWatt : 1;
	unsigned energyConsumedMicroWatt : 1;
	unsigned mieCount : 1;
	unsigned mieDuration : 1;
} SCD_Struct_AW1;

typedef struct {
	unsigned appBGCount : 1;
	unsigned appBGDuration : 1;
	unsigned appFGCount : 1;
	unsigned appFGDuration : 1;
} SCD_Struct_AW2;

typedef struct {
	unsigned bucketDuration : 1;
} SCD_Struct_AW3;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW4;

typedef struct {
	unsigned timestamp : 1;
	unsigned armUtilityThresholdPoint : 1;
	unsigned radarPriority : 1;
} SCD_Struct_AW5;

