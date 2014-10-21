/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:52 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADEffect.h>

@class OADColor;

@interface OADShadowEffect : OADEffect {

	OADColor* mColor;
	float mBlurRadius;
	float mDistance;
	float mAngle;

}
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(float)blurRadius;
-(void)setBlurRadius:(float)arg1 ;
-(id)initWithType:(int)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setAngle:(float)arg1 ;
-(float)angle;
-(void)setDistance:(float)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(id)initWithShadowEffect:(id)arg1 type:(int)arg2 ;
-(float)distance;
@end
