/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAnswerStructuredAnswer.h>

@class NSString, NSArray;

@interface SAAnswerSocialStructuredAnswer : AceObject <SAAnswerStructuredAnswer>

@property (nonatomic,@dynamic,copy) NSString * category; 
@property (nonatomic,copy) NSArray * socialQuestions; 
+(id)socialStructuredAnswer;
+(id)socialStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setCategory:(id)arg1 ;
-(id)category;
-(id)encodedClassName;
-(id)socialQuestions;
-(void)setSocialQuestions:(id)arg1 ;
@end

