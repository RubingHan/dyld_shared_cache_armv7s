/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CLSilo.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CLDispatchSilo : CLSilo {

	NSObject<OS_dispatch_queue>* _queue;

}
-(void)sync:(/*^block*/ id)arg1 ;
-(void)assertInside;
-(void)assertOutside;
-(id)newTimer;
-(void)async:(/*^block*/ id)arg1 ;
-(void)afterInterval:(double)arg1 async:(/*^block*/ id)arg2 ;
-(id)initWithUnderlyingQueue:(id)arg1 ;
-(id)initMain;
-(id)debugDescription;
-(id)initWithIdentifier:(id)arg1 ;
-(void).cxx_destruct;
-(id)queue;
@end

