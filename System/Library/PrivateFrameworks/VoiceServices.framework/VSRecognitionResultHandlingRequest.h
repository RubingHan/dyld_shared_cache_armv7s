/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VSRecognitionResultHandler;
@class NSArray, VSRecognitionAction;

@interface VSRecognitionResultHandlingRequest : NSObject {

	<VSRecognitionResultHandler>* _handler;
	NSArray* _results;
	VSRecognitionAction* _action;

}
-(void)dealloc;
-(id)handler;
-(id)results;
-(id)initWithHandler:(id)arg1 results:(id)arg2 ;
-(id)nextAction;
-(void)setNextAction:(id)arg1 ;
@end

