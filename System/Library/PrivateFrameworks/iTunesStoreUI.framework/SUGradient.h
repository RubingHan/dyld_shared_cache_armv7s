/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, NSLock, NSArray;

@interface SUGradient : NSObject <NSCoding, NSCopying> {

	NSMutableArray* _colorStops;
	NSLock* _lock;
	SUGradientPoint _p0;
	SUGradientPoint _p1;
	bool _sorted;
	long long _type;

}

@property (readonly) long long gradientType; 
@property (readonly) SUGradientPoint p0; 
@property (readonly) SUGradientPoint p1; 
@property (readonly) NSArray * colorStopColors; 
@property (readonly) NSArray * colorStopOffsets; 
@property (readonly) long long numberOfColorStops; 
+(id)gradientWithColor:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(id)initWithPropertyList:(id)arg1 ;
-(long long)numberOfColorStops;
-(id)colorStopColors;
-(void)addColorStopWithOffset:(double)arg1 color:(CGColorRef)arg2 ;
-(CGShadingRef)copyShading;
-(id)initWithPoint0:(SUGradientPoint)arg1 point1:(SUGradientPoint)arg2 type:(long long)arg3 ;
-(id)newPatternColorWithSize:(CGSize)arg1 opaque:(bool)arg2 ;
-(long long)gradientType;
-(CGGradientRef)copyCGGradient;
-(SUGradientPoint)p0;
-(SUGradientPoint)p1;
-(id)colorStopOffsets;
@end

