/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:28 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface StoreBannerTracker : NSObject {

	NSMutableDictionary* _blockedProducts;
	NSObject<OS_dispatch_queue>* _queue;

}
+(id)sharedTracker;
-(void)save;
-(void)dealloc;
-(id)init;
-(void)load;
-(void)clear;
-(id)filePath;
-(void)isProductBannerBlocked:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)blockProductBanner:(id)arg1 ;
@end

