/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardUIServices/SBUINumericPasscodeEntryFieldBase.h>

@class UIView, SBUIButton, UILabel, UIButton;

@interface SBUILongNumericPasscodeEntryField : SBUINumericPasscodeEntryFieldBase {

	UIView* _leftPaddingView;
	UIView* _rightPaddingView;
	SBUIButton* _okButton;
	bool _showsOkButton;
	UILabel* _promptLabel;
	bool _showsPromptLabel;
	bool _firstResponder;
	UIView* _springView;
	UIView* _springViewParent;

}

@property (nonatomic,readonly) UIButton * okButton;                //@synthesize okButton=_okButton - In the implementation block
@property (assign,nonatomic) bool showsOkButton;                   //@synthesize showsOkButton=_showsOkButton - In the implementation block
@property (nonatomic,readonly) UILabel * promptLabel;              //@synthesize promptLabel=_promptLabel - In the implementation block
@property (assign,nonatomic) bool showsPromptLabel;                //@synthesize showsPromptLabel=_showsPromptLabel - In the implementation block
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(bool)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(bool)resignFirstResponder;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(bool)becomeFirstResponder;
-(bool)isFirstResponder;
-(bool)canBecomeFirstResponder;
-(bool)textFieldShouldBeginEditing:(id)arg1 ;
-(bool)canResignFirstResponder;
-(id)initWithDefaultSize;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)setCustomBackgroundColor:(id)arg1 ;
-(id)okButton;
-(void)_resetForFailedPasscode:(bool)arg1 playUnlockFailedSound:(bool)arg2 ;
-(void)_autofillForMesaWithCompletion:(/*^block*/ id)arg1 ;
-(CGSize)_viewSize;
-(CGSize)_passcodeFieldSize;
-(void)_okButtonHit;
-(void)setShowsOkButton:(bool)arg1 ;
-(void)setShowsPromptLabel:(bool)arg1 ;
-(CGSize)_okButtonSize;
-(bool)showsOkButton;
-(id)promptLabel;
-(bool)showsPromptLabel;
@end
