/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardEmojiCategoryBar.h>

@class NSArray;

@interface UIKeyboardEmojiCategoryBar_iPhone : UIKeyboardEmojiCategoryBar {

	NSArray* _selectedImages;
	NSArray* _unselectedImages;

}
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)updateSegmentImages;
-(void)releaseImagesAndViews;
-(void)updateSegmentAndDividers:(int)arg1 ;
@end
