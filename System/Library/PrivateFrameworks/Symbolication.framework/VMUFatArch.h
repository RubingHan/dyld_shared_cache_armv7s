/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VMUMemory;
@interface VMUFatArch : NSObject {

	unsigned _fileOffset;
	unsigned _size;
	unsigned _alignment;
	<VMUMemory>* _memory;

}
+(id)fatArchWithMemory:(id)arg1 memoryView:(id)arg2 ;
+(id)fatArchWithMemory:(id)arg1 fileOffset:(unsigned)arg2 size:(unsigned)arg3 alignment:(unsigned)arg4 ;
-(void)dealloc;
-(unsigned)size;
-(unsigned)alignment;
-(id)architecture;
-(id)memory;
-(id)initWithMemory:(id)arg1 memoryView:(id)arg2 ;
-(id)initWithMemory:(id)arg1 fileOffset:(unsigned)arg2 size:(unsigned)arg3 alignment:(unsigned)arg4 ;
-(unsigned)fileOffset;
@end
