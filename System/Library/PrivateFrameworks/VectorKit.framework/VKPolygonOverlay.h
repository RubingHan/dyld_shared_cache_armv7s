/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKMultiPointOverlay.h>
#import <VectorKit/VKOverlay.h>

@class NSArray, GEOMapRegion;

@interface VKPolygonOverlay : VKMultiPointOverlay <VKOverlay> {

	NSArray* _interiorPolygons;

}

@property (readonly) NSArray * interiorPolygons;                              //@synthesize interiorPolygons=_interiorPolygons - In the implementation block
@property (nonatomic,readonly) CGPoint coordinate; 
@property (nonatomic,readonly) GEOMapRegion * boundingMapRegion; 
+(id)polygonWithCoordinates:(CGPoint*)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3 ;
+(id)polygonWithCoordinates:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)interiorPolygons;
@end

