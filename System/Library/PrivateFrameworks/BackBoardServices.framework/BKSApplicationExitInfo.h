/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <BackBoardServices/BKSXPCCoding.h>

@interface BKSApplicationExitInfo : NSObject <NSCopying, BKSXPCCoding> {

	bool _wasReceiver;
	int _terminationReason;
	long long _status;

}

@property (assign,nonatomic) long long status;                   //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int terminationReason;              //@synthesize terminationReason=_terminationReason - In the implementation block
@property (assign,nonatomic) bool wasReceiver;                   //@synthesize wasReceiver=_wasReceiver - In the implementation block
-(int)terminationReason;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)setWasReceiver:(bool)arg1 ;
-(bool)wasReceiver;
-(void)setTerminationReason:(int)arg1 ;
@end
