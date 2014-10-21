/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicate.h>

@class NSPredicateOperator, NSExpression;

@interface NSComparisonPredicate : NSPredicate {

	void* _reserved2;
	NSPredicateOperator* _predicateOperator;
	NSExpression* _lhs;
	NSExpression* _rhs;

}
+(id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned long long)arg3 type:(unsigned long long)arg4 options:(unsigned long long)arg5 ;
+(id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3 ;
+(id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3 ;
+(id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3 ;
+(id)predicateWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3 ;
+(bool)supportsSecureCoding;
-(id)minimalFormInContext:(id)arg1 ;
-(bool)_isForeignObjectExpression:(id)arg1 givenContext:(id)arg2 ;
-(id)generateMetadataDescription;
-(id)rightExpression;
-(id)leftExpression;
-(unsigned long long)comparisonPredicateModifier;
-(unsigned long long)predicateOperatorType;
-(void)allowEvaluation;
-(id)predicateOperator;
-(id)initWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)setPredicateOperator:(id)arg1 ;
-(id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned long long)arg3 type:(unsigned long long)arg4 options:(unsigned long long)arg5 ;
-(id)predicateWithSubstitutionVariables:(id)arg1 ;
-(id)predicateFormat;
-(id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3 ;
-(id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3 ;
-(id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3 ;
-(id)keyPathExpressionForString:(id)arg1 ;
-(void)_acceptOperator:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)_acceptExpressions:(id)arg1 flags:(unsigned long long)arg2 ;
-(SEL)customSelector;
-(bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(unsigned long long)options;
@end
