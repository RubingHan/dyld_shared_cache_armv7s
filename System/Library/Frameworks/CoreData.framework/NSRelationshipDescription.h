/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPropertyDescription.h>

@class NSEntityDescription, NSString;

@interface NSRelationshipDescription : NSPropertyDescription {

	void* _reserved5;
	void* _reserved6;
	NSEntityDescription* _destinationEntity;
	NSString* _lazyDestinationEntityName;
	NSRelationshipDescription* _inverseRelationship;
	NSString* _lazyInverseRelationshipName;
	unsigned long long _maxCount;
	unsigned long long _minCount;
	unsigned long long _deleteRule;

}
+(void)initialize;
-(bool)_isRelationship;
-(unsigned long long)_propertyType;
-(void)_createCachesAndOptimizeState;
-(bool)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4 ;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned long long)arg2 ;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(bool)_isToManyRelationship;
-(void)_updateInverse:(id)arg1 ;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned long long)arg2 proxyContext:(id)arg3 ;
-(bool)_validateValuesAreOfDestinationEntity:(id)arg1 source:(id)arg2 ;
-(void)_setLazyDestinationEntityName:(id)arg1 ;
-(id)_initWithName:(id)arg1 ;
-(unsigned long long)deleteRule;
-(id)versionHash;
-(bool)isToMany;
-(unsigned long long)minCount;
-(id)destinationEntity;
-(bool)isIndexed;
-(id)inverseRelationship;
-(void)setMaxCount:(unsigned long long)arg1 ;
-(void)setMinCount:(unsigned long long)arg1 ;
-(void)setDestinationEntity:(id)arg1 ;
-(void)setDeleteRule:(unsigned long long)arg1 ;
-(void)setInverseRelationship:(id)arg1 ;
-(void)setOrdered:(bool)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(unsigned long long)maxCount;
-(bool)isOrdered;
@end
