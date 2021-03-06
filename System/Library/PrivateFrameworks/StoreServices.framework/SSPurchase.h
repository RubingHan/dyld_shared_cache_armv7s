/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSXPCCoding.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSNumber, NSString, NSObject, SSDownloadPolicy, NSMutableDictionary, NSArray, SSItem, SSItemOffer, SSNetworkConstraints, SSURLRequestProperties, NSDictionary, NSData;

@interface SSPurchase : NSObject <SSXPCCoding, NSCoding, NSCopying> {

	NSNumber* _accountIdentifier;
	NSString* _affiliateIdentifier;
	bool _backgroundPurchase;
	long long _batchIdentifier;
	NSString* _buyParameters;
	bool _createsDownloads;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	SSDownloadPolicy* _downloadPolicy;
	NSMutableDictionary* _downloadProperties;
	long long _expectedDownloadFileSize;
	NSArray* _filteredAssetTypes;
	NSArray* _gratisIdentifiers;
	bool _ignoresForcedPasswordRestriction;
	SSItem* _item;
	SSItemOffer* _itemOffer;
	SSNetworkConstraints* _networkConstraints;
	long long _placeholderDownloadIdentifier;
	bool _preauthenticated;
	SSURLRequestProperties* _requestProperties;
	id _requiredDeviceCapabilities;
	long long _uniqueIdentifier;
	bool _usesLocalRedownloadParametersIfPossible;

}

@property (retain) NSNumber * accountIdentifier; 
@property (copy) NSString * affiliateIdentifier; 
@property (copy) NSString * buyParameters; 
@property (assign,nonatomic) bool createsDownloads; 
@property (copy) NSArray * filteredAssetTypes; 
@property (getter=isBackgroundPurchase) bool backgroundPurchase; 
@property (assign) long long placeholderDownloadIdentifier; 
@property (copy) SSURLRequestProperties * requestProperties; 
@property (copy) NSDictionary * downloadProperties; 
@property (copy) SSDownloadPolicy * downloadPolicy; 
@property (assign) bool ignoresForcedPasswordRestriction; 
@property (copy) SSNetworkConstraints * networkConstraints; 
@property (assign) long long batchIdentifier; 
@property (assign) long long expectedDownloadFileSize; 
@property (copy) NSArray * gratisIdentifiers; 
@property (copy) id requiredDeviceCapabilities; 
@property (assign) long long uniqueIdentifier; 
@property (assign) bool usesLocalRedownloadParametersIfPossible; 
@property (getter=isPreauthenticated) bool preauthenticated; 
@property (readonly) NSData * databaseEncoding; 
+(id)newPurchaseWithDatabaseEncoding:(id)arg1 ;
+(id)newPurchaseWithXPCEncoding:(id)arg1 ;
+(id)purchaseWithBuyParameters:(id)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(id)buyParameters;
-(id)downloadProperties;
-(void)setDownloadProperties:(id)arg1 ;
-(void)setBuyParameters:(id)arg1 ;
-(void)setIgnoresForcedPasswordRestriction:(bool)arg1 ;
-(void)setValue:(id)arg1 forDownloadProperty:(id)arg2 ;
-(void)setDownloadPolicy:(id)arg1 ;
-(void)setBackgroundPurchase:(bool)arg1 ;
-(void)setRequestProperties:(id)arg1 ;
-(id)valueForDownloadProperty:(id)arg1 ;
-(void)setAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)item;
-(long long)uniqueIdentifier;
-(void)setUniqueIdentifier:(long long)arg1 ;
-(id)accountIdentifier;
-(void)setAffiliateIdentifier:(id)arg1 ;
-(id)affiliateIdentifier;
-(void)setExpectedDownloadFileSize:(long long)arg1 ;
-(void)setRequiredDeviceCapabilities:(id)arg1 ;
-(void)setUsesLocalRedownloadParametersIfPossible:(bool)arg1 ;
-(void)setGratisIdentifiers:(id)arg1 ;
-(id)itemOffer;
-(id)downloadPolicy;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)networkConstraints;
-(id)requiredDeviceCapabilities;
-(void)setCreatesDownloads:(bool)arg1 ;
-(bool)createsDownloads;
-(id)_initSSPurchase;
-(void)_setValuesUsingDatabaseEncoding:(id)arg1 ;
-(void)_addEntriesToDatabaseEncoding:(id)arg1 ;
-(id)filteredAssetTypes;
-(bool)ignoresForcedPasswordRestriction;
-(bool)isBackgroundPurchase;
-(long long)placeholderDownloadIdentifier;
-(void)setFilteredAssetTypes:(id)arg1 ;
-(id)initWithDatabaseEncoding:(id)arg1 ;
-(long long)batchIdentifier;
-(id)databaseEncoding;
-(long long)expectedDownloadFileSize;
-(id)gratisIdentifiers;
-(bool)isPreauthenticated;
-(void)setBatchIdentifier:(long long)arg1 ;
-(void)setDefaultUserAgent:(id)arg1 ;
-(void)setPlaceholderDownloadIdentifier:(long long)arg1 ;
-(void)setPreauthenticated:(bool)arg1 ;
-(bool)usesLocalRedownloadParametersIfPossible;
-(id)downloadMetadata;
-(void)setDownloadMetadata:(id)arg1 ;
-(id)requestProperties;
-(void)setNetworkConstraints:(id)arg1 ;
-(id)initWithItem:(id)arg1 offer:(id)arg2 ;
@end

