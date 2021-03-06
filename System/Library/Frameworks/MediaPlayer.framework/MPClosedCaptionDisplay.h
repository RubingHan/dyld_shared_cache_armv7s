/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView;

@interface MPClosedCaptionDisplay : UIView {

	UILabel* _label;
	UIView* _backgroundView;
	bool _hidden;
	bool _rotating;

}
-(void)startLayoutChange:(bool)arg1 ;
-(void)endLayoutChange;
-(void)_updatePositioning:(bool)arg1 ;
-(void)_hidePanel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsLayout;
-(void)setText:(id)arg1 ;
-(void).cxx_destruct;
@end

