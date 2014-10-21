/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoBoothEffects/PhotoBoothEffects-Structs.h>
#import <PhotoBoothEffects/PBContext.h>

@class EAGLContext, CIContext;

@interface PBCoreImageContext : PBContext {

	EAGLContext* _glesContext;
	CVOpenGLESTextureCacheRef _textureCache;
	CVBufferRef _inputTexture;
	CVBufferRef _outputTexture;
	CVPixelBufferPoolRef _smallPool;
	CVPixelBufferPoolRef _largePool;
	CGSize _smallPoolSize;
	CGSize _largePoolSize;
	CAImageQueueRef _outputImageQueue;
	CIContext* _ciContext;
	CVBufferRef _inputPixelBuffer;
	CVBufferRef _outputPixelBuffer;
	bool _render9Up;
	bool _renderForSave;
	CGSize _outputSize;

}
-(void)_createPixelBuffer:(_CVBuffer*)arg1 withSize:(CGSize)arg2 ;
-(id)ciContext;
-(CGSize)outputSize;
-(void)setOutputSize:(CGSize)arg1 ;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(CVBufferRef)inputPixelBuffer;
-(unsigned)inputTexture;
-(bool)renderForSave;
-(CVBufferRef)outputPixelBuffer;
-(bool)render9Up;
-(unsigned)outputTexture;
-(CVBufferRef)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 mirrored:(bool)arg3 ;
-(void)renderFilter:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 ;
-(void)renderFilter:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 mirrored:(bool)arg3 ;
-(void)renderNineUp:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 ;
-(void)renderNineUp:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 mirrored:(bool)arg3 ;
-(CAImageQueueRef)outputImageQueue;
-(void)setOutputImageQueue:(CAImageQueueRef)arg1 ;
-(CVPixelBufferPoolRef)largePool;
-(void)setLargePool:(CVPixelBufferPoolRef)arg1 ;
-(CVPixelBufferPoolRef)smallPool;
-(void)setSmallPool:(CVPixelBufferPoolRef)arg1 ;
-(void)setInputPixelBuffer:(CVBufferRef)arg1 mapTexture:(bool)arg2 ;
-(void)setOutputPixelBuffer:(CVBufferRef)arg1 mapTexture:(bool)arg2 ;
-(void)setInputPixelBuffer:(CVBufferRef)arg1 ;
-(void)setRender9Up:(bool)arg1 ;
-(void)setRenderForSave:(bool)arg1 ;
-(void)setOutputPixelBuffer:(CVBufferRef)arg1 ;
@end
