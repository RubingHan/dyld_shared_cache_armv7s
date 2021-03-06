/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSDate, NSString;

@interface SAStockRequest : SADomainObject

@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSString * requestType; 
@property (nonatomic,copy) NSDate * startDate; 
+(id)request;
+(id)requestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)startDate;
-(id)endDate;
-(void)setStartDate:(id)arg1 ;
-(void)setEndDate:(id)arg1 ;
-(void)setRequestType:(id)arg1 ;
-(id)requestType;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
@end

