/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <MediaPlayer/AirPlayDiagnosticsFullscreenControllerDelegate.h>

@class UIWindow, AirPlayDiagnosticsFullscreenController;

@interface MPFloatingAirPlayDebugViewController : UINavigationController <AirPlayDiagnosticsFullscreenControllerDelegate> {

	UIWindow* _floatingWindow;
	bool _presentedAnimated;
	AirPlayDiagnosticsFullscreenController* _airPlayDiagsController;

}

@property (nonatomic,readonly) AirPlayDiagnosticsFullscreenController * airPlayDiagsController;              //@synthesize airPlayDiagsController=_airPlayDiagsController - In the implementation block
-(void)presentFromFloatingWindowAnimated:(bool)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_destroyFloatingWindow;
-(void)airPlayDiagnosticsContentViewController:(id)arg1 didComplete:(bool)arg2 ;
-(id)airPlayDiagsController;
-(bool)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void).cxx_destruct;
@end
