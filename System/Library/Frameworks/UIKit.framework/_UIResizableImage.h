/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:00 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIImage.h>

@interface _UIResizableImage : UIImage {

	bool _alwaysStretches;
	bool _isSubimage;
	UIEdgeInsets _subimageInsets;
	UIEdgeInsets _capInsets;

}
+(bool)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_configureFromImage:(id)arg1 ;
-(bool)_isResizable;
-(UIEdgeInsets)capInsets;
-(void)_setCapInsets:(UIEdgeInsets)arg1 ;
-(long long)resizingMode;
-(void)_setAlwaysStretches:(bool)arg1 ;
-(id)_initWithOtherImage:(id)arg1 ;
-(CGRect)_contentStretchInPixels;
-(CGRect)_contentInsetsInPixels:(UIEdgeInsets)arg1 emptySizeFallback:(/*^block*/ id)arg2 ;
-(CGRect)_contentRectInPixels;
-(bool)_suppressesAccessibilityHairlineThickening;
-(id)initWithImage:(id)arg1 capInsets:(UIEdgeInsets)arg2 ;
-(void)_setSubimageInsets:(UIEdgeInsets)arg1 ;
-(bool)_isSubimage;
-(bool)_isTiledWhenStretchedToSize:(CGSize)arg1 ;
-(id)_resizableImageWithCapMask:(int)arg1 ;
@end

