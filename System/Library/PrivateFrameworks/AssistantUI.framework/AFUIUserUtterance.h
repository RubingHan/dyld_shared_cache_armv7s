/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString, NSDictionary, NSArray;

@interface AFUIUserUtterance : NSObject {

	NSMutableArray* _phrases;
	NSMutableArray* _tokens;
	NSString* _text;
	NSDictionary* _correctionIdentifier;

}

@property (nonatomic,readonly) NSDictionary * correctionIdentifier;              //@synthesize correctionIdentifier=_correctionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * dictationResult; 
-(id)description;
-(void).cxx_destruct;
-(id)bestTextInterpretation;
-(id)initWithPhrases:(id)arg1 correctionIdentifier:(id)arg2 ;
-(id)initWithTokens:(id)arg1 correctionIdentifier:(id)arg2 ;
-(id)initWithString:(id)arg1 correctionIdentifier:(id)arg2 ;
-(id)dictationResult;
-(id)correctionIdentifier;
@end
