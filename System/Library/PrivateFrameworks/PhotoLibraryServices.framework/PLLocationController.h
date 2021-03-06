/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/CLLocationManagerDelegate.h>

@class CLLocationManager, NSMutableArray, NSDictionary, NSString;

@interface PLLocationController : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	NSMutableArray* _locationPendingAssets;
	NSDictionary* _exifDictionary;
	NSString* _locationStr;
	bool _isEnabled;
	bool _isUpdating;
	bool _isHeadingEnabled;

}
+(id)sharedInstance;
+(bool)usesEffectiveBundleIdentifier;
+(void)setUsesEffectiveBundleIdentifier:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setEnabled:(bool)arg1 ;
-(id)location;
-(void)_applicationStateChanged:(id)arg1 ;
-(void)_assetContainerChanged:(id)arg1 ;
-(void)_updateLocationRunState;
-(void)_stopUpdating;
-(void)_startUpdating;
-(id)locationString;
-(id)locationDictionaryForImageWithDeviceOrientation:(int)arg1 rearFacingCamera:(bool)arg2 ;
-(bool)_addLocationToAsset:(id)arg1 ;
-(void)_updatePendingAssets;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)setHeadingEnabled:(bool)arg1 ;
-(void)addLocationToMediaWithAssetURLWhenAvailable:(id)arg1 deviceOrientation:(int)arg2 cameraWasRearFacing:(bool)arg3 ;
@end

