/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:49 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FTRegUtilities : NSObject
+(id)serviceWithType:(long long)arg1 ;
+(id)standaloneAuthorizationControllerWithRegController:(id)arg1 authID:(id)arg2 token:(id)arg3 ;
+(id)standaloneNewPasswordControllerWithRegController:(id)arg1 appleID:(id)arg2 ;
+(void)changePasswordControllerDidCancel:(id)arg1 ;
+(void)changePasswordControllerDidFinish:(id)arg1 withAppleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
+(void)authorizationController:(id)arg1 authorizedAccount:(bool)arg2 ;
@end

