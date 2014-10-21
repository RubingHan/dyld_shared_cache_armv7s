/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>
#import <MessageUI/MFTinting.h>

@class UIColor, UILabel;

@interface MFRecipientTableViewCellDetailView : UIView <MFTinting> {

	UIColor* _tintColor;
	bool _labelIsHidden;
	bool _shouldDim;
	bool _highlighted;
	UILabel* _labelLabel;
	UILabel* _detailLabel;

}

@property (nonatomic,readonly) UILabel * labelLabel;               //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;              //@synthesize detailLabel=_detailLabel - In the implementation block
@property (assign,nonatomic) bool highlighted;                     //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) bool shouldDim;                       //@synthesize shouldDim=_shouldDim - In the implementation block
+(id)defaultStringAttributes;
+(id)highlightedStringAttributes;
+(id)groupStringAttributes;
+(id)labelStringAttributes;
+(double)lineHeight;
-(id)labelLabel;
-(void)setShouldDim:(bool)arg1 ;
-(bool)shouldDim;
-(void)_recalculateLabelColors;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)tintColor;
-(void)setHighlighted:(bool)arg1 ;
-(bool)highlighted;
-(void)setTintColor:(id)arg1 animated:(bool)arg2 ;
-(id)detailLabel;
@end
