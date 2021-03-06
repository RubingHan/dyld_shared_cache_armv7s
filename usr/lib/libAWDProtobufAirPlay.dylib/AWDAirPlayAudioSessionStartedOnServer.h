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

@interface AWDAirPlayAudioSessionStartedOnServer : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _audioCompressionType;
	unsigned _clientAnnounceMs;
	unsigned _clientAuthMs;
	unsigned _clientBonjourMs;
	unsigned _clientConnectMs;
	NSString* _clientModel;
	unsigned _clientSetupAudioMs;
	unsigned _clientSetupScreenMs;
	NSString* _clientVersion;
	unsigned _latencyMs;
	unsigned _serverRecordMs;
	NSString* _sessionUUID;
	int _status;
	unsigned _transportType;
	SCD_Struct_AW5 _has;

}

@property (nonatomic,readonly) bool hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                     //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) bool hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) bool hasStatus; 
@property (assign,nonatomic) int status;                                 //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) bool hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                     //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) bool hasClientModel; 
@property (nonatomic,retain) NSString * clientModel;                     //@synthesize clientModel=_clientModel - In the implementation block
@property (nonatomic,readonly) bool hasClientVersion; 
@property (nonatomic,retain) NSString * clientVersion;                   //@synthesize clientVersion=_clientVersion - In the implementation block
@property (assign,nonatomic) bool hasAudioCompressionType; 
@property (assign,nonatomic) unsigned audioCompressionType;              //@synthesize audioCompressionType=_audioCompressionType - In the implementation block
@property (assign,nonatomic) bool hasLatencyMs; 
@property (assign,nonatomic) unsigned latencyMs;                         //@synthesize latencyMs=_latencyMs - In the implementation block
@property (assign,nonatomic) bool hasClientBonjourMs; 
@property (assign,nonatomic) unsigned clientBonjourMs;                   //@synthesize clientBonjourMs=_clientBonjourMs - In the implementation block
@property (assign,nonatomic) bool hasClientConnectMs; 
@property (assign,nonatomic) unsigned clientConnectMs;                   //@synthesize clientConnectMs=_clientConnectMs - In the implementation block
@property (assign,nonatomic) bool hasClientAuthMs; 
@property (assign,nonatomic) unsigned clientAuthMs;                      //@synthesize clientAuthMs=_clientAuthMs - In the implementation block
@property (assign,nonatomic) bool hasClientAnnounceMs; 
@property (assign,nonatomic) unsigned clientAnnounceMs;                  //@synthesize clientAnnounceMs=_clientAnnounceMs - In the implementation block
@property (assign,nonatomic) bool hasClientSetupAudioMs; 
@property (assign,nonatomic) unsigned clientSetupAudioMs;                //@synthesize clientSetupAudioMs=_clientSetupAudioMs - In the implementation block
@property (assign,nonatomic) bool hasClientSetupScreenMs; 
@property (assign,nonatomic) unsigned clientSetupScreenMs;               //@synthesize clientSetupScreenMs=_clientSetupScreenMs - In the implementation block
@property (assign,nonatomic) bool hasServerRecordMs; 
@property (assign,nonatomic) unsigned serverRecordMs;                    //@synthesize serverRecordMs=_serverRecordMs - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setTransportType:(unsigned)arg1 ;
-(void)setHasTransportType:(bool)arg1 ;
-(bool)hasTransportType;
-(void)setHasStatus:(bool)arg1 ;
-(bool)hasStatus;
-(void)setSessionUUID:(id)arg1 ;
-(void)setClientModel:(id)arg1 ;
-(void)setAudioCompressionType:(unsigned)arg1 ;
-(void)setLatencyMs:(unsigned)arg1 ;
-(void)setClientBonjourMs:(unsigned)arg1 ;
-(void)setClientConnectMs:(unsigned)arg1 ;
-(void)setClientAuthMs:(unsigned)arg1 ;
-(void)setClientAnnounceMs:(unsigned)arg1 ;
-(void)setClientSetupAudioMs:(unsigned)arg1 ;
-(void)setClientSetupScreenMs:(unsigned)arg1 ;
-(void)setServerRecordMs:(unsigned)arg1 ;
-(bool)readFrom:(id)arg1 ;
-(id)clientVersion;
-(void)setClientVersion:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)transportType;
-(void)setHasTimestamp:(bool)arg1 ;
-(bool)hasTimestamp;
-(bool)hasSessionUUID;
-(id)sessionUUID;
-(void)setHasAudioCompressionType:(bool)arg1 ;
-(bool)hasAudioCompressionType;
-(unsigned)audioCompressionType;
-(bool)hasClientModel;
-(bool)hasClientVersion;
-(void)setHasLatencyMs:(bool)arg1 ;
-(bool)hasLatencyMs;
-(void)setHasClientBonjourMs:(bool)arg1 ;
-(bool)hasClientBonjourMs;
-(void)setHasClientConnectMs:(bool)arg1 ;
-(bool)hasClientConnectMs;
-(void)setHasClientAuthMs:(bool)arg1 ;
-(bool)hasClientAuthMs;
-(void)setHasClientAnnounceMs:(bool)arg1 ;
-(bool)hasClientAnnounceMs;
-(void)setHasClientSetupAudioMs:(bool)arg1 ;
-(bool)hasClientSetupAudioMs;
-(void)setHasClientSetupScreenMs:(bool)arg1 ;
-(bool)hasClientSetupScreenMs;
-(void)setHasServerRecordMs:(bool)arg1 ;
-(bool)hasServerRecordMs;
-(id)clientModel;
-(unsigned)latencyMs;
-(unsigned)clientBonjourMs;
-(unsigned)clientConnectMs;
-(unsigned)clientAuthMs;
-(unsigned)clientAnnounceMs;
-(unsigned)clientSetupAudioMs;
-(unsigned)clientSetupScreenMs;
-(unsigned)serverRecordMs;
@end

