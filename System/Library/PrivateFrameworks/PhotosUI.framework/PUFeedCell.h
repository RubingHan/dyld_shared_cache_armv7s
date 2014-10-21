/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PUFeedCellDelegate;
@class NSIndexPath, NSString, UITapGestureRecognizer;

@interface PUFeedCell : UICollectionViewCell <UIGestureRecognizerDelegate> {

	bool _tappable;
	<PUFeedCellDelegate>* _delegate;
	NSIndexPath* _indexPath;
	NSString* _representedElementKind;
	UITapGestureRecognizer* __tapGestureRecognizer;

}

@property (assign,nonatomic,__weak) <PUFeedCellDelegate> * delegate;                                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isTappable,nonatomic) bool tappable;                                                              //@synthesize tappable=_tappable - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                                                                      //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) NSString * representedElementKind;                                                            //@synthesize representedElementKind=_representedElementKind - In the implementation block
@property (setter=_setTapGestureRecognizer:,nonatomic,retain) UITapGestureRecognizer * _tapGestureRecognizer;              //@synthesize _tapGestureRecognizer=__tapGestureRecognizer - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(bool)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)indexPath;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void).cxx_destruct;
-(void)_handleTap:(id)arg1 ;
-(void)setIndexPath:(id)arg1 ;
-(id)representedElementKind;
-(id)_tapGestureRecognizer;
-(void)_setTapGestureRecognizer:(id)arg1 ;
-(void)setTappable:(bool)arg1 ;
-(void)_updateTapGestureRecognizer;
-(void)setRepresentedElementKind:(id)arg1 ;
-(bool)isTappable;
-(bool)shouldRecognizerTap:(id)arg1 ;
@end
