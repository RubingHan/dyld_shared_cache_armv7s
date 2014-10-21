/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageCapture/ImageCapture-Structs.h>
#import <ImageCapture/ICCameraFile.h>

@class NSString;

@interface ExFATCameraFile : ICCameraFile {

	void* _exFATCameraFileProperties;

}

@property (readonly) id object; 
@property (readonly) timespec fsCreationTime; 
@property (readonly) timespec fsModificationTime; 
@property (readonly) long long fsSize; 
@property (assign) unsigned type; 
@property (copy) NSString * exifCreationDateTime; 
@property (copy) NSString * exifModificationDateTime; 
@property (assign) int thmSize; 
@property (assign) int thmOffset; 
@property (assign) int thmWidth; 
@property (assign) int thmHeight; 
@property (assign) int imgWidth; 
@property (assign) int imgHeight; 
@property (assign) int bitsPerPixel; 
@property (assign) bool updatedBasicMetadata; 
-(void)dealloc;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)object;
-(id)thumbData;
-(id)metadataDict;
-(int)writeDataToFile:(int)arg1 fromOffset:(long long)arg2 ofLength:(long long*)arg3 ;
-(void)updateBasicMetadata;
-(id)exifCreationDateTime;
-(id)exifModificationDateTime;
-(timespec)fsCreationTime;
-(long long)fsSize;
-(timespec)fsModificationTime;
-(int)thmSize;
-(int)thmOffset;
-(bool)updatedBasicMetadata;
-(void)setExifCreationDateTime:(id)arg1 ;
-(void)setExifModificationDateTime:(id)arg1 ;
-(void)setImgWidth:(int)arg1 ;
-(void)setImgHeight:(int)arg1 ;
-(void)setThmSize:(int)arg1 ;
-(void)setThmOffset:(int)arg1 ;
-(void)setThmWidth:(int)arg1 ;
-(void)setThmHeight:(int)arg1 ;
-(void)setUpdatedBasicMetadata:(bool)arg1 ;
-(int)thmWidth;
-(int)thmHeight;
-(int)imgWidth;
-(int)imgHeight;
-(int)bitsPerPixel;
-(void)setBitsPerPixel:(int)arg1 ;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 object:(id)arg4 fsCreationTime:(timespec)arg5 fsModificationTime:(timespec)arg6 fsSize:(long long)arg7 ;
-(id)fsStream;
-(long long)dpOffset;
-(void)setdpOffset:(long long)arg1 ;
-(CGDataProviderSequentialCallbacks*)dpCallbacks;
-(void)releaseProvider;
-(unsigned long long)getBytes:(void*)arg1 ofSize:(unsigned long long)arg2 ;
-(long long)skipBytes:(long long)arg1 ;
-(void)rewind;
-(void)finalize;
@end
