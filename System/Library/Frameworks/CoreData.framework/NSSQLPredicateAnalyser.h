/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSPredicateVisitor.h>

@class NSMutableArray;

@interface NSSQLPredicateAnalyser : NSObject <NSPredicateVisitor> {

	bool _compoundPredicate;
	NSMutableArray* _keys;
	NSMutableArray* _allModifierPredicates;
	NSMutableArray* _setExpressions;
	NSMutableArray* _subqueries;

}
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(id)allModifierPredicates;
-(void)visitPredicateOperator:(id)arg1 ;
-(id)keypaths;
-(id)subqueries;
-(id)setExpressions;
-(void)dealloc;
-(id)init;
@end
