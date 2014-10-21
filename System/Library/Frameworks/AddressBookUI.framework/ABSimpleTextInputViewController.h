/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <AddressBookUI/ABPropertyEditingTableViewCellDelegate.h>

@protocol ABSimpleTextInputViewControllerDelegate, ABStyleProvider;
@class NSString;

@interface ABSimpleTextInputViewController : UITableViewController <ABPropertyEditingTableViewCellDelegate> {

	<ABSimpleTextInputViewControllerDelegate>* _delegate;
	id _value;
	NSString* _placeholder;
	<ABStyleProvider>* _styleProvider;

}

@property (assign,nonatomic) <ABSimpleTextInputViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * stringValue;                                              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                                              //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,retain) <ABStyleProvider> * styleProvider;                                 //@synthesize styleProvider=_styleProvider - In the implementation block
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(double)ab_heightToFitForViewInPopoverView;
-(void)setTitleLocalizationKey:(id)arg1 ;
-(void)propertyEditingTableViewCell:(id)arg1 valueDidChange:(id)arg2 ;
-(void)updateSaveButton;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)delegate;
-(void)setPlaceholder:(id)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(bool)arg1 ;
-(bool)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(bool)_allowsAutorotation;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(id)placeholder;
-(void)save:(id)arg1 ;
-(void)cancel:(id)arg1 ;
@end
