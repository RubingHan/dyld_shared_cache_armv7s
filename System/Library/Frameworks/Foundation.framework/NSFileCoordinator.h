/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary;

@interface NSFileCoordinator : NSObject {

	id _accessArbiter;
	id _fileReactor;
	id _purposeID;
	NSURL* _recentFilePresenterURL;
	id _accessClaimIDOrIDs;
	bool _isCancelled;
	NSMutableDictionary* _movedItems;

}
+(void)__itemAtURL:(id)arg1 didMoveToURL:(id)arg2 purposeID:(id)arg3 ;
+(void)__itemAtURL:(id)arg1 didDisconnectWithPurposeID:(id)arg2 ;
+(void)__itemAtURL:(id)arg1 didReconnectWithPurposeID:(id)arg2 ;
+(void)__itemAtURL:(id)arg1 didGainVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4 ;
+(void)__itemAtURL:(id)arg1 didLoseVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4 ;
+(void)__itemAtURL:(id)arg1 didResolveConflictVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4 ;
+(id)_currentFileCoordinator;
+(bool)_skipCoordinationWork;
+(void)_addFileProvider:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
+(void)__itemAtURL:(id)arg1 didChangeUbiquityWithPurposeID:(id)arg2 ;
+(void)_addFileProvider:(id)arg1 ;
+(void)_removeFileProvider:(id)arg1 ;
+(id)_fileProviders;
+(id)_canonicalURLForURL:(id)arg1 ;
+(id)filePresenters;
+(void)addFilePresenter:(id)arg1 ;
+(void)removeFilePresenter:(id)arg1 ;
-(void)__coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 byAccessor:(/*^block*/ id)arg4 ;
-(void)__coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 byAccessor:(/*^block*/ id)arg4 ;
-(void)__coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 purposeID:(id)arg5 byAccessor:(/*^block*/ id)arg6 ;
-(void)__coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 purposeID:(id)arg5 byAccessor:(/*^block*/ id)arg6 ;
-(void)_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(/*^block*/ id)arg4 ;
-(void)_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(/*^block*/ id)arg4 ;
-(void)_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(/*^block*/ id)arg6 ;
-(void)_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(/*^block*/ id)arg6 ;
-(void)__prepareForReadingItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 writingItemsAtURLs:(id)arg3 options:(unsigned long long)arg4 byAccessor:(/*^block*/ id)arg5 ;
-(void)_itemAtURL:(id)arg1 willMoveToURL:(id)arg2 ;
-(void)_itemAtURL:(id)arg1 didMoveToURL:(id)arg2 ;
-(void)_requestAccessClaim:(id)arg1 withProcedure:(/*^block*/ id)arg2 ;
-(void)_forgetAccessClaimForID:(id)arg1 ;
-(void)_blockOnAccessClaim:(id)arg1 ;
-(void)_invokeAccessor:(/*^block*/ id)arg1 orDont:(bool)arg2 thenRelinquishAccessClaimForID:(id)arg3 ;
-(void)setPurposeIdentifier:(id)arg1 ;
-(void)_ubiquityDidChangeForItemAtURL:(id)arg1 ;
-(void)_setFileProvider:(id)arg1 ;
-(id)purposeIdentifier;
-(void)_invokeAccessor:(/*^block*/ id)arg1 thenCompletionHandler:(/*^block*/ id)arg2 ;
-(void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(/*^block*/ id)arg6 ;
-(void)prepareForReadingItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 writingItemsAtURLs:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(/*^block*/ id)arg6 ;
-(void)itemAtURL:(id)arg1 willMoveToURL:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)cancel;
-(id)initWithFilePresenter:(id)arg1 ;
-(void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(/*^block*/ id)arg4 ;
-(void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(/*^block*/ id)arg6 ;
-(void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(/*^block*/ id)arg4 ;
-(void)itemAtURL:(id)arg1 didMoveToURL:(id)arg2 ;
@end
