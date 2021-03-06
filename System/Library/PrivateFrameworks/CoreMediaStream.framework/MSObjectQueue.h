/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreMediaStream/CoreMediaStream-Structs.h>
@interface MSObjectQueue : NSObject {

	sqlite3Ref _db;
	CFDictionaryRef _statements;

}

@property (readonly) long long count; 
-(void)dealloc;
-(long long)count;
-(id)initWithPath:(id)arg1 ;
-(void)appendObjectWrappers:(id)arg1 ;
-(id)allObjectWrappersMaxCount:(long long)arg1 ;
-(void)removeObjectWrappersFromQueue:(id)arg1 ;
-(id)smallestObjectWrappersTargetTotalSize:(long long)arg1 maxCount:(long long)arg2 ;
-(id)objectWrappersWithZeroSizeMaxCount:(long long)arg1 ;
-(id)allObjectWrappersOrderedByDescendingErrorCountMaxCount:(long long)arg1 ;
-(void)commitErrorCountsForObjectWrappers:(id)arg1 ;
-(void)commitObjectsWrappers:(id)arg1 ;
-(sqlite3_stmtRef)_statementLabel:(id)arg1 query:(const char*)arg2 ;
-(id)_objectWrapperFromQueueQuery:(sqlite3_stmtRef)arg1 outSize:(long long*)arg2 ;
-(void)removeAllObjectWrappersFromQueue;
@end

