/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSXPCCoding.h>

@class NSDictionary, NSString;

@interface SSRemoteNotification : NSObject <SSXPCCoding> {

	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) long long actionType; 
@property (nonatomic,readonly) NSString * alertBodyString; 
@property (nonatomic,readonly) NSString * alertCancelString; 
@property (nonatomic,readonly) NSString * alertOKString; 
@property (nonatomic,readonly) NSString * alertTitleString; 
@property (nonatomic,readonly) id badgeValue; 
@property (nonatomic,readonly) NSString * soundFileName; 
@property (nonatomic,readonly) NSDictionary * notificationUserInfo; 
-(void)dealloc;
-(id)valueForKey:(id)arg1 ;
-(id)badgeValue;
-(long long)actionType;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)_valueForAlertKey:(id)arg1 ;
-(id)initWithNotificationUserInfo:(id)arg1 ;
-(id)alertBodyString;
-(id)alertCancelString;
-(id)alertOKString;
-(id)alertTitleString;
-(id)soundFileName;
-(id)notificationUserInfo;
@end

