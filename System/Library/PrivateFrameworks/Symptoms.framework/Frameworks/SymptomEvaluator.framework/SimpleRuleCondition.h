/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SymptomAdditionalProtocol;
@class NSString;

@interface SimpleRuleCondition : NSObject {

	int _conditionType;
	long long _conditionPrevSymptom;
	long long _conditionMaxAge;
	long long _conditionFlags;
	long long _conditionMinCount;
	NSString* _conditionStringID;
	long long _conditionStringLength;
	<SymptomAdditionalProtocol>* _additionalHandler;
	SEL _additionalSelector;

}

@property (assign,nonatomic) int conditionType;                                            //@synthesize conditionType=_conditionType - In the implementation block
@property (assign,nonatomic) long long conditionPrevSymptom;                               //@synthesize conditionPrevSymptom=_conditionPrevSymptom - In the implementation block
@property (assign,nonatomic) long long conditionMaxAge;                                    //@synthesize conditionMaxAge=_conditionMaxAge - In the implementation block
@property (assign,nonatomic) long long conditionFlags;                                     //@synthesize conditionFlags=_conditionFlags - In the implementation block
@property (assign,nonatomic) long long conditionMinCount;                                  //@synthesize conditionMinCount=_conditionMinCount - In the implementation block
@property (nonatomic,retain) NSString * conditionStringID;                                 //@synthesize conditionStringID=_conditionStringID - In the implementation block
@property (assign,nonatomic) long long conditionStringLength;                              //@synthesize conditionStringLength=_conditionStringLength - In the implementation block
@property (nonatomic,retain) <SymptomAdditionalProtocol> * additionalHandler;              //@synthesize additionalHandler=_additionalHandler - In the implementation block
@property (assign,nonatomic) SEL additionalSelector;                                       //@synthesize additionalSelector=_additionalSelector - In the implementation block
-(id)description;
-(void).cxx_destruct;
-(int)conditionType;
-(void)setConditionType:(int)arg1 ;
-(long long)conditionPrevSymptom;
-(void)setConditionPrevSymptom:(long long)arg1 ;
-(long long)conditionMaxAge;
-(void)setConditionMaxAge:(long long)arg1 ;
-(long long)conditionFlags;
-(void)setConditionFlags:(long long)arg1 ;
-(long long)conditionMinCount;
-(void)setConditionMinCount:(long long)arg1 ;
-(id)conditionStringID;
-(void)setConditionStringID:(id)arg1 ;
-(long long)conditionStringLength;
-(void)setConditionStringLength:(long long)arg1 ;
-(id)additionalHandler;
-(void)setAdditionalHandler:(id)arg1 ;
-(SEL)additionalSelector;
-(void)setAdditionalSelector:(SEL)arg1 ;
@end
