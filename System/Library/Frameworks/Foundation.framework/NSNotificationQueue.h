/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSNotificationQueue : NSObject {

	id _notificationCenter;
	id _asapQueue;
	id _asapObs;
	id _idleQueue;
	id _idleObs;

}
+(id)defaultQueue;
-(void)enqueueNotification:(id)arg1 postingStyle:(unsigned long long)arg2 ;
-(id)initWithNotificationCenter:(id)arg1 ;
-(void)_flushNotificationQueue;
-(void)dequeueNotificationsMatching:(id)arg1 coalesceMask:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)init;
-(void)enqueueNotification:(id)arg1 postingStyle:(unsigned long long)arg2 coalesceMask:(unsigned long long)arg3 forModes:(id)arg4 ;
@end

