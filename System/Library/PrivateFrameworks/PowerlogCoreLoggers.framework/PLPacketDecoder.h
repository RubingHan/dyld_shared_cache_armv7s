/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PowerlogCoreLoggers/PowerlogCoreLoggers-Structs.h>
@interface PLPacketDecoder : NSObject
-(id)decodePacket:(CFDataRef)arg1 ;
-(id)tcpParse:(CFDataRef)arg1 offset:(unsigned char)arg2 ;
-(id)udpParse:(CFDataRef)arg1 offset:(unsigned char)arg2 ;
@end
