/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSEntityDescription, NSURL, NSString, NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator, NSArray, NSMutableDictionary;

@interface MecabraCoreDataController : NSObject {

	NSEntityDescription* _entityDescription;
	NSURL* _localInfoPlistURL;
	NSURL* _localStoreURL;
	NSURL* _localURL;
	NSString* _localURLLastPartOfName;
	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _managedObjectContext;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSURL* _storeURL;
	NSString* _type;
	NSArray* _storedElementsForMerge;
	NSMutableDictionary* _propertyDictionary;

}

@property (nonatomic,readonly) NSEntityDescription * entityDescription;                              //@synthesize entityDescription=_entityDescription - In the implementation block
@property (nonatomic,retain) NSURL * localStoreURL;                                                  //@synthesize localStoreURL=_localStoreURL - In the implementation block
@property (nonatomic,readonly) NSURL * localInfoPlistURL;                                            //@synthesize localInfoPlistURL=_localInfoPlistURL - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * propertyDictionary;                               //@synthesize propertyDictionary=_propertyDictionary - In the implementation block
@property (nonatomic,retain) NSURL * storeURL;                                                       //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,retain) NSString * type;                                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSURL * localURL;                                                       //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,retain) NSArray * storedElementsForMerge;                                       //@synthesize storedElementsForMerge=_storedElementsForMerge - In the implementation block
+(id)sharedDictionaryProperties;
+(void)resetDatabaseWithType:(id)arg1 URL:(id)arg2 ;
-(void)addEntry:(id)arg1 ;
-(id)removeDuplicatesForEntry:(id)arg1 uniquingKeys:(id)arg2 sortDescriptors:(id)arg3 restrictToNumberOfElements:(unsigned long long)arg4 identifierKey:(id)arg5 ;
-(void)deleteAllMatchingEntries:(id)arg1 ;
-(id)searchResultsWithValueDictionary:(id)arg1 managedObjectContext:(id)arg2 sortDescriptors:(id)arg3 ;
-(bool)dictionaryEntryHasAllRequiredKeys:(id)arg1 ;
-(void)addEntryWithoutSaving:(id)arg1 ;
-(id)propertyDictionary;
-(id)searchResultsWithValueDictionary:(id)arg1 ;
-(id)searchResultsWithValueDictionary:(id)arg1 sortDescriptors:(id)arg2 ;
-(unsigned long long)addEntryAndSave:(id)arg1 ;
-(void)deleteEntry:(id)arg1 ;
-(void)deleteAllElements;
-(void)setValue:(id)arg1 forKey:(id)arg2 entry:(id)arg3 ;
-(void)flushDatabaseProperties;
-(void)setDatabaseProperty:(id)arg1 forKey:(id)arg2 ;
-(id)databasePropertyForKey:(id)arg1 ;
-(id)dictionaryValuesFromManagedObjects:(id)arg1 ;
-(id)setValuesForEntry:(id)arg1 uniquingKeys:(id)arg2 ;
-(void)save;
-(id)entityDescription;
-(void)setLocalURL:(id)arg1 ;
-(id)storeURL;
-(void)dealloc;
-(void)setType:(id)arg1 ;
-(id)type;
-(id)localURL;
-(id)managedObjectModel;
-(void)setPersistentStoreCoordinator:(id)arg1 ;
-(id)managedObjectContext;
-(void)setManagedObjectContext:(id)arg1 ;
-(id)persistentStoreCoordinator;
-(id)entriesToMerge;
-(void)clearStoredMergeEntries;
-(id)entityDescriptionForContext:(id)arg1 ;
-(id)localInfoPlistURL;
-(void)prepareURLForDatabaseFile:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithType:(id)arg1 URL:(id)arg2 ;
-(void)setUbiquityTokenInDefaults;
-(id)ubiquityTokenLookupKey;
-(id)databaseName;
-(void)migrateiCloudToLocal;
-(id)localStoreURL;
-(id)newPersistentStoreWithURL:(id)arg1 ubiquityContainerIdentifier:(id)arg2 managedObjectModel:(id)arg3 ;
-(void)databaseSynced:(id)arg1 ;
-(void)databaseDidChangeStore:(id)arg1 ;
-(void)sendRemoteNotification;
-(id)copyUbiquityTokenInDefaults;
-(void)setStoredElementsForMerge:(id)arg1 ;
-(bool)shouldSyncDatabase;
-(id)storedElementsForMerge;
-(void)tearDownDatabase;
-(void)refreshDatabase;
-(void)setLocalStoreURL:(id)arg1 ;
-(void)setManagedObjectModel:(id)arg1 ;
-(void)setPropertyDictionary:(id)arg1 ;
-(void)setStoreURL:(id)arg1 ;
@end

