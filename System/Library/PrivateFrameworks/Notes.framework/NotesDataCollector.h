/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NotesDataCollectorLogger, NSString, ACAccountStore, NSDictionary, NSObject;

@interface NotesDataCollector : NSObject {

	bool _automaticCollectionOn;
	NotesDataCollectorLogger* _logger;
	NSString* _testFilePrefix;
	ACAccountStore* _accountStore;
	NSDictionary* _accountTypesPerIdentifierCache;
	NSObject<OS_dispatch_group>* _logDispatchGroup;

}

@property (nonatomic,retain) NotesDataCollectorLogger * logger;                                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) NSString * testFilePrefix;                                              //@synthesize testFilePrefix=_testFilePrefix - In the implementation block
@property (assign,getter=isAutomaticCollectionOn,nonatomic) bool automaticCollectionOn;              //@synthesize automaticCollectionOn=_automaticCollectionOn - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                                          //@synthesize accountStore=_accountStore - In the implementation block
@property (copy) NSDictionary * accountTypesPerIdentifierCache;                                      //@synthesize accountTypesPerIdentifierCache=_accountTypesPerIdentifierCache - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_group> * logDispatchGroup;                         //@synthesize logDispatchGroup=_logDispatchGroup - In the implementation block
+(id)sharedCollector;
+(void)clearSharedCollector;
-(void)setAccountStore:(id)arg1 ;
-(id)accountStore;
-(id)logger;
-(void)setLogger:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(void)startAutomaticCollection;
-(bool)isAutomaticCollectionOn;
-(void)setAutomaticCollectionOn:(bool)arg1 ;
-(void)noteContextWillSaveNotification:(id)arg1 ;
-(void)performInitialCollectionIfNeeded;
-(id)logDispatchGroup;
-(void)logTotalNoteCount;
-(void)logStoreCount;
-(void)logNoteCountPerStore;
-(id)accountTypesPerIdentifierCache;
-(bool)isAppleAccountIdentifier:(id)arg1 ;
-(void)setAccountTypesPerIdentifierCache:(id)arg1 ;
-(id)existingAccountForStore:(id)arg1 ;
-(id)storeTypeForAccountType:(int)arg1 accountIdentifier:(id)arg2 ;
-(id)testFilePrefix;
-(void)logDeltaCountForChangedNotesInContext:(id)arg1 ;
-(void)logDeltaCountForChangedStoresInContext:(id)arg1 ;
-(id)existingStoreForNote:(id)arg1 ;
-(void)browseAddedAndDeletedObjectsWithEntity:(id)arg1 inManagedObjectContext:(id)arg2 objectHandler:(/*^block*/ id)arg3 ;
-(void)logChanges:(id)arg1 ;
-(void)logNoteDeltaCount:(long long)arg1 ;
-(void)logNoteCreationDeltaCountWithAppIdentifier:(long long)arg1 ;
-(void)logNoteDeltaCount:(long long)arg1 forStoreType:(id)arg2 ;
-(void)logStoreDeltaCount:(long long)arg1 forType:(id)arg2 ;
-(id)freshContext;
-(id)classifyStoresByType:(id)arg1 ;
-(void)stopAutomaticCollection;
-(void)logNoteActivityType:(id)arg1 ;
-(void)setTestFilePrefix:(id)arg1 ;
-(void)setLogDispatchGroup:(id)arg1 ;
@end
