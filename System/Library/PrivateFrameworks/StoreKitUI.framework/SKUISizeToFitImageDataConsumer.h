/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:50 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>

@class UIColor;

@interface SKUISizeToFitImageDataConsumer : SKUIImageDataConsumer {

	CGSize _constraintSize;
	bool _custom;
	UIColor* _gradientEndColor;
	double _gradientHeight;

}

@property (assign,nonatomic) CGSize constraintSize;                   //@synthesize constraintSize=_constraintSize - In the implementation block
@property (nonatomic,retain) UIColor * gradientEndColor;              //@synthesize gradientEndColor=_gradientEndColor - In the implementation block
@property (assign,nonatomic) double gradientHeight;                   //@synthesize gradientHeight=_gradientHeight - In the implementation block
+(id)consumerWithConstraintSize:(CGSize)arg1 ;
+(id)consumerWithConstraintSize2:(CGSize)arg1 ;
-(void).cxx_destruct;
-(id)imageForImage:(id)arg1 ;
-(CGSize)constraintSize;
-(void)setConstraintSize:(CGSize)arg1 ;
-(void)setGradientEndColor:(id)arg1 ;
-(void)setGradientHeight:(double)arg1 ;
-(void)_drawGradientWithContext:(CGContextRef)arg1 imageRect:(CGRect)arg2 ;
-(id)gradientEndColor;
-(double)gradientHeight;
@end
