/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TPDialerKeypadDelegate <NSObject>
@optional
-(void)phonePad:(id)arg1 appendString:(id)arg2;
-(void)phonePad:(id)arg1 keyDown:(BOOL)arg2;
-(void)phonePad:(id)arg1 keyUp:(BOOL)arg2;
-(void)phonePadWillBeginSounds:(id)arg1;
-(void)phonePadDidEndSounds:(id)arg1;
-(void)phonePad:(id)arg1 replaceLastDigitWithString:(id)arg2;
-(void)phonePadDeleteLastDigit:(id)arg1;
-(void)phonePad:(id)arg1 dialerCharacterButtonWasHeld:(unsigned)arg2;
@end

