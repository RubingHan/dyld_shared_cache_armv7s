/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TISweepSource : NSObject {

	NSMutableDictionary* debugValues;
	int stepCount;

}

@property (nonatomic,readonly) NSMutableDictionary * debugValues; 
@property (assign,nonatomic) int stepCount; 
+(id)sharedInstance;
-(bool)finished;
-(void)dealloc;
-(id)debugValues;
-(void)addValue:(id)arg1 withMin:(float)arg2 withMax:(float)arg3 ;
-(void)addValue:(id)arg1 withValue:(float)arg2 ;
-(id)sweepStateHeader;
-(id)sweepStateValues;
-(void)advanceSweep;
-(int)stepCount;
-(void)setStepCount:(int)arg1 ;
@end

