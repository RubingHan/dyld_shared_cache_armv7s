/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libAWDProtobufMMCS.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobufMMCS.dylib/libAWDProtobufMMCS.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDMMCSError : PBCodable <NSCopying> {

	int _code;
	NSString* _domain;
	NSMutableArray* _underlyingErrors;
	SCD_Struct_AW6 _has;

}

@property (nonatomic,readonly) bool hasDomain; 
@property (nonatomic,retain) NSString * domain;                              //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) bool hasCode; 
@property (assign,nonatomic) int code;                                       //@synthesize code=_code - In the implementation block
@property (nonatomic,retain) NSMutableArray * underlyingErrors;              //@synthesize underlyingErrors=_underlyingErrors - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)domain;
-(int)code;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDomain:(id)arg1 ;
-(bool)readFrom:(id)arg1 ;
-(bool)hasDomain;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCode:(int)arg1 ;
-(void)setUnderlyingErrors:(id)arg1 ;
-(void)addUnderlyingErrors:(id)arg1 ;
-(unsigned long long)underlyingErrorsCount;
-(void)clearUnderlyingErrors;
-(id)underlyingErrorsAtIndex:(unsigned long long)arg1 ;
-(void)setHasCode:(bool)arg1 ;
-(bool)hasCode;
-(id)underlyingErrors;
@end

