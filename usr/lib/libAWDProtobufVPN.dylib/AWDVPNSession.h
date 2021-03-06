/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:45 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libAWDProtobufVPN.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobufVPN.dylib/libAWDProtobufVPN.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface AWDVPNSession : PBCodable <NSCopying> {

	unsigned long long _inBytes;
	unsigned long long _outBytes;
	unsigned long long _timestamp;
	unsigned _disconnectReason;
	unsigned _duration;
	unsigned _ipv4Installed;
	unsigned _ipv6Installed;
	NSString* _protocol;
	unsigned _reassertCount;
	unsigned _systemAuthenMethod;
	unsigned _triggerTrafficClass;
	unsigned _triggerType;
	unsigned _userAuthenMethod;
	bool _appVpnUsed;
	bool _connectFailed;
	bool _proxyInstalled;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) bool hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) bool hasProtocol; 
@property (nonatomic,retain) NSString * protocol;                       //@synthesize protocol=_protocol - In the implementation block
@property (assign,nonatomic) bool hasTriggerType; 
@property (assign,nonatomic) unsigned triggerType;                      //@synthesize triggerType=_triggerType - In the implementation block
@property (assign,nonatomic) bool hasTriggerTrafficClass; 
@property (assign,nonatomic) unsigned triggerTrafficClass;              //@synthesize triggerTrafficClass=_triggerTrafficClass - In the implementation block
@property (assign,nonatomic) bool hasIpv4Installed; 
@property (assign,nonatomic) unsigned ipv4Installed;                    //@synthesize ipv4Installed=_ipv4Installed - In the implementation block
@property (assign,nonatomic) bool hasIpv6Installed; 
@property (assign,nonatomic) unsigned ipv6Installed;                    //@synthesize ipv6Installed=_ipv6Installed - In the implementation block
@property (assign,nonatomic) bool hasProxyInstalled; 
@property (assign,nonatomic) bool proxyInstalled;                       //@synthesize proxyInstalled=_proxyInstalled - In the implementation block
@property (assign,nonatomic) bool hasAppVpnUsed; 
@property (assign,nonatomic) bool appVpnUsed;                           //@synthesize appVpnUsed=_appVpnUsed - In the implementation block
@property (assign,nonatomic) bool hasSystemAuthenMethod; 
@property (assign,nonatomic) unsigned systemAuthenMethod;               //@synthesize systemAuthenMethod=_systemAuthenMethod - In the implementation block
@property (assign,nonatomic) bool hasUserAuthenMethod; 
@property (assign,nonatomic) unsigned userAuthenMethod;                 //@synthesize userAuthenMethod=_userAuthenMethod - In the implementation block
@property (assign,nonatomic) bool hasDisconnectReason; 
@property (assign,nonatomic) unsigned disconnectReason;                 //@synthesize disconnectReason=_disconnectReason - In the implementation block
@property (assign,nonatomic) bool hasConnectFailed; 
@property (assign,nonatomic) bool connectFailed;                        //@synthesize connectFailed=_connectFailed - In the implementation block
@property (assign,nonatomic) bool hasDuration; 
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) bool hasReassertCount; 
@property (assign,nonatomic) unsigned reassertCount;                    //@synthesize reassertCount=_reassertCount - In the implementation block
@property (assign,nonatomic) bool hasInBytes; 
@property (assign,nonatomic) unsigned long long inBytes;                //@synthesize inBytes=_inBytes - In the implementation block
@property (assign,nonatomic) bool hasOutBytes; 
@property (assign,nonatomic) unsigned long long outBytes;               //@synthesize outBytes=_outBytes - In the implementation block
-(void)setProtocol:(id)arg1 ;
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
-(id)protocol;
-(bool)readFrom:(id)arg1 ;
-(bool)hasDuration;
-(void)setHasDuration:(bool)arg1 ;
-(void)setTriggerType:(unsigned)arg1 ;
-(unsigned)triggerType;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(bool)arg1 ;
-(bool)hasTimestamp;
-(bool)hasProtocol;
-(void)setHasTriggerType:(bool)arg1 ;
-(bool)hasTriggerType;
-(void)setTriggerTrafficClass:(unsigned)arg1 ;
-(void)setHasTriggerTrafficClass:(bool)arg1 ;
-(bool)hasTriggerTrafficClass;
-(void)setIpv4Installed:(unsigned)arg1 ;
-(void)setHasIpv4Installed:(bool)arg1 ;
-(bool)hasIpv4Installed;
-(void)setIpv6Installed:(unsigned)arg1 ;
-(void)setHasIpv6Installed:(bool)arg1 ;
-(bool)hasIpv6Installed;
-(void)setProxyInstalled:(bool)arg1 ;
-(void)setHasProxyInstalled:(bool)arg1 ;
-(bool)hasProxyInstalled;
-(void)setAppVpnUsed:(bool)arg1 ;
-(void)setHasAppVpnUsed:(bool)arg1 ;
-(bool)hasAppVpnUsed;
-(void)setSystemAuthenMethod:(unsigned)arg1 ;
-(void)setHasSystemAuthenMethod:(bool)arg1 ;
-(bool)hasSystemAuthenMethod;
-(void)setUserAuthenMethod:(unsigned)arg1 ;
-(void)setHasUserAuthenMethod:(bool)arg1 ;
-(bool)hasUserAuthenMethod;
-(void)setDisconnectReason:(unsigned)arg1 ;
-(void)setHasDisconnectReason:(bool)arg1 ;
-(bool)hasDisconnectReason;
-(void)setConnectFailed:(bool)arg1 ;
-(void)setHasConnectFailed:(bool)arg1 ;
-(bool)hasConnectFailed;
-(void)setReassertCount:(unsigned)arg1 ;
-(void)setHasReassertCount:(bool)arg1 ;
-(bool)hasReassertCount;
-(void)setInBytes:(unsigned long long)arg1 ;
-(void)setHasInBytes:(bool)arg1 ;
-(bool)hasInBytes;
-(void)setOutBytes:(unsigned long long)arg1 ;
-(void)setHasOutBytes:(bool)arg1 ;
-(bool)hasOutBytes;
-(unsigned)triggerTrafficClass;
-(unsigned)ipv4Installed;
-(unsigned)ipv6Installed;
-(bool)proxyInstalled;
-(bool)appVpnUsed;
-(unsigned)systemAuthenMethod;
-(unsigned)userAuthenMethod;
-(unsigned)disconnectReason;
-(bool)connectFailed;
-(unsigned)reassertCount;
-(unsigned long long)inBytes;
-(unsigned long long)outBytes;
@end

