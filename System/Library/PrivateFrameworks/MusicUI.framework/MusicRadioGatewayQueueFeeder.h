/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPRadioGatewayQueueFeeder.h>

@class MusicRadioPlaybackContext;

@interface MusicRadioGatewayQueueFeeder : MPRadioGatewayQueueFeeder {

	MusicRadioPlaybackContext* _radioPlaybackContext;

}

@property (nonatomic,retain) MusicRadioPlaybackContext * radioPlaybackContext;              //@synthesize radioPlaybackContext=_radioPlaybackContext - In the implementation block
-(bool)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(bool)arg2 ;
-(bool)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(bool)arg2 startPlayback:(bool)arg3 ;
-(void).cxx_destruct;
-(id)radioPlaybackContext;
-(void)setRadioPlaybackContext:(id)arg1 ;
-(bool)_reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(bool)arg2 startPlayback:(bool)arg3 ;
@end

