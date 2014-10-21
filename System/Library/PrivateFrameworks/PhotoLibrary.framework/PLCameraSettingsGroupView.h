/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel, UISwitch;

@interface PLCameraSettingsGroupView : UIView {

	bool shouldCenterTitle;
	int type;
	NSString* title;
	UILabel* titleLabel;
	UISwitch* accessorySwitch;

}

@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) bool shouldCenterTitle; 
@property (nonatomic,retain) UILabel * titleLabel; 
@property (nonatomic,retain) UISwitch * accessorySwitch; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)title;
-(id)titleLabel;
-(void)setTitleLabel:(id)arg1 ;
-(void)setShouldCenterTitle:(bool)arg1 ;
-(void)setAccessorySwitch:(id)arg1 ;
-(bool)shouldCenterTitle;
-(id)accessorySwitch;
@end
