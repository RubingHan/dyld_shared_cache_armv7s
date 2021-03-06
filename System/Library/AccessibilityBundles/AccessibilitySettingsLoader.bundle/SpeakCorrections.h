/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:52 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettingsLoader/AccessibilitySettingsLoader-Structs.h>
#import <WebCore/AVSpeechSynthesizerDelegate.h>

@class AVSpeechSynthesizer, NSDictionary, NSArray;

@interface SpeakCorrections : NSObject <AVSpeechSynthesizerDelegate> {

	AVSpeechSynthesizer* _synthesizer;
	bool _correctionCanceled;
	NSDictionary* _keyboardToLanguage;
	NSArray* _availableLanguageCodes;

}
+(void)_updateRingerState;
+(void)_safeUpdateRingerState;
+(void)updateStatus;
+(void)initialize;
+(void)enable;
+(void)disable;
-(void)_correctionDisplayed:(id)arg1 ;
-(void)_ringerChanged:(id)arg1 ;
-(void)_speakCorrection:(id)arg1 ;
-(void)loadUIAccessibilityIfNecessary;
-(void)dealloc;
-(id)init;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2 ;
@end

