/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@interface GEOVLaneConnection : PBCodable {

	unsigned _firstLaneIndex;
	unsigned _firstRoadIndex;
	unsigned _secondLaneIndex;
	unsigned _secondRoadIndex;

}

@property (assign,nonatomic) unsigned firstRoadIndex;               //@synthesize firstRoadIndex=_firstRoadIndex - In the implementation block
@property (assign,nonatomic) unsigned firstLaneIndex;               //@synthesize firstLaneIndex=_firstLaneIndex - In the implementation block
@property (assign,nonatomic) unsigned secondRoadIndex;              //@synthesize secondRoadIndex=_secondRoadIndex - In the implementation block
@property (assign,nonatomic) unsigned secondLaneIndex;              //@synthesize secondLaneIndex=_secondLaneIndex - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned)firstRoadIndex;
-(void)setFirstRoadIndex:(unsigned)arg1 ;
-(unsigned)firstLaneIndex;
-(void)setFirstLaneIndex:(unsigned)arg1 ;
-(unsigned)secondRoadIndex;
-(void)setSecondRoadIndex:(unsigned)arg1 ;
-(unsigned)secondLaneIndex;
-(void)setSecondLaneIndex:(unsigned)arg1 ;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
