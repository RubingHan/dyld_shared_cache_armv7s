/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDate, NSString;

@interface SACalendar : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSString * timeZoneId; 
+(id)calendar;
+(id)calendarWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)afui_timeZone;
-(id)groupIdentifier;
-(id)date;
-(void)setDate:(id)arg1 ;
-(id)encodedClassName;
-(id)timeZoneId;
-(void)setTimeZoneId:(id)arg1 ;
@end

