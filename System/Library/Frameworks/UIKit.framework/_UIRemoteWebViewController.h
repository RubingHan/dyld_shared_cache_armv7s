/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>

@class _UIWebViewController;

@interface _UIRemoteWebViewController : _UIRemoteViewController {

	_UIWebViewController* _webViewController;

}

@property (assign,nonatomic) _UIWebViewController * webViewController;              //@synthesize webViewController=_webViewController - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id)webViewController;
-(void)setWebViewController:(id)arg1 ;
@end

