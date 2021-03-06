/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:51 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CNFDisplayControllerDelegate <NSObject>
@optional
-(bool)isInPhoneCall;
-(bool)isOutgoingInvitation;
-(void)conferenceDisplayController:(id)arg1 didFinishAnimatingCallEndWithReason:(unsigned long long)arg2;
-(void)conferenceDisplayControllerEndedWhileSuspending:(id)arg1;
-(void)conferenceDisplayController:(id)arg1 endWithReason:(unsigned long long)arg2;
-(id)originationURL;
-(void)conferenceDisplayController:(id)arg1 muteConferenceWithReason:(unsigned long long)arg2;
-(bool)auxiliaryAudioRoutesAvailable;
-(void)conferenceDisplayController:(id)arg1 cameraToggleWithReason:(unsigned long long)arg2;
-(void)conferenceDisplayController:(id)arg1 retryVideoConferenceInvitationWithReason:(unsigned long long)arg2;
-(void)conferenceDisplayController:(id)arg1 cancelCallFailureRecoveryWithReason:(unsigned long long)arg2;
-(id)audioDeviceController;

@required
-(void)conferenceDisplayController:(id)arg1 endCallWithReason:(unsigned long long)arg2;
@end

