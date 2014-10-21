/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UISettingsKeyObserver.h>

@class _UIMotionAnalyzerSettings, UIWindow, UILabel, UIView, _UIViewerRelativeDevicePose;

@interface _UIMotionAnalyzer : NSObject <_UISettingsKeyObserver> {

	_UIMotionAnalyzerSettings* _settings;
	double _smoothingDegree;
	double _referenceShiftSpeed;
	double _distanceMultiplier;
	bool _hasReferenceQuaternion;
	GLKQuaternion _referenceQuaternion;
	GLKQuaternion _absoluteQuaternion;
	double _lastUpdate;
	double _idleStartTime;
	UIOffset _idleStartOffset;
	double _jumpThreshold;
	double _idleLeeway;
	double _secondsBeforeIdle;
	double _lockValue;
	double _lockStrength;
	UIWindow* _diagnosticsWindow;
	UILabel* _idleIndicator;
	UIView* _horizontalLockIndicator;
	UIView* _verticalLockIndicator;
	_UIViewerRelativeDevicePose* _viewerRelativeDevicePose;

}

@property (nonatomic,readonly) _UIViewerRelativeDevicePose * viewerRelativeDevicePose;              //@synthesize viewerRelativeDevicePose=_viewerRelativeDevicePose - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)initWithSettings:(id)arg1 ;
-(void)updateWithDeviceMotionStruct:(const SCD_Struct_UI49*)arg1 timestamp:(double)arg2 ;
-(id)viewerRelativeDevicePose;
-(void)_shiftReferenceToYieldRelativeQuaternion:(_GLKQuaternion)arg1 ;
-(_GLKQuaternion)_relativeQuaternion;
-(void)reset;
-(void)updateWithDeviceMotion:(id)arg1 ;
-(void)_updateSettings;
-(void)_tearDownDiagnosticsWindow;
-(void)_tearDownDirectionLockIndicators;
-(void)_tearDownIdleIndicator;
-(UIOffset)_currentRawOffset:(_GLKQuaternion)arg1 ;
-(void)_updateSmoothedOffsetForRawOffset:(UIOffset)arg1 ;
-(void)_updateIdleStateForRawOffset:(UIOffset)arg1 timestamp:(double)arg2 ;
-(void)_updateReferenceAttitude:(_GLKQuaternion)arg1 timestamp:(double)arg2 ;
-(void)_resetDirectionalLockWithViewerOffset:(UIOffset)arg1 ;
-(void)_updateDirectionalLockIndicators;
-(void)_updateAcceleratedOutputRangeFixingOffset:(UIOffset)arg1 ;
-(long long)_directionLockStatus;
-(bool)isIdleGivenTimestamp:(double)arg1 ;
-(float)_referenceShiftRadiansPerSecondForAngle:(float)arg1 ;
-(void)_showIdleUI:(bool)arg1 ;
-(void)_createIdleIndicator;
-(void)_createDirectionLockIndicators;
-(void)_createDiagnosticsWindow;
-(double)_directionLockStrength;
@end
