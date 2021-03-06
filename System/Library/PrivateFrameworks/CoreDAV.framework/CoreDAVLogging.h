/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:52 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreDAV/CoreDAV-Structs.h>
@class NSObject;

@interface CoreDAVLogging : NSObject {

	CFDictionaryRef _logDelegates;
	NSObject<OS_dispatch_queue>* _delegateMuckingQueue;

}
+(id)sharedLogging;
-(void)dealloc;
-(id)init;
-(id)_delegatesToLogForProvider:(id)arg1 ;
-(bool)shouldLogAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2 ;
-(bool)_shouldOutputAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2 ;
-(void)addLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2 ;
-(void)removeLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2 ;
-(id)delegatesToLogTransmittedDataForAccountInfoProvider:(id)arg1 ;
-(void)logDiagnosticForProvider:(id)arg1 withLevel:(long long)arg2 format:(id)arg3 args:(char*)arg4 ;
@end

