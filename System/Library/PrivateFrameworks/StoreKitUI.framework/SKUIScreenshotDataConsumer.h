/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>

@interface SKUIScreenshotDataConsumer : SKUIImageDataConsumer {

	bool _forcesPortrait;
	CGSize _screenshotSize;

}

@property (assign,nonatomic) bool forcesPortrait;                  //@synthesize forcesPortrait=_forcesPortrait - In the implementation block
@property (nonatomic,readonly) CGSize constraintSize;              //@synthesize screenshotSize=_screenshotSize - In the implementation block
+(id)consumerWithScreenshotSize:(CGSize)arg1 ;
-(id)imageForColor:(id)arg1 size:(CGSize)arg2 ;
-(id)imageForImage:(id)arg1 ;
-(bool)forcesPortrait;
-(void)setForcesPortrait:(bool)arg1 ;
-(CGSize)constraintSize;
-(id)imageForColor:(id)arg1 ;
@end

