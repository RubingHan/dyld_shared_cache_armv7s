/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoardUI/SBLegibility.h>

@class _UILegibilityView;

@interface SBLockScreenTimerDialView : UIView <SBLegibility> {

	_UILegibilityView* _dialView;
	double _strength;

}

@property (assign,nonatomic) double strength;              //@synthesize strength=_strength - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(void)updateForChangedSettings:(id)arg1 ;
-(id)_newDialViewForSettings:(id)arg1 ;
@end

