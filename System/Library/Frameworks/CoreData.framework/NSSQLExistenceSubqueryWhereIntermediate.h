/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLWhereIntermediate.h>

@class NSExpression, NSString, NSSQLProperty, NSSQLEntity;

@interface NSSQLExistenceSubqueryWhereIntermediate : NSSQLWhereIntermediate {

	NSExpression* _subqueryExpression;
	NSExpression* _variableExpression;
	NSString* _variableAlias;
	NSSQLProperty* _collectionProperty;
	NSSQLEntity* _governingEntityForVariable;

}
-(id)initWithPredicate:(id)arg1 inScope:(id)arg2 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)governingEntityForKeypathExpression:(id)arg1 ;
-(id)fetchIntermediateForKeypathExpression:(id)arg1 ;
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(id)_generateSQLForVariableExpression:(id)arg1 inContext:(id)arg2 ;
-(bool)_isKeypathScopedToSubquery:(id)arg1 ;
-(bool)isExistenceScoped;
@end

