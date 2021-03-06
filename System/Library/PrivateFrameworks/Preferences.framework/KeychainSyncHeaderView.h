/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Preferences/PSHeaderFooterView.h>

@class UILabel;

@interface KeychainSyncHeaderView : UIView <PSHeaderFooterView> {

	UILabel* _titleLabel;
	UILabel* _detailLabel;
	bool _usesCompactLayout;

}

@property (assign,nonatomic) bool usesCompactLayout;              //@synthesize usesCompactLayout=_usesCompactLayout - In the implementation block
-(id)initWithSpecifier:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitleText:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(void)setUsesCompactLayout:(bool)arg1 ;
-(void)setDetailText:(id)arg1 ;
-(bool)usesCompactLayout;
@end

