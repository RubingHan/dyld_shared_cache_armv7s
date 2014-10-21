/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ProgressUI.framework/ProgressUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ProgressUI/ProgressUI-Structs.h>
@class CAContext, CALayer;

@interface PUIProgressWindow : NSObject {

	CAContext* _context;
	CGSize _displaySize;
	float _displayScale;
	float _displayOrientation;
	float _currentProgress;
	float _level;
	CGImageRef _appleLogo;
	double _progressXDelta;
	double _progressYDelta;
	double _progressWidth;
	CALayer* _progressLayer;
	bool _forceInverted;
	bool _inverted;
	bool _showsProgressBar;

}
-(void)dealloc;
-(id)init;
-(void)_createContext;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setVisible:(bool)arg1 ;
-(void).cxx_destruct;
-(void)setProgressValue:(float)arg1 ;
-(id)initWithProgressBarVisibility:(bool)arg1 level:(float)arg2 forceInverted:(bool)arg3 ;
-(void)_layoutScreen;
-(CGImageRef)_createImageWithName:(const char*)arg1 scale:(int)arg2 ;
-(const char*)_productSuffix;
-(id)initWithProgressBarVisibility:(bool)arg1 ;
-(id)initWithProgressBarVisibility:(bool)arg1 level:(float)arg2 ;
@end
