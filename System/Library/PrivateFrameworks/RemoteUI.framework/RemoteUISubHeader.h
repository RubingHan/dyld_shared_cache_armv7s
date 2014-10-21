/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <RemoteUI/RemoteUITableHeader.h>

@class UILabel;

@interface RemoteUISubHeader : UIView <RemoteUITableHeader> {

	UILabel* _headerLabel;
	UILabel* _subHeaderLabel;
	double _subHeaderSized;
	bool _isFirstSection;
	bool _isRightToLeft;

}

@property (nonatomic,readonly) UILabel * headerLabel;                 //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subHeaderLabel;              //@synthesize subHeaderLabel=_subHeaderLabel - In the implementation block
-(void)setSectionIsFirst:(bool)arg1 ;
-(double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithAttributes:(id)arg1 ;
-(id)headerLabel;
-(id)subHeaderLabel;
@end
