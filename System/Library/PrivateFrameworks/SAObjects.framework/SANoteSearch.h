/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSDate;

@interface SANoteSearch : SADomainCommand

@property (nonatomic,copy) NSString * contentQuery; 
@property (nonatomic,copy) NSDate * fromDate; 
@property (nonatomic,copy) NSDate * toDate; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)search;
-(id)groupIdentifier;
-(id)toDate;
-(id)encodedClassName;
-(bool)requiresResponse;
-(id)contentQuery;
-(void)setContentQuery:(id)arg1 ;
-(id)fromDate;
-(void)setFromDate:(id)arg1 ;
-(void)setToDate:(id)arg1 ;
@end

