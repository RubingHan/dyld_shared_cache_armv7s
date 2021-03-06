/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
#import <ScreenReaderOutputServer/SCROIOElement.h>
#import <ScreenReaderOutput/SCROIOHIDElementProtocol.h>

@interface SCROIOHIDElement : SCROIOElement <SCROIOHIDElementProtocol> {

	IOHIDDeviceRef _hidDevice;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(int)transport;
-(id)initWithIOObject:(unsigned)arg1 ;
-(IOHIDDeviceRef)hidDevice;
@end

