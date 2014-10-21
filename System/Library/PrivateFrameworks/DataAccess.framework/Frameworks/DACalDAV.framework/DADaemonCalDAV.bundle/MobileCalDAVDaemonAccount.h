/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:02 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DACalDAV/MobileCalDAVAccount.h>
#import <DADaemonCalDAV/DADataclassLockWatcher.h>
#import <DADaemonCalDAV/DARefreshManagerDelegate.h>
#import <DADaemonCalDAV/DABabysittable.h>

@class CalDAVAgent, NSMutableDictionary, CoreDAVOptionsTask, NSTimer, NSMutableSet;

@interface MobileCalDAVDaemonAccount : MobileCalDAVAccount <DADataclassLockWatcher, DARefreshManagerDelegate, DABabysittable> {

	CalDAVAgent* _consumer;
	bool _shouldRegisterWithRefreshManager;
	bool _safeToRefresh;
	bool _waitingForGatekeeper;
	bool _holdingGatekeeperLock;
	bool _forcedRefresh;
	bool _fullRefresh;
	int _refreshReason;
	double _lastRetryTimeout;
	NSMutableDictionary* _attachmentDownloadsByAttachmentUUID;
	NSMutableDictionary* _shareResponses;
	CoreDAVOptionsTask* _optionsProbe;
	NSTimer* _optionsTimeoutTimer;
	NSMutableSet* _watchedCollections;

}

@property (assign) CalDAVAgent * consumer;                         //@synthesize consumer=_consumer - In the implementation block
@property (assign,nonatomic) bool safeToRefresh;                   //@synthesize safeToRefresh=_safeToRefresh - In the implementation block
@property (assign) bool fullRefresh;                               //@synthesize fullRefresh=_fullRefresh - In the implementation block
@property (assign) bool forcedRefresh;                             //@synthesize forcedRefresh=_forcedRefresh - In the implementation block
@property (assign) int refreshReason;                              //@synthesize refreshReason=_refreshReason - In the implementation block
@property (retain) CoreDAVOptionsTask * optionsProbe;              //@synthesize optionsProbe=_optionsProbe - In the implementation block
@property (retain) NSTimer * optionsTimeoutTimer;                  //@synthesize optionsTimeoutTimer=_optionsTimeoutTimer - In the implementation block
+(int)extractDARefreshReasonFromContext:(id)arg1 ;
+(int)convertToMobileCalDAVRefreshReason:(int)arg1 ;
-(id)respondToShareRequestForCalendar:(id)arg1 withResponse:(int)arg2 consumer:(id)arg3 ;
-(void)cancelShareResponseInstance:(id)arg1 error:(id)arg2 ;
-(void)shareResponseIsGoingAway:(id)arg1 ;
-(void)cancelAllSharingRequests;
-(id)beginDownloadingAttachmentWithUUID:(id)arg1 consumer:(id)arg2 ;
-(void)cancelDownloadingInstance:(id)arg1 error:(id)arg2 ;
-(void)_attachmentDownloadDidFinish:(id)arg1 ;
-(void)cancelAllAttachmentDownloads;
-(void)_refresh;
-(void)dealloc;
-(void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3 ;
-(id)waiterID;
-(bool)monitorFoldersWithIDs:(id)arg1 ;
-(void)cancelRefreshWithCompletion:(/*^block*/ id)arg1 ;
-(void)refreshActor:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)setRefreshReason:(int)arg1 ;
-(int)refreshReason;
-(void)setFullRefresh:(bool)arg1 ;
-(void)setSafeToRefresh:(bool)arg1 ;
-(void)setForcedRefresh:(bool)arg1 ;
-(bool)_hasSubscribedCalendars;
-(bool)safeToRefresh;
-(void)_persistAccountSyncDiagnostics:(id)arg1 withContext:(id)arg2 completionTime:(id)arg3 willAttemptToRetry:(bool)arg4 hitInternalRefreshTimeout:(bool)arg5 error:(id)arg6 ;
-(bool)_hasChangesInStore:(void*)arg1 forChangesCall:(/*function pointer*/ void*)arg2 ;
-(bool)_shouldRefreshInResponseToDBChange;
-(void)_probeAndSync;
-(bool)fullRefresh;
-(bool)forcedRefresh;
-(bool)APSTopicHasValidPrefix:(id)arg1 ;
-(id)watchedCollections;
-(void)refreshCollections:(id)arg1 withReason:(int)arg2 ;
-(id)serverTokenRegistrationURL;
-(id)optionsTimeoutTimer;
-(void)setOptionsTimeoutTimer:(id)arg1 ;
-(void)_cancelOptionsTimer;
-(id)optionsProbe;
-(void)setOptionsProbe:(id)arg1 ;
-(void)_serverProbeTimedOut;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(void)_reallyPerformSearchQuery:(id)arg1 ;
-(void)setConsumer:(id)arg1 ;
-(id)consumer;
@end
