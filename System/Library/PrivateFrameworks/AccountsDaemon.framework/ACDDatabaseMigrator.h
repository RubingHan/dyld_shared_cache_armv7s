/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSString, NSMutableDictionary;

@interface ACDDatabaseMigrator : NSObject {

	NSManagedObjectContext* _migrationContext;
	NSPersistentStoreCoordinator* _privateCoordinator;
	NSPersistentStoreCoordinator* _realCoordinator;
	NSString* _databasePath;
	NSMutableDictionary* _realOptions;

}
-(bool)run;
-(void).cxx_destruct;
-(id)initForDatabaseAtPath:(id)arg1 persistentStoreCoordinator:(id)arg2 options:(id)arg3 ;
-(id)_setUpContextForMigration;
-(long long)_versionForModel:(id)arg1 ;
-(void)_migrateAccessAuthorizationsToTCCFromModelVersion:(long long)arg1 ;
-(void)_migrateNameAttributeOfDataclassEntities;
-(void)_migrateOptionsAttributeOfAuthorizatinEntitiesFromModelVersion:(long long)arg1 ;
-(void)_postProcessMigrationFromVersion:(long long)arg1 migrationData:(id)arg2 ;
-(id)_fetchAllAuthorizationEntitiesForModelVersion:(long long)arg1 ;
-(id)_fetchAllDataclassEntitles;
-(id)_compatibleModelForStoreAtURL:(id)arg1 ;
@end

