/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectModel, PFUbiquityLocation, NSString;

@interface PFUbiquityMigrationManager : NSObject {

	NSManagedObjectModel* _destinationModel;
	NSManagedObjectModel* _sourceModel;
	PFUbiquityLocation* _rootLocation;
	NSString* _localPeerID;

}

@property (readonly) NSManagedObjectModel * sourceModel;                   //@synthesize sourceModel=_sourceModel - In the implementation block
@property (readonly) NSManagedObjectModel * destinationModel;              //@synthesize destinationModel=_destinationModel - In the implementation block
@property (readonly) PFUbiquityLocation * rootLocation;                    //@synthesize rootLocation=_rootLocation - In the implementation block
-(id)sourceModel;
-(id)destinationModel;
-(id)rootLocation;
-(id)initWithDestinationModel:(id)arg1 sourceModel:(id)arg2 ubiquityRootLocation:(id)arg3 localPeerID:(id)arg4 ;
-(id)initWithDestinationModel:(id)arg1 storeName:(id)arg2 previousModelVersionHash:(id)arg3 ubiquityRootLocation:(id)arg4 localPeerID:(id)arg5 ;
-(bool)migrateTransactionLogs:(bool)arg1 andBaselineIfNecessaryForStoreName:(id)arg2 peerID:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
@end

