/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface PTXParallaxSettings : _UISettings {

	bool _slideEnabled;
	bool _tiltEnabled;
	bool _increaseEnabled;
	bool _alphaEnabled;
	long long _slideDirectionX;
	long long _slideDirectionY;
	double _slidePixelsX;
	double _slidePixelsY;
	long long _tiltDirectionX;
	long long _tiltDirectionY;
	double _tiltDegreesX;
	double _tiltDegreesY;
	long long _distanceFromScreen;
	double _perspectiveTransform;
	double _slideIncreaseX;
	double _slideIncreaseY;
	double _tiltIncreaseX;
	double _tiltIncreaseY;
	double _minAlpha;
	double _maxAlpha;

}

@property (assign) bool slideEnabled;                         //@synthesize slideEnabled=_slideEnabled - In the implementation block
@property (assign) long long slideDirectionX;                 //@synthesize slideDirectionX=_slideDirectionX - In the implementation block
@property (assign) long long slideDirectionY;                 //@synthesize slideDirectionY=_slideDirectionY - In the implementation block
@property (assign) double slidePixelsX;                       //@synthesize slidePixelsX=_slidePixelsX - In the implementation block
@property (assign) double slidePixelsY;                       //@synthesize slidePixelsY=_slidePixelsY - In the implementation block
@property (assign) bool tiltEnabled;                          //@synthesize tiltEnabled=_tiltEnabled - In the implementation block
@property (assign) long long tiltDirectionX;                  //@synthesize tiltDirectionX=_tiltDirectionX - In the implementation block
@property (assign) long long tiltDirectionY;                  //@synthesize tiltDirectionY=_tiltDirectionY - In the implementation block
@property (assign) double tiltDegreesX;                       //@synthesize tiltDegreesX=_tiltDegreesX - In the implementation block
@property (assign) double tiltDegreesY;                       //@synthesize tiltDegreesY=_tiltDegreesY - In the implementation block
@property (assign) long long distanceFromScreen;              //@synthesize distanceFromScreen=_distanceFromScreen - In the implementation block
@property (assign) double perspectiveTransform;               //@synthesize perspectiveTransform=_perspectiveTransform - In the implementation block
@property (assign) bool increaseEnabled;                      //@synthesize increaseEnabled=_increaseEnabled - In the implementation block
@property (assign) double slideIncreaseX;                     //@synthesize slideIncreaseX=_slideIncreaseX - In the implementation block
@property (assign) double slideIncreaseY;                     //@synthesize slideIncreaseY=_slideIncreaseY - In the implementation block
@property (assign) double tiltIncreaseX;                      //@synthesize tiltIncreaseX=_tiltIncreaseX - In the implementation block
@property (assign) double tiltIncreaseY;                      //@synthesize tiltIncreaseY=_tiltIncreaseY - In the implementation block
@property (assign) bool alphaEnabled;                         //@synthesize alphaEnabled=_alphaEnabled - In the implementation block
@property (assign) double minAlpha;                           //@synthesize minAlpha=_minAlpha - In the implementation block
@property (assign) double maxAlpha;                           //@synthesize maxAlpha=_maxAlpha - In the implementation block
+(id)settingsControllerModule;
-(void)setTiltEnabled:(bool)arg1 ;
-(void)setDefaultValues;
-(double)perspectiveTransform;
-(void)setPerspectiveTransform:(double)arg1 ;
-(void)setSlideEnabled:(bool)arg1 ;
-(void)setSlideDirectionX:(long long)arg1 ;
-(void)setSlideDirectionY:(long long)arg1 ;
-(void)setSlidePixelsX:(double)arg1 ;
-(void)setSlidePixelsY:(double)arg1 ;
-(void)setTiltDirectionX:(long long)arg1 ;
-(void)setTiltDirectionY:(long long)arg1 ;
-(void)setTiltDegreesX:(double)arg1 ;
-(void)setTiltDegreesY:(double)arg1 ;
-(void)setDistanceFromScreen:(long long)arg1 ;
-(void)setIncreaseEnabled:(bool)arg1 ;
-(void)setSlideIncreaseX:(double)arg1 ;
-(void)setSlideIncreaseY:(double)arg1 ;
-(void)setTiltIncreaseX:(double)arg1 ;
-(void)setTiltIncreaseY:(double)arg1 ;
-(void)setAlphaEnabled:(bool)arg1 ;
-(void)setMinAlpha:(double)arg1 ;
-(void)setMaxAlpha:(double)arg1 ;
-(double)maxAlpha;
-(double)minAlpha;
-(bool)slideEnabled;
-(long long)slideDirectionX;
-(long long)slideDirectionY;
-(double)slidePixelsX;
-(double)slidePixelsY;
-(bool)tiltEnabled;
-(long long)tiltDirectionX;
-(long long)tiltDirectionY;
-(double)tiltDegreesX;
-(double)tiltDegreesY;
-(long long)distanceFromScreen;
-(bool)increaseEnabled;
-(double)slideIncreaseX;
-(double)slideIncreaseY;
-(double)tiltIncreaseX;
-(double)tiltIncreaseY;
-(bool)alphaEnabled;
@end

