/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:35 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIFont;

@interface TopoNumberBadge : CALayer {

	id _owningView;
	long long _count;
	CGSize _imageSize;
	CGSize _textSize;
	UIFont* _font;

}

@property (assign,nonatomic) id owningView; 
@property (assign,nonatomic) long long count;              //@synthesize count=_count - In the implementation block
+(int)initImageCache;
+(void)deallocImageCache;
+(id)imageBadgeForCount:(long long)arg1 ;
-(void)dealloc;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(void)setOwningView:(id)arg1 ;
-(CGSize)preferredFrameSize;
-(id)initWithOwningView:(id)arg1 ;
-(id)owningView;
-(void)calculateBadgeMetrics;
-(CGImageRef)newNumberBadge;
-(void)layoutSublayers;
@end
