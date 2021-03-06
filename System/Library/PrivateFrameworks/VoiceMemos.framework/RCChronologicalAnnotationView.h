/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIView.h>

@class RCUIConfiguration, UIColor;

@interface RCChronologicalAnnotationView : UIView {

	double _majorTickTimeUnit;
	unsigned long long _maximumMajorUnitsInVisibleDuration;
	RCUIConfiguration* _UIConfiguration;
	UIColor* _backgroundDebugColor;
	SCD_Struct_RC0 _visibleTimeRange;
	SCD_Struct_RC0 _markerClippingRange;

}

@property (assign,nonatomic) SCD_Struct_RC0 visibleTimeRange;                                    //@synthesize visibleTimeRange=_visibleTimeRange - In the implementation block
@property (assign,nonatomic) unsigned long long maximumMajorUnitsInVisibleDuration;              //@synthesize maximumMajorUnitsInVisibleDuration=_maximumMajorUnitsInVisibleDuration - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC0 markerClippingRange;                                 //@synthesize markerClippingRange=_markerClippingRange - In the implementation block
@property (nonatomic,copy) RCUIConfiguration * UIConfiguration;                                  //@synthesize UIConfiguration=_UIConfiguration - In the implementation block
@property (nonatomic,retain) UIColor * backgroundDebugColor;                                     //@synthesize backgroundDebugColor=_backgroundDebugColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)description;
-(void).cxx_destruct;
-(void)setUIConfiguration:(id)arg1 ;
-(SCD_Struct_RC0)visibleTimeRange;
-(id)UIConfiguration;
-(void)setVisibleTimeRange:(SCD_Struct_RC0)arg1 ;
-(void)setMaximumMajorUnitsInVisibleDuration:(unsigned long long)arg1 ;
-(void)setMarkerClippingRange:(SCD_Struct_RC0)arg1 ;
-(void)setBackgroundDebugColor:(id)arg1 ;
-(void)_updateMajorTickTimeUnit;
-(id)_timeLabelAttributes;
-(CGSize)labelsSize;
-(unsigned long long)maximumMajorUnitsInVisibleDuration;
-(SCD_Struct_RC0)markerClippingRange;
-(id)backgroundDebugColor;
@end

