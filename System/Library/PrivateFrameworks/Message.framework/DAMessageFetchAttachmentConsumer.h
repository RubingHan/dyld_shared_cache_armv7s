/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DAMessageFetchAttachmentConsumer
@required
-(void)consumeData:(id)arg1 ofContentType:(id)arg2 forAttachmentNamed:(id)arg3 ofMessageWithServerID:(id)arg4;
-(void)attachmentFetchCompletedWithStatus:(int)arg1 forAttachmentNamed:(id)arg2 ofMessageWithServerID:(id)arg3 dataWasBase64:(bool)arg4;
@end

