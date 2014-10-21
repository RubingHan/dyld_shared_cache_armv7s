/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKit/UIView.h>

@protocol SBFLockScreenDateFormatter;
@class UILabel, _UILegibilityLabel, NSDate, _UILegibilitySettings, UIColor;

@interface SBFLockScreenDateView : UIView {

	UILabel* _timeLabel;
	UILabel* _dateLabel;
	bool _useLegibilityLabels;
	_UILegibilityLabel* _legibilityTimeLabel;
	_UILegibilityLabel* _legibilityDateLabel;
	double _timeAlpha;
	double _dateAlpha;
	NSDate* _date;
	<SBFLockScreenDateFormatter>* _formatter;
	_UILegibilitySettings* _legibilitySettings;
	double _timeStrength;
	double _dateStrength;
	UIColor* _textColor;
	double _dateAlphaPercentage;

}

@property (assign,getter=isDateHidden,nonatomic) bool dateHidden; 
@property (nonatomic,retain) NSDate * date;                                           //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) <SBFLockScreenDateFormatter> * formatter;                //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) double timeStrength;                                     //@synthesize timeStrength=_timeStrength - In the implementation block
@property (assign,nonatomic) double dateStrength;                                     //@synthesize dateStrength=_dateStrength - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                     //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) double dateAlphaPercentage;                              //@synthesize dateAlphaPercentage=_dateAlphaPercentage - In the implementation block
+(double)defaultHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)date;
-(void)setTextColor:(id)arg1 ;
-(id)textColor;
-(void)setDate:(id)arg1 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(id)legibilitySettings;
-(void)_addLabels;
-(void)_useLegibilityLabels:(bool)arg1 ;
-(void)updateFormat;
-(void)_updateLabels;
-(void)_updateLegibilityLabels;
-(void)_setDateAlpha:(double)arg1 ;
-(id)_timeFont;
-(id)_dateFont;
-(void)_updateLabelAlpha;
-(double)_effectiveDateAlpha;
-(double)dateAlphaPercentage;
-(void)_layoutTimeLabel;
-(void)_layoutDateLabel;
-(double)_dateBaselineOffsetFromTime;
-(void)setDateStrength:(double)arg1 ;
-(void)setTimeStrength:(double)arg1 ;
-(void)setDateAlphaPercentage:(double)arg1 ;
-(bool)isDateHidden;
-(void)setDateHidden:(bool)arg1 ;
-(void)setContentAlpha:(double)arg1 withDateVisible:(bool)arg2 ;
-(double)timeBaselineOffsetFromOrigin;
-(double)dateBaselineOffsetFromOrigin;
-(id)formatter;
-(void)setFormatter:(id)arg1 ;
-(double)timeStrength;
-(double)dateStrength;
@end
