/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITextInputMode.h>

@class NSString, NSArray;

@interface UIKeyboardInputMode : UITextInputMode {

	NSString* primaryLanguage;
	NSString* identifier;
	NSString* softwareLayout;
	NSString* hardwareLayout;

}

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * primaryLanguage; 
@property (nonatomic,retain) NSString * softwareLayout; 
@property (nonatomic,retain) NSString * hardwareLayout; 
@property (nonatomic,readonly) NSArray * normalizedIdentifierLevels; 
+(id)keyboardInputModeWithIdentifier:(id)arg1 ;
+(id)canonicalLanguageIdentifierFromIdentifier:(id)arg1 ;
+(id)softwareLayoutFromIdentifier:(id)arg1 ;
+(id)hardwareLayoutFromIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(id)hardwareLayout;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(id)primaryLanguage;
-(void)setPrimaryLanguage:(id)arg1 ;
-(void)setSoftwareLayout:(id)arg1 ;
-(void)setHardwareLayout:(id)arg1 ;
-(id)normalizedIdentifierLevels;
-(id)softwareLayout;
@end
