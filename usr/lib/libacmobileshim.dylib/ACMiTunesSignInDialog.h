/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libacmobileshim.dylib/ACMSignInDialog.h>
#import <libacmobileshim.dylib/acmAlertViewDelegateProtocol.h>

@class NSString, UIAlertView;

@interface ACMiTunesSignInDialog : ACMSignInDialog <acmAlertViewDelegateProtocol> {

	bool _isShown;
	NSString* _titleField;
	bool _isUserNameEditable;
	long long _previousInterfaceOrientation;
	CGSize _titleStringSize;
	long long _currentFirstResponder;
	CGRect _userNameFrame;
	CGRect _passwordFrame;

}

@property (retain) NSString * titleField;                                         //@synthesize titleField=_titleField - In the implementation block
@property (nonatomic,readonly) UIAlertView * signInDialog; 
@property (assign) bool isShown;                                                  //@synthesize isShown=_isShown - In the implementation block
@property (readonly) bool isPortraitMode; 
@property (readonly) CGRect userNameFrame;                                        //@synthesize userNameFrame=_userNameFrame - In the implementation block
@property (readonly) CGRect passwordFrame;                                        //@synthesize passwordFrame=_passwordFrame - In the implementation block
@property (assign) bool isUserNameEditable;                                       //@synthesize isUserNameEditable=_isUserNameEditable - In the implementation block
@property (assign,nonatomic) long long previousInterfaceOrientation;              //@synthesize previousInterfaceOrientation=_previousInterfaceOrientation - In the implementation block
@property (assign,nonatomic) CGSize titleStringSize;                              //@synthesize titleStringSize=_titleStringSize - In the implementation block
@property (assign) long long currentFirstResponder;                               //@synthesize currentFirstResponder=_currentFirstResponder - In the implementation block
+(id)dialog;
-(void)applicationDidEnterBackground;
-(void)setIsShown:(bool)arg1 ;
-(void)dealloc;
-(long long)statusBarStyle;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(bool)textFieldShouldBeginEditing:(id)arg1 ;
-(bool)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(bool)textFieldShouldClear:(id)arg1 ;
-(bool)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(bool)isShown;
-(id)passwordString;
-(void)didRotate:(id)arg1 ;
-(void)willPresentAlertView:(id)arg1 ;
-(void)setTitleField:(id)arg1 ;
-(CGRect)userNameFrame;
-(bool)isUserNameEditable;
-(CGRect)passwordFrame;
-(void)setCurrentFirstResponder:(long long)arg1 ;
-(long long)currentFirstResponder;
-(bool)isPortraitMode;
-(id)titleField;
-(CGSize)titleStringSize;
-(void)setTitleStringSize:(CGSize)arg1 ;
-(long long)previousInterfaceOrientation;
-(void)setPreviousInterfaceOrientation:(long long)arg1 ;
-(void)handleRotation;
-(bool)shouldPasswordTextFieldReturnOnSignInDisallowed;
-(void)handleTextFieldShouldReturnOnNonPasswordField;
-(void)acmAlertViewWillBecomeInvisible;
-(void)acmAlertViewWillBecomeVisible;
-(id)dialogTitle;
-(bool)changeTitleStringIfNeeded;
-(void)disableControls:(bool)arg1 ;
-(id)signInDialog;
-(void)showWithParentViewController:(id)arg1 animated:(bool)arg2 ;
-(void)hideWithParentViewController:(id)arg1 animated:(bool)arg2 ;
-(void)setIsUserNameEditable:(bool)arg1 ;
-(void)signInDialogShouldClosed;
-(id)userNameString;
@end
