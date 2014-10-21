/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:45 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libAWDProtobufWifi.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobufWifi.dylib/libAWDProtobufWifi.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@interface AWDWiFiMetricHotspotTransportType : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _bt;
	unsigned _usb;
	unsigned _wifi;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) bool hasWifi; 
@property (assign,nonatomic) unsigned wifi;                             //@synthesize wifi=_wifi - In the implementation block
@property (assign,nonatomic) bool hasBt; 
@property (assign,nonatomic) unsigned bt;                               //@synthesize bt=_bt - In the implementation block
@property (assign,nonatomic) bool hasUsb; 
@property (assign,nonatomic) unsigned usb;                              //@synthesize usb=_usb - In the implementation block
@property (assign,nonatomic) bool hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(bool)readFrom:(id)arg1 ;
-(void)setUsb:(unsigned)arg1 ;
-(unsigned)usb;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(bool)arg1 ;
-(bool)hasTimestamp;
-(void)setWifi:(unsigned)arg1 ;
-(void)setHasWifi:(bool)arg1 ;
-(bool)hasWifi;
-(void)setBt:(unsigned)arg1 ;
-(void)setHasBt:(bool)arg1 ;
-(bool)hasBt;
-(void)setHasUsb:(bool)arg1 ;
-(bool)hasUsb;
-(unsigned)wifi;
-(unsigned)bt;
@end
