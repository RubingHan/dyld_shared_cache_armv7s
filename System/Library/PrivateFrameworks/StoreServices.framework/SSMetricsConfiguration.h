/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSSet, NSDictionary, NSObject, NSMutableDictionary;

@interface SSMetricsConfiguration : NSObject {

	NSSet* _blacklistedEvents;
	SSMetricsConfiguration* _childConfiguration;
	NSDictionary* _config;
	bool _disabled;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSMutableDictionary* _eventFieldsUnion;
	NSDictionary* _fields;
	int _internalSettingsToken;
	id _reportingFrequencyOverride;
	bool _sendDisabled;

}

@property (nonatomic,readonly) NSDictionary * fieldsMap; 
@property (nonatomic,retain) SSMetricsConfiguration * childConfiguration;              //@synthesize childConfiguration=_childConfiguration - In the implementation block
+(id)_reportingFrequencyOverride;
+(void)setReportingFrequencyOverride:(id)arg1 ;
+(void)getReportingFrequencyOverrideWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(bool)isDisabled;
-(id)valueForConfigurationKey:(id)arg1 ;
-(id)pingURLs;
-(id)initWithStorePlatformData:(id)arg1 ;
-(id)initWithGlobalConfiguration:(id)arg1 ;
-(double)reportingFrequency;
-(bool)isEventTypeBlacklisted:(id)arg1 ;
-(id)compoundStringWithElements:(id)arg1 ;
-(id)tokenStringWithElements:(id)arg1 ;
-(void)_setReportingFrequencyOverride:(id)arg1 ;
-(id)_initSSMetricsEventConfiguration;
-(bool)_configBooleanForKey:(id)arg1 defaultValue:(bool)arg2 ;
-(id)childConfiguration;
-(id)blacklistedEventFields;
-(id)eventFields;
-(id)fieldsMap;
-(bool)isSendDisabled;
-(id)reportingURLString;
-(void)setChildConfiguration:(id)arg1 ;
@end

