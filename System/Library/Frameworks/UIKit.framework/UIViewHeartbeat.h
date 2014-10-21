/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:00 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIView, CADisplayLink;

@interface UIViewHeartbeat : NSObject {

	UIView* _view;
	SEL _selector;
	CADisplayLink* _heartbeat;

}
+(void)startHeartbeatWithView:(id)arg1 selector:(SEL)arg2 inRunLoopMode:(id)arg3 ;
+(void)stopHeartbeatWithView:(id)arg1 selector:(SEL)arg2 ;
-(void)dealloc;
-(void)_updateDisplayLink:(id)arg1 ;
@end
