/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet;

@interface CTCallCenter : NSObject {

	void* _server;
	NSSet* _currentCalls;
	/*^block*/ id _callEventHandler;

}

@property (@dynamic,retain) NSSet * currentCalls; 
@property (nonatomic,copy) id callEventHandler; 
-(bool)setUpServerConnection;
-(void)cleanUpServerConnection;
-(void)handleNotificationFromConnection:(void*)arg1 ofType:(id)arg2 withInfo:(id)arg3 ;
-(void)setCallEventHandler:(/*^block*/ id)arg1 ;
-(bool)calculateCallStateChanges:(id)arg1 ;
-(bool)getCurrentCallSetFromServer:(id)arg1 ;
-(/*^block*/ id)callEventHandler;
-(void)setCurrentCalls:(id)arg1 ;
-(void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)currentCalls;
@end

