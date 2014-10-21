/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:02 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPickerViewController.h>

@class NSArray, NSString, ABPropertyGroup, ABItemLabelPicker;

@interface ABLabelPickerViewController : ABPickerViewController {

	NSArray* _additionalLabels;
	NSString* _selectedLabel;
	void* _addressBook;
	ABPropertyGroup* _propertyGroup;
	long long _itemIndex;
	ABItemLabelPicker* _labelPicker;
	bool _didCreateNewLabel;

}

@property (nonatomic,retain) NSString * selectedLabel;              //@synthesize selectedLabel=_selectedLabel - In the implementation block
@property (assign,nonatomic) bool didCreateNewLabel;                //@synthesize didCreateNewLabel=_didCreateNewLabel - In the implementation block
-(void)setStyleProvider:(id)arg1 ;
-(double)ab_heightToFitForViewInPopoverView;
-(id)selectedLabel;
-(void)setSelectedLabel:(id)arg1 ;
-(void)itemLabelPicker:(id)arg1 endedWithSelectionConfirmed:(bool)arg2 animate:(bool)arg3 ;
-(void)setDidCreateNewLabel:(bool)arg1 ;
-(bool)itemLabelPickerShouldDismissKeyboard:(id)arg1 ;
-(void)itemLabelPickerDidChangeSelection:(id)arg1 ;
-(void)itemLabelPicker:(id)arg1 deletedCustomLabel:(id)arg2 ;
-(void)itemLabelPickerDeletedLastCustomLabel:(id)arg1 ;
-(bool)didCreateNewLabel;
-(CGSize)fullScreenContentSize;
-(id)labelPicker;
-(id)initWithAddressBook:(void*)arg1 propertyGroup:(id)arg2 itemIndex:(long long)arg3 additionalLabels:(id)arg4 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setEditing:(bool)arg1 animated:(bool)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(bool)_allowsAutorotation;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
@end
