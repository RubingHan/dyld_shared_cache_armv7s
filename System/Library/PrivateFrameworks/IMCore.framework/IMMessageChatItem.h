/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMChatItem.h>

@class IMMessage;

@interface IMMessageChatItem : IMChatItem

@property (nonatomic,readonly) IMMessage * message; 
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)message;
-(long long)_reverseCompareToChatItem:(id)arg1 ;
-(long long)_compareToChatItem:(id)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(void)_setMessage:(id)arg1 ;
@end

