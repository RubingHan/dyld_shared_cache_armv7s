/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSString;

@interface VKMapMatch : NSObject {

	NSString* featureName;
	CGPoint coordinateOnFeature;
	double courseOnFeature;
	float distanceFromJunction;
	float junctionRadius;
	float roadWidth;

}

@property (nonatomic,readonly) NSString * featureName; 
@property (nonatomic,readonly) CGPoint coordinateOnFeature; 
@property (nonatomic,readonly) double courseOnFeature; 
@property (nonatomic,readonly) float distanceFromJunction; 
@property (nonatomic,readonly) float junctionRadius; 
@property (nonatomic,readonly) float roadWidth; 
-(void)dealloc;
-(id)description;
-(id).cxx_construct;
-(float)roadWidth;
-(id)initWithGEORoadFeature:(SCD_Struct_VK108*)arg1 pointOnFeature:(VKPoint)arg2 courseOnFeature:(float)arg3 distanceFromJunction:(float)arg4 junctionRadius:(float)arg5 roadWidth:(float)arg6 ;
-(id)featureName;
-(CGPoint)coordinateOnFeature;
-(double)courseOnFeature;
-(float)distanceFromJunction;
-(float)junctionRadius;
@end
