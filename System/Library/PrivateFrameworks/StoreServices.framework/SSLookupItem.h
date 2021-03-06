/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray, NSNumber, NSURL;

@interface SSLookupItem : NSObject {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * lookupDictionary;                             //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * artistName; 
@property (nonatomic,readonly) NSArray * artwork; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSArray * categoryNames; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * itemKind; 
@property (nonatomic,readonly) NSNumber * ITunesStoreIdentifier; 
@property (nonatomic,readonly) NSArray * offers; 
@property (getter=isPOIBased,nonatomic,readonly) bool POIBased; 
@property (nonatomic,readonly) NSURL * productPageURL; 
@property (nonatomic,readonly) long long numberOfUserRatings; 
@property (nonatomic,readonly) float userRating; 
@property (nonatomic,readonly) long long numberOfUserRatingsForCurrentVersion; 
@property (nonatomic,readonly) float userRatingForCurrentVersion; 
-(id)lookupDictionary;
-(id)offers;
-(id)artwork;
-(void)dealloc;
-(id)bundleIdentifier;
-(id)displayName;
-(id)artistName;
-(id)ITunesStoreIdentifier;
-(float)userRating;
-(id)itemKind;
-(id)productPageURL;
-(id)categoryNames;
-(bool)isPOIBased;
-(long long)numberOfUserRatingsForCurrentVersion;
-(float)userRatingForCurrentVersion;
-(long long)numberOfUserRatings;
-(id)initWithLookupDictionary:(id)arg1 ;
@end

