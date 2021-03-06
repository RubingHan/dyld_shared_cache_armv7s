/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLCameraFocusView.h>

@class CAKeyframeAnimation;

@interface PLCameraFocusLockView : PLCameraFocusView {

	CAKeyframeAnimation* _lockBoundsAnimation;
	bool _scalingDown;
	bool _shouldEndFocus;
	CGAffineTransform _defaultTransform;

}
-(void)dealloc;
-(id)init;
-(void)startAnimating;
-(void)focusDidEnd;
-(void)animateLock;
-(void)animateScaleDown;
-(id)_createLockBoundsAnimation;
-(void)finishedScalingDown;
@end

