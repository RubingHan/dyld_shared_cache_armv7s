/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSLock, NSObject;

@interface _GEOResourceManifestTileGroupObserverProxy : NSObject {

	NSHashTable* _observers;
	NSLock* _observersLock;
	NSObject<OS_dispatch_queue>* _queue;

}

@property (assign,nonatomic) NSObject<OS_dispatch_queue> * queue;              //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(unsigned long long)observersCount;
-(void)forEachObserver:(/*^block*/ id)arg1 finished:(/*^block*/ id)arg2 ;
@end
