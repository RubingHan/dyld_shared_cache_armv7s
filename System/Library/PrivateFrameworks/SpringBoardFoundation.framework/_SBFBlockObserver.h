/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFObserver.h>

@interface _SBFBlockObserver : NSObject <SBFObserver> {

	/*^block*/ id _resultBlock;
	/*^block*/ id _completionBlock;
	/*^block*/ id _failureBlock;

}
-(void)dealloc;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg1 ;
-(id)initWithResultBlock:(/*^block*/ id)arg1 completionBlock:(/*^block*/ id)arg2 failureBlock:(/*^block*/ id)arg3 ;
@end

