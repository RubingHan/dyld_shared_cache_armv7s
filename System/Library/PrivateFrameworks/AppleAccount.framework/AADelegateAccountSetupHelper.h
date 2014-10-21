/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:38 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class ACAccountStore, AASetupAssistantService, NSArray, NSMutableArray, NSMutableDictionary, NSObject;

@interface AADelegateAccountSetupHelper : NSObject {

	ACAccountStore* _accountStore;
	AASetupAssistantService* _aaService;
	NSArray* _delegatesToSetup;
	NSMutableArray* _pendingCompletionBundles;
	NSMutableDictionary* _assistantDelegates;
	/*^block*/ id _handler;
	NSObject<OS_dispatch_source>* _delegatetimer;

}
-(id)initWithStore:(id)arg1 ;
-(id)init;
-(void).cxx_destruct;
-(void)_setupDelegateAccountsWithEmailChoice:(id)arg1 ;
-(id)_loadAssistantDelegateBundles;
-(void)_completeiCloudAndDelegateSetupWithResponse:(id)arg1 ;
-(id)_adjustResponseDictionary:(id)arg1 ;
-(void)setupiCloudDelegateWithUsername:(id)arg1 password:(id)arg2 emailChoice:(id)arg3 withHandler:(/*^block*/ id)arg4 ;
@end
