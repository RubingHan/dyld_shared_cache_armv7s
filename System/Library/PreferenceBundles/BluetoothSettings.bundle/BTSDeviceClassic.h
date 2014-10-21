/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BluetoothSettings/BTSDevice.h>

@class BluetoothDevice;

@interface BTSDeviceClassic : BTSDevice {

	BluetoothDevice* _device;

}

@property (nonatomic,readonly) BluetoothDevice * device;              //@synthesize device=_device - In the implementation block
+(id)deviceWithDevice:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(id)identifier;
-(bool)connect;
-(void)disconnect;
-(id)device;
-(id)classicDevice;
-(void)unpair;
-(bool)paired;
-(bool)connected;
@end
