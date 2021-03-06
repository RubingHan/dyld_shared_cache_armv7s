/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RCWaveformDataSource <NSObject>
@property (nonatomic,readonly) RCWaveform * waveform; 
@required
-(void)reload;
-(double)duration;
-(bool)setPaused:(bool)arg1;
-(id)savedAudioURL;
-(void)beginLoadingForRecordingOutputURL:(id)arg1;
-(id)waveformGenerator;
-(void)finishLoadingBeforeDate:(id)arg1 loadingFinishedBlock:(/*^block*/ id)arg2;
-(id)waveform;
-(id)dataSourceByReloading;
@end

