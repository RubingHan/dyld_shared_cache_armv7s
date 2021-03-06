/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <EventKit/EventKit-Structs.h>
@class EKEventStore, EKCalendarNotification;

@interface EKCalendarNotificationReference : NSObject {

	SCD_Struct_EK18 _cadNotification;
	EKEventStore* _eventStore;
	EKCalendarNotification* _notification;

}

@property (nonatomic,readonly) EKCalendarNotification * notification; 
-(id)initWithNotification:(SCD_Struct_EK19)arg1 eventStore:(id)arg2 ;
-(void)dealloc;
-(id)notification;
@end

