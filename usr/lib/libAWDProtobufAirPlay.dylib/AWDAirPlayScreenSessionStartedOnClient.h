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

@interface AWDAirPlayScreenSessionStartedOnClient : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _audioCompressionType;
	unsigned _bonjourMs;
	unsigned _configMs;
	unsigned _connectMs;
	unsigned _prepareMs;
	NSString* _sessionUUID;
	int _status;
	unsigned _transportType;
	SCD_Struct_AW6 _has;

}

@property (nonatomic,readonly) bool hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                     //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) bool hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) bool hasStatus; 
@property (assign,nonatomic) int status;                                 //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) bool hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                     //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) bool hasAudioCompressionType; 
@property (assign,nonatomic) unsigned audioCompressionType;              //@synthesize audioCompressionType=_audioCompressionType - In the implementation block
@property (assign,nonatomic) bool hasPrepareMs; 
@property (assign,nonatomic) unsigned prepareMs;                         //@synthesize prepareMs=_prepareMs - In the implementation block
@property (assign,nonatomic) bool hasBonjourMs; 
@property (assign,nonatomic) unsigned bonjourMs;                         //@synthesize bonjourMs=_bonjourMs - In the implementation block
@property (assign,nonatomic) bool hasConnectMs; 
@property (assign,nonatomic) unsigned connectMs;                         //@synthesize connectMs=_connectMs - In the implementation block
@property (assign,nonatomic) bool hasConfigMs; 
@property (assign,nonatomic) unsigned configMs;                          //@synthesize configMs=_configMs - In the implementation block
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
-(void)setBonjourMs:(unsigned)arg1 ;
-(void)setConnectMs:(unsigned)arg1 ;
-(void)setAudioCompressionType:(unsigned)arg1 ;
-(void)setPrepareMs:(unsigned)arg1 ;
-(void)setConfigMs:(unsigned)arg1 ;
-(bool)readFrom:(id)arg1 ;
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
-(void)setHasBonjourMs:(bool)arg1 ;
-(bool)hasBonjourMs;
-(void)setHasConnectMs:(bool)arg1 ;
-(bool)hasConnectMs;
-(unsigned)bonjourMs;
-(unsigned)connectMs;
-(void)setHasPrepareMs:(bool)arg1 ;
-(bool)hasPrepareMs;
-(void)setHasConfigMs:(bool)arg1 ;
-(bool)hasConfigMs;
-(unsigned)prepareMs;
-(unsigned)configMs;
@end
