/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface _MPAnisotropicVolumeThumbView : UIView {

	UIImageView* _darkReflectionView;
	double _filteredX;
	double _filteredY;
	double _magSqr;
	id _motionManagerObserver;
	UIImageView* _leftLightReflectionView;
	UIImageView* _rightLightReflectionView;

}
-(void)_updateAccelerometerX:(double)arg1 Y:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void).cxx_destruct;
@end
