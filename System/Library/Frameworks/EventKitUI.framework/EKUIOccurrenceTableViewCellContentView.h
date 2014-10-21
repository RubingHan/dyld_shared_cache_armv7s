/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@class EKUIOccurrenceTableViewCell, UIColor, EKCalendarDate, NSAttributedString, NSString, NSDictionary;

@interface EKUIOccurrenceTableViewCellContentView : UIView {

	EKUIOccurrenceTableViewCell* _hostCell;
	CGRect _primaryLabelFrame;
	CGRect _secondaryLabelFrame;
	CGRect _topTimeLabelFrame;
	CGRect _bottomTimeLabelFrame;
	CGRect _colorBarFrame;
	CGRect _angleStripeFrame;
	UIColor* _eventCalendarColor;
	EKCalendarDate* _eventStartDate;
	EKCalendarDate* _eventEndDate;
	NSAttributedString* _eventTitleAttrString;
	NSString* _eventTitle;
	NSString* _eventLocation;
	NSString* _topTimeString;
	NSString* _bottomTimeString;
	NSDictionary* _secondaryStringDrawingAttributes;
	NSDictionary* _topTimeStringDrawingAttributes;
	NSDictionary* _bottomTimeStringDrawingAttributes;
	long long _truncatingOptions;
	long long _nontruncatingOptions;
	bool _canUseFastestStringDrawingForPrimary;
	bool _canUseFastestStringDrawingForSecondary;
	bool _isAllDay;
	bool _isRecurring;
	bool _isBirthday;
	bool _isFacebook;
	bool _tentative;
	bool _declined;
	bool _needsReply;
	bool _cancelled;

}
-(bool)isAllDay;
-(bool)isTentative;
-(bool)isFacebook;
-(bool)isDeclined;
-(bool)needsReply;
-(bool)isBirthday;
-(id)initWithHostCell:(id)arg1 ;
-(void)updateWithEvent:(id)arg1 placedUnderDayWithStartDate:(id)arg2 showCalendarColors:(bool)arg3 ;
-(void)_updatePrimaryTextLabel;
-(void)_updateSecondaryTextLabel;
-(void)_updateTopTimeLabel;
-(void)_updateBottomTimeLabel;
-(id)_textLabelWithAddedImageAttachmentsFromText:(id)arg1 withFont:(id)arg2 ;
-(id)_textForTopTimeLabel;
-(id)_textForBottomTimeLabel;
-(void)_addIcon:(id)arg1 toString:(id)arg2 withFont:(id)arg3 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(bool)isCancelled;
-(void).cxx_destruct;
@end
