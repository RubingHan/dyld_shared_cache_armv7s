/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libAWDProtobufFacetimeiMessage.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobufFacetimeiMessage.dylib/libAWDProtobufFacetimeiMessage.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface AWDFaceTimeCallEnded : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _backCameraCaptureDuration;
	unsigned _callDuration;
	unsigned _conferenceMiscError;
	unsigned _connectDuration;
	unsigned _connectionType;
	unsigned _currentNatType;
	unsigned _dataRate;
	unsigned _diagnosticPingAvg;
	unsigned _diagnosticPingMax;
	unsigned _diagnosticPingMin;
	unsigned _diagnosticPingPacketLoss;
	unsigned _endedReason;
	unsigned _frontCameraCaptureDuration;
	unsigned _gameKitError;
	int _genericError;
	int _gksError;
	int _gksReturnCode;
	NSString* _guid;
	unsigned _invitationServiceError;
	unsigned _isAudioInterrupted;
	unsigned _isCallUpgrade;
	unsigned _isInitiator;
	unsigned _isNetworkActive;
	unsigned _isNetworkEnabled;
	unsigned _isNetworkReachable;
	unsigned _isVideo;
	unsigned _isVideoInterrupted;
	int _linkQuality;
	unsigned _localNetworkConnection;
	unsigned _messageDeliveryError;
	unsigned _networkCheckResult;
	unsigned _registrationError;
	unsigned _relayConnectDuration;
	unsigned _relayError;
	unsigned _remoteNatType;
	unsigned _remoteNetworkConnection;
	unsigned _usesRelay;
	unsigned _viceroyError;
	SCD_Struct_AW4 _has;

}

