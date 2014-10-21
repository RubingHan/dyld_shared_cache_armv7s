/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFileHandle.h>

@interface NSNullFileHandle : NSFileHandle
-(id)availableData;
-(id)readDataToEndOfFile;
-(unsigned long long)offsetInFile;
-(void)truncateFileAtOffset:(unsigned long long)arg1 ;
-(void)synchronizeFile;
-(/*^block*/ id)writeabilityHandler;
-(void)setWriteabilityHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)readabilityHandler;
-(void)setReadabilityHandler:(/*^block*/ id)arg1 ;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(unsigned long long)seekToEndOfFile;
-(int)fileDescriptor;
-(void)seekToFileOffset:(unsigned long long)arg1 ;
-(void)writeData:(id)arg1 ;
-(void)closeFile;
@end
