/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WebCache : NSObject
+(CGImageRef)imageForURL:(id)arg1 ;
+(void)removeImageFromCacheForURL:(id)arg1 ;
+(void)initialize;
+(void)setDisabled:(bool)arg1 ;
+(bool)isDisabled;
+(id)statistics;
+(bool)addImageToCache:(CGImageRef)arg1 forURL:(id)arg2 forFrame:(id)arg3 ;
+(void)removeImageFromCacheForURL:(id)arg1 forFrame:(id)arg2 ;
+(void)empty;
+(void)emptyInMemoryResources;
+(void)sizeOfDeadResources:(int*)arg1 ;
+(void)clearCachedCredentials;
+(bool)addImageToCache:(CGImageRef)arg1 forURL:(id)arg2 ;
@end

