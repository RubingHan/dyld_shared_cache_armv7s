/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WBSAutomaticReadingListSocialSource.h>

@interface WBSAutomaticReadingListTwitterSource : WBSAutomaticReadingListSocialSource {

	unsigned long long _numberOfRequestsAllowedInRateLimitWindow;

}

@property (assign,nonatomic) unsigned long long numberOfRequestsAllowedInRateLimitWindow;              //@synthesize numberOfRequestsAllowedInRateLimitWindow=_numberOfRequestsAllowedInRateLimitWindow - In the implementation block
+(id)sharedSource;
-(id)serviceName;
-(Class)itemClass;
-(id)serviceType;
-(id)accountTypeIdentifier;
-(double)minimumTimeBetweenRequests;
-(id)resourceURLString;
-(id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2 ;
-(void)updateMinimumTimeBetweenRequestsFromResponseHeaders:(id)arg1 ;
-(id)repostResourceURLStringForItem:(id)arg1 ;
-(unsigned long long)numberOfRequestsAllowedInRateLimitWindow;
-(void)setNumberOfRequestsAllowedInRateLimitWindow:(unsigned long long)arg1 ;
@end

