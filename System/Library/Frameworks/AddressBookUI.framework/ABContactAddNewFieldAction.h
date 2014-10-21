/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABContactAction.h>

@protocol ABContactGroupPickerDelegate;
@interface ABContactAddNewFieldAction : ABContactAction {

	<ABContactGroupPickerDelegate>* _groupPickerDelegate;

}

@property (assign,nonatomic) <ABContactGroupPickerDelegate> * groupPickerDelegate;              //@synthesize groupPickerDelegate=_groupPickerDelegate - In the implementation block
-(void)performActionWithSender:(id)arg1 ;
-(id)groupPickerDelegate;
-(void)setGroupPickerDelegate:(id)arg1 ;
@end
