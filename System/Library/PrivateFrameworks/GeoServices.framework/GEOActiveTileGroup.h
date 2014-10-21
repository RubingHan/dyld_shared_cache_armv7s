/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOActiveTileGroup : PBCodable <NSCopying> {

	NSString* _addressCorrectionInitURL;
	NSString* _addressCorrectionUpdateURL;
	NSMutableArray* _attributions;
	NSString* _autocompleteURL;
	NSString* _batchReverseGeocoderURL;
	NSString* _directionsURL;
	NSString* _etaURL;
	NSString* _forwardGeocoderURL;
	unsigned _identifier;
	NSString* _locationShiftURL;
	NSString* _mapMatchURL;
	NSString* _polyLocationShiftURL;
	NSString* _problemCategoriesURL;
	NSString* _problemNotificationAvailabilityURL;
	NSString* _problemStatusURL;
	NSString* _problemSubmissionURL;
	NSMutableArray* _regionalResourceRegions;
	NSMutableArray* _regionalResourceTiles;
	NSString* _regionalResourcesURL;
	NSString* _releaseInfo;
	NSMutableArray* _resources;
	NSString* _resourcesURL;
	NSString* _reverseGeocoderURL;
	NSString* _reverseGeocoderVersionsURL;
	NSString* _searchAttributionManifestURL;
	NSString* _searchURL;
	NSString* _simpleETAURL;
	NSMutableArray* _tileSets;
	NSString* _uniqueIdentifier;
	NSString* _usageURL;

}

