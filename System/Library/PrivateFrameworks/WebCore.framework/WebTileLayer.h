/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WebTileLayer : CALayer {

	TileController* _tileController;
	unsigned _paintCount;

}
-(id)actionForKey:(id)arg1 ;
-(unsigned)paintCount;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setTileController:(TileController*)arg1 ;
-(void)resetPaintCount;
-(unsigned)incrementPaintCount;
-(void)logFilledFreshTile;
@end

