/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <Foundation/Foundation-Structs.h>
@class NSObject, NSURL, NSFileWatcherObservations, NSMutableDictionary, NSString;

@interface NSFileWatcher : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSURL* _url;
	/*^block*/ id _observer;
	bool _isWatching;
	NSObject<OS_dispatch_source>* _eventSource;
	unsigned long long _lastObservedEventID;
	FSEventStreamRef _eventStream;
	bool _eventsAreAboutDirectory;
	bool _isUnsettled;
	NSFileWatcherObservations* _itemObservations;
	NSMutableDictionary* _subitemObservationsByEventPath;
	NSURL* _fileReferenceURL;
	NSString* _formerPath;
	NSURL* _formerURL;

}
-(id)initWithQueue:(id)arg1 ;
-(void)setLastObservedEventID:(unsigned long long)arg1 ;
-(void)settle;
-(void)watchItem;
-(void)handleFSEventPath:(id)arg1 flags:(unsigned)arg2 id:(unsigned long long)arg3 ;
-(void)unsettle;
-(void)dealloc;
-(void)start;
-(void)setURL:(id)arg1 ;
-(void)stop;
-(void)setObserver:(/*^block*/ id)arg1 ;
@end

