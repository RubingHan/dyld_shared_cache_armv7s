/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class MFRecipientTableViewCellTitleView, MFRecipientTableViewCellDetailView, MFComposeRecipient, UIImageView, UIColor;

@interface MFRecipientTableViewCell : UITableViewCell {

	MFRecipientTableViewCellTitleView* _titleView;
	MFRecipientTableViewCellDetailView* _detailView;
	MFComposeRecipient* _recipient;
	UIImageView* _cellImageView;
	UIColor* _tintColor;
	bool _shouldVerticallyCenterTitleLabel;
	bool _shouldHighlightCompleteMatches;
	bool _shouldDimIrrelevantInformation;

}

@property (assign,nonatomic) bool shouldHighlightCompleteMatches;              //@synthesize shouldHighlightCompleteMatches=_shouldHighlightCompleteMatches - In the implementation block
@property (assign,nonatomic) bool shouldDimIrrelevantInformation;              //@synthesize shouldDimIrrelevantInformation=_shouldDimIrrelevantInformation - In the implementation block
+(id)_defaultTintColor;
+(double)_realDetailButtonAccessoryMargin;
+(double)_constrainedWidthForTitleViewWithAccessoryWidth:(double)arg1 containerWidth:(double)arg2 ;
+(double)_constrainedWidthForDetailViewWithAccessoryWidth:(double)arg1 containerWidth:(double)arg2 ;
+(id)_attributedStringRepresentationOfCompleteMatchesForRecipient:(id)arg1 constrainedToWidth:(double)arg2 overflowRecipients:(out id*)arg3 useHighlighting:(bool)arg4 ;
+(id)_tintedAttributedString:(id)arg1 toColor:(id)arg2 shouldDim:(bool)arg3 ;
+(id)_copyAttributedStringRepresentationOfGroupRecipient:(id)arg1 withSortedRecipientList:(id)arg2 ;
+(id)_attributedStringRepresentationOfPartialEmailMatchForSingleRecipient:(id)arg1 useHighlighting:(bool)arg2 ;
+(id)identifier;
+(double)height;
+(id)cellForRecipient:(id)arg1 ;
+(double)heightWithRecipient:(id)arg1 width:(double)arg2 ;
-(void)setShouldHighlightCompleteMatches:(bool)arg1 ;
-(CGRect)_frameForTitleView;
-(CGRect)_frameForDetailView;
-(bool)shouldHighlightCompleteMatches;
-(void)setCellImage:(id)arg1 highlightedImage:(id)arg2 ;
-(bool)shouldDimIrrelevantInformation;
-(void)setOpaque:(bool)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)tintColor;
-(id)recipient;
-(void)setRecipient:(id)arg1 ;
-(void)setShouldDimIrrelevantInformation:(bool)arg1 ;
-(void)setTintColor:(id)arg1 animated:(bool)arg2 ;
@end
