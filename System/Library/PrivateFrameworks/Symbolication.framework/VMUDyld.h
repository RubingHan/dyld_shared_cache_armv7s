/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class VMUMachOHeader, NSArray;

@interface VMUDyld : NSObject {

	VMUMachOHeader* _dyldMachOHeader;
	NSArray* _machOHeaders;

}
+(id)nativeSharedCachePath;
+(id)nativeSharedCacheTimestamp;
+(id)dyldWithMachOHeader:(id)arg1 memory:(id)arg2 ;
-(void)dealloc;
-(id)name;
-(id)initWithMachOHeader:(id)arg1 memory:(id)arg2 ;
-(id)findMachOHeadersInMemory:(id)arg1 ;
-(id)machOHeaders;
@end

