/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:51 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Conference/Conference-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class CADisplayLink;

@interface CNFVideoGroupView : UIControl <UIGestureRecognizerDelegate> {

	CADisplayLink* _displayLink;
	CGPoint _velocity;
	CGPoint _target;
	CGRect _cornerLocationsRect;
	bool _startedThrowAnimation;
	long long _corner;

}

@property (assign,nonatomic) CGRect cornerLocationsRect;              //@synthesize cornerLocationsRect=_cornerLocationsRect - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(bool)gestureRecognizerShouldBegin:(id)arg1 ;
-(bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)addPanningGestureRecognizer;
-(void)setCornerLocationsRect:(CGRect)arg1 ;
-(CGPoint)centerPointForCurrentVideoGroupCorner;
-(void)refreshPositionInCorner;
-(void)cancelThrowAnimation;
-(CGRect)cornerLocationsRect;
-(void)handlePanDetected:(id)arg1 ;
-(void)setCorner:(long long)arg1 ;
-(void)startThrowAnimation;
-(void)finishedThrowAnimation;
-(CGPoint)transformedCenter;
-(void)handlePanGestureFinished:(id)arg1 ;
-(void)updateThrowAnimation:(id)arg1 ;
-(void)setTransformForNewCenter:(CGPoint)arg1 ;
-(double)_gridViewRubberBandValueForValue:(double)arg1 target:(double)arg2 timeInterval:(double)arg3 velocity:(double*)arg4 ;
@end
