/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIPasscodeEntryField.h>

@class NSMutableCharacterSet;

@interface SBUINumericPasscodeEntryFieldBase : SBUIPasscodeEntryField {

	NSMutableCharacterSet* _numericTrimmingSet;
	unsigned long long _maxNumbersAllowed;
	bool _allowsNewlineAcceptance;
	bool _autoAcceptWhenMaxNumbersMet;

}

@property (assign,nonatomic) unsigned long long maxNumbersAllowed;              //@synthesize maxNumbersAllowed=_maxNumbersAllowed - In the implementation block
@property (assign,nonatomic) bool allowsNewlineAcceptance;                      //@synthesize allowsNewlineAcceptance=_allowsNewlineAcceptance - In the implementation block
@property (assign,nonatomic) bool autoAcceptWhenMaxNumbersMet;                  //@synthesize autoAcceptWhenMaxNumbersMet=_autoAcceptWhenMaxNumbersMet - In the implementation block
-(void)dealloc;
-(bool)resignFirstResponder;
-(id)initWithDefaultSize;
-(void)setMaxNumbersAllowed:(unsigned long long)arg1 ;
-(void)_appendString:(id)arg1 ;
-(void)_deleteLastCharacter;
-(void)setAllowsNewlineAcceptance:(bool)arg1 ;
-(void)setAutoAcceptWhenMaxNumbersMet:(bool)arg1 ;
-(bool)shouldInsertPasscodeText:(id)arg1 ;
-(bool)_hasMaxDigitsSpecified;
-(void)_reallyAppendString:(id)arg1 ;
-(bool)allowsNewlineAcceptance;
-(unsigned long long)maxNumbersAllowed;
-(bool)autoAcceptWhenMaxNumbersMet;
@end

