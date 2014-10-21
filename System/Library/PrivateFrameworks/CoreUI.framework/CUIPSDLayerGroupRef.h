/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDLayerBaseRef.h>

@class _CUIPSDSublayerInfo;

@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef {

	_CUIPSDSublayerInfo* _sublayerInfo;

}
-(bool)isOpen;
-(void)dealloc;
-(CGRect)bounds;
-(id)initWithImageRef:(id)arg1 layerIndex:(unsigned)arg2 ;
-(id)layerRefAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfLayers;
-(id)layerNames;
-(bool)isLayerGroup;
@end
