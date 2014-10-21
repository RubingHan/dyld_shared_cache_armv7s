/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_ja/TextInput_ja-Structs.h>
#import <TextInput_ja/TIKeyboardInputManager_ja_JP.h>

@class NSMutableArray, NSString;

@interface TIKeyboardInputManager_ja_JP_InlineRomaji : TIKeyboardInputManager_ja_JP {

	NSMutableArray* _externalIndexToInternalIndexMappingArray;
	unsigned long long _externalInputIndex;
	NSString* _externalString;

}
-(void)dealloc;
-(bool)usesCandidateSelection;
-(void)clearInput;
-(unsigned)inputCount;
-(id)searchStringForMarkedText;
-(id)inputString;
-(unsigned)inputIndex;
-(bool)needsKeyHitTestResults;
-(void)updateState;
-(id)initWithInputMode:(id)arg1 ;
-(void)setInputIndex:(unsigned)arg1 ;
-(id)_convertStringWithBoundary:(unsigned long long)arg1 ;
-(bool)shouldSendToTIWordSearch:(id)arg1 ;
-(unsigned long long)remainingInputLengthOfCandidate:(id)arg1 ;
-(id)transliterate:(id)arg1 ;
-(unsigned long long)actualInternalInputIndex;
-(bool)remainingInputIsRomanAlphabet:(unsigned long long)arg1 ;
-(void)loadDictionaries;
-(void)checkAutocorrectionDictionaries;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 fromVariantKey:(bool)arg5 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)inputLocationChanged;
-(id)geometryModelData;
-(bool)isPartialCandidate;
-(id)remainingInput;
@end
