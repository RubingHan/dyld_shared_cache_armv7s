/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <StoreKitUI/SKUIMenuViewControllerDelegate.h>
#import <StoreKitUI/SKUIPopupMenuDelegate.h>
#import <StoreKitUI/SKUISortDataRequestDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class SKUIPillsControl, SKUIMenuViewController, UIPopoverController, SKUIFocusedTouchGestureRecognizer, SKUIPickerWrapperView, UIView, SKUIPopupMenuHeaderView, NSMutableIndexSet, SKUIMenuPageComponent;

@interface SKUIMenuPageSection : SKUIStorePageSection <SKUIMenuViewControllerDelegate, SKUIPopupMenuDelegate, SKUISortDataRequestDelegate, UIPickerViewDataSource, UIPickerViewDelegate, UIPopoverControllerDelegate> {

	SKUIPillsControl* _pillsControl;
	SKUIMenuViewController* _moreListMenuViewController;
	UIPopoverController* _moreListPopoverController;
	SKUIFocusedTouchGestureRecognizer* _pickerDismissGestureRecognizer;
	SKUIPickerWrapperView* _pickerWrapper;
	UIView* _pickerBackgroundView;
	bool _pinned;
	SKUIPopupMenuHeaderView* _popupHeaderView;
	long long _selectedIndex;
	NSMutableIndexSet* _sortRequestIndexSet;

}

@property (nonatomic,@dynamic,readonly) SKUIMenuPageComponent * pageComponent; 
-(void)dealloc;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void).cxx_destruct;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(id)initWithPageComponent:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(long long)numberOfCells;
-(id)popPinnedHeaderView;
-(void)restorePinnedHeaderView:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(id)_contentChildView;
-(void)sortDataRequest:(id)arg1 didFinishWithLockups:(id)arg2 ;
-(void)_setSelectedIndex:(long long)arg1 ;
-(void)_showMoreList;
-(id)_pillsControl;
-(id)_popupHeaderView;
-(void)_pillAction:(id)arg1 ;
-(void)_loadSortDataIfNecessaryForMenuIndex:(long long)arg1 reason:(long long)arg2 ;
-(void)_showPickerView;
-(void)_showPopoverController;
-(void)_dismissPickerViewAction:(id)arg1 ;
-(void)popupMenuHeader:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2 ;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(id)cellForIndexPath:(id)arg1 ;
@end
