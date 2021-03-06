/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@interface MPUOperationLIFOQueue : NSOperationQueue
-(void)addOperations:(id)arg1 waitUntilFinished:(bool)arg2 ;
-(id)init;
-(void)setMaxConcurrentOperationCount:(long long)arg1 ;
-(void)addOperationWithBlock:(/*^block*/ id)arg1 ;
-(void)addOperation:(id)arg1 ;
-(void)_addLIFODependencyToOperations:(id)arg1 ;
@end

