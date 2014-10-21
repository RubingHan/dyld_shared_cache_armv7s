/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <PhysicsKit/PKPhysicsField.h>

@interface PKPhysicsFieldRadialGravity : PKPhysicsField

@property (assign,nonatomic) bool isTangential; 
@property (assign,nonatomic) CGPoint offset; 
@property (assign,nonatomic) double minRadius; 
+(id)fieldWithRadialGravity:(CGPoint)arg1 strength:(double)arg2 ;
+(id)fieldWithRadialGravity:(CGPoint)arg1 strength:(double)arg2 minRadius:(double)arg3 ;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(id)initWithRadialGravity:(CGPoint)arg1 strength:(double)arg2 minRadius:(double)arg3 ;
-(bool)isTangential;
-(void)setIsTangential:(bool)arg1 ;
-(double)minRadius;
-(void)setMinRadius:(double)arg1 ;
@end
