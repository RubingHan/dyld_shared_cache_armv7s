/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIButton.h>

@class UIBezierPath, UIColor, UIGroupTableViewCellBackground, UIView;

@interface UIRoundedRectButton : UIButton {

	UIBezierPath* _fillPath;
	UIColor* _fillColor;
	UIGroupTableViewCellBackground* _tableViewStyleBackground;
	UIView* _shadowView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)_backgroundView;
-(bool)_canDrawContent;
-(void)setTintColor:(id)arg1 ;
-(void)setHighlighted:(bool)arg1 ;
-(void)_updateState;
-(id)_contentBackgroundColor;
-(long long)buttonType;
-(id)initWithFrame:(CGRect)arg1 fillColor:(id)arg2 ;
-(void)_commonRoundedRectButtonInit;
-(bool)_wantsTableViewStyleBackground;
-(id)_setupBackgroundView;
-(void)_invalidatePaths;
-(void)_invalidateBackingViews;
@end

