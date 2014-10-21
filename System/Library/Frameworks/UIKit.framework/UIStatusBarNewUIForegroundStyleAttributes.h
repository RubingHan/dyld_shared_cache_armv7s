/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStatusBarForegroundStyleAttributes.h>

@class UIColor, NSString;

@interface UIStatusBarNewUIForegroundStyleAttributes : UIStatusBarForegroundStyleAttributes {

	UIColor* _backgroundColor;
	NSString* _uniqueIdentifier;
	bool _isTintColorBlack;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(void)dealloc;
-(id)tintColor;
-(id)textColorForStyle:(long long)arg1 ;
-(id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 ;
-(id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 tintColor:(id)arg3 backgroundColor:(id)arg4 ;
-(double)edgePadding;
-(id)imageNamed:(id)arg1 withLegibilityStyle:(long long)arg2 legibilityStrength:(double)arg3 ;
-(id)textForNetworkType:(int)arg1 ;
-(int)batteryImageIdWithCapacity:(double)arg1 ;
-(double)batteryAccessoryMargin;
-(void)drawBatteryInsidesWithSize:(CGSize)arg1 capacity:(double)arg2 charging:(bool)arg3 ;
-(int)bluetoothBatteryImageIdWithCapacity:(double)arg1 ;
-(void)drawBluetoothBatteryInsidesWithSize:(CGSize)arg1 capacity:(double)arg2 ;
-(double)bluetoothBatteryExtraPadding;
-(long long)activityIndicatorStyleWithSyncActivity:(bool)arg1 ;
-(id)uniqueIdentifier;
-(double)sizeForMoonMaskVisible:(bool)arg1 ;
-(CGPoint)positionForMoonMaskInBounds:(CGRect)arg1 ;
-(double)textOffsetForStyle:(long long)arg1 ;
-(id)expandedNameForImageName:(id)arg1 ;
-(id)makeTextFontForStyle:(long long)arg1 ;
-(UIEdgeInsets)edgeInsetsForBatteryInsides;
-(double)_roundDimension:(double)arg1 ;
-(id)_batteryColorForCapacity:(double)arg1 lowCapacity:(double)arg2 charging:(bool)arg3 ;
-(bool)_isForegroundColorSafe:(id)arg1 ;
-(UIEdgeInsets)edgeInsetsForBluetoothBatteryInsides;
-(bool)_shouldUseBoldFontForStyle:(long long)arg1 ;
-(id)proportionalFontForFont:(id)arg1 ;
@end
