/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABContactCell.h>

@class NSDictionary, ABCardActionGroupItem, ABContactAction;

@interface ABContactActionCell : ABContactCell {

	NSDictionary* _textAttributes;

}

@property (nonatomic,readonly) ABCardActionGroupItem * actionGroupItem; 
@property (nonatomic,readonly) ABContactAction * action; 
@property (nonatomic,copy) NSDictionary * textAttributes;                            //@synthesize textAttributes=_textAttributes - In the implementation block
-(void)_updateTextFont;
-(void)setCardGroupItem:(id)arg1 ;
-(id)actionGroupItem;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)action;
-(void)tintColorDidChange;
-(id)textAttributes;
-(void)setTextAttributes:(id)arg1 ;
-(bool)shouldPerformDefaultAction;
@end
