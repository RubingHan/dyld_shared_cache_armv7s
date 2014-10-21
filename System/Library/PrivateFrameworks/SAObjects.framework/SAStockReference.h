/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAStockReference : SADomainObject

@property (nonatomic,copy) NSString * companyName; 
@property (nonatomic,copy) NSString * symbol; 
+(id)reference;
+(id)referenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)symbol;
-(void)setSymbol:(id)arg1 ;
-(void)setCompanyName:(id)arg1 ;
-(id)companyName;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
@end
