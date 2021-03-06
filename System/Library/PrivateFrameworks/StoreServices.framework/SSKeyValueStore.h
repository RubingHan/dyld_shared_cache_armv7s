/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSXPCConnection, SSKeyValueStoreDatabase;

@interface SSKeyValueStore : NSObject {

	SSXPCConnection* _connection;
	SSKeyValueStoreDatabase* _database;
	bool _useLocalRead;
	bool _useLocalWrite;

}

@property (getter=isLocalReadable,readonly) bool localReadable; 
@property (getter=isLocalWritable,readonly) bool localWritable; 
+(bool)isLocalReadable;
-(void)dealloc;
-(id)init;
-(void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)getValuesForDomain:(id)arg1 keys:(const id*)arg2 count:(unsigned long long)arg3 usingBlock:(/*^block*/ id)arg4 ;
-(bool)isLocalReadable;
-(void)readUsingSessionBlock:(/*^block*/ id)arg1 ;
-(void)modifyUsingTransactionBlock:(/*^block*/ id)arg1 ;
-(void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 ;
-(id)copyAccountDictionaryForDomain:(id)arg1 ;
-(id)iTunesValueForKey:(id)arg1 usedDomain:(id*)arg2 ;
-(void)removeAccountFromDomain:(id)arg1 ;
-(void)removeAllValuesForDomain:(id)arg1 ;
-(void)removeAllValuesWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2 ;
-(id)copyAccounts;
-(bool)isLocalWritable;
-(void)getValueForDomain:(id)arg1 key:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(void)removeAllValuesForDomain:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
@end

