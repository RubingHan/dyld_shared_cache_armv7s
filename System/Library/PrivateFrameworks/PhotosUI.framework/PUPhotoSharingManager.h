/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:15 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PUPhotoSharingManagerDelegate;
@class PLProgressView, NSTimer, UIActivity;

@interface PUPhotoSharingManager : NSObject {

	PLProgressView* _publishingProgressView;
	NSTimer* _publishingProgressTimer;
	UIActivity* _activity;
	<PUPhotoSharingManagerDelegate>* _delegate;

}

@property (nonatomic,retain) UIActivity * activity;                                   //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) <PUPhotoSharingManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void).cxx_destruct;
-(id)activity;
-(void)setActivity:(id)arg1 ;
-(void)cancelRemaking;
-(void)_publishingAgentDidCancel:(id)arg1 ;
-(void)_publishingAgentDidStartRemaking:(id)arg1 ;
-(void)_publishingAgentDidEndRemaking:(id)arg1 ;
-(void)_publishingAgentDidFinishPublishing:(id)arg1 ;
-(void)_publishingAgentsDidForceCancel:(id)arg1 ;
-(id)_currentPublishingAgent;
-(void)_updatePublishingProgressView:(id)arg1 ;
-(void)_publishingDidFinish;
@end

