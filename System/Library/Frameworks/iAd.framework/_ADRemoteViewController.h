/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>

@interface _ADRemoteViewController : _UIRemoteViewController {

	bool _hasBeenDismissed;
	unsigned long long _remoteSupportedInterfaceOrientations;

}

@property (assign,nonatomic) unsigned long long remoteSupportedInterfaceOrientations;              //@synthesize remoteSupportedInterfaceOrientations=_remoteSupportedInterfaceOrientations - In the implementation block
@property (assign,nonatomic) bool hasBeenDismissed;                                                //@synthesize hasBeenDismissed=_hasBeenDismissed - In the implementation block
+(id)serviceViewControllerInterface;
-(unsigned long long)supportedInterfaceOrientations;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)setRemoteSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(bool)hasBeenDismissed;
-(void)setHasBeenDismissed:(bool)arg1 ;
-(unsigned long long)remoteSupportedInterfaceOrientations;
@end

