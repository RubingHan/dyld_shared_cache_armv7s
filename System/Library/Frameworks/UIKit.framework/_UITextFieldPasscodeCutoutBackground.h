/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextFieldBackgroundView.h>

@class CAShapeLayer, UIBezierPath;

@interface _UITextFieldPasscodeCutoutBackground : UITextFieldBackgroundView {

	bool _customStrokeColor;
	bool _customFillColor;
	CAShapeLayer* _lighteningOutline;
	double _outlineAlpha;
	double _cornerRadius;

}

@property (assign,nonatomic) double outlineAlpha; 
@property (assign,nonatomic) double cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) UIBezierPath * customPath; 
+(Class)layerClass;
+(id)_strokeColor:(bool)arg1 ;
+(id)_fillColor:(bool)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(bool)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)_layer;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
-(void)setActive:(bool)arg1 ;
-(void)setEnabled:(bool)arg1 animated:(bool)arg2 ;
-(id)initWithFrame:(CGRect)arg1 active:(bool)arg2 ;
-(id)fillColor;
-(id)_strokeColor:(bool)arg1 ;
-(id)strokeColor;
-(id)_fillColor:(bool)arg1 ;
-(void)_updatePath;
-(void)setLineWidth:(double)arg1 updatePath:(bool)arg2 ;
-(double)_pathInset;
-(double)_pixelAlignment;
-(void)_updateLightingOutlinePath;
-(id)customPath;
-(void)setOutlineAlpha:(double)arg1 ;
-(double)outlineAlpha;
@end
