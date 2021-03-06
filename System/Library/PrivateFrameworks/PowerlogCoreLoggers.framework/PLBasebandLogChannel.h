/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCoreLoggers/PowerlogCoreLoggers-Structs.h>
#import <PowerlogLoggerSupport/PLLogger.h>

@protocol PLBasebandLogChannelDelegate;
@interface PLBasebandLogChannel : PLLogger {

	<PLBasebandLogChannelDelegate>* delegate;
	CFMessagePortRef remotePort;
	CFMessagePortRef localPort;
	bool cachingEnabled;

}

@property (assign,nonatomic) <PLBasebandLogChannelDelegate> * delegate; 
@property (nonatomic,readonly) bool isValid; 
@property (assign,nonatomic) bool cachingEnabled; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)invalidate;
-(void)flush;
-(bool)isValid;
-(void)close;
-(void)setCachingEnabled:(bool)arg1 ;
-(void)setChannelTimeout:(double)arg1 ;
-(void)setHardwareLoggingLevel:(unsigned long long)arg1 withWindowSize:(unsigned long long)arg2 ;
-(void)commitHardwareLogs;
-(bool)openWithConnection:(id)arg1 ;
-(void)enableLogCodes:(id)arg1 andEvents:(id)arg2 ;
-(void)connectionInvalidated:(id)arg1 ;
-(void)sendObjectOverRemotePort:(id)arg1 ;
-(bool)cachingEnabled;
@end

