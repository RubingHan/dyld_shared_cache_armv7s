/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CALayerHost : CALayer

@property (assign) unsigned contextId; 
+(bool)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(bool)_hasRenderLayerSubclass;
-(void)layerDidBecomeVisible:(bool)arg1 ;
-(bool)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(unsigned)contextId;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setContextId:(unsigned)arg1 ;
@end

