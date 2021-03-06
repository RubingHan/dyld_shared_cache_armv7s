/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebBookmarks/WebBookmarksXPCConnectionDelegate.h>

@protocol OS_xpc_object, WebBookmarksXPCConnectionDelegate;
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface WebBookmarksXPCListener : NSObject <WebBookmarksXPCConnectionDelegate> {

	NSObject<OS_xpc_object>* _listenerConnection;
	NSMutableArray* _clientConnections;
	<WebBookmarksXPCConnectionDelegate>* _delegate;
	NSMutableDictionary* _messageHandlers;

}
-(void)dealloc;
-(void)connection:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)setHandler:(/*^block*/ id)arg1 forMessageNamed:(const char*)arg2 ;
-(void)setMessageHandlers:(id)arg1 ;
-(void)_handleIncomingConnection:(id)arg1 ;
-(id)initListenerForMachService:(const char*)arg1 delegate:(id)arg2 ;
@end

