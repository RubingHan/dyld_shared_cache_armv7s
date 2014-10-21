/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:50 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADColor.h>

@class OADColor;

@interface OADAdjustedColor : OADColor {

	OADColor* mBaseColor;
	int mAdjustmentType;
	unsigned char mAdjustmentParam;
	bool mInvert;
	bool mInvert128;
	bool mGray;

}
-(bool)invert;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithBaseColor:(id)arg1 adjustmentType:(int)arg2 adjustmentParam:(unsigned char)arg3 invert:(bool)arg4 invert128:(bool)arg5 gray:(bool)arg6 ;
-(id)baseColor;
-(bool)gray;
-(unsigned char)adjustmentParam;
-(bool)invert128;
-(int)adjustmentType;
@end
