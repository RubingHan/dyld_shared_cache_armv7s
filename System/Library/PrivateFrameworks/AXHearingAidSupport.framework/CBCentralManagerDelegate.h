/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CBCentralManagerDelegate <NSObject>
@optional
-(void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;
-(void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2;
-(void)centralManager:(id)arg1 willRestoreState:(id)arg2;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;

@required
-(void)centralManagerDidUpdateState:(id)arg1;
@end

