/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TRTCPConnection.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface TRSClientConnection : TRTCPConnection {

	NSObject<OS_dispatch_queue>* _accessQueue;
	bool _authorized;
	NSString* _deviceIdentifier;
	NSObject<OS_dispatch_queue>* _packetEventQueue;

}
-(void)dealloc;
-(void).cxx_destruct;
-(id)_initWithUniqueID:(int)arg1 connectionStream:(id)arg2 ;
-(void)_handleReceivedPacketEvent:(id)arg1 ;
@end
