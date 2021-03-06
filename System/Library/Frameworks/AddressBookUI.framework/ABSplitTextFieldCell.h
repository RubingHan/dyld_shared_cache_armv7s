/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UITextField, ABRepeatingGradientSeparatorView, UIView;

@interface ABSplitTextFieldCell : UITableViewCell {

	UITextField* _textFieldLeft;
	UITextField* _textFieldRight;
	ABRepeatingGradientSeparatorView* _separator;
	UIView* _spacer;

}

@property (nonatomic,retain) UITextField * textFieldLeft;                               //@synthesize textFieldLeft=_textFieldLeft - In the implementation block
@property (nonatomic,retain) UITextField * textFieldRight;                              //@synthesize textFieldRight=_textFieldRight - In the implementation block
@property (nonatomic,retain) ABRepeatingGradientSeparatorView * separator;              //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UIView * spacer;                                           //@synthesize spacer=_spacer - In the implementation block
+(bool)requiresConstraintBasedLayout;
-(id)spacer;
-(id)textFieldLeft;
-(id)textFieldRight;
-(void)setTextFieldLeft:(id)arg1 ;
-(void)setTextFieldRight:(id)arg1 ;
-(void)setSeparator:(id)arg1 ;
-(void)setSpacer:(id)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(void)setNeedsUpdateConstraints;
-(id)separator;
@end

