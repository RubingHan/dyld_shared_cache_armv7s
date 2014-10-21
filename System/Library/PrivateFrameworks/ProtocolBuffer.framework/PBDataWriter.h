/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableData;

@interface PBDataWriter : NSObject {

	NSMutableData* _data;

}
-(unsigned long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)init;
-(id)data;
-(void)writeDouble:(double)arg1 forTag:(unsigned short)arg2 ;
-(void)writeSfixed32:(int)arg1 forTag:(unsigned short)arg2 ;
-(void)writeInt64:(long long)arg1 forTag:(unsigned short)arg2 ;
-(void)writeBigEndianFixed16:(unsigned short)arg1 ;
-(void)writeBigEndianShortThenString:(id)arg1 ;
-(void)writeSfixed64:(long long)arg1 forTag:(unsigned short)arg2 ;
-(void)writeUint8:(unsigned char)arg1 ;
-(void)writeBigEndianFixed32:(unsigned)arg1 ;
-(void)writeProtoBuffer:(id)arg1 ;
-(void)writeInt8:(BOOL)arg1 ;
-(void)writeSint64:(long long)arg1 forTag:(unsigned short)arg2 ;
-(void)writeFixed64:(unsigned long long)arg1 forTag:(unsigned short)arg2 ;
-(void)writeData:(id)arg1 forTag:(unsigned short)arg2 ;
-(void)writeUint32:(unsigned)arg1 forTag:(unsigned short)arg2 ;
-(void)writeTag:(unsigned short)arg1 andType:(unsigned char)arg2 ;
-(void)writeBareVarint:(unsigned long long)arg1 ;
-(void)writeString:(id)arg1 forTag:(unsigned short)arg2 ;
-(void)writeBOOL:(bool)arg1 forTag:(unsigned short)arg2 ;
-(void)writeFixed32:(unsigned)arg1 forTag:(unsigned short)arg2 ;
-(void)writeFloat:(float)arg1 forTag:(unsigned short)arg2 ;
-(void)writeInt32:(int)arg1 forTag:(unsigned short)arg2 ;
-(void)writeSint32:(int)arg1 forTag:(unsigned short)arg2 ;
-(bool)writeData:(id)arg1 ;
-(void)writeUint64:(unsigned long long)arg1 forTag:(unsigned short)arg2 ;
@end
