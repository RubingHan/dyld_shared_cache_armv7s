/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSStoreMapping.h>

@class NSString, NSPropertyDescription, NSSQLEntity;

@interface NSSQLProperty : NSStoreMapping {

	NSString* _name;
	NSPropertyDescription* _propertyDescription;
	NSSQLEntity* _entity;
	unsigned _propertyType;

}
-(bool)isToMany;
-(id)columnName;
-(bool)isToOne;
-(bool)isManyToMany;
-(unsigned)propertyType;
-(unsigned)slot;
-(bool)isAttribute;
-(id)externalName;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(id)propertyDescription;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(bool)isColumn;
-(bool)isRelationship;
-(void)setEntityForReadOnlyFetch:(id)arg1 ;
-(void)_setName:(id)arg1 ;
-(bool)isPrimaryKey;
-(void)setPropertyDescription:(id)arg1 ;
-(bool)isForeignKey;
-(bool)isForeignEntityKey;
-(bool)isForeignOrderKey;
-(bool)isEntityKey;
-(bool)isOptLockKey;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)name;
-(id)entity;
@end

