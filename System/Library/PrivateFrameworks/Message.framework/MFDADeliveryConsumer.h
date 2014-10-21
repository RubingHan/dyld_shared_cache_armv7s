/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFDAMailAccountConsumer.h>
#import <Message/DAMessageSendConsumer.h>

@class MFError;

@interface MFDADeliveryConsumer : MFDAMailAccountConsumer <DAMessageSendConsumer> {

	int status;
	MFError* _error;

}

@property (nonatomic,retain) MFError * error;              //@synthesize error=_error - In the implementation block
-(void)setError:(id)arg1 ;
-(void)dealloc;
-(void)actionFailed:(int)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(void)messageSentWithContext:(void*)arg1 ;
-(id)error;
@end
