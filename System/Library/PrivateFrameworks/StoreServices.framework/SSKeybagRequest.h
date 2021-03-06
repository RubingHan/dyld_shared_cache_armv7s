/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <StoreServices/SSXPCCoding.h>

@class NSNumber;

@interface SSKeybagRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountID;
	long long _options;

}

@property (readonly) NSNumber * accountID;               //@synthesize accountID=_accountID - In the implementation block
@property (assign) long long keybagOptions;              //@synthesize options=_options - In the implementation block
-(void)startWithCompletionBlock:(/*^block*/ id)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)accountID;
-(id)accountIdentifier;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(long long)keybagOptions;
-(void)setKeybagOptions:(long long)arg1 ;
@end

