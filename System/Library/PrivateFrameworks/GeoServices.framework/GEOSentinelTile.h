/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface GEOSentinelTile : PBCodable <NSCopying> {

	NSString* _resourceName;
	int _type;

}

@property (assign,nonatomic) int type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * resourceName;              //@synthesize resourceName=_resourceName - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(id)resourceName;
-(void)setResourceName:(id)arg1 ;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
