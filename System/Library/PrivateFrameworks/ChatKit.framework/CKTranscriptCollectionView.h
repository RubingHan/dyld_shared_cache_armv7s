/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableCollectionView.h>

@interface CKTranscriptCollectionView : CKEditableCollectionView {

	bool _ignoresContentOffsetChanges;

}

@property (assign,nonatomic) bool ignoresContentOffsetChanges;              //@synthesize ignoresContentOffsetChanges=_ignoresContentOffsetChanges - In the implementation block
-(void)reloadData;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(bool)arg2 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setIgnoresContentOffsetChanges:(bool)arg1 ;
-(bool)ignoresContentOffsetChanges;
-(bool)isFastAnimationAvailableForContentOffset;
@end

