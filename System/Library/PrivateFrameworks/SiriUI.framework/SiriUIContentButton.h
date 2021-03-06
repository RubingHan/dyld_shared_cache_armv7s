/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIImage;

@interface SiriUIContentButton : UIButton {

	UIImage* _maskImage;

}

@property (setter=_setMaskImage:,getter=_maskImage,nonatomic,retain) UIImage * maskImage;              //@synthesize maskImage=_maskImage - In the implementation block
+(id)button;
+(id)buttonWithImageMask:(id)arg1 ;
+(id)buttonWithLightWeightFont;
+(id)buttonWithMediumWeightFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(bool)arg1 ;
-(void).cxx_destruct;
-(id)_maskImage;
-(void)_setMaskImage:(id)arg1 ;
@end

