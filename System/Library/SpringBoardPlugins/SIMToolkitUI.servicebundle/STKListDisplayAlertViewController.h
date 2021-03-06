/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:38 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/SpringBoardPlugins/SIMToolkitUI.servicebundle/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SIMToolkitUI/STKBaseAlertViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSArray;

@interface STKListDisplayAlertViewController : STKBaseAlertViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _table;
	NSArray* _items;

}
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(id)newTopBar;
-(void)rightNavigationButtonPressed;
-(void)leftNavigationButtonPressed;
-(id)_simToolkitListItems;
-(void)_selectListItem:(unsigned)arg1 ;
@end

