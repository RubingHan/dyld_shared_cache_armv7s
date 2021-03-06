/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMEvent.h>

@class NSString, DOMAbstractView, DOMMessagePort;

@interface DOMMessageEvent : DOMEvent

@property (readonly) NSString * origin; 
@property (readonly) NSString * lastEventId; 
@property (readonly) DOMAbstractView * source; 
@property (readonly) NSString * data; 
@property (readonly) DOMMessagePort * messagePort; 
-(id)data;
-(id)origin;
-(id)source;
-(id)lastEventId;
-(id)messagePort;
-(void)initMessageEvent:(id)arg1 canBubbleArg:(bool)arg2 cancelableArg:(bool)arg3 dataArg:(id)arg4 originArg:(id)arg5 lastEventIdArg:(id)arg6 sourceArg:(id)arg7 messagePort:(id)arg8 ;
@end