@property (assign,nonatomic) unsigned identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * tileSets;                                  //@synthesize tileSets=_tileSets - In the implementation block
@property (nonatomic,retain) NSMutableArray * resources;                                 //@synthesize resources=_resources - In the implementation block
@property (nonatomic,readonly) bool hasUniqueIdentifier; 
@property (nonatomic,retain) NSString * uniqueIdentifier;                                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;                              //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,retain) NSMutableArray * regionalResourceTiles;                     //@synthesize regionalResourceTiles=_regionalResourceTiles - In the implementation block
@property (nonatomic,retain) NSMutableArray * regionalResourceRegions;                   //@synthesize regionalResourceRegions=_regionalResourceRegions - In the implementation block
@property (nonatomic,readonly) bool hasRegionalResourcesURL; 
@property (nonatomic,retain) NSString * regionalResourcesURL;                            //@synthesize regionalResourcesURL=_regionalResourcesURL - In the implementation block
@property (nonatomic,readonly) bool hasSearchURL; 
@property (nonatomic,retain) NSString * searchURL;                                       //@synthesize searchURL=_searchURL - In the implementation block
@property (nonatomic,readonly) bool hasSearchAttributionManifestURL; 
@property (nonatomic,retain) NSString * searchAttributionManifestURL;                    //@synthesize searchAttributionManifestURL=_searchAttributionManifestURL - In the implementation block
@property (nonatomic,readonly) bool hasAutocompleteURL; 
@property (nonatomic,retain) NSString * autocompleteURL;                                 //@synthesize autocompleteURL=_autocompleteURL - In the implementation block
@property (nonatomic,readonly) bool hasReverseGeocoderURL; 
@property (nonatomic,retain) NSString * reverseGeocoderURL;                              //@synthesize reverseGeocoderURL=_reverseGeocoderURL - In the implementation block
@property (nonatomic,readonly) bool hasForwardGeocoderURL; 
@property (nonatomic,retain) NSString * forwardGeocoderURL;                              //@synthesize forwardGeocoderURL=_forwardGeocoderURL - In the implementation block
@property (nonatomic,readonly) bool hasDirectionsURL; 
@property (nonatomic,retain) NSString * directionsURL;                                   //@synthesize directionsURL=_directionsURL - In the implementation block
@property (nonatomic,readonly) bool hasEtaURL; 
@property (nonatomic,retain) NSString * etaURL;                                          //@synthesize etaURL=_etaURL - In the implementation block
@property (nonatomic,readonly) bool hasLocationShiftURL; 
@property (nonatomic,retain) NSString * locationShiftURL;                                //@synthesize locationShiftURL=_locationShiftURL - In the implementation block
@property (nonatomic,readonly) bool hasBatchReverseGeocoderURL; 
@property (nonatomic,retain) NSString * batchReverseGeocoderURL;                         //@synthesize batchReverseGeocoderURL=_batchReverseGeocoderURL - In the implementation block
@property (nonatomic,readonly) bool hasReleaseInfo; 
@property (nonatomic,retain) NSString * releaseInfo;                                     //@synthesize releaseInfo=_releaseInfo - In the implementation block
@property (nonatomic,readonly) bool hasMapMatchURL; 
@property (nonatomic,retain) NSString * mapMatchURL;                                     //@synthesize mapMatchURL=_mapMatchURL - In the implementation block
@property (nonatomic,readonly) bool hasResourcesURL; 
@property (nonatomic,retain) NSString * resourcesURL;                                    //@synthesize resourcesURL=_resourcesURL - In the implementation block
@property (nonatomic,readonly) bool hasSimpleETAURL; 
@property (nonatomic,retain) NSString * simpleETAURL;                                    //@synthesize simpleETAURL=_simpleETAURL - In the implementation block
@property (nonatomic,readonly) bool hasAddressCorrectionInitURL; 
@property (nonatomic,retain) NSString * addressCorrectionInitURL;                        //@synthesize addressCorrectionInitURL=_addressCorrectionInitURL - In the implementation block
@property (nonatomic,readonly) bool hasAddressCorrectionUpdateURL; 
@property (nonatomic,retain) NSString * addressCorrectionUpdateURL;                      //@synthesize addressCorrectionUpdateURL=_addressCorrectionUpdateURL - In the implementation block
@property (nonatomic,readonly) bool hasPolyLocationShiftURL; 
@property (nonatomic,retain) NSString * polyLocationShiftURL;                            //@synthesize polyLocationShiftURL=_polyLocationShiftURL - In the implementation block
@property (nonatomic,readonly) bool hasProblemSubmissionURL; 
@property (nonatomic,retain) NSString * problemSubmissionURL;                            //@synthesize problemSubmissionURL=_problemSubmissionURL - In the implementation block
@property (nonatomic,readonly) bool hasProblemStatusURL; 
@property (nonatomic,retain) NSString * problemStatusURL;                                //@synthesize problemStatusURL=_problemStatusURL - In the implementation block
@property (nonatomic,readonly) bool hasReverseGeocoderVersionsURL; 
@property (nonatomic,retain) NSString * reverseGeocoderVersionsURL;                      //@synthesize reverseGeocoderVersionsURL=_reverseGeocoderVersionsURL - In the implementation block
@property (nonatomic,readonly) bool hasProblemCategoriesURL; 
@property (nonatomic,retain) NSString * problemCategoriesURL;                            //@synthesize problemCategoriesURL=_problemCategoriesURL - In the implementation block
@property (nonatomic,readonly) bool hasUsageURL; 
@property (nonatomic,retain) NSString * usageURL;                                        //@synthesize usageURL=_usageURL - In the implementation block
@property (nonatomic,readonly) bool hasProblemNotificationAvailabilityURL; 
@property (nonatomic,retain) NSString * problemNotificationAvailabilityURL;              //@synthesize problemNotificationAvailabilityURL=_problemNotificationAvailabilityURL - In the implementation block
-(id)activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(id)multiTileURLStringForTileKey:(const GEOTileKey*)arg1 useStatusCodes:(bool*)arg2 ;
-(id)languageForTileKey:(const GEOTileKey*)arg1 ;
-(void)_resetBestLanguages;
-(id)localizationURLStringForTileKey:(const GEOTileKey*)arg1 ;
-(double)timeToLiveForTileKey:(const GEOTileKey*)arg1 ;
-(bool)isAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(bool)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3 ;
-(id)_activeTileSetForStyle:(int)arg1 size:(int)arg2 scale:(int)arg3 ;
-(id)activeTileSetForTileType:(int)arg1 scale:(int)arg2 ;
-(id)flatRegionalResourceTilesForMapRect:(SCD_Struct_GE48)arg1 ;
-(id)regionalResourceRegionsForMapRect:(SCD_Struct_GE48)arg1 ;
-(bool)hasRegionalResourcesForTileKey:(const GEOTileKey*)arg1 ;
-(unsigned)largestRegionalResourceZoomLevelContainingTileKey:(const GEOTileKey*)arg1 ;
-(id)regionalResourceKeysForTileKey:(const GEOTileKey*)arg1 ;
-(unsigned)versionForTileKey:(const GEOTileKey*)arg1 ;
-(id)baseURLStringForTileKey:(const GEOTileKey*)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(unsigned)identifier;
-(id)dictionaryRepresentation;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)uniqueIdentifier;
-(void)setUniqueIdentifier:(id)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(void)clearAttributions;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(void)setTileSets:(id)arg1 ;
-(void)addTileSet:(id)arg1 ;
-(unsigned long long)tileSetsCount;
-(void)clearTileSets;
-(id)tileSetAtIndex:(unsigned long long)arg1 ;
-(id)tileSets;
-(id)forwardGeocoderURL;
-(id)reverseGeocoderURL;
-(id)batchReverseGeocoderURL;
-(void)setResourcesURL:(id)arg1 ;
-(void)setSearchURL:(id)arg1 ;
-(void)setSearchAttributionManifestURL:(id)arg1 ;
-(void)setAutocompleteURL:(id)arg1 ;
-(void)setReverseGeocoderURL:(id)arg1 ;
-(void)setForwardGeocoderURL:(id)arg1 ;
-(void)setDirectionsURL:(id)arg1 ;
-(void)setEtaURL:(id)arg1 ;
-(void)setLocationShiftURL:(id)arg1 ;
-(void)setReleaseInfo:(id)arg1 ;
-(void)setBatchReverseGeocoderURL:(id)arg1 ;
-(void)setMapMatchURL:(id)arg1 ;
-(void)setSimpleETAURL:(id)arg1 ;
-(void)setAddressCorrectionInitURL:(id)arg1 ;
-(void)setAddressCorrectionUpdateURL:(id)arg1 ;
-(void)setPolyLocationShiftURL:(id)arg1 ;
-(void)setProblemSubmissionURL:(id)arg1 ;
-(void)setProblemStatusURL:(id)arg1 ;
-(void)setReverseGeocoderVersionsURL:(id)arg1 ;
-(void)setProblemCategoriesURL:(id)arg1 ;
-(void)setUsageURL:(id)arg1 ;
-(void)setProblemNotificationAvailabilityURL:(id)arg1 ;
-(bool)hasResourcesURL;
-(bool)hasSearchURL;
-(bool)hasSearchAttributionManifestURL;
-(bool)hasAutocompleteURL;
-(bool)hasReverseGeocoderURL;
-(bool)hasForwardGeocoderURL;
-(bool)hasDirectionsURL;
-(bool)hasEtaURL;
-(bool)hasLocationShiftURL;
-(bool)hasReleaseInfo;
-(bool)hasBatchReverseGeocoderURL;
-(bool)hasMapMatchURL;
-(bool)hasSimpleETAURL;
-(bool)hasAddressCorrectionInitURL;
-(bool)hasAddressCorrectionUpdateURL;
-(bool)hasPolyLocationShiftURL;
-(bool)hasProblemSubmissionURL;
-(bool)hasProblemStatusURL;
-(bool)hasReverseGeocoderVersionsURL;
-(bool)hasProblemCategoriesURL;
-(bool)hasUsageURL;
-(bool)hasProblemNotificationAvailabilityURL;
-(id)resourcesURL;
-(id)searchURL;
-(id)searchAttributionManifestURL;
-(id)autocompleteURL;
-(id)directionsURL;
-(id)etaURL;
-(id)locationShiftURL;
-(id)releaseInfo;
-(id)mapMatchURL;
-(id)simpleETAURL;
-(id)addressCorrectionInitURL;
-(id)addressCorrectionUpdateURL;
-(id)polyLocationShiftURL;
-(id)problemSubmissionURL;
-(id)problemStatusURL;
-(id)reverseGeocoderVersionsURL;
-(id)problemCategoriesURL;
-(id)usageURL;
-(id)problemNotificationAvailabilityURL;
-(unsigned long long)resourcesCount;
-(id)regionalResourceTiles;
-(id)regionalResourceRegions;
-(unsigned long long)regionalResourceTilesCount;
-(void)addResource:(id)arg1 ;
-(void)addRegionalResourceRegion:(id)arg1 ;
-(void)addRegionalResourceTile:(id)arg1 ;
-(unsigned long long)regionalResourceRegionsCount;
-(void)setRegionalResourcesURL:(id)arg1 ;
-(void)setRegionalResourceTiles:(id)arg1 ;
-(void)setRegionalResourceRegions:(id)arg1 ;
-(void)clearResources;
-(id)resourceAtIndex:(unsigned long long)arg1 ;
-(void)clearRegionalResourceTiles;
-(id)regionalResourceTileAtIndex:(unsigned long long)arg1 ;
-(void)clearRegionalResourceRegions;
-(id)regionalResourceRegionAtIndex:(unsigned long long)arg1 ;
-(bool)hasUniqueIdentifier;
-(bool)hasRegionalResourcesURL;
-(id)regionalResourcesURL;
-(id)resources;
-(void)setResources:(id)arg1 ;
-(bool)readFrom:(id)arg1 ;
-(id)attributions;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)attributionsCount;
-(void)setAttributions:(id)arg1 ;
@end
