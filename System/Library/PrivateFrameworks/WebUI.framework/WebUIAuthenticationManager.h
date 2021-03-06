/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSURLCredential, UIAlertView;

@interface WebUIAuthenticationManager : NSObject {

	NSMutableArray* _authenticationChallenges;
	NSURLCredential* _credentials;
	UIAlertView* _authenticationView;
	id _delegate;
	bool _isShowingAuthenticationPanel;

}
-(id)authenticationChallenge;
-(void)cancelAuthentication;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)sheetReturnKeyPressed:(id)arg1 ;
-(void)setShowingAuthentication:(bool)arg1 ;
-(void)addAuthenticationChallenge:(id)arg1 displayPanel:(bool)arg2 ;
-(void)addAuthenticationChallenge:(id)arg1 ;
-(void)removeAuthenticationChallenge:(id)arg1 ;
@end

