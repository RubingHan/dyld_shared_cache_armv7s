/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BBXPCConnection.h>

@class NSString, NSInvocation;

@interface BBXPCOutgoingConnection : BBXPCConnection {

	NSString* _name;
	bool _autoReconnect;
	NSInvocation* _connectionEstablishmentInvocation;

}

@property (nonatomic,readonly) NSString * serviceName;                                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) bool autoReconnects;                                           //@synthesize autoReconnect=_autoReconnect - In the implementation block
@property (nonatomic,retain) NSInvocation * connectionEstablishmentInvocation;              //@synthesize connectionEstablishmentInvocation=_connectionEstablishmentInvocation - In the implementation block
-(id)serviceName;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)resume;
-(id)initWithServiceName:(id)arg1 queue:(id)arg2 target:(id)arg3 remoteProtocol:(id)arg4 ;
-(id)_signatureForSelectorInRemoteProtocol:(SEL)arg1 ;
-(void)_connectionEstablishedResponse:(id)arg1 ;
-(void)setConnectionEstablishmentInvocation:(id)arg1 ;
-(void)_configureRemoteProxy;
-(bool)autoReconnects;
-(void)setEstablishmentSelector:(SEL)arg1 andSendObject:(id)arg2 ;
-(void)setAutoReconnects:(bool)arg1 ;
-(id)connectionEstablishmentInvocation;
@end

