/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLock, NSMutableDictionary;

@interface MPRadioPerformanceLogger : NSObject {

	NSLock* _lock;
	NSMutableDictionary* _sessions;

}
+(id)sharedLogger;
-(void)addEventWithName:(id)arg1 sessionKey:(id)arg2 ;
-(void)beginSessionWithKey:(id)arg1 label:(id)arg2 ;
-(void)closeAndLogSessionForKey:(id)arg1 ;
-(id)init;
-(void).cxx_destruct;
@end

