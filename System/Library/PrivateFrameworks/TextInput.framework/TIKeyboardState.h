/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSString, TIKeyboardLayout, TIKeyboardLayoutState, TIDocumentState, TIKeyboardCandidate;

@interface TIKeyboardState : NSObject <NSCopying, NSSecureCoding> {

	SCD_Union_TI9 _mask;
	NSString* _inputMode;
	TIKeyboardLayout* _keyLayout;
	TIKeyboardLayoutState* _layoutState;
	TIDocumentState* _documentState;
	NSString* _inputForMarkedText;
	NSString* _searchStringForMarkedText;
	TIKeyboardCandidate* _currentCandidate;

}

@property (nonatomic,copy) NSString * inputMode;                                     //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,retain) TIKeyboardLayout * keyLayout;                           //@synthesize keyLayout=_keyLayout - In the implementation block
@property (nonatomic,copy) TIKeyboardLayoutState * layoutState;                      //@synthesize layoutState=_layoutState - In the implementation block
@property (nonatomic,retain) TIDocumentState * documentState;                        //@synthesize documentState=_documentState - In the implementation block
@property (nonatomic,copy) NSString * inputForMarkedText;                            //@synthesize inputForMarkedText=_inputForMarkedText - In the implementation block
@property (nonatomic,copy) NSString * searchStringForMarkedText;                     //@synthesize searchStringForMarkedText=_searchStringForMarkedText - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * currentCandidate;                 //@synthesize currentCandidate=_currentCandidate - In the implementation block
@property (assign,nonatomic) bool userSelectedCurrentCandidate; 
@property (assign,nonatomic) bool shouldSkipCandidateSelection; 
@property (assign,nonatomic) bool suppressingCandidateSelection; 
@property (assign,nonatomic) bool needsCandidateMetadata; 
@property (assign,nonatomic) bool keyboardEventsLagging; 
@property (assign,nonatomic) bool secureTextEntry; 
@property (assign,nonatomic) bool hardwareKeyboardMode; 
@property (assign,nonatomic) bool splitKeyboardMode; 
@property (assign,nonatomic) bool wordLearningEnabled; 
@property (assign,nonatomic) bool autocorrectionEnabled; 
@property (assign,nonatomic) bool shortcutConversionEnabled; 
@property (assign,nonatomic) bool typologyLoggingEnabled; 
@property (assign,nonatomic) bool autocapitalizationEnabled; 
@property (assign,nonatomic) unsigned long long autocapitalizationType; 
@property (assign,nonatomic) unsigned long long keyboardType; 
+(bool)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)currentCandidate;
-(void)setSecureTextEntry:(bool)arg1 ;
-(unsigned long long)autocapitalizationType;
-(void)setAutocapitalizationType:(unsigned long long)arg1 ;
-(unsigned long long)keyboardType;
-(void)setKeyboardType:(unsigned long long)arg1 ;
-(void)setHardwareKeyboardMode:(bool)arg1 ;
-(void)setTypologyLoggingEnabled:(bool)arg1 ;
-(void)setInputMode:(id)arg1 ;
-(id)layoutState;
-(void)setLayoutState:(id)arg1 ;
-(void)setCurrentCandidate:(id)arg1 ;
-(void)setNeedsCandidateMetadata:(bool)arg1 ;
-(void)setShortcutConversionEnabled:(bool)arg1 ;
-(id)keyLayout;
-(void)setKeyLayout:(id)arg1 ;
-(void)setAutocorrectionEnabled:(bool)arg1 ;
-(bool)splitKeyboardMode;
-(void)setSplitKeyboardMode:(bool)arg1 ;
-(void)setWordLearningEnabled:(bool)arg1 ;
-(void)setDocumentState:(id)arg1 ;
-(void)setShouldSkipCandidateSelection:(bool)arg1 ;
-(void)setInputForMarkedText:(id)arg1 ;
-(void)setSearchStringForMarkedText:(id)arg1 ;
-(id)documentState;
-(id)searchStringForMarkedText;
-(id)inputMode;
-(bool)hardwareKeyboardMode;
-(void)setAutocapitalizationEnabled:(bool)arg1 ;
-(bool)shouldSkipCandidateSelection;
-(bool)suppressingCandidateSelection;
-(void)setSuppressingCandidateSelection:(bool)arg1 ;
-(void)setUserSelectedCurrentCandidate:(bool)arg1 ;
-(bool)userSelectedCurrentCandidate;
-(id)inputForMarkedText;
-(void)setKeyboardEventsLagging:(bool)arg1 ;
-(bool)needsCandidateMetadata;
-(bool)keyboardEventsLagging;
-(bool)secureTextEntry;
-(bool)typologyLoggingEnabled;
-(bool)wordLearningEnabled;
-(bool)autocorrectionEnabled;
-(bool)shortcutConversionEnabled;
-(bool)autocapitalizationEnabled;
@end
