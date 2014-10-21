/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ML3DatabaseConnectionDelegate;
#import <MusicLibrary/MusicLibrary-Structs.h>
@class ML3DatabaseStatementCache, NSMutableArray, ML3DatabaseConnectionPool, NSString, NSUUID;

@interface ML3DatabaseConnection : NSObject {

	sqlite3Ref _sqlitedb;
	bool _isOpen;
	ML3DatabaseStatementCache* _statementCache;
	unsigned long long _statementsSinceLastCheckpoint;
	unsigned _transactionLevel;
	bool _nestedTransactionWantsToRollback;
	NSMutableArray* _enqueuedTransactionCommitBlocks;
	ML3DatabaseConnectionPool* _owningPool;
	NSMutableArray* _registeredFunctions;
	NSMutableArray* _registeredModules;
	int _profilingLevel;
	NSString* _lastTracedStatement;
	int _willDeleteDatabaseNotifyToken;
	bool _isReadOnly;
	bool _automaticCheckpointingEnabled;
	<ML3DatabaseConnectionDelegate>* _connectionDelegate;
	NSString* _databasePath;
	unsigned long long _journalingMode;
	NSUUID* _uniqueIdentifier;
	const void* _iTunesExtensions;
	unsigned long long _checkpointStatementThreshold;

}

@property (assign,nonatomic,__weak) <ML3DatabaseConnectionDelegate> * connectionDelegate;              //@synthesize connectionDelegate=_connectionDelegate - In the implementation block
@property (nonatomic,readonly) NSString * databasePath;                                                //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) bool isOpen; 
@property (assign,setter=setReadOnly:,nonatomic) bool isReadOnly;                                      //@synthesize isReadOnly=_isReadOnly - In the implementation block
@property (assign,nonatomic) unsigned long long journalingMode;                                        //@synthesize journalingMode=_journalingMode - In the implementation block
@property (nonatomic,readonly) bool isInTransaction; 
@property (nonatomic,readonly) bool transactionMarkedForRollBack; 
@property (assign,nonatomic) int profilingLevel; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) const void* iTunesExtensions;                                             //@synthesize iTunesExtensions=_iTunesExtensions - In the implementation block
@property (assign,nonatomic) bool automaticCheckpointingEnabled;                                       //@synthesize automaticCheckpointingEnabled=_automaticCheckpointingEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long checkpointStatementThreshold;                          //@synthesize checkpointStatementThreshold=_checkpointStatementThreshold - In the implementation block
-(bool)isOpen;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(void)flush;
-(bool)close;
-(void).cxx_destruct;
-(id)uniqueIdentifier;
-(bool)executeUpdate:(id)arg1 withParameters:(id)arg2 error:(id*)arg3 ;
-(id)executeQuery:(id)arg1 withParameters:(id)arg2 ;
-(bool)tableExists:(id)arg1 ;
-(id)executeQuery:(id)arg1 ;
-(bool)executeUpdate:(id)arg1 ;
-(bool)performTransactionWithBlock:(/*^block*/ id)arg1 ;
-(id)openBlobInTable:(id)arg1 column:(id)arg2 row:(long long)arg3 readOnly:(bool)arg4 ;
-(sqlite3Ref)_sqliteHandle;
-(id)sqliteError;
-(void)enqueueBlockForTransactionCommit:(/*^block*/ id)arg1 ;
-(bool)pushTransaction;
-(bool)popTransactionAndCommit:(bool)arg1 ;
-(id)executeQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4 ;
-(bool)isInTransaction;
-(bool)popToRootTransactionAndCommit:(bool)arg1 ;
-(void)setConnectionDelegate:(id)arg1 ;
-(bool)pushTransactionUsingBehaviorType:(unsigned long long)arg1 ;
-(bool)databasePathExists;
-(id)initWithDatabasePath:(id)arg1 ;
-(bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(/*function pointer*/ void*)arg3 ;
-(bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(/*function pointer*/ void*)arg3 userData:(void*)arg4 ;
-(bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 block:(/*^block*/ id)arg3 ;
-(void)setITunesExtensions:(const void*)arg1 ;
-(const void*)iTunesExtensions;
-(bool)deleteDatabase;
-(bool)performTransactionWithBlock:(/*^block*/ id)arg1 usingBehaviorType:(unsigned long long)arg2 ;
-(unsigned long long)journalingMode;
-(bool)registerModule:(id)arg1 ;
-(void)_ensureConnectionIsOpen;
-(bool)_handleBusyLockWithNumberOfRetries:(int)arg1 ;
-(bool)_handleDatabaseCorruption;
-(bool)transactionMarkedForRollBack;
-(void)_setOwningPool:(id)arg1 ;
-(void)setProfilingLevel:(int)arg1 ;
-(void)setJournalingMode:(unsigned long long)arg1 ;
-(bool)_isSharedMediaLibraryDatabase;
-(void)_updateProfilingLevel;
-(bool)_openWithFlags:(int)arg1 isRetry:(bool)arg2 ;
-(void)_createDatabaseDirectoryIfNonexistent;
-(id)_databaseFilePaths;
-(void)_finalizeAllStatements;
-(bool)_handleZombieSQLiteConnection:(sqlite3Ref)arg1 ;
-(void)_logCurrentError;
-(void)_resetUnfinalizedStatements;
-(id)_internalExecuteQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4 ;
-(bool)_internalExecuteUpdate:(id)arg1 withParameters:(id)arg2 error:(id*)arg3 ;
-(bool)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1 ;
-(bool)_internalEndTransactionAndCommit:(bool)arg1 ;
-(void)_executeTransactionCommitBlocks:(bool)arg1 ;
-(id)_registeredModuleNamed:(id)arg1 ;
-(id)_prepareStatement:(id)arg1 error:(id*)arg2 ;
-(bool)_executeStatement:(id)arg1 ;
-(int)checkpointDatabase;
-(bool)_validatePreparedStatement:(id)arg1 error:(id*)arg2 ;
-(bool)_databaseFileExists;
-(int)profilingLevel;
-(bool)registerModuleName:(id)arg1 moduleMethods:(sqlite3_module*)arg2 ;
-(long long)lastInsertionRowID;
-(id)_owningPool;
-(unsigned long long)_transactionLevel;
-(void)_setTransactionLevel:(unsigned long long)arg1 ;
-(id)_shortDescription;
-(void)_createDatabaseFileIfNonexistent;
-(void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statementSQL:(id)arg2 ;
-(void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statement:(id)arg2 ;
-(void)_handleDatabaseTraceStatement:(const char*)arg1 ;
-(void)_handleDatabaseProfileStatement:(const char*)arg1 executionTimeNS:(unsigned long long)arg2 ;
-(id)connectionDelegate;
-(bool)automaticCheckpointingEnabled;
-(void)setAutomaticCheckpointingEnabled:(bool)arg1 ;
-(unsigned long long)checkpointStatementThreshold;
-(void)setCheckpointStatementThreshold:(unsigned long long)arg1 ;
-(bool)isReadOnly;
-(id)databasePath;
-(bool)open;
-(void)setReadOnly:(bool)arg1 ;
@end
