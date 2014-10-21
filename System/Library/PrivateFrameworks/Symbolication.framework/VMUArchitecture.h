/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@interface VMUArchitecture : NSObject <NSCoding, NSCopying> {

	int _cpuType;
	int _cpuSubtype;

}
+(void)initialize;
+(id)currentArchitecture;
+(id)anyArchitecture;
+(id)ppcArchitecture;
+(id)ppc32Architecture;
+(id)ppc64Architecture;
+(id)i386Architecture;
+(id)x86_32Architecture;
+(id)x86_64Architecture;
+(id)armArchitecture;
+(id)architectureWithCpuType:(int)arg1 cpuSubtype:(int)arg2 ;
-(VMURange)commpageAddressRange;
-(VMURange)objcpageAddressRange;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithCpuType:(int)arg1 cpuSubtype:(int)arg2 ;
-(bool)isLittleEndian;
-(bool)is64Bit;
-(int)cpuType;
-(int)cpuSubtype;
-(bool)isEqualToArchitecture:(id)arg1 ;
-(bool)is32Bit;
-(bool)isBigEndian;
-(bool)matchesArchitecture:(id)arg1 ;
@end
