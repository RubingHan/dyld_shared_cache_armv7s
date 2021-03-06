/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <PrototypeTools/PTSRowObserver.h>

@protocol PTSRowTableViewCellDelegate;
@class PTSRow;

@interface PTSRowTableViewCell : UITableViewCell <PTSRowObserver> {

	PTSRow* _row;
	<PTSRowTableViewCellDelegate>* _delegate;

}

@property (nonatomic,retain) PTSRow * row;                                                 //@synthesize row=_row - In the implementation block
@property (assign,nonatomic,__weak) <PTSRowTableViewCellDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)reuseIdentifierForRow:(id)arg1 ;
+(long long)cellStyleForRow:(id)arg1 ;
+(double)cellHeightForRow:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)row;
-(id)delegate;
-(void)setEditing:(bool)arg1 animated:(bool)arg2 ;
-(void)prepareForReuse;
-(void).cxx_destruct;
-(void)setRow:(id)arg1 ;
-(void)rowDidChangeValue:(id)arg1 ;
-(void)rowDidChangeTitle:(id)arg1 ;
-(void)rowDidChangeImage:(id)arg1 ;
-(void)updateCellCharacteristics;
-(void)updateDisplayedContent;
-(void)updateDisplayedValue;
@end

