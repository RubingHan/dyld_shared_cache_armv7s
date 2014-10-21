/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKPersistentObject.h>

@class NSString, NSURL, EKPersistentCalendar, EKPersistentCalendarItem, NSDate, NSNumber;

@interface EKPersistentResourceChange : EKPersistentObject

@property (nonatomic,readonly) NSString * changedByDisplayName; 
@property (nonatomic,readonly) NSURL * changedByAddress; 
@property (nonatomic,readonly) NSString * changedByFirstName; 
@property (nonatomic,readonly) NSString * changedByLastName; 
@property (nonatomic,readonly) EKPersistentCalendar * calendar; 
@property (nonatomic,readonly) EKPersistentCalendarItem * calendarItem; 
@property (nonatomic,readonly) unsigned changeType; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) unsigned changedProperties; 
@property (nonatomic,readonly) NSNumber * createCount; 
@property (nonatomic,readonly) NSNumber * updateCount; 
@property (nonatomic,readonly) NSNumber * deleteCount; 
@property (nonatomic,readonly) NSString * deletedTitle; 
@property (nonatomic,readonly) bool alerted; 
@property (nonatomic,readonly) unsigned publicStatus; 
+(id)defaultPropertiesToLoad;
+(id)relations;
-(bool)alerted;
-(id)calendarItem;
-(id)deletedTitle;
-(id)changedByDisplayName;
-(id)createCount;
-(id)updateCount;
-(id)changedByAddress;
-(id)changedByFirstName;
-(id)changedByLastName;
-(unsigned)changedProperties;
-(unsigned)publicStatus;
-(id)timestamp;
-(id)deleteCount;
-(id)calendar;
-(unsigned)changeType;
@end
