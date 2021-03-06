/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, NSMutableArray, UILabel, NSMutableDictionary, NSString;

@interface SLSheetTitleView : UIView {

	UIImageView* _serviceIconView;
	NSMutableArray* _constraints;
	UILabel* _titleLabel;
	long long _currentBarMetrics;
	NSMutableDictionary* _titleFonts;
	NSString* _title;

}

@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
-(void)setServiceIconImage:(id)arg1 ;
-(void)setCurrentBarMetrics:(long long)arg1 ;
-(void)_setupTitleLabel;
-(void)_updateTitleLabelForBarMetrics:(long long)arg1 ;
-(void)setTitleFont:(id)arg1 forBarMetrics:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(void)sizeToFit;
-(id)title;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(void).cxx_destruct;
@end

