/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSNumberFormatter, NSObject;

@interface MCFormatterVendor : NSObject {

	NSNumberFormatter* _numberFormatter;
	NSObject<OS_dispatch_queue>* _syncQueue;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(void)_localeDidChange:(id)arg1 ;
-(id)numberFormatter;
@end

