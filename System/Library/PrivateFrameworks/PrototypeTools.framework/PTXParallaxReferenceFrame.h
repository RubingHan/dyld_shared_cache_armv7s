/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <UIKit/_UISettingsKeyObserver.h>

@class PTXParallaxEngineSettings, CAMediaTimingFunction, UIWindow, UILabel, UIView;

@interface PTXParallaxReferenceFrame : NSObject <_UISettingsKeyObserver> {

	GLKQuaternion _referenceQuaternion;
	GLKQuaternion _absoluteQuaternion;
	double _lastUpdate;
	CGPoint _lastOffset;
	double _idleStartTime;
	CGPoint _idleStartOffset;
	PTXParallaxEngineSettings* _settings;
	CAMediaTimingFunction* _curveFunction;
	double _smoothingDegree;
	double _referenceShiftSpeed;
	double _distanceMultiplier;
	double _jumpThreshold;
	unsigned _jumpSound;
	double _idleLeeway;
	double _secondsBeforeIdle;
	double _lockValue;
	double _lockStrength;
	UIWindow* _diagnosticsWindow;
	UILabel* _idleIndicator;
	UIView* _horizontalLockIndicator;
	UIView* _verticalLockIndicator;

}
-(void)dealloc;
-(CGPoint)offset;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)reset;
-(void).cxx_destruct;
-(void)_updateSettings;
-(void)_tearDownDiagnosticsWindow;
-(void)_tearDownDirectionLockIndicators;
-(void)_tearDownIdleIndicator;
-(CGPoint)_currentRawOffset:(_GLKQuaternion)arg1 ;
-(void)_updateSmoothedOffsetForRawOffset:(CGPoint)arg1 ;
-(void)_updateDirectionalLockIndicators;
-(float)_referenceShiftRadiansPerSecondForAngle:(float)arg1 ;
-(void)_showIdleUI:(bool)arg1 ;
-(void)_createIdleIndicator;
-(void)_createDirectionLockIndicators;
-(void)_createDiagnosticsWindow;
-(id)initWithReferenceAttitude:(id)arg1 settings:(id)arg2 ;
-(void)updateWithAttitude:(id)arg1 ;
-(long long)directionLockStatus;
-(double)directionLockStrength;
-(_GLKQuaternion)_relativeQuaternion:(_GLKQuaternion)arg1 ;
-(void)_updateIdleStateForRawOffset:(CGPoint)arg1 ;
-(void)_updateReferenceAttitude:(_GLKQuaternion)arg1 ;
-(bool)_isIdle;
-(CGPoint)_curvedOffset;
@end
