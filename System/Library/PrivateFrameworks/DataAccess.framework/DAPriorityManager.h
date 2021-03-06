/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DataAccess/DataAccess-Structs.h>
@interface DAPriorityManager : NSObject {

	CFDictionaryRef _clientsToPriorityRequests;
	int _foregroundDataclasses;
	int _currentPriority;

}

@property (readonly) CFDictionaryRef clientsToPriorityRequests;              //@synthesize clientsToPriorityRequests=_clientsToPriorityRequests - In the implementation block
@property (readonly) int currentPriority;                                    //@synthesize currentPriority=_currentPriority - In the implementation block
+(void)vendPriorityManagers;
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)bumpDataclassesToUIPriority:(int)arg1 ;
-(void)requestPriority:(int)arg1 forClient:(id)arg2 dataclasses:(int)arg3 ;
-(id)_appIDsToDataclasses;
-(void)_setNewPriority;
-(void)_SBApplicationStateChanged:(id)arg1 ;
-(CFDictionaryRef)clientsToPriorityRequests;
-(int)_recalculatePriority;
-(void)_setForegroundDataclasses:(int)arg1 ;
-(int)currentPriority;
-(id)stateString;
@end

