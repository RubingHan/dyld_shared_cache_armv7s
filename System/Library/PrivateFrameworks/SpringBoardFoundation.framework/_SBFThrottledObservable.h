/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFObservable.h>

@protocol SBFCancelable, SBFObservable, SBFScheduler;
@interface _SBFThrottledObservable : SBFObservable {

	double _interval;
	<SBFCancelable>* _delayToken;
	<SBFObservable>* _observable;
	<SBFScheduler>* _scheduler;
	id _result;
	bool _hasResult;
	unsigned long long _resultCounter;

}
-(void)dealloc;
-(void)_cancel;
-(id)subscribe:(id)arg1 ;
-(void)_clearResult;
-(void)_setDelayToken:(id)arg1 ;
-(unsigned long long)_setResult:(id)arg1 ;
-(void)_sendResultToObserver:(id)arg1 withIdentifier:(unsigned long long)arg2 ;
-(void)_sendCompletionToObsever:(id)arg1 ;
-(id)initWithInterval:(double)arg1 observable:(id)arg2 scheduler:(id)arg3 ;
@end

