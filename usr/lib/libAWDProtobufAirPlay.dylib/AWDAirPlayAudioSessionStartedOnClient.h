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

@interface AWDAirPlayAudioSessionStartedOnClient : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _announceMs;
	unsigned _authMs;
	unsigned _bonjourMs;
	unsigned _compressionType;
	unsigned _connectMs;
	unsigned _encryptionType;
	unsigned _recordMs;
	NSString* _sessionUUID;
	unsigned _setupAudioMs;
	unsigned _setupScreenMs;
	int _status;
	unsigned _transportType;
	SCD_Struct_AW5 _has;

}

@property (nonatomic,readonly) bool hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                    //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) bool hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) bool hasStatus; 
@property (assign,nonatomic) int status;                                //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) bool hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                    //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) bool hasCompressionType; 
@property (assign,nonatomic) unsigned compressionType;                  //@synthesize compressionType=_compressionType - In the implementation block
@property (assign,nonatomic) bool hasEncryptionType; 
@property (assign,nonatomic) unsigned encryptionType;                   //@synthesize encryptionType=_encryptionType - In the implementation block
@property (assign,nonatomic) bool hasBonjourMs; 
@property (assign,nonatomic) unsigned bonjourMs;                        //@synthesize bonjourMs=_bonjourMs - In the implementation block
@property (assign,nonatomic) bool hasConnectMs; 
@property (assign,nonatomic) unsigned connectMs;                        //@synthesize connectMs=_connectMs - In the implementation block
@property (assign,nonatomic) bool hasAuthMs; 
@property (assign,nonatomic) unsigned authMs;                           //@synthesize authMs=_authMs - In the implementation block
@property (assign,nonatomic) bool hasAnnounceMs; 
@property (assign,nonatomic) unsigned announceMs;                       //@synthesize announceMs=_announceMs - In the implementation block
@property (assign,nonatomic) bool hasSetupAudioMs; 
@property (assign,nonatomic) unsigned setupAudioMs;                     //@synthesize setupAudioMs=_setupAudioMs - In the implementation block
@property (assign,nonatomic) bool hasSetupScreenMs; 
@property (assign,nonatomic) unsigned setupScreenMs;                    //@synthesize setupScreenMs=_setupScreenMs - In the implementation block
@property (assign,nonatomic) bool hasRecordMs; 
@property (assign,nonatomic) unsigned recordMs;                         //@synthesize recordMs=_recordMs - In the implementation block
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
-(void)setEncryptionType:(unsigned)arg1 ;
-(unsigned)encryptionType;
-(void)setSessionUUID:(id)arg1 ;
-(void)setCompressionType:(unsigned)arg1 ;
-(void)setBonjourMs:(unsigned)arg1 ;
-(void)setConnectMs:(unsigned)arg1 ;
-(void)setAuthMs:(unsigned)arg1 ;
-(void)setAnnounceMs:(unsigned)arg1 ;
-(void)setSetupAudioMs:(unsigned)arg1 ;
-(void)setSetupScreenMs:(unsigned)arg1 ;
-(void)setRecordMs:(unsigned)arg1 ;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)transportType;
-(void)setHasTimestamp:(bool)arg1 ;
-(bool)hasTimestamp;
-(bool)hasSessionUUID;
-(id)sessionUUID;
-(void)setHasCompressionType:(bool)arg1 ;
-(bool)hasCompressionType;
-(void)setHasEncryptionType:(bool)arg1 ;
-(bool)hasEncryptionType;
-(void)setHasBonjourMs:(bool)arg1 ;
-(bool)hasBonjourMs;
-(void)setHasConnectMs:(bool)arg1 ;
-(bool)hasConnectMs;
-(void)setHasAuthMs:(bool)arg1 ;
-(bool)hasAuthMs;
-(void)setHasAnnounceMs:(bool)arg1 ;
-(bool)hasAnnounceMs;
-(void)setHasSetupAudioMs:(bool)arg1 ;
-(bool)hasSetupAudioMs;
-(void)setHasSetupScreenMs:(bool)arg1 ;
-(bool)hasSetupScreenMs;
-(void)setHasRecordMs:(bool)arg1 ;
-(bool)hasRecordMs;
-(unsigned)compressionType;
-(unsigned)bonjourMs;
-(unsigned)connectMs;
-(unsigned)authMs;
-(unsigned)announceMs;
-(unsigned)setupAudioMs;
-(unsigned)setupScreenMs;
-(unsigned)recordMs;
@end

