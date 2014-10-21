/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFComposeHeaderView.h>

@class UILabel, MFHeaderLabelView;

@interface MFComposeMultiView : MFComposeHeaderView {

	UILabel* _accountLabel;
	MFHeaderLabelView* _imageSizeHeaderLabelView;
	UILabel* _imageSizeLabel;
	UILabel* _placeholderImageSizeLabel;
	bool _imageSizeShown;
	bool _accountAutoselected;

}

@property (assign,getter=isAccountAutoselected,nonatomic) bool accountAutoselected;              //@synthesize accountAutoselected=_accountAutoselected - In the implementation block
-(void)refreshPreferredContentSize;
-(void)setImageSizeDescription:(id)arg1 ;
-(void)setShowsImageSize:(bool)arg1 ;
-(void)setAccountAutoselected:(bool)arg1 ;
-(id)accountLabel;
-(id)imageSizeLabel;
-(id)imageSizeHeaderLabelView;
-(id)placeholderImageSizeLabel;
-(bool)isAccountAutoselected;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setAccountDescription:(id)arg1 ;
-(CGColorRef)labelColor;
@end
