/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PersistentConnection/PersistentConnection-Structs.h>
@class NSDate, CUTWeakReference;

@interface PCDispatchTimer : NSObject {

	dispatch_source_sRef _timerSource;
	dispatch_queue_sRef _queue;
	unsigned long long _fireTime;
	NSDate* _fireDate;
	CUTWeakReference* _target;
	SEL _selector;
	bool _isValid;

}

@property (nonatomic,readonly) bool isValid; 
@property (nonatomic,retain) NSDate * fireDate; 
-(void)dealloc;
-(void)invalidate;
-(bool)isValid;
-(void)setFireDate:(id)arg1 ;
-(void)start;
-(id)fireDate;
-(void)_cleanupTimer;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 target:(id)arg2 selector:(SEL)arg3 fireTime:(unsigned long long)arg4 ;
-(void)_callTarget;
@end
