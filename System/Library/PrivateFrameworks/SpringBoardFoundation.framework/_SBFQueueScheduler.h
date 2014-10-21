/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFScheduler.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface _SBFQueueScheduler : NSObject <SBFScheduler> {

	NSObject<OS_dispatch_queue>* _queue;

}
-(id)initWithQueue:(id)arg1 ;
-(void)dealloc;
-(id)performBlock:(/*^block*/ id)arg1 ;
-(id)performCancelableBlock:(/*^block*/ id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/ id)arg2 ;
@end
