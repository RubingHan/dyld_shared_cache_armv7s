/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomAdditionalProtocol.h>

@interface FilterHandler : NSObject <SymptomAdditionalProtocol>
+(id)sharedInstance;
+(int)configure:(id)arg1 ;
+(bool)noteSymptom:(id)arg1 ;
+(id)evaluate:(id)arg1 ;
-(id)init;
-(id)description;
-(int)configure:(id)arg1 ;
-(bool)noteSymptom:(id)arg1 ;
-(int)configureSubsystem:(id)arg1 ;
@end
