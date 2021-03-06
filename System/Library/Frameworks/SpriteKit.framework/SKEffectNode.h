/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SKNode.h>

@class CIFilter;

@interface SKEffectNode : SKNode

@property (nonatomic,retain) CIFilter * filter; 
@property (assign,nonatomic) bool shouldCenterFilter; 
@property (assign,nonatomic) bool shouldEnableEffects; 
@property (assign,nonatomic) bool shouldRasterize; 
@property (assign,nonatomic) long long blendMode; 
-(void)setShouldEnableEffects:(bool)arg1 ;
-(void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2 ;
-(void)_flippedChangedFrom:(bool)arg1 to:(bool)arg2 ;
-(bool)shouldEnableEffects;
-(bool)shouldCenterFilter;
-(void)setShouldCenterFilter:(bool)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setFilter:(id)arg1 ;
-(void)setShouldRasterize:(bool)arg1 ;
-(bool)shouldRasterize;
-(long long)blendMode;
-(void)setBlendMode:(long long)arg1 ;
-(id)filter;
@end

