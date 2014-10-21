/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@class NSArray;

@interface RadioPlaybackContext : NSObject <NSCopying, NSMutableCopying> {

	long long _numberOfSkipsUsed;
	NSArray* _trackPlaybackDescriptorQueue;

}

@property (nonatomic,readonly) long long numberOfSkipsUsed;                         //@synthesize numberOfSkipsUsed=_numberOfSkipsUsed - In the implementation block
@property (nonatomic,readonly) NSArray * trackPlaybackDescriptorQueue;              //@synthesize trackPlaybackDescriptorQueue=_trackPlaybackDescriptorQueue - In the implementation block
-(id)trackPlaybackDescriptorQueue;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
-(id)playbackContextDictionary;
-(long long)numberOfSkipsUsed;
@end
