/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIStatusBarItemView.h>

@class UIActivityIndicatorView;

@interface UIStatusBarActivityItemView : UIStatusBarItemView {

	UIActivityIndicatorView* _activityIndicator;
	bool _slowActivity;
	bool _syncActivity;
	bool _newsstandActivity;

}
-(void)dealloc;
-(void)setVisible:(bool)arg1 ;
-(bool)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(double)updateContentsAndWidth;
-(double)shadowPadding;
-(void)_stopAnimating;
-(void)_startAnimating;
-(long long)_activityIndicatorStyle;
@end

