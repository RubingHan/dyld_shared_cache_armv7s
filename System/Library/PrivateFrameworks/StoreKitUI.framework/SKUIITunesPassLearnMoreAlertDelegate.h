/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class SKUIClientContext, UIViewController, SKUIRedeemConfiguration;

@interface SKUIITunesPassLearnMoreAlertDelegate : NSObject <UIAlertViewDelegate> {

	SKUIClientContext* _clientContext;
	UIViewController* _presentingViewController;
	SKUIRedeemConfiguration* _redeemConfiguration;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
+(bool)shouldShowAlertForRedeem:(id)arg1 configuration:(id)arg2 ;
+(void)beginThrottleInterval;
-(id)presentingViewController;
-(void)show;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)setPresentingViewController:(id)arg1 ;
-(void).cxx_destruct;
-(id)initWithRedeemConfiguration:(id)arg1 clientContext:(id)arg2 ;
@end

