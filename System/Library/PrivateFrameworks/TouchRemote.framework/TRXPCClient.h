/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/NSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface TRXPCClient : NSObject <NSXPCConnectionDelegate> {

	NSObject<OS_dispatch_queue>* _accessQueue;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) <TRXPCDaemonExportedInterface> * remoteDaemonProxy; 
+(id)sharedClient;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void).cxx_destruct;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3 ;
-(id)remoteDaemonProxy;
-(id)remoteDaemonProxyWithErrorHandler:(/*^block*/ id)arg1 ;
@end
