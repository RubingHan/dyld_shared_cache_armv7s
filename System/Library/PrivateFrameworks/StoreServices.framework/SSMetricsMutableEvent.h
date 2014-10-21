/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSMetricsEvent.h>
#import <CoreFoundation/NSMutableCopying.h>

@class NSMutableDictionary, NSDictionary;

@interface SSMetricsMutableEvent : SSMetricsEvent <NSMutableCopying> {

	NSMutableDictionary* _mutableBody;

}

@property (nonatomic,readonly) NSDictionary * bodyDictionary;              //@synthesize mutableBody=_mutableBody - In the implementation block
-(void)dealloc;
-(id)init;
-(id)debugDescription;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(void)setProperty:(id)arg1 forBodyKey:(id)arg2 ;
-(id)propertyForBodyKey:(id)arg1 ;
-(id)initWithBodyDictionary:(id)arg1 ;
-(id)bodyDictionary;
-(void)appendPropertiesToBody:(id)arg1 ;
-(void)addPropertiesWithDictionary:(id)arg1 ;
@end
