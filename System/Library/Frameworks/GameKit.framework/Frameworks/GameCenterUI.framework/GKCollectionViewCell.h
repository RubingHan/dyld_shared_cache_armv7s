/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView, NSArray, GKEditActionsView, GKStaticRenderContentView, CALayer, GKHairlineView, NSLayoutConstraint;

@interface GKCollectionViewCell : UICollectionViewCell {

	bool _shouldDisplaySwipeToEditAccessories;
	double _contentOriginX;
	bool _doesAbutLeftEdge;
	id _representedItem;
	UIView* _staticContentView;
	NSArray* _editActions;
	GKEditActionsView* _editActionsView;
	GKStaticRenderContentView* _contentRenderView;
	CALayer* _leftGradientMask;
	GKHairlineView* _topHairline;
	GKHairlineView* _bottomHairline;
	NSArray* _editActionsConstraints;
	NSArray* _hairlineConstraints;
	NSLayoutConstraint* _contentLeftConstraint;

}

@property (nonatomic,retain) id representedItem;                                         //@synthesize representedItem=_representedItem - In the implementation block
@property (nonatomic,readonly) UIView * staticContentView;                               //@synthesize staticContentView=_staticContentView - In the implementation block
@property (nonatomic,readonly) UIView * interactiveContentView; 
@property (nonatomic,retain) NSArray * editActions;                                      //@synthesize editActions=_editActions - In the implementation block
@property (assign,nonatomic) double editingContentOriginX; 
@property (nonatomic,readonly) GKEditActionsView * editActionsView;                      //@synthesize editActionsView=_editActionsView - In the implementation block
@property (nonatomic,retain) GKStaticRenderContentView * contentRenderView;              //@synthesize contentRenderView=_contentRenderView - In the implementation block
@property (nonatomic,retain) CALayer * leftGradientMask;                                 //@synthesize leftGradientMask=_leftGradientMask - In the implementation block
@property (assign,nonatomic) bool doesAbutLeftEdge;                                      //@synthesize doesAbutLeftEdge=_doesAbutLeftEdge - In the implementation block
@property (nonatomic,retain) GKHairlineView * topHairline;                               //@synthesize topHairline=_topHairline - In the implementation block
@property (nonatomic,retain) GKHairlineView * bottomHairline;                            //@synthesize bottomHairline=_bottomHairline - In the implementation block
@property (nonatomic,retain) NSArray * editActionsConstraints;                           //@synthesize editActionsConstraints=_editActionsConstraints - In the implementation block
@property (nonatomic,retain) NSArray * hairlineConstraints;                              //@synthesize hairlineConstraints=_hairlineConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentLeftConstraint;                 //@synthesize contentLeftConstraint=_contentLeftConstraint - In the implementation block
-(id)staticContentView;
-(id)representedItem;
-(void)setRepresentedItem:(id)arg1 ;
-(void)didUpdateModel;
-(id)interactiveContentView;
-(id)editActions;
-(void)setTopHairline:(id)arg1 ;
-(void)setBottomHairline:(id)arg1 ;
-(void)prepareEditActionsConstraintsIfNeeded;
-(void)setShouldDisplaySwipeToEditAccessories:(bool)arg1 ;
-(void)setLeftGradientMask:(id)arg1 ;
-(id)leftGradientMask;
-(void)prepareHairlineConstraintsIfNeeded;
-(void)applyGradientMaskIfNeeded;
-(id)topHairline;
-(id)bottomHairline;
-(void)resetEditingContentOrigin;
-(void)setDoesAbutLeftEdge:(bool)arg1 ;
-(void)setEditActionsVisibleWidth:(double)arg1 ;
-(void)setEditingContentOriginX:(double)arg1 ;
-(double)contentViewOriginXWhileEditing;
-(double)editActionsVisibleWidth;
-(void)finishEditing;
-(void)animateOutSwipeToEditAccessories;
-(void)setUserInteractionEnabledForEditing:(bool)arg1 ;
-(bool)userInteractionEnabledForEditing;
-(bool)touchWithinEditActions:(id)arg1 ;
-(void)closeForDelete;
-(double)editingContentOriginX;
-(void)shutActionPaneAnimated:(bool)arg1 completion:(/*^block*/ id)arg2 ;
-(void)setEditActions:(id)arg1 ;
-(id)editActionsView;
-(id)contentRenderView;
-(void)setContentRenderView:(id)arg1 ;
-(bool)doesAbutLeftEdge;
-(id)editActionsConstraints;
-(void)setEditActionsConstraints:(id)arg1 ;
-(id)hairlineConstraints;
-(void)setHairlineConstraints:(id)arg1 ;
-(id)contentLeftConstraint;
-(void)setContentLeftConstraint:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)beginEditing;
-(void)applyLayoutAttributes:(id)arg1 ;
@end
