/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICellLayout.h>
#import <StoreKitUI/SKUIEditorialLinkViewDelegate.h>

@class SKUIEditorialLinkView, SKUITextBoxView;

@interface SKUIEditorialCellLayout : SKUICellLayout <SKUIEditorialLinkViewDelegate> {

	UIEdgeInsets _contentInset;
	double _linkSpacing;
	SKUIEditorialLinkView* _linkView;
	SKUITextBoxView* _textBoxView;
	double _totalHeight;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                    //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) SKUITextBoxView * textBoxView; 
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void).cxx_destruct;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)applyEditorialLayout:(id)arg1 withOrientation:(long long)arg2 expanded:(bool)arg3 ;
-(id)textBoxView;
-(void)editorialLinkView:(id)arg1 didSelectLink:(id)arg2 ;
-(id)initWithCollectionViewCell:(id)arg1 ;
-(id)initWithParentView:(id)arg1 ;
-(id)_textBoxView;
-(void)_initSKUIEditorialCellLayout;
-(id)_linkView;
@end

