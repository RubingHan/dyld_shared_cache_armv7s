/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:38 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AAAuthenticationResponse : AAResponse {

	NSDictionary* _tokens;
	NSDictionary* _appleAccount;

}

@property (nonatomic,readonly) NSString * fmipToken; 
@property (nonatomic,readonly) NSString * authToken; 
@property (nonatomic,readonly) NSString * mapsToken; 
@property (nonatomic,readonly) NSString * hsaToken; 
@property (nonatomic,readonly) NSString * personID; 
@property (nonatomic,readonly) NSString * HSAAction; 
@property (nonatomic,readonly) NSString * HSAData; 
-(id)hsaToken;
-(id)authToken;
-(void).cxx_destruct;
-(id)HSAAction;
-(id)HSAData;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(id)fmipToken;
-(id)mapsToken;
-(id)personID;
@end

