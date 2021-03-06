/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PCGrowthAlgorithm <PCLoggingDelegate,NSObject>
@property (nonatomic,readonly) double currentKeepAliveInterval; 
@property (assign,nonatomic) double minimumKeepAliveInterval; 
@property (assign,nonatomic) double maximumKeepAliveInterval; 
@property (nonatomic,readonly) unsigned long long countOfGrowthActions; 
@property (nonatomic,readonly) NSDictionary * cacheInfo; 
@required
-(void)setMinimumKeepAliveInterval:(double)arg1;
-(void)setMaximumKeepAliveInterval:(double)arg1;
-(double)currentKeepAliveInterval;
-(double)minimumKeepAliveInterval;
-(double)maximumKeepAliveInterval;
-(void)processNextAction:(int)arg1;
-(id)initWithCacheInfo:(id)arg1 loggingIdentifier:(id)arg2 algorithmName:(id)arg3;
-(bool)useIntervalIfImprovement:(double)arg1;
-(unsigned long long)countOfGrowthActions;
-(id)cacheInfo;
@end

