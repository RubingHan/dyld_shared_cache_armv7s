/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMDaemonCore/IMDAppleServiceSession.h>
#import <iMessage/MessagePushHandlerListener.h>

@class MessagePushHandler, IMMultiQueue, IMTimer, NSMutableDictionary;

@interface MessageServiceSession : IMDAppleServiceSession <MessagePushHandlerListener> {

	MessagePushHandler* _messagePushHandler;
	IMMultiQueue* _incomingMessageMultiQueue;
	IMTimer* _resetFailureRetriesTimer;
	NSMutableDictionary* _failureMap;
	bool _networkOverride;

}
-(void)dealloc;
-(void)_iMessageBagLoaded:(id)arg1 ;
-(void)_updateNetworkOverride;
-(void)_handleFileTransferAccepted:(id)arg1 ;
-(void)_logLocalInfo;
-(unsigned long long)_failuresForID:(id)arg1 ;
-(unsigned long long)_maxFailuresAllowed;
-(void)_incrementDecryptionFailureForID:(id)arg1 ;
-(void)_enqueueBlock:(/*^block*/ id)arg1 withTimeout:(double)arg2 ;
-(bool)_isWhitelistedUnencryptedSender:(id)arg1 ;
-(void)_handleMessageSentToSelf:(id)arg1 chatIdentifier:(id)arg2 style:(unsigned char)arg3 isLocal:(bool)arg4 ;
-(void)_setWeeklyFailureResetTimer;
-(void)_resetFailureRetries;
-(void)handler:(id)arg1 incomingMessage:(id)arg2 originalEncryptionType:(id)arg3 messageID:(id)arg4 toIdentifier:(id)arg5 fromIdentifier:(id)arg6 fromToken:(id)arg7 timeStamp:(id)arg8 storageContext:(id)arg9 messageContext:(id)arg10 ;
-(void)handler:(id)arg1 messageIDDelivered:(id)arg2 status:(id)arg3 deliveryContext:(id)arg4 timeStamp:(id)arg5 storageContext:(id)arg6 ;
-(void)handler:(id)arg1 messageIDRead:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 timeStamp:(id)arg6 storageContext:(id)arg7 ;
-(void)handler:(id)arg1 receivedError:(id)arg2 forMessageID:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 fromToken:(id)arg6 timeStamp:(id)arg7 storageContext:(id)arg8 shouldShowPeerErrors:(bool)arg9 ;
-(void)handler:(id)arg1 genericNotification:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 timeStamp:(id)arg6 storageContext:(id)arg7 ;
-(id)initWithAccount:(id)arg1 service:(id)arg2 ;
-(void)sessionDidBecomeActive;
-(void)sessionWillBecomeInactive;
-(void)requestProperty:(id)arg1 ofPerson:(id)arg2 ;
-(void)sendReadReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3 ;
-(bool)networkConditionsAllowLogin;
-(void)refreshServiceCapabilities;
-(bool)canMakeDowngradeRoutingChecks;
-(void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)didReceiveMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 joinProperties:(id)arg4 ;
-(void)leaveChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)refreshRegistration;
-(unsigned long long)capabilities;
@end

