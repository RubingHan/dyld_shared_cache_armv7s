/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:38 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@interface GKGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	bool _invalidateIncrementalReveal;
	bool _invalidateBoundsChange;
	bool _invalidatePlaceholderVisibility;

}

@property (assign,nonatomic) bool invalidateIncrementalReveal;                  //@synthesize invalidateIncrementalReveal=_invalidateIncrementalReveal - In the implementation block
@property (assign,nonatomic) bool invalidateBoundsChange;                       //@synthesize invalidateBoundsChange=_invalidateBoundsChange - In the implementation block
@property (assign,nonatomic) bool invalidatePlaceholderVisibility;              //@synthesize invalidatePlaceholderVisibility=_invalidatePlaceholderVisibility - In the implementation block
-(bool)invalidateIncrementalReveal;
-(void)setInvalidateIncrementalReveal:(bool)arg1 ;
-(bool)invalidateBoundsChange;
-(void)setInvalidateBoundsChange:(bool)arg1 ;
-(bool)invalidatePlaceholderVisibility;
-(void)setInvalidatePlaceholderVisibility:(bool)arg1 ;
@end
