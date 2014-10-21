/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUStorePageViewController.h>

@class SUMescalSession, NSString;

@interface SUAccountViewController : SUStorePageViewController {

	bool _failed;
	long long _style;
	SUMescalSession* _mescalSession;
	long long _mescalState;
	NSString* _primingSignature;

}

@property (assign,nonatomic) long long style;                                                       //@synthesize style=_style - In the implementation block
@property (getter=_mescalSession,nonatomic,readonly) SUMescalSession * _mescalSession;              //@synthesize mescalSession=_mescalSession - In the implementation block
+(id)_latestAccountViewController;
-(void)dealloc;
-(id)init;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(void)viewDidDisappear:(bool)arg1 ;
-(id)copyArchivableContext;
-(id)newFetchOperation;
-(id)newViewControllerForPage:(id)arg1 ofType:(long long)arg2 returningError:(id*)arg3 ;
-(void)handleFailureWithError:(id)arg1 ;
-(void)enqueueFetchOperation;
-(id)_mescalSession;
-(id)_bagKeyForStyle:(long long)arg1 ;
-(void)_mescalDidOpenWithSession:(id)arg1 error:(id)arg2 ;
-(id)_authenticationQueryParametersForStyle:(long long)arg1 ;
-(id)initWithExternalAccountURL:(id)arg1 ;
-(void)_closeMescalSession;
@end
