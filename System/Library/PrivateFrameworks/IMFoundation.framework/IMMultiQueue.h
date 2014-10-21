/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMMultiQueue : NSObject {

	NSMutableDictionary* _queueMap;

}
-(void)dealloc;
-(void)_popEnqueuedBlockWithGUID:(id)arg1 key:(id)arg2 ;
-(void)_addBlock:(/*^block*/ id)arg1 withGUID:(id)arg2 forKey:(id)arg3 ;
-(void)addBlock:(/*^block*/ id)arg1 withTimeout:(double)arg2 forKey:(id)arg3 ;
-(void)addBlock:(/*^block*/ id)arg1 forKey:(id)arg2 ;
@end
