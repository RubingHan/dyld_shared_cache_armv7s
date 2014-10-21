/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIBackdropViewGraphicsQualityChangeDelegate.h>

@class UIColor, UIImageView, _UINavigationControllerPalette, UINavigationBar, _UIBackdropView, UIView;

@interface _UINavigationPaletteBackground : UIView <_UIBackdropViewGraphicsQualityChangeDelegate> {

	UIColor* _barTintColor;
	UIImageView* _shadowView;
	_UINavigationControllerPalette* _palette;
	UINavigationBar* _bar;
	_UIBackdropView* _adaptiveBackdrop;
	struct {
		unsigned barTranslucence : 3;
		unsigned barStyle : 3;
		unsigned paletteWantsAdaptiveBackdrop : 1;
	}  _navbarFlags;

}

@property (assign,nonatomic) long long barStyle; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (setter=_setShadowView:,getter=_shadowView,nonatomic,retain) UIView * shadowView;              //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) bool translucent; 
@property (assign,nonatomic) bool paletteWantsAdaptiveBackdrop; 
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(bool)isTranslucent;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)didMoveToSuperview;
-(id)initWithNavigationBar:(id)arg1 forPalette:(id)arg2 ;
-(id)_shadowView;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(void)setTranslucent:(bool)arg1 ;
-(void)setBarTintColor:(id)arg1 ;
-(void)_setFrame:(CGRect)arg1 forceUpdateBackgroundImage:(bool)arg2 ;
-(id)barTintColor;
-(void)_setShadowView:(id)arg1 ;
-(id)backdropView:(id)arg1 willChangeToGraphicsQuality:(long long)arg2 ;
-(void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2 ;
-(void)updateBackgroundView;
-(void)_syncWithBarStyles;
-(bool)paletteWantsAdaptiveBackdrop;
-(void)setPaletteWantsAdaptiveBackdrop:(bool)arg1 ;
@end
