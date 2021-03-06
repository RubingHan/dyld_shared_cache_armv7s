/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:38 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSDictionary, NSString;

@interface AALoginDelegatesRequest : AARequest {

	NSDictionary* _accountParameters;
	NSString* _username;
	NSString* _password;

}
+(Class)responseClass;
-(void).cxx_destruct;
-(id)urlString;
-(id)urlRequest;
-(id)initWithUsername:(id)arg1 password:(id)arg2 parameters:(id)arg3 ;
@end

