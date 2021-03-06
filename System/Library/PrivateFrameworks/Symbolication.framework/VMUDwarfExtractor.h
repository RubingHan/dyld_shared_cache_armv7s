/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/VMUSymbolExtractor.h>

@protocol VMUMemory;
@class NSMutableDictionary, VMUMachOHeader;

@interface VMUDwarfExtractor : VMUSymbolExtractor {

	bool _shouldUseTaskBasedAddresses;
	NSMutableDictionary* _abbrevDicts;
	<VMUMemory>* _infoMem;
	<VMUMemory>* _abbrevMem;
	<VMUMemory>* _lineMem;
	<VMUMemory>* _strMem;
	VMUMachOHeader* _hdr;

}
+(unsigned long long)constantClassAttributeWithMemoryView:(id)arg1 form:(unsigned long long)arg2 ;
+(id)dwarfExtractorWithMachOHeader:(id)arg1 ;
-(void)dealloc;
-(id)initWithMachOHeader:(id)arg1 ;
-(void)parseCompilationUnitWithMemoryView:(id)arg1 withHeader:(id)arg2 ;
-(id)parseAbbrevDictionaryAtOffset:(unsigned)arg1 ;
-(void)parseLineNumberMatrixAtOffset:(unsigned long long)arg1 withBaseDirectory:(id)arg2 withWordSize:(unsigned char)arg3 ;
@end

