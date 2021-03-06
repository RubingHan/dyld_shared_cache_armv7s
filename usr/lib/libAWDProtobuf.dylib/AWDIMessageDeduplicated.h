/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libAWDProtobuf.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobuf.dylib/libAWDProtobuf.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface AWDIMessageDeduplicated : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _deduplicationInterval;
	NSString* _guid;
	SCD_Struct_AW1 _has;

}

@property (nonatomic,readonly) bool hasGuid; 
@property (nonatomic,retain) NSString * guid;                             //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) bool hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) bool hasDeduplicationInterval; 
@property (assign,nonatomic) unsigned deduplicationInterval;              //@synthesize deduplicationInterval=_deduplicationInterval - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(id)guid;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setGuid:(id)arg1 ;
-(bool)hasGuid;
-(void)setHasTimestamp:(bool)arg1 ;
-(bool)hasTimestamp;
-(void)setDeduplicationInterval:(unsigned)arg1 ;
-(void)setHasDeduplicationInterval:(bool)arg1 ;
-(bool)hasDeduplicationInterval;
-(unsigned)deduplicationInterval;
@end

