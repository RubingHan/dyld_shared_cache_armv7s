/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <StoreServices/SSXPCCoding.h>

@class CLLocation, NSMutableDictionary, NSNumber, NSString;

@interface SSLookupProperties : NSObject <NSCopying, SSXPCCoding> {

	CLLocation* _location;
	long long _localizationStyle;
	NSMutableDictionary* _requestParameters;
	NSNumber* _timeoutInterval;

}

@property (nonatomic,copy) NSString * keyProfile; 
@property (assign,nonatomic) long long localizationStyle;              //@synthesize localizationStyle=_localizationStyle - In the implementation block
@property (nonatomic,copy) CLLocation * location;                      //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSNumber * timeoutInterval;                 //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
-(id)timeoutInterval;
-(void)setTimeoutInterval:(id)arg1 ;
-(void)setKeyProfile:(id)arg1 ;
-(void)setLocalizationStyle:(long long)arg1 ;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)location;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)copyRequestParameters;
-(void)setLocation:(id)arg1 ;
-(id)valueForRequestParameter:(id)arg1 ;
-(id)keyProfile;
-(long long)localizationStyle;
@end

