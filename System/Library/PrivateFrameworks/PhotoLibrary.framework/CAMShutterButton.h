/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIButton.h>

@class UIView, UIImageView, UIActivityIndicatorView;

@interface CAMShutterButton : UIButton {

	bool _pulsing;
	bool _spinning;
	bool __small;
	long long _mode;
	UIView* __outerView;
	UIImageView* __outerImageView;
	UIView* __innerView;
	UIActivityIndicatorView* __progressActivityIndicatorView;

}

@property (assign,nonatomic) long long mode;                                                          //@synthesize mode=_mode - In the implementation block
@property (assign,getter=isPulsing,nonatomic) bool pulsing;                                           //@synthesize pulsing=_pulsing - In the implementation block
@property (assign,getter=isSpinning,nonatomic) bool spinning;                                         //@synthesize spinning=_spinning - In the implementation block
@property (assign,setter=_setSmall:,getter=_isSmall,nonatomic) bool _small;                           //@synthesize _small=__small - In the implementation block
@property (nonatomic,readonly) UIView * _outerView;                                                   //@synthesize _outerView=__outerView - In the implementation block
@property (nonatomic,readonly) UIImageView * _outerImageView;                                         //@synthesize _outerImageView=__outerImageView - In the implementation block
@property (nonatomic,readonly) UIView * _innerView;                                                   //@synthesize _innerView=__innerView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * _progressActivityIndicatorView;              //@synthesize _progressActivityIndicatorView=__progressActivityIndicatorView - In the implementation block
+(id)shutterButton;
+(id)smallShutterButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(bool)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(void)setSpinning:(bool)arg1 ;
-(void)setMode:(long long)arg1 animated:(bool)arg2 ;
-(void)_setSmall:(bool)arg1 ;
-(void)_updateOuterAndInnerLayers;
-(void)_commonCAMShutterButtonInitialization;
-(CGSize)_sizeForMode:(long long)arg1 ;
-(double)_cornerRadiusForMode:(long long)arg1 ;
-(void)_performHighlightAnimation;
-(void)_performModeSwitchAnimationFromMode:(long long)arg1 toMode:(long long)arg2 animated:(bool)arg3 ;
-(void)_updateSpinningAnimations;
-(bool)_shouldUseImageViewForMode:(long long)arg1 ;
-(id)_outerImageForMode:(long long)arg1 ;
-(id)_outerView;
-(double)_borderWidthForMode:(long long)arg1 ;
-(id)_innerView;
-(id)_colorForMode:(long long)arg1 ;
-(bool)_isStopMode:(long long)arg1 ;
-(void)setPulsing:(bool)arg1 ;
-(bool)isPulsing;
-(bool)isSpinning;
-(bool)_isSmall;
-(id)_outerImageView;
-(id)_progressActivityIndicatorView;
@end
