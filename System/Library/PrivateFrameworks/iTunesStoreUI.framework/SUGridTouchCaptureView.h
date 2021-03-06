/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIControl.h>

@class SUGridTableViewCell;

@interface SUGridTouchCaptureView : UIControl {

	SUGridTableViewCell* _swipedCell;

}

@property (nonatomic,readonly) SUGridTableViewCell * swipedCell;              //@synthesize swipedCell=_swipedCell - In the implementation block
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithSwipedCell:(id)arg1 ;
-(id)swipedCell;
@end

