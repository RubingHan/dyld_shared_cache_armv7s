/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:28 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@class NSData, NSDate, NSString;

@interface NSPageData : NSData {

	NSData* data;
	NSDate* _originalFileModDate;
	NSString* _originalFilePath;

}
+(long long)_umask;
+(void)initialize;
-(unsigned long long)writeFile:(id)arg1 ;
-(unsigned long long)writeFd:(long long)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)_setOriginalFileInfoFromFileAttributes:(id)arg1 ;
-(id)initWithContentsOfMappedFile:(id)arg1 withFileAttributes:(id)arg2 ;
-(id)_mappedFile;
-(unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(bool)arg4 hardLinkPath:(id)arg5 ;
-(id)initFromSerializerStream:(id)arg1 length:(unsigned long long)arg2 ;
-(id)deserializer;
-(void)dealloc;
-(id)init;
-(unsigned long long)length;
-(const void*)bytes;
-(id)data;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithDataNoCopy:(id)arg1 ;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
@end
