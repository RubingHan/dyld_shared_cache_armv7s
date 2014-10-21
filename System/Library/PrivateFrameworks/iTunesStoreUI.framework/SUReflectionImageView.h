/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, SUReflectionView;

@interface SUReflectionImageView : UIView {

	double _reflectionHeight;
	double _spacing;
	double _reflectionAlpha;
	bool _useImageSize;
	unsigned _nonSquareImage : 1;
	UIImageView* _imageView;
	SUReflectionView* _reflection;

}

@property (assign,nonatomic) double reflectionSpacing;              //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) bool nonSquareImage; 
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)init;
-(id)initWithReflectionHeight:(double)arg1 spacing:(double)arg2 ;
-(bool)nonSquareImage;
-(void)setNonSquareImage:(bool)arg1 ;
-(void)setReflectionAlphaWhenVisible:(double)arg1 ;
-(void)setReflectionVisible:(bool)arg1 ;
-(void)setUseImageSize:(bool)arg1 ;
-(double)reflectionSpacing;
-(void)setReflectionSpacing:(double)arg1 ;
@end
