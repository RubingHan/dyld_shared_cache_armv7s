/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:38 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class NSString;

@interface SCRCMathSimpleExpression : SCRCMathExpression {

	NSString* _content;

}

@property (nonatomic,copy) NSString * content;              //@synthesize content=_content - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(long long)integerValue;
-(id)content;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(bool)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)latexMathModeDescription;
-(bool)canBeUsedWithBase;
-(bool)isInteger;
-(bool)isFunctionName;
-(bool)isWordOrAbbreviation;
-(id)_functionNames;
-(void)setContent:(id)arg1 ;
@end

