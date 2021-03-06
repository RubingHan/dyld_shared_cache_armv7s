/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libAWDProtobufAirPlay.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobufAirPlay.dylib/libAWDProtobufAirPlay.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface AWDAirPlayScreenSessionEndedOnClient : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _avgBitrate;
	unsigned _avgEstimatedBandwidth;
	unsigned _avgUsedBandwidth;
	unsigned _clearScreens;
	unsigned _configChanges;
	unsigned _cpuAvg;
	unsigned _duration;
	unsigned _forcedRefreshes;
	unsigned _framesSent;
	int _reason;
	unsigned _resumes;
	unsigned _retransmitAvg;
	unsigned _rttAvg;
	NSString* _sessionUUID;
	unsigned _suspends;
	unsigned _unclearScreens;
	unsigned _wifiChannel;
	int _wifiRSSI;
	SCD_Struct_AW9 _has;

}

@property (nonatomic,readonly) bool hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                      //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) bool hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) bool hasReason; 
@property (assign,nonatomic) int reason;                                  //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) bool hasDuration; 
@property (assign,nonatomic) unsigned duration;                           //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) bool hasFramesSent; 
@property (assign,nonatomic) unsigned framesSent;                         //@synthesize framesSent=_framesSent - In the implementation block
@property (assign,nonatomic) bool hasConfigChanges; 
@property (assign,nonatomic) unsigned configChanges;                      //@synthesize configChanges=_configChanges - In the implementation block
@property (assign,nonatomic) bool hasClearScreens; 
@property (assign,nonatomic) unsigned clearScreens;                       //@synthesize clearScreens=_clearScreens - In the implementation block
@property (assign,nonatomic) bool hasUnclearScreens; 
@property (assign,nonatomic) unsigned unclearScreens;                     //@synthesize unclearScreens=_unclearScreens - In the implementation block
@property (assign,nonatomic) bool hasSuspends; 
@property (assign,nonatomic) unsigned suspends;                           //@synthesize suspends=_suspends - In the implementation block
@property (assign,nonatomic) bool hasResumes; 
@property (assign,nonatomic) unsigned resumes;                            //@synthesize resumes=_resumes - In the implementation block
@property (assign,nonatomic) bool hasForcedRefreshes; 
@property (assign,nonatomic) unsigned forcedRefreshes;                    //@synthesize forcedRefreshes=_forcedRefreshes - In the implementation block
@property (assign,nonatomic) bool hasAvgEstimatedBandwidth; 
@property (assign,nonatomic) unsigned avgEstimatedBandwidth;              //@synthesize avgEstimatedBandwidth=_avgEstimatedBandwidth - In the implementation block
@property (assign,nonatomic) bool hasAvgUsedBandwidth; 
@property (assign,nonatomic) unsigned avgUsedBandwidth;                   //@synthesize avgUsedBandwidth=_avgUsedBandwidth - In the implementation block
@property (assign,nonatomic) bool hasAvgBitrate; 
@property (assign,nonatomic) unsigned avgBitrate;                         //@synthesize avgBitrate=_avgBitrate - In the implementation block
@property (assign,nonatomic) bool hasRetransmitAvg; 
@property (assign,nonatomic) unsigned retransmitAvg;                      //@synthesize retransmitAvg=_retransmitAvg - In the implementation block
@property (assign,nonatomic) bool hasRttAvg; 
@property (assign,nonatomic) unsigned rttAvg;                             //@synthesize rttAvg=_rttAvg - In the implementation block
@property (assign,nonatomic) bool hasCpuAvg; 
@property (assign,nonatomic) unsigned cpuAvg;                             //@synthesize cpuAvg=_cpuAvg - In the implementation block
@property (assign,nonatomic) bool hasWifiRSSI; 
@property (assign,nonatomic) int wifiRSSI;                                //@synthesize wifiRSSI=_wifiRSSI - In the implementation block
@property (assign,nonatomic) bool hasWifiChannel; 
@property (assign,nonatomic) unsigned wifiChannel;                        //@synthesize wifiChannel=_wifiChannel - In the implementation block
-(void)setReason:(int)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(int)reason;
-(void)setSessionUUID:(id)arg1 ;
-(void)setFramesSent:(unsigned)arg1 ;
-(void)setConfigChanges:(unsigned)arg1 ;
-(void)setClearScreens:(unsigned)arg1 ;
-(void)setUnclearScreens:(unsigned)arg1 ;
-(void)setSuspends:(unsigned)arg1 ;
-(void)setResumes:(unsigned)arg1 ;
-(void)setForcedRefreshes:(unsigned)arg1 ;
-(void)setAvgEstimatedBandwidth:(unsigned)arg1 ;
-(void)setAvgUsedBandwidth:(unsigned)arg1 ;
-(void)setRetransmitAvg:(unsigned)arg1 ;
-(void)setRttAvg:(unsigned)arg1 ;
-(void)setCpuAvg:(unsigned)arg1 ;
-(void)setWifiRSSI:(int)arg1 ;
-(void)setWifiChannel:(unsigned)arg1 ;
-(bool)readFrom:(id)arg1 ;
-(bool)hasDuration;
-(void)setHasDuration:(bool)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(bool)arg1 ;
-(bool)hasTimestamp;
-(bool)hasSessionUUID;
-(id)sessionUUID;
-(void)setHasFramesSent:(bool)arg1 ;
-(bool)hasFramesSent;
-(void)setHasConfigChanges:(bool)arg1 ;
-(bool)hasConfigChanges;
-(void)setHasClearScreens:(bool)arg1 ;
-(bool)hasClearScreens;
-(void)setHasUnclearScreens:(bool)arg1 ;
-(bool)hasUnclearScreens;
-(void)setHasSuspends:(bool)arg1 ;
-(bool)hasSuspends;
-(void)setHasResumes:(bool)arg1 ;
-(bool)hasResumes;
-(void)setHasForcedRefreshes:(bool)arg1 ;
-(bool)hasForcedRefreshes;
-(void)setHasAvgEstimatedBandwidth:(bool)arg1 ;
-(bool)hasAvgEstimatedBandwidth;
-(void)setHasAvgUsedBandwidth:(bool)arg1 ;
-(bool)hasAvgUsedBandwidth;
-(void)setAvgBitrate:(unsigned)arg1 ;
-(void)setHasAvgBitrate:(bool)arg1 ;
-(bool)hasAvgBitrate;
-(void)setHasRetransmitAvg:(bool)arg1 ;
-(bool)hasRetransmitAvg;
-(void)setHasRttAvg:(bool)arg1 ;
-(bool)hasRttAvg;
-(void)setHasCpuAvg:(bool)arg1 ;
-(bool)hasCpuAvg;
-(void)setHasWifiRSSI:(bool)arg1 ;
-(bool)hasWifiRSSI;
-(void)setHasWifiChannel:(bool)arg1 ;
-(bool)hasWifiChannel;
-(unsigned)framesSent;
-(unsigned)configChanges;
-(unsigned)clearScreens;
-(unsigned)unclearScreens;
-(unsigned)suspends;
-(unsigned)resumes;
-(unsigned)forcedRefreshes;
-(unsigned)avgEstimatedBandwidth;
-(unsigned)avgUsedBandwidth;
-(unsigned)avgBitrate;
-(unsigned)retransmitAvg;
-(unsigned)rttAvg;
-(unsigned)cpuAvg;
-(int)wifiRSSI;
-(unsigned)wifiChannel;
-(void)setHasReason:(bool)arg1 ;
-(bool)hasReason;
@end

