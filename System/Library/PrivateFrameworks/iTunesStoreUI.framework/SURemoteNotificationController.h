/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SURemoteNotificationController : NSObject

@property (nonatomic,readonly) unsigned long long enabledNotificationTypes; 
+(id)sharedInstance;
-(id)init;
-(unsigned long long)enabledNotificationTypes;
-(void)handleRegistrationFailureWithError:(id)arg1 ;
-(void)handleRegistrationSuccessWithToken:(id)arg1 ;
-(void)handleNotificationDictionary:(id)arg1 ;
@end
