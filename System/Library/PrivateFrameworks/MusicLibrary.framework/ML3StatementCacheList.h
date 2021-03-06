/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ML3StatementCacheNode;

@interface ML3StatementCacheList : NSObject {

	ML3StatementCacheNode* _firstNode;
	ML3StatementCacheNode* _lastNode;

}

@property (nonatomic,readonly) ML3StatementCacheNode * firstNode;              //@synthesize firstNode=_firstNode - In the implementation block
@property (nonatomic,readonly) ML3StatementCacheNode * lastNode;               //@synthesize lastNode=_lastNode - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)count;
-(id)description;
-(id)firstNode;
-(void).cxx_destruct;
-(void)promoteNodeWithDictionaryKey:(id)arg1 ;
-(void)appendNode:(id)arg1 ;
-(id)deleteOldestNode;
-(void)deleteAllNodes;
-(id)lastNode;
@end

