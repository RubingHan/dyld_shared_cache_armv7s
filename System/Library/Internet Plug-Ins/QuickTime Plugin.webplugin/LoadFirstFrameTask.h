/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Internet Plug-Ins/QuickTime Plugin.webplugin/QuickTime Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickTime Plugin/FPVTask.h>

@class AVAsset, AVAssetImageGenerator, UIImage;

@interface LoadFirstFrameTask : FPVTask {

	AVAsset* _avAsset;
	AVAssetImageGenerator* _generator;
	UIImage* _resultImage;

}

@property (readonly) UIImage * resultImage;              //@synthesize resultImage=_resultImage - In the implementation block
-(void)dealloc;
-(void)cancel;
-(void)start;
-(id)initWithAsset:(id)arg1 ;
-(id)resultImage;
-(void)cleanupGenerator;
@end

