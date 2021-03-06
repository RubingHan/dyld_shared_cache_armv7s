/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface GKHorizontalBubbleControlsView : UIView {

	NSArray* _bubbles;
	double _overlap;
	NSArray* _bubbleTokens;

}

@property (nonatomic,retain) NSArray * bubbles;                   //@synthesize bubbles=_bubbles - In the implementation block
@property (assign,nonatomic) double overlap;                      //@synthesize overlap=_overlap - In the implementation block
@property (nonatomic,retain) NSArray * bubbleTokens;              //@synthesize bubbleTokens=_bubbleTokens - In the implementation block
-(void)setBubbles:(id)arg1 ;
-(void)setBubbleTokens:(id)arg1 ;
-(id)bubbleTokens;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setOverlap:(double)arg1 ;
-(double)overlap;
-(id)bubbles;
@end

