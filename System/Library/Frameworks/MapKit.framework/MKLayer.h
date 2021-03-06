/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <QuartzCore/CALayer.h>

@interface MKLayer : CALayer {

	CGRect _hitBounds;
	CGPoint _hitOffset;
	CGPoint _hitOutset;

}

@property (assign,nonatomic) CGPoint hitOffset;               //@synthesize hitOffset=_hitOffset - In the implementation block
@property (assign,nonatomic) CGPoint hitOutset;               //@synthesize hitOutset=_hitOutset - In the implementation block
@property (nonatomic,readonly) CGRect hitBounds;              //@synthesize hitBounds=_hitBounds - In the implementation block
-(void)setHitOffset:(CGPoint)arg1 ;
-(void)setHitOutset:(CGPoint)arg1 ;
-(CGRect)hitBounds;
-(CGPoint)hitOffset;
-(CGPoint)hitOutset;
-(void)setBounds:(CGRect)arg1 ;
-(bool)containsPoint:(CGPoint)arg1 ;
@end

