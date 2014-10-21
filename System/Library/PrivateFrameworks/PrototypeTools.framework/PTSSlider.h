/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <UIKit/UIView.h>
#import <PrototypeTools/PTSHUDControl.h>
#import <UIKit/_UISettingsKeyPathObserver.h>

@class _UISettings, NSString, UISlider, UILabel, NSNumberFormatter, NSArray, UIButton, NSTimer;

@interface PTSSlider : UIView <PTSHUDControl, _UISettingsKeyPathObserver> {

	bool _enabled;
	bool _showsValueLabel;
	int _alignment;
	float _increment;
	_UISettings* _settings;
	NSString* _valueKeyPath;
	UISlider* _sliderControl;
	UILabel* _titleLabel;
	NSNumberFormatter* _valueLabelFormatter;
	NSArray* _valueLabelStrings;
	UILabel* _valueLabel;
	UIButton* _upIncrementButton;
	UIButton* _downIncrementButton;
	NSArray* _subviewConstraints;
	NSTimer* _buttonRepeatTimer;
	CGPoint _valueChangePublishTTL;

}

@property (assign,nonatomic,__weak) _UISettings * settings;                        //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy) NSString * valueKeyPath;                                //@synthesize valueKeyPath=_valueKeyPath - In the implementation block
@property (assign,nonatomic) int alignment;                                        //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) bool enabled;                                         //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) UISlider * sliderControl;                             //@synthesize sliderControl=_sliderControl - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) bool showsValueLabel;                                 //@synthesize showsValueLabel=_showsValueLabel - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * valueLabelFormatter;              //@synthesize valueLabelFormatter=_valueLabelFormatter - In the implementation block
@property (nonatomic,copy) NSArray * valueLabelStrings;                            //@synthesize valueLabelStrings=_valueLabelStrings - In the implementation block
@property (assign,nonatomic,@dynamic) float value; 
@property (assign,nonatomic,@dynamic) float minimumValue; 
@property (assign,nonatomic,@dynamic) float maximumValue; 
@property (assign,nonatomic) float increment;                                      //@synthesize increment=_increment - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                                 //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UIButton * upIncrementButton;                         //@synthesize upIncrementButton=_upIncrementButton - In the implementation block
@property (nonatomic,retain) UIButton * downIncrementButton;                       //@synthesize downIncrementButton=_downIncrementButton - In the implementation block
@property (nonatomic,retain) NSArray * subviewConstraints;                         //@synthesize subviewConstraints=_subviewConstraints - In the implementation block
@property (nonatomic,retain) NSTimer * buttonRepeatTimer;                          //@synthesize buttonRepeatTimer=_buttonRepeatTimer - In the implementation block
@property (assign,nonatomic) CGPoint valueChangePublishTTL;                        //@synthesize valueChangePublishTTL=_valueChangePublishTTL - In the implementation block
+(id)slider;
+(CGRect)defaultFrame;
+(id)sliderForSettings:(id)arg1 valueKeyPath:(id)arg2 title:(id)arg3 minimumValue:(float)arg4 maximumValue:(float)arg5 ;
-(void)valueChanged:(id)arg1 ;
-(id)valueLabel;
-(void)setValueLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setValue:(float)arg1 ;
-(void)setAlignment:(int)arg1 ;
-(void)setEnabled:(bool)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)titleLabel;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(int)alignment;
-(void)setValue:(float)arg1 animated:(bool)arg2 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)setSettings:(id)arg1 ;
-(id)settings;
-(bool)enabled;
-(void).cxx_destruct;
-(void)setTitleLabel:(id)arg1 ;
-(void)setSettings:(id)arg1 valueKeyPath:(id)arg2 ;
-(id)makeTitleLabel;
-(void)setValueKeyPath:(id)arg1 ;
-(id)valueKeyPath;
-(id)subviewConstraints;
-(void)setSubviewConstraints:(id)arg1 ;
-(void)setValueLabelFormatter:(id)arg1 ;
-(id)sliderControl;
-(id)makeSliderControl;
-(void)setSliderControl:(id)arg1 ;
-(id)makeValueLabel;
-(void)upIncrementAction:(id)arg1 ;
-(id)makeIncrementButtonWithAction:(SEL)arg1 imageName:(id)arg2 ;
-(void)setUpIncrementButton:(id)arg1 ;
-(void)downIncrementAction:(id)arg1 ;
-(void)setDownIncrementButton:(id)arg1 ;
-(void)setValueChangePublishTTL:(CGPoint)arg1 ;
-(id)upIncrementButton;
-(id)downIncrementButton;
-(id)valueLabelFormatter;
-(id)valueLabelStrings;
-(void)publishValueChanged;
-(CGPoint)valueChangePublishTTL;
-(void)updateValueLabel;
-(id)buttonRepeatTimer;
-(void)setButtonRepeatTimer:(id)arg1 ;
-(void)upIncrement;
-(void)stopIncrementRepeatAction;
-(void)downIncrement;
-(void)setShowsValueLabel:(bool)arg1 ;
-(bool)showsValueLabel;
-(void)setValueLabelStrings:(id)arg1 ;
-(float)increment;
-(void)setIncrement:(float)arg1 ;
@end
