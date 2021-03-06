/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TIKeyboardOperation.h>

@class NSString;

@interface TIKeyboardOperationInsertText : TIKeyboardOperation {

	NSString* _textInsertion;

}

@property (nonatomic,readonly) NSString * textInsertion;              //@synthesize textInsertion=_textInsertion - In the implementation block
+(bool)supportsSecureCoding;
+(id)operationWithTextInsertion:(id)arg1 ;
-(void)main;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)textInsertion;
-(id)propertiesForDescription;
-(id)initWithTextInsertion:(id)arg1 ;
@end

