/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class NSString, SKBitmapFont, NSMutableArray, UIColor, SKSpriteNode;

@interface SKLabelNode : SKNode {

	float _fontSize;
	SCD_Struct_SK7 _fontColor;
	NSString* _fontName;
	NSString* _text;
	SKBitmapFont* _bmf;
	NSMutableArray* _textSprites;
	UIColor* _labelColor;
	float _labelColorBlend;
	long long _labelBlendMode;
	SKSpriteNode* _textSprite;
	long long _horizontalAlignmentMode;
	long long _verticalAlignmentMode;
	CGRect _textRect;

}

@property (assign,nonatomic) long long verticalAlignmentMode; 
@property (assign,nonatomic) long long horizontalAlignmentMode; 
@property (nonatomic,copy) NSString * fontName; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) double fontSize; 
@property (nonatomic,retain) UIColor * fontColor; 
@property (assign,nonatomic) double colorBlendFactor; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) long long blendMode; 
+(id)_labelNodeWithFontNamed:(id)arg1 ;
+(id)_labelNodeWithFontTexture:(id)arg1 fontDataString:(id)arg2 ;
+(id)labelNodeWithFontNamed:(id)arg1 ;
-(double)colorBlendFactor;
-(void)setColorBlendFactor:(double)arg1 ;
-(id)nodeAtPoint:(CGPoint)arg1 recursive:(bool)arg2 ;
-(void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2 ;
-(void)_flippedChangedFrom:(bool)arg1 to:(bool)arg2 ;
-(id)nodeAtPoint:(CGPoint)arg1 ;
-(id)childrenInRect:(CGRect)arg1 ;
-(void)createSpritesForText;
-(id)initWithFontNamed:(id)arg1 ;
-(long long)horizontalAlignmentMode;
-(long long)verticalAlignmentMode;
-(void)createBitmapSpritesForText;
-(void)setVerticalAlignmentMode:(long long)arg1 ;
-(void)setHorizontalAlignmentMode:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copy;
-(CGRect)frame;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)color;
-(id)fontName;
-(void)setColor:(id)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(id).cxx_construct;
-(void)setFontName:(id)arg1 ;
-(void).cxx_destruct;
-(double)fontSize;
-(void)_initialize;
-(long long)blendMode;
-(void)setBlendMode:(long long)arg1 ;
-(id)fontColor;
-(void)setFontColor:(id)arg1 ;
@end
