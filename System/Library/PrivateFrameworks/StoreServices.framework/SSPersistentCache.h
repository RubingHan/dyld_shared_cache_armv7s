/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSFileManager, NSObject;

@interface SSPersistentCache : NSObject {

	bool _safeKeys;
	NSString* _identifier;
	NSString* _cacheName;
	NSString* _path;
	NSFileManager* _fm;
	NSObject<OS_dispatch_queue>* _serialQueue;

}
+(id)safeKeyForKey:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(bool)clear;
-(bool)setData:(id)arg1 forKey:(id)arg2 ;
-(id)dataForKey:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 cacheName:(id)arg2 ;
-(bool)removeDataForKey:(id)arg1 ;
-(id)_pathForKey:(id)arg1 ;
-(bool)_isFileNotFound:(id)arg1 ;
-(void)setFilenameSafeKeys:(bool)arg1 ;
@end

