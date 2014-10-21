/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOLocation;

@interface GEOQuickETAResponse : NSObject {

	GEOLocation* _sourceLocation;
	GEOLocation* _destinationLocation;
	unsigned _liveETASeconds;
	unsigned _historicalETASeconds;
	unsigned _distance;

}

@property (nonatomic,readonly) GEOLocation * sourceLocation;                   //@synthesize sourceLocation=_sourceLocation - In the implementation block
@property (nonatomic,readonly) GEOLocation * destinationLocation;              //@synthesize destinationLocation=_destinationLocation - In the implementation block
@property (nonatomic,readonly) unsigned liveETASeconds;                        //@synthesize liveETASeconds=_liveETASeconds - In the implementation block
@property (nonatomic,readonly) unsigned historicalETASeconds;                  //@synthesize historicalETASeconds=_historicalETASeconds - In the implementation block
@property (nonatomic,readonly) unsigned distance;                              //@synthesize distance=_distance - In the implementation block
-(void)dealloc;
-(id)initWithETAResult:(id)arg1 fromRequest:(id)arg2 ;
-(id)initWithDirectionsResponse:(id)arg1 fromRequest:(id)arg2 ;
-(unsigned)liveETASeconds;
-(unsigned)historicalETASeconds;
-(id)sourceLocation;
-(id)destinationLocation;
-(unsigned)distance;
@end
