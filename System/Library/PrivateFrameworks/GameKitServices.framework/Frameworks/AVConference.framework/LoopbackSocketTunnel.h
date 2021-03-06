/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol LoopbackSocketTunnelDelegate;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface LoopbackSocketTunnel : NSObject {

	unsigned short port;
	int sockFD;
	sockaddr_in sa;
	sockaddr_in vtpSA;
	NSObject* optionalArg;
	NSObject<LoopbackSocketTunnelDelegate>* delegate;
	bool foundVTPIP;

}

@property (assign) NSObject * optionalArg; 
-(int)serverLoopProc:(id)arg1 ;
-(id)initWithPort:(unsigned short)arg1 delegate:(id)arg2 ;
-(int)sendPacketToVTP:(id)arg1 ;
-(void)getIPPort:(tagIPPORT*)arg1 ;
-(void)getVTPIPPort:(tagIPPORT*)arg1 ;
-(void)setVTPIP:(tagIPPORT*)arg1 ;
-(void)shutdownSocket;
-(id)optionalArg;
-(void)setOptionalArg:(id)arg1 ;
@end

