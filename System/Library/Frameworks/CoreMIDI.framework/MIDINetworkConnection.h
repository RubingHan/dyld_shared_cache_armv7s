/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreMIDI/CoreMIDI-Structs.h>
@class MIDINetworkHost;

@interface MIDINetworkConnection : NSObject {

	MIDINetworkConnectionImpl* _impl;

}

@property (nonatomic,readonly) MIDINetworkHost * host; 
+(id)connectionWithHost:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)host;
@end

