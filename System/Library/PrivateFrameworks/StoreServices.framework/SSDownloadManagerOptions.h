/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray, NSString;

@interface SSDownloadManagerOptions : NSObject <NSCopying> {

	NSArray* _downloadKinds;
	bool _filterExternalOriginatedDownloads;
	NSString* _persistenceIdentifier;
	NSArray* _prefetchedDownloadExternalProperties;
	NSArray* _prefetchedDownloadProperties;

}

@property (nonatomic,copy) NSArray * downloadKinds;                                     //@synthesize downloadKinds=_downloadKinds - In the implementation block
@property (nonatomic,copy) NSString * persistenceIdentifier;                            //@synthesize persistenceIdentifier=_persistenceIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * prefetchedDownloadProperties;                      //@synthesize prefetchedDownloadProperties=_prefetchedDownloadProperties - In the implementation block
@property (assign,nonatomic) bool shouldFilterExternalOriginatedDownloads;              //@synthesize filterExternalOriginatedDownloads=_filterExternalOriginatedDownloads - In the implementation block
@property (nonatomic,copy) NSArray * prefetchedDownloadExternalProperties;              //@synthesize prefetchedDownloadExternalProperties=_prefetchedDownloadExternalProperties - In the implementation block
-(void)setDownloadKinds:(id)arg1 ;
-(void)setPersistenceIdentifier:(id)arg1 ;
-(void)setPrefetchedDownloadProperties:(id)arg1 ;
-(void)setPrefetchedDownloadExternalProperties:(id)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)shouldFilterExternalOriginatedDownloads;
-(id)prefetchedDownloadExternalProperties;
-(id)prefetchedDownloadProperties;
-(id)persistenceIdentifier;
-(void)setShouldFilterExternalOriginatedDownloads:(bool)arg1 ;
-(id)downloadKinds;
@end
