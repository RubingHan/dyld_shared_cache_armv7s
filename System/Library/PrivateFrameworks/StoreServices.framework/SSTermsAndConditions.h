/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface SSTermsAndConditions : NSObject <NSCopying> {

	bool _requiresAuthentication;
	NSString* _text;
	bool _userAccepted;
	long long _versionID;

}

@property (assign,getter=isUserAccepted,nonatomic) bool userAccepted;              //@synthesize userAccepted=_userAccepted - In the implementation block
@property (assign,nonatomic) NSString * currentText;                               //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long currentVersionIdentifier;                   //@synthesize versionID=_versionID - In the implementation block
@property (nonatomic,readonly) bool requiresAuthentication;                        //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
-(bool)requiresAuthentication;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)currentText;
-(void)setCurrentText:(id)arg1 ;
-(long long)currentVersionIdentifier;
-(id)initWithResponseData:(id)arg1 error:(id*)arg2 ;
-(bool)isUserAccepted;
-(void)setCurrentVersionIdentifier:(long long)arg1 ;
-(void)setUserAccepted:(bool)arg1 ;
@end

