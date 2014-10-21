/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIScrollView.h>

@interface RCWaveformScrollView : UIScrollView {

	unsigned long long _ignoreContentOffsetChangesCount;

}
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(bool)arg2 ;
-(void)beginIgnoringContentOffsetChanges;
-(void)endIgnoringContentOffsetChanges;
@end
