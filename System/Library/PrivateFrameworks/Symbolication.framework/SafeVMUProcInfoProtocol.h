/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SafeVMUProcInfoProtocol
@required
+(id)getProcessIds;
+(bool)isProcessRunning:(int)arg1;
+(int)processParentId:(int)arg1;
-(bool)isEqual:(id)arg1;
-(unsigned long long)hash;
-(id)description;
-(id)arguments;
-(id)name;
-(long long)compare:(id)arg1;
-(bool)isRunning;
-(timeval*)startTime;
-(unsigned)task;
-(int)pid;
-(int)cpuType;
-(bool)isMachO;
-(bool)isApp;
-(id)realAppName;
-(id)userAppName;
-(id)procTableName;
-(id)firstArgument;
-(id)requestedAppName;
-(bool)isCFM;
-(int)ppid;
-(long long)compareByName:(id)arg1;
-(bool)isNative;
@end