@property (nonatomic,readonly) bool hasGuid; 
@property (nonatomic,retain) NSString * guid;                                  //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) bool hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) bool hasEndedReason; 
@property (assign,nonatomic) unsigned endedReason;                             //@synthesize endedReason=_endedReason - In the implementation block
@property (assign,nonatomic) bool hasGenericError; 
@property (assign,nonatomic) int genericError;                                 //@synthesize genericError=_genericError - In the implementation block
@property (assign,nonatomic) bool hasViceroyError; 
@property (assign,nonatomic) unsigned viceroyError;                            //@synthesize viceroyError=_viceroyError - In the implementation block
@property (assign,nonatomic) bool hasGameKitError; 
@property (assign,nonatomic) unsigned gameKitError;                            //@synthesize gameKitError=_gameKitError - In the implementation block
@property (assign,nonatomic) bool hasMessageDeliveryError; 
@property (assign,nonatomic) unsigned messageDeliveryError;                    //@synthesize messageDeliveryError=_messageDeliveryError - In the implementation block
@property (assign,nonatomic) bool hasConferenceMiscError; 
@property (assign,nonatomic) unsigned conferenceMiscError;                     //@synthesize conferenceMiscError=_conferenceMiscError - In the implementation block
@property (assign,nonatomic) bool hasRegistrationError; 
@property (assign,nonatomic) unsigned registrationError;                       //@synthesize registrationError=_registrationError - In the implementation block
@property (assign,nonatomic) bool hasRelayError; 
@property (assign,nonatomic) unsigned relayError;                              //@synthesize relayError=_relayError - In the implementation block
@property (assign,nonatomic) bool hasInvitationServiceError; 
@property (assign,nonatomic) unsigned invitationServiceError;                  //@synthesize invitationServiceError=_invitationServiceError - In the implementation block
@property (assign,nonatomic) bool hasCallDuration; 
@property (assign,nonatomic) unsigned callDuration;                            //@synthesize callDuration=_callDuration - In the implementation block
@property (assign,nonatomic) bool hasDiagnosticPingMin; 
@property (assign,nonatomic) unsigned diagnosticPingMin;                       //@synthesize diagnosticPingMin=_diagnosticPingMin - In the implementation block
@property (assign,nonatomic) bool hasDiagnosticPingAvg; 
@property (assign,nonatomic) unsigned diagnosticPingAvg;                       //@synthesize diagnosticPingAvg=_diagnosticPingAvg - In the implementation block
@property (assign,nonatomic) bool hasDiagnosticPingMax; 
@property (assign,nonatomic) unsigned diagnosticPingMax;                       //@synthesize diagnosticPingMax=_diagnosticPingMax - In the implementation block
@property (assign,nonatomic) bool hasDiagnosticPingPacketLoss; 
@property (assign,nonatomic) unsigned diagnosticPingPacketLoss;                //@synthesize diagnosticPingPacketLoss=_diagnosticPingPacketLoss - In the implementation block
@property (assign,nonatomic) bool hasIsNetworkEnabled; 
@property (assign,nonatomic) unsigned isNetworkEnabled;                        //@synthesize isNetworkEnabled=_isNetworkEnabled - In the implementation block
@property (assign,nonatomic) bool hasIsNetworkActive; 
@property (assign,nonatomic) unsigned isNetworkActive;                         //@synthesize isNetworkActive=_isNetworkActive - In the implementation block
@property (assign,nonatomic) bool hasIsNetworkReachable; 
@property (assign,nonatomic) unsigned isNetworkReachable;                      //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
@property (assign,nonatomic) bool hasNetworkCheckResult; 
@property (assign,nonatomic) unsigned networkCheckResult;                      //@synthesize networkCheckResult=_networkCheckResult - In the implementation block
@property (assign,nonatomic) bool hasFrontCameraCaptureDuration; 
@property (assign,nonatomic) unsigned frontCameraCaptureDuration;              //@synthesize frontCameraCaptureDuration=_frontCameraCaptureDuration - In the implementation block
@property (assign,nonatomic) bool hasBackCameraCaptureDuration; 
@property (assign,nonatomic) unsigned backCameraCaptureDuration;               //@synthesize backCameraCaptureDuration=_backCameraCaptureDuration - In the implementation block
@property (assign,nonatomic) bool hasDataRate; 
@property (assign,nonatomic) unsigned dataRate;                                //@synthesize dataRate=_dataRate - In the implementation block
@property (assign,nonatomic) bool hasGksError; 
@property (assign,nonatomic) int gksError;                                     //@synthesize gksError=_gksError - In the implementation block
@property (assign,nonatomic) bool hasConnectDuration; 
@property (assign,nonatomic) unsigned connectDuration;                         //@synthesize connectDuration=_connectDuration - In the implementation block
@property (assign,nonatomic) bool hasRemoteNetworkConnection; 
@property (assign,nonatomic) unsigned remoteNetworkConnection;                 //@synthesize remoteNetworkConnection=_remoteNetworkConnection - In the implementation block
@property (assign,nonatomic) bool hasLocalNetworkConnection; 
@property (assign,nonatomic) unsigned localNetworkConnection;                  //@synthesize localNetworkConnection=_localNetworkConnection - In the implementation block
@property (assign,nonatomic) bool hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                          //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) bool hasUsesRelay; 
@property (assign,nonatomic) unsigned usesRelay;                               //@synthesize usesRelay=_usesRelay - In the implementation block
@property (assign,nonatomic) bool hasCurrentNatType; 
@property (assign,nonatomic) unsigned currentNatType;                          //@synthesize currentNatType=_currentNatType - In the implementation block
@property (assign,nonatomic) bool hasRemoteNatType; 
@property (assign,nonatomic) unsigned remoteNatType;                           //@synthesize remoteNatType=_remoteNatType - In the implementation block
@property (assign,nonatomic) bool hasRelayConnectDuration; 
@property (assign,nonatomic) unsigned relayConnectDuration;                    //@synthesize relayConnectDuration=_relayConnectDuration - In the implementation block
@property (assign,nonatomic) bool hasIsInitiator; 
@property (assign,nonatomic) unsigned isInitiator;                             //@synthesize isInitiator=_isInitiator - In the implementation block
@property (assign,nonatomic) bool hasIsVideoInterrupted; 
@property (assign,nonatomic) unsigned isVideoInterrupted;                      //@synthesize isVideoInterrupted=_isVideoInterrupted - In the implementation block
@property (assign,nonatomic) bool hasIsAudioInterrupted; 
@property (assign,nonatomic) unsigned isAudioInterrupted;                      //@synthesize isAudioInterrupted=_isAudioInterrupted - In the implementation block
@property (assign,nonatomic) bool hasIsCallUpgrade; 
@property (assign,nonatomic) unsigned isCallUpgrade;                           //@synthesize isCallUpgrade=_isCallUpgrade - In the implementation block
@property (assign,nonatomic) bool hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                                  //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) bool hasGksReturnCode; 
@property (assign,nonatomic) int gksReturnCode;                                //@synthesize gksReturnCode=_gksReturnCode - In the implementation block
@property (assign,nonatomic) bool hasIsVideo; 
@property (assign,nonatomic) unsigned isVideo;                                 //@synthesize isVideo=_isVideo - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(unsigned)isNetworkReachable;
-(id)dictionaryRepresentation;
-(unsigned)isVideo;
-(unsigned)connectionType;
-(void)setConnectionType:(unsigned)arg1 ;
-(id)guid;
-(bool)readFrom:(id)arg1 ;
-(void)setIsVideo:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setGuid:(id)arg1 ;
-(bool)hasGuid;
-(void)setHasTimestamp:(bool)arg1 ;
-(bool)hasTimestamp;
-(void)setHasIsVideo:(bool)arg1 ;
-(bool)hasIsVideo;
-(void)setConnectDuration:(unsigned)arg1 ;
-(void)setHasConnectDuration:(bool)arg1 ;
-(bool)hasConnectDuration;
-(void)setRemoteNetworkConnection:(unsigned)arg1 ;
-(void)setHasRemoteNetworkConnection:(bool)arg1 ;
-(bool)hasRemoteNetworkConnection;
-(void)setLocalNetworkConnection:(unsigned)arg1 ;
-(void)setHasLocalNetworkConnection:(bool)arg1 ;
-(bool)hasLocalNetworkConnection;
-(void)setHasConnectionType:(bool)arg1 ;
-(bool)hasConnectionType;
-(void)setUsesRelay:(unsigned)arg1 ;
-(void)setHasUsesRelay:(bool)arg1 ;
-(bool)hasUsesRelay;
-(void)setCurrentNatType:(unsigned)arg1 ;
-(void)setHasCurrentNatType:(bool)arg1 ;
-(bool)hasCurrentNatType;
-(void)setRemoteNatType:(unsigned)arg1 ;
-(void)setHasRemoteNatType:(bool)arg1 ;
-(bool)hasRemoteNatType;
-(void)setRelayConnectDuration:(unsigned)arg1 ;
-(void)setHasRelayConnectDuration:(bool)arg1 ;
-(bool)hasRelayConnectDuration;
-(unsigned)connectDuration;
-(unsigned)remoteNetworkConnection;
-(unsigned)localNetworkConnection;
-(unsigned)usesRelay;
-(unsigned)currentNatType;
-(unsigned)remoteNatType;
-(unsigned)relayConnectDuration;
-(void)setEndedReason:(unsigned)arg1 ;
-(void)setHasEndedReason:(bool)arg1 ;
-(bool)hasEndedReason;
-(void)setGenericError:(int)arg1 ;
-(void)setHasGenericError:(bool)arg1 ;
-(bool)hasGenericError;
-(void)setViceroyError:(unsigned)arg1 ;
-(void)setHasViceroyError:(bool)arg1 ;
-(bool)hasViceroyError;
-(void)setGameKitError:(unsigned)arg1 ;
-(void)setHasGameKitError:(bool)arg1 ;
-(bool)hasGameKitError;
-(void)setMessageDeliveryError:(unsigned)arg1 ;
-(void)setHasMessageDeliveryError:(bool)arg1 ;
-(bool)hasMessageDeliveryError;
-(void)setConferenceMiscError:(unsigned)arg1 ;
-(void)setHasConferenceMiscError:(bool)arg1 ;
-(bool)hasConferenceMiscError;
-(void)setRegistrationError:(unsigned)arg1 ;
-(void)setHasRegistrationError:(bool)arg1 ;
-(bool)hasRegistrationError;
-(void)setRelayError:(unsigned)arg1 ;
-(void)setHasRelayError:(bool)arg1 ;
-(bool)hasRelayError;
-(void)setInvitationServiceError:(unsigned)arg1 ;
-(void)setHasInvitationServiceError:(bool)arg1 ;
-(bool)hasInvitationServiceError;
-(void)setCallDuration:(unsigned)arg1 ;
-(void)setHasCallDuration:(bool)arg1 ;
-(bool)hasCallDuration;
-(void)setDiagnosticPingMin:(unsigned)arg1 ;
-(void)setHasDiagnosticPingMin:(bool)arg1 ;
-(bool)hasDiagnosticPingMin;
-(void)setDiagnosticPingAvg:(unsigned)arg1 ;
-(void)setHasDiagnosticPingAvg:(bool)arg1 ;
-(bool)hasDiagnosticPingAvg;
-(void)setDiagnosticPingMax:(unsigned)arg1 ;
-(void)setHasDiagnosticPingMax:(bool)arg1 ;
-(bool)hasDiagnosticPingMax;
-(void)setDiagnosticPingPacketLoss:(unsigned)arg1 ;
-(void)setHasDiagnosticPingPacketLoss:(bool)arg1 ;
-(bool)hasDiagnosticPingPacketLoss;
-(void)setIsNetworkEnabled:(unsigned)arg1 ;
-(void)setHasIsNetworkEnabled:(bool)arg1 ;
-(bool)hasIsNetworkEnabled;
-(void)setIsNetworkActive:(unsigned)arg1 ;
-(void)setHasIsNetworkActive:(bool)arg1 ;
-(bool)hasIsNetworkActive;
-(void)setIsNetworkReachable:(unsigned)arg1 ;
-(void)setHasIsNetworkReachable:(bool)arg1 ;
-(bool)hasIsNetworkReachable;
-(void)setNetworkCheckResult:(unsigned)arg1 ;
-(void)setHasNetworkCheckResult:(bool)arg1 ;
-(bool)hasNetworkCheckResult;
-(void)setFrontCameraCaptureDuration:(unsigned)arg1 ;
-(void)setHasFrontCameraCaptureDuration:(bool)arg1 ;
-(bool)hasFrontCameraCaptureDuration;
-(void)setBackCameraCaptureDuration:(unsigned)arg1 ;
-(void)setHasBackCameraCaptureDuration:(bool)arg1 ;
-(bool)hasBackCameraCaptureDuration;
-(void)setDataRate:(unsigned)arg1 ;
-(void)setHasDataRate:(bool)arg1 ;
-(bool)hasDataRate;
-(void)setGksError:(int)arg1 ;
-(void)setHasGksError:(bool)arg1 ;
-(bool)hasGksError;
-(void)setIsInitiator:(unsigned)arg1 ;
-(void)setHasIsInitiator:(bool)arg1 ;
-(bool)hasIsInitiator;
-(void)setIsVideoInterrupted:(unsigned)arg1 ;
-(void)setHasIsVideoInterrupted:(bool)arg1 ;
-(bool)hasIsVideoInterrupted;
-(void)setIsAudioInterrupted:(unsigned)arg1 ;
-(void)setHasIsAudioInterrupted:(bool)arg1 ;
-(bool)hasIsAudioInterrupted;
-(void)setIsCallUpgrade:(unsigned)arg1 ;
-(void)setHasIsCallUpgrade:(bool)arg1 ;
-(bool)hasIsCallUpgrade;
-(void)setLinkQuality:(int)arg1 ;
-(void)setHasLinkQuality:(bool)arg1 ;
-(bool)hasLinkQuality;
-(void)setGksReturnCode:(int)arg1 ;
-(void)setHasGksReturnCode:(bool)arg1 ;
-(bool)hasGksReturnCode;
-(unsigned)endedReason;
-(int)genericError;
-(unsigned)viceroyError;
-(unsigned)gameKitError;
-(unsigned)messageDeliveryError;
-(unsigned)conferenceMiscError;
-(unsigned)registrationError;
-(unsigned)relayError;
-(unsigned)invitationServiceError;
-(unsigned)callDuration;
-(unsigned)diagnosticPingMin;
-(unsigned)diagnosticPingAvg;
-(unsigned)diagnosticPingMax;
-(unsigned)diagnosticPingPacketLoss;
-(unsigned)isNetworkEnabled;
-(unsigned)isNetworkActive;
-(unsigned)networkCheckResult;
-(unsigned)frontCameraCaptureDuration;
-(unsigned)backCameraCaptureDuration;
-(unsigned)dataRate;
-(int)gksError;
-(unsigned)isInitiator;
-(unsigned)isVideoInterrupted;
-(unsigned)isAudioInterrupted;
-(unsigned)isCallUpgrade;
-(int)linkQuality;
-(int)gksReturnCode;
@end

