/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKLabelMarkerFeatureHandle : NSObject {

	int _featureType;
	int _featureIndex;
	int _tileX;
	int _tileY;
	int _tileZ;

}
-(id)initWithFeature:(SCD_Struct_VK59*)arg1 ;
-(int)featureType;
-(int)featureIndex;
-(int)tileX;
-(int)tileY;
-(int)tileZ;
@end
