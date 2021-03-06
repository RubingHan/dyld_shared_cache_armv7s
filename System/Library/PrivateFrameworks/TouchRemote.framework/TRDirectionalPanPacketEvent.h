/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TouchRemote-Structs.h>
#import <TouchRemote/TRPacketEvent.h>

@interface TRDirectionalPanPacketEvent : TRPacketEvent {

	long long _gestureState;
	CGPoint _location;
	CGPoint _velocity;

}

@property (nonatomic,readonly) CGPoint location;                    //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long gestureState;              //@synthesize gestureState=_gestureState - In the implementation block
@property (nonatomic,readonly) CGPoint velocity;                    //@synthesize velocity=_velocity - In the implementation block
+(unsigned)_packetEventType;
-(id)description;
-(CGPoint)velocity;
-(CGPoint)location;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initWithGestureState:(long long)arg1 location:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(long long)gestureState;
@end

