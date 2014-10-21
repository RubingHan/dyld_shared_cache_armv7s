/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKit/UILabel.h>
#import <SpringBoardUI/SBUIControlCenterControl.h>

@interface SBUIControlCenterLabel : UILabel <SBUIControlCenterControl>
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(bool)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setEnabled:(bool)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(void)setHighlighted:(bool)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)controlAppearanceDidChangeForState:(long long)arg1 ;
-(void)controlConfigurationDidChangeForState:(long long)arg1 ;
-(void)_updateAttributedText;
-(long long)_currentState;
@end
