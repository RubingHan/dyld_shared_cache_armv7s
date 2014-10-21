/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:51 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, SKUIRoundedRectButton, SKUIClientContext, SKUIColorScheme, SKUILinkButton, UIButton, NSString, UIControl;

@interface SKUIAccountButtonsView : UIView {

	UILabel* _accountCreditsLabel;
	SKUIRoundedRectButton* _appleIDButton;
	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	SKUILinkButton* _ecommerceButton;
	SKUIRoundedRectButton* _giftingButton;
	long long _interfaceOrientation;
	UIButton* _termsAndConditionsButton;
	SKUIRoundedRectButton* _usernameButton;
	UIButton* _redeemButton;

}

@property (nonatomic,copy) NSString * accountCredits; 
@property (assign,nonatomic) long long interfaceOrientation;                                               //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,readonly) UIButton * appleIDButton;                                                   //@synthesize appleIDButton=_appleIDButton - In the implementation block
@property (nonatomic,readonly) UIButton * giftingButton;                                                   //@synthesize giftingButton=_giftingButton - In the implementation block
@property (nonatomic,readonly) UIButton * redeemButton;                                                    //@synthesize redeemButton=_redeemButton - In the implementation block
@property (nonatomic,readonly) UIButton * termsAndConditionsButton;                                        //@synthesize termsAndConditionsButton=_termsAndConditionsButton - In the implementation block
@property (nonatomic,readonly) UIControl * ECommerceButton;                                                //@synthesize ecommerceButton=_ecommerceButton - In the implementation block
@property (nonatomic,copy) NSString * ECommerceLinkTitle; 
@property (nonatomic,copy) SKUIColorScheme * colorScheme;                                                  //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,getter=isGiftingHidden,nonatomic) bool giftingHidden; 
@property (assign,getter=isTermsAndConditionsHidden,nonatomic) bool termsAndConditionsHidden; 
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void).cxx_destruct;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(id)_newLinkButtonWithTitle:(id)arg1 ;
-(void)_layoutForIPhone;
-(void)_layoutForIPad;
-(id)_termsChevronImage;
-(id)accountCredits;
-(id)ECommerceLinkTitle;
-(void)setECommerceLinkTitle:(id)arg1 ;
-(bool)isGiftingHidden;
-(bool)isTermsAndConditionsHidden;
-(void)setAccountCredits:(id)arg1 ;
-(void)setGiftingHidden:(bool)arg1 ;
-(void)setTermsAndConditionsHidden:(bool)arg1 ;
-(id)appleIDButton;
-(id)ECommerceButton;
-(id)giftingButton;
-(id)redeemButton;
-(id)termsAndConditionsButton;
-(id)initWithClientContext:(id)arg1 ;
@end
