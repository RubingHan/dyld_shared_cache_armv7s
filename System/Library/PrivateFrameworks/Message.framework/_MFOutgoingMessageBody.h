/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MFMessageBody.h>
#import <MIME/MFCollectingDataConsumer.h>

@class MFBufferedDataConsumer, NSData;

@interface _MFOutgoingMessageBody : MFMessageBody <MFCollectingDataConsumer> {

	MFBufferedDataConsumer* _consumer;
	NSData* _rawData;
	unsigned long long _count;
	bool _lastNewLine;

}
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)data;
-(id)rawData;
-(void)done;
-(long long)appendData:(id)arg1 ;
-(bool)isLastCharacterNewLine;
@end
