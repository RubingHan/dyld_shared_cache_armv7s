/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEODirectionsRequest.h>

@interface GEODirectionsRouteRequest : GEODirectionsRequest {

	unsigned short _providerID;

}

@property (assign,nonatomic) unsigned short providerID;              //@synthesize providerID=_providerID - In the implementation block
-(id)initWithDeparture:(double)arg1 ;
-(id)initWithOrigin:(id)arg1 andDestination:(id)arg2 departure:(double)arg3 ;
-(id)initWithZilch:(id)arg1 departure:(double)arg2 ;
-(id)initWithRoutineRoute:(id)arg1 ;
-(void)fetchDirectionsWithCompletion:(/*^block*/ id)arg1 ;
-(void)_commonSetup:(id)arg1 ;
-(id)initWithDirectionsRequest:(id)arg1 withFeedback:(id)arg2 ;
-(id)initWithQuickETARequest:(id)arg1 withFeedback:(id)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(Class)responseClass;
-(unsigned short)providerID;
-(id)initWithFeedback:(id)arg1 ;
-(void)setProviderID:(unsigned short)arg1 ;
@end
