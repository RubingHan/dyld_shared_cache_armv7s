/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class UIColor;

@interface SKShapeNode : SKNode {

	SKCShapeSprite* ss;

}

@property (assign,nonatomic) CGPathRef path; 
@property (nonatomic,retain) UIColor * strokeColor; 
@property (nonatomic,retain) UIColor * fillColor; 
@property (assign,nonatomic) long long blendMode; 
@property (assign,getter=isAntialiased,nonatomic) bool antialiased; 
@property (assign,nonatomic) double lineWidth; 
@property (assign,nonatomic) double glowWidth; 
@property (assign,nonatomic) double renderQualityRatio; 
-(CGRect)calculateAccumulatedFrame;
-(void)setAntialiased:(bool)arg1 ;
-(void)setGlowWidth:(double)arg1 ;
-(bool)isAntialiased;
-(double)renderQualityRatio;
-(void)setRenderQualityRatio:(double)arg1 ;
-(double)glowWidth;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(CGRect)frame;
-(id)description;
-(CGPathRef)path;
-(id)copyWithZone:(NSZone)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
-(id)fillColor;
-(id)strokeColor;
-(void)setPath:(CGPathRef)arg1 ;
-(bool)fillPath;
-(void)setFillPath:(bool)arg1 ;
-(long long)blendMode;
-(void)setBlendMode:(long long)arg1 ;
@end

