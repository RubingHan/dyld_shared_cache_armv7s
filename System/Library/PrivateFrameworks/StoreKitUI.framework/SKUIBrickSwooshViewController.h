/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:49 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUISwooshViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class NSArray, UICollectionView, NSMutableIndexSet, NSString, SKUISwooshView;

@interface SKUIBrickSwooshViewController : SKUISwooshViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	NSArray* _bricks;
	UICollectionView* _collectionView;
	bool _delegateWantsWillDisplay;
	NSMutableIndexSet* _hiddenImageIndexSet;
	bool _showBrickTitles;
	NSString* _swooshTitle;
	SKUISwooshView* _swooshView;

}

@property (nonatomic,copy) NSArray * bricks;              //@synthesize bricks=_bricks - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(bool)arg1 ;
-(id)indexPathsForVisibleItems;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void).cxx_destruct;
-(void)setColorScheme:(id)arg1 ;
-(void)setImage:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(id)bricks;
-(void)setBricks:(id)arg1 ;
-(CGRect)frameForItemAtIndex:(long long)arg1 ;
-(void)deselectAllItems;
-(id)initWithSwoosh:(id)arg1 ;
-(id)popImageViewForItemAtIndex:(long long)arg1 ;
-(void)unhideImages;
@end
