/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <ChatKit/CKTranscriptComposeDelegate.h>
#import <ChatKit/CKSMSComposeViewServiceProtocol.h>

@class CKModalTranscriptController;

@interface CKSMSComposeViewServiceController : UINavigationController <CKTranscriptComposeDelegate, CKSMSComposeViewServiceProtocol> {

	bool _canEditRecipients;
	bool _supportsAttachments;
	bool _supportsMessageInspection;
	bool _forceMMS;
	bool _disableCameraAttachments;
	CKModalTranscriptController* _modalTranscriptController;

}

@property (nonatomic,retain) CKModalTranscriptController * modalTranscriptController;              //@synthesize modalTranscriptController=_modalTranscriptController - In the implementation block
@property (assign,nonatomic) id delegate; 
@property (assign,nonatomic,@dynamic) bool canEditRecipients; 
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)dealloc;
-(id)init;
-(void)viewDidAppear:(bool)arg1 ;
-(void)_willAppearInRemoteViewController;
-(bool)canEditRecipients;
-(void)didCancelComposition:(id)arg1 ;
-(void)showForwardedMessageParts:(id)arg1 ;
-(void)transcriptController:(id)arg1 didSendMessageInConversation:(id)arg2 ;
-(void)forceMMS;
-(void)transcriptController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3 ;
-(void)showNewMessageCompositionForMessageParts:(id)arg1 ;
-(void)transcriptController:(id)arg1 didSelectNewConversation:(id)arg2 ;
-(bool)supportsAttachments;
-(void)setCanEditRecipients:(bool)arg1 ;
-(void)setModalTranscriptController:(id)arg1 ;
-(id)modalTranscriptController;
-(void)insertTextPart:(id)arg1 ;
-(void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 ;
-(void)_forceMMSIfNecessary;
-(void)setPendingAddresses:(id)arg1 ;
-(void)setTextEntryContentsVisible:(bool)arg1 ;
-(bool)supportsMessageInspection;
-(void)setText:(id)arg1 addresses:(id)arg2 ;
-(void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 ;
-(void)setUICustomizationData:(id)arg1 ;
-(void)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2 ;
-(void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 ;
-(void)forceCancelComposition;
-(void)disableCameraAttachments;
-(void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4 ;
-(void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 ;
@end
