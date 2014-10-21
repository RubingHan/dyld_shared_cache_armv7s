/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface PLPowerAssertion : NSObject {

	bool _open;
	long long _pid;
	long long _globalUniqueID;
	double _timeIntervalSinceReferenceDate;

}

@property (assign) long long pid;                                      //@synthesize pid=_pid - In the implementation block
@property (assign) long long globalUniqueID;                           //@synthesize globalUniqueID=_globalUniqueID - In the implementation block
@property (assign) double timeIntervalSinceReferenceDate;              //@synthesize timeIntervalSinceReferenceDate=_timeIntervalSinceReferenceDate - In the implementation block
@property (assign) bool open;                                          //@synthesize open=_open - In the implementation block
@property (assign,nonatomic) NSDate * timestamp; 
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)timestamp;
-(double)timeIntervalSinceReferenceDate;
-(void)setTimestamp:(id)arg1 ;
-(long long)pid;
-(void)setPid:(long long)arg1 ;
-(void)setGlobalUniqueID:(long long)arg1 ;
-(void)setTimeIntervalSinceReferenceDate:(double)arg1 ;
-(long long)globalUniqueID;
-(id)initWithPid:(long long)arg1 withGlobalUniqueID:(long long)arg2 withTimestamp:(id)arg3 ;
-(bool)open;
-(void)setOpen:(bool)arg1 ;
@end
