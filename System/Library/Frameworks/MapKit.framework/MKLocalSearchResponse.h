/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSArray;

@interface MKLocalSearchResponse : NSObject {

	NSArray* _mapItems;
	SCD_Struct_MK2 _boundingRegion;

}

@property (nonatomic,readonly) NSArray * mapItems;                         //@synthesize mapItems=_mapItems - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MK2 boundingRegion;              //@synthesize boundingRegion=_boundingRegion - In the implementation block
-(SCD_Struct_MK2)boundingRegion;
-(id)_initWithGEOSearchResponse:(id)arg1 ;
-(id)description;
-(void).cxx_destruct;
-(id)_dictionaryRepresentation;
-(id)mapItems;
@end

