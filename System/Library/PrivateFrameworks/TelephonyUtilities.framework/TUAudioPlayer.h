/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:02 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TUAudioPlayerDelegateProtocol;
@interface TUAudioPlayer : NSObject {

	<TUAudioPlayerDelegateProtocol>* _delegate;

}

@property (assign,nonatomic) <TUAudioPlayerDelegateProtocol> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) bool playingSound; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)stop;
-(bool)playingSound;
-(void)playSound:(int)arg1 numOfLoops:(int)arg2 pauseDuration:(double)arg3 ;
-(void)playSelectedSound;
@end
