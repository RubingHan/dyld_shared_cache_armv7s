/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class EKParticipant, UIImage;

@interface EKAttendeesListViewCell : UITableViewCell {

	EKParticipant* _attendee;
	bool _showStatus;
	UIImage* _attendingImage;
	UIImage* _maybeImage;
	UIImage* _notAttendingImage;
	UIImage* _pendingImage;

}
-(void)setAttendee:(id)arg1 ;
-(id)_imageForStatus:(int)arg1 ;
-(id)_attendingImage;
-(id)_maybeImage;
-(id)_notAttendingImage;
-(id)_pendingImage;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 attendee:(id)arg3 showStatusImage:(bool)arg4 ;
-(void).cxx_destruct;
@end
