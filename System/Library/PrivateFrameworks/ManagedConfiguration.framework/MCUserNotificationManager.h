/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MCUserNotificationManager : NSObject

@property (nonatomic,readonly) bool hasOutstandingNotifications; 
-(void)dealloc;
-(id)init;
-(void)mainQueueDidReceiveAppWhitelistChangedNotification;
-(void)cancelAllNotificationsCompletionBlock:(/*^block*/ id)arg1 ;
-(bool)hasOutstandingNotifications;
-(void)displayUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButtonText:(id)arg3 alternateButtonText:(id)arg4 displayOnLockScreen:(bool)arg5 displayInAppWhitelistModes:(bool)arg6 dismissAfterTimeInterval:(double)arg7 completionBlock:(/*^block*/ id)arg8 ;
@end

