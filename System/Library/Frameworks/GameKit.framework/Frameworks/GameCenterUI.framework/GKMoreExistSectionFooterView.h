/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:35 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class GKLabel, NSString;

@interface GKMoreExistSectionFooterView : UICollectionReusableView {

	GKLabel* _label;

}

@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) GKLabel * label;              //@synthesize label=_label - In the implementation block
+(bool)requiresConstraintBasedLayout;
+(double)defaultHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
@end
