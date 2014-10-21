/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:15 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AXCameraTorchManager;
@class AXTimer, NSDictionary, NSArray, AXNotificationHandler;

@interface AXVisualAlertManager : NSObject {

	unsigned long long _alertTypes;
	<AXCameraTorchManager>* _cameraTorchManager;
	AXTimer* _timer;
	AXTimer* _torchForceShutdownTimer;
	NSDictionary* _patterns;
	NSDictionary* _activePattern;
	unsigned long long _activePatternCursor;
	bool _shouldRepeatPattern;
	NSDictionary* _patternToUseForVisualAlertAfterCaptureSessionStopsRunning;
	NSArray* _notificationHandlers;
	AXNotificationHandler* _deviceLockStateChangedNotificationHandler;
	AXNotificationHandler* _torchInControlCenterWasEnabledNotificationHandler;
	bool _torchDeviceOpen;
	bool _torchDeviceOn;
	bool _isDeviceLocked;
	bool _isQuietModeEnabled;
	bool _isTorchEnabledInControlCenter;
	bool _captureSessionRunning;
	bool _videoConferenceCallRinging;
	bool _skipAutomaticStopOnUserInteraction;
	unsigned long long _typeToUseForVisualAlertAfterCaptureSessionStopsRunning;

}

@property (nonatomic,readonly) NSDictionary * _patterns; 
@property (setter=_setActivePattern:,nonatomic,retain) NSDictionary * _activePattern;                                                                                                    //@synthesize activePattern=_activePattern - In the implementation block
@property (assign,setter=_setTypeToUseForVisualAlertAfterCaptureSessionStopsRunning:,nonatomic) unsigned long long _typeToUseForVisualAlertAfterCaptureSessionStopsRunning;              //@synthesize typeToUseForVisualAlertAfterCaptureSessionStopsRunning=_typeToUseForVisualAlertAfterCaptureSessionStopsRunning - In the implementation block
@property (assign,setter=_setTorchDeviceOpen:,getter=_isTorchDeviceOpen,nonatomic) bool _torchDeviceOpen;                                                                                //@synthesize torchDeviceOpen=_torchDeviceOpen - In the implementation block
@property (assign,setter=_setTorchDeviceOn:,getter=_isTorchDeviceOn,nonatomic) bool _torchDeviceOn;                                                                                      //@synthesize torchDeviceOn=_torchDeviceOn - In the implementation block
+(void)initialize;
+(id)sharedVisualAlertManager;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)stop;
-(void)_stop;
-(void)startForAlertTypes:(unsigned long long)arg1 cameraTorchManager:(id)arg2 ;
-(void)_handleVisualAlertForIncomingMessage;
-(void)_handleVisualAlertForRegularNotification;
-(void)_handleEndVisualAlertForAlarm;
-(void)_handleBeginVisualAlertForAlarmWithSound:(bool)arg1 ;
-(bool)_isTorchEnabledInControlCenter;
-(void)_insertCustomLogicForSystemWideServer;
-(void)_handleBeginVisualAlertForIncomingCall;
-(void)_handleBeginVisualAlertForIncomingVideoConferenceCall;
-(void)_handleEndVisualAlertForIncomingCall;
-(void)_handleEndVisualAlertForIncomingVideoConferenceCall;
-(bool)_supportsVisualAlertsForVideoConferenceCalls;
-(void)_handleVisualAlertForExternalApplication;
-(void)_handleLockButtonPressed;
-(void)_handleVolumeChanged;
-(void)_handleDeviceWasLocked;
-(void)_handleDeviceWasUnlocked;
-(void)_handleQuietModeWasEnabled;
-(void)_handleQuietModeWasDisabled;
-(void)_handleTorchInControlCenterWasEnabled;
-(void)_handleTorchInControlCenterWasDisabled;
-(void)_handleCaptureSessionDidStartRunning;
-(void)_handleCaptureSessionDidStopRunning;
-(void)_handleSecondaryVisualAlertManagerDidStart;
-(bool)_hasVideoConferenceCameraTorchManager;
-(void)_handleVideoConferenceCallRinging;
-(void)_endVisualAlert;
-(void)_startForAlertTypes:(unsigned long long)arg1 cameraTorchManager:(id)arg2 ;
-(void)_beginVisualAlertForType:(unsigned long long)arg1 repeat:(bool)arg2 skipAutomaticStopOnUserInteraction:(bool)arg3 ;
-(void)_setTypeToUseForVisualAlertAfterCaptureSessionStopsRunning:(unsigned long long)arg1 ;
-(id)_patterns;
-(bool)_isTorchDeviceOpen;
-(bool)_isTorchDeviceOn;
-(id)_normalizedStrobePatternForOriginalPattern:(id)arg1 ;
-(void)_setActivePattern:(id)arg1 ;
-(void)_setTorchDeviceOpen:(bool)arg1 ;
-(void)_processNextVisualAlertComponent;
-(void)_setTorchDeviceOn:(bool)arg1 ;
-(id)_activePattern;
-(void)_beginVisualAlertForType:(unsigned long long)arg1 repeat:(bool)arg2 ;
-(bool)_shouldHandleVisualAlertsForVideoConferenceCallsInConferenceFramework;
-(unsigned long long)_typeToUseForVisualAlertAfterCaptureSessionStopsRunning;
@end
