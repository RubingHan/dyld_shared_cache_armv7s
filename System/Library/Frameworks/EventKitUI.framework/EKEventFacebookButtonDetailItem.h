/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell;

@interface EKEventFacebookButtonDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;

}
-(bool)configureWithCalendar:(id)arg1 preview:(bool)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(void)layoutCellsForWidth:(double)arg1 position:(int)arg2 ;
-(void)reset;
-(void).cxx_destruct;
@end

