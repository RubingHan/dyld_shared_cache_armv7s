/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSControlTableCell.h>

@class UIView;

@interface PSSliderTableCell : PSControlTableCell {

	UIView* _disabledView;

}
-(void)dealloc;
-(void)layoutSubviews;
-(void)setValue:(id)arg1 ;
-(id)titleLabel;
-(void)prepareForReuse;
-(bool)canReload;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setCellEnabled:(bool)arg1 ;
-(id)newControl;
-(id)controlValue;
@end
