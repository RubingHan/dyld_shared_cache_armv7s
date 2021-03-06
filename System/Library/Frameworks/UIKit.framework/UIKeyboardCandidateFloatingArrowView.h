/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIButton;

@interface UIKeyboardCandidateFloatingArrowView : UICollectionReusableView {

	UIButton* _arrowButton;

}

@property (nonatomic,retain) UIButton * arrowButton;              //@synthesize arrowButton=_arrowButton - In the implementation block
+(id)reuseIdentifier;
+(id)collectionViewKind;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(id)arrowButton;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)updateArrow;
-(void)setArrowButton:(id)arg1 ;
@end

