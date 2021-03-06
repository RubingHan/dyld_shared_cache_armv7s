/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class NSObject, NSString;

@interface SSSQLiteDatabase : NSObject {

	sqlite3Ref _db;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSString* _databasePath;
	bool _readOnly;
	bool _isInTransaction;
	/*^block*/ id _setupBlock;
	CFDictionaryRef _statementCache;
	bool _takesTaskCompletionAssertions;
	SBSProcessAssertionRef _taskAssertion;
	long long _taskAssertionCount;

}

@property (nonatomic,copy) id setupBlock;                           //@synthesize setupBlock=_setupBlock - In the implementation block
@property (assign) bool takesTaskCompletionAssertions; 
+(bool)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 ;
+(void)_stepStatement:(sqlite3_stmtRef)arg1 hasRow:(bool*)arg2 didFinish:(bool*)arg3 isCorrupt:(bool*)arg4 ;
+(bool)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 ;
+(void)_setTakesTaskCompletionAssertions:(bool)arg1 ;
-(void)dealloc;
-(void)performTransactionWithBlock:(/*^block*/ id)arg1 ;
-(long long)userVersion;
-(bool)setUserVersion:(long long)arg1 ;
-(int)_openDatabase;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)setSetupBlock:(/*^block*/ id)arg1 ;
-(bool)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 ;
-(void)prepareStatementForSQL:(id)arg1 cache:(bool)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(bool)executeSQL:(id)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 readOnly:(bool)arg2 ;
-(void)dispatchBlockAsync:(/*^block*/ id)arg1 ;
-(void)_beginTaskCompletionAssertion;
-(void)_endTaskCompletionAssertion;
-(void)_accessDatabaseUsingBlock:(/*^block*/ id)arg1 ;
-(void)_resetCorruptDatabase;
-(sqlite3_stmtRef)_statementForSQL:(id)arg1 cache:(bool)arg2 ;
-(bool)setUserVersion:(long long)arg1 forDatabase:(id)arg2 ;
-(long long)userVersionForDatabase:(id)arg1 ;
-(int)_openFlags;
-(int)_resetAndReopenDatabaseWithPath:(id)arg1 ;
-(bool)_resetDatabaseWithPath:(id)arg1 ;
-(bool)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 ;
-(void)accessDatabaseUsingBlock:(/*^block*/ id)arg1 ;
-(long long)countChanges;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/ id)arg2 ;
-(void)dispatchBlockSync:(/*^block*/ id)arg1 ;
-(id)newDispatchSourceWithType:(dispatch_source_type_sRef)arg1 ;
-(void)beginTaskCompletionAssertion;
-(void)endTaskCompletionAssertion;
-(void)setTakesTaskCompletionAssertions:(bool)arg1 ;
-(bool)takesTaskCompletionAssertions;
-(/*^block*/ id)setupBlock;
@end

