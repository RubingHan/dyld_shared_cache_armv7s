/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:47 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/SPDaemonQueryDelegate.h>

@protocol OS_dispatch_group;
@class SPDaemonQueryToken, SPSearchResultSection, NSMutableDictionary, NSObject;

@interface CKSpotlightQuery : NSObject <SPDaemonQueryDelegate> {

	SPDaemonQueryToken* _queryToken;
	unsigned long long _resultIndex;
	SPSearchResultSection* _searchResults;
	NSMutableDictionary* _chatGUIDToLatestSearchResult;
	NSObject<OS_dispatch_group>* _searchResultLoadingGroup;
	/*^block*/ id _completion;
	bool _processing;
	bool _cancelled;

}

@property (nonatomic,copy) id completion;              //@synthesize completion=_completion - In the implementation block
-(void)dealloc;
-(/*^block*/ id)completion;
-(void)setCompletion:(/*^block*/ id)arg1 ;
-(void)cancel;
-(void)_cleanup;
-(id)initWithSearchText:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_callCompletionIfNecessary;
-(void)_processSearchResults;
-(void)searchDaemonQuery:(id)arg1 addedResults:(id)arg2 ;
-(void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2 ;
-(void)searchDaemonQueryCompleted:(id)arg1 ;
@end

