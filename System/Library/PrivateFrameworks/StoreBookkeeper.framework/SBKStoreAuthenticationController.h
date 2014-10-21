/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:45 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSAccount;

@interface SBKStoreAuthenticationController : NSObject {

	bool _shouldAuthenticate;
	SSAccount* _storeAccount;

}

@property (readonly) SSAccount * storeAccount;              //@synthesize storeAccount=_storeAccount - In the implementation block
@property (assign) bool shouldAuthenticate;                 //@synthesize shouldAuthenticate=_shouldAuthenticate - In the implementation block
+(id)lastSyncedAccountIdentifier;
+(id)lastSyncedAccountName;
+(void)clearLastSyncnedAccount;
-(void).cxx_destruct;
-(id)initWithStoreAccount:(id)arg1 ;
-(bool)shouldAuthenticate;
-(void)setShouldAuthenticate:(bool)arg1 ;
-(bool)isAuthenticationValidForTransaction:(id)arg1 error:(id*)arg2 ;
-(void)saveAccountToLastSyncedDefaults;
-(id)storeAccount;
-(bool)shouldForceAuthenticationForTransaction:(id)arg1 ;
-(id)authenticationErrorsForTransaction:(id)arg1 ;
@end
