/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface ABLabelViewWithVariablePositioning : UIView {

	UILabel* _label;
	double _topPadding;
	double _bottomPadding;
	double _horizontalPadding;

}

@property (assign,nonatomic) double topPadding;                     //@synthesize topPadding=_topPadding - In the implementation block
@property (assign,nonatomic) double bottomPadding;                  //@synthesize bottomPadding=_bottomPadding - In the implementation block
@property (assign,nonatomic) double horizontalPadding;              //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
-(double)bottomPadding;
-(void)setLabelFont:(id)arg1 ;
-(void)setLabelTextColor:(id)arg1 ;
-(void)setLabelShadowColor:(id)arg1 ;
-(void)setLabelShadowOffset:(CGSize)arg1 ;
-(void)setBottomPadding:(double)arg1 ;
-(void)setTopPadding:(double)arg1 ;
-(double)topPadding;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHorizontalPadding:(double)arg1 ;
-(double)horizontalPadding;
-(void)setLabelText:(id)arg1 ;
@end

