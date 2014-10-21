/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/MSDaemon.h>

@protocol MSAlbumSharingDaemonDelegate, OS_dispatch_queue;
@class NSMutableDictionary, MSASDaemonModel, NSObject;

@interface MSAlbumSharingDaemon : MSDaemon {

	bool _isRetryingOutstandingActivities;
	int _busyCount;
	<MSAlbumSharingDaemonDelegate>* _delegate;
	NSMutableDictionary* _personIDToStateMachineMap;
	NSMutableDictionary* _personIDToDelegateMap;
	MSASDaemonModel* _daemonModel;
	NSObject<OS_dispatch_queue>* _mapQueue;
	NSObject<OS_dispatch_queue>* _workQueue;
	NSMutableDictionary* _nextUpdateDateByPersonID;

}

@property (assign,nonatomic,__weak) <MSAlbumSharingDaemonDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * mapQueue;                        //@synthesize mapQueue=_mapQueue - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * workQueue;                       //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * personIDToStateMachineMap;               //@synthesize personIDToStateMachineMap=_personIDToStateMachineMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * personIDToDelegateMap;                   //@synthesize personIDToDelegateMap=_personIDToDelegateMap - In the implementation block
@property (nonatomic,retain) MSASDaemonModel * daemonModel;                                 //@synthesize daemonModel=_daemonModel - In the implementation block
@property (assign,nonatomic) int busyCount;                                                 //@synthesize busyCount=_busyCount - In the implementation block
@property (assign,nonatomic) bool isRetryingOutstandingActivities;                          //@synthesize isRetryingOutstandingActivities=_isRetryingOutstandingActivities - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nextUpdateDateByPersonID;                //@synthesize nextUpdateDateByPersonID=_nextUpdateDateByPersonID - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)start;
-(void).cxx_destruct;
-(id)nextActivityDate;
-(bool)isInRetryState;
-(void)didReceivePushNotificationForPersonID:(id)arg1 ;
-(void)refreshServerSideConfigurationForPersonID:(id)arg1 ;
-(void)didIdle;
-(void)didUnidle;
-(void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)arg1 ;
-(void)didReceiveGlobalResetSyncForPersonID:(id)arg1 ;
-(id)workQueue;
-(void)shutDownCompletionBlock:(/*^block*/ id)arg1 ;
-(id)mapQueue;
-(void)mapQueueShutDownStateMachineInMap:(id)arg1 personIDs:(id)arg2 index:(unsigned long long)arg3 forDestruction:(bool)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)shutDownStateMachine:(id)arg1 forDestruction:(bool)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(bool)hasCommandsInGroupedCommandQueue;
-(bool)isRetryingOutstandingActivities;
-(void)setIsRetryingOutstandingActivities:(bool)arg1 ;
-(id)boundStateMachineForPersonID:(id)arg1 ;
-(id)personIDsListeningToPushNotification;
-(id)nextUpdateDateByPersonID;
-(void)setNextUpdateDateByPersonID:(id)arg1 ;
-(void)setNextActivityDate:(id)arg1 forPersonID:(id)arg2 ;
-(id)existingStateMachineForPersonID:(id)arg1 ;
-(void)shutDown;
-(void)addAlbum:(id)arg1 ;
-(void)deleteAlbumWithGUID:(id)arg1 ;
-(void)refreshResetSync:(bool)arg1 personID:(id)arg2 info:(id)arg3 ;
-(id)modelForPersonID:(id)arg1 ;
-(void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(bool)arg2 personID:(id)arg3 info:(id)arg4 ;
-(void)refreshAccessControlListOfAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(bool)arg2 personID:(id)arg3 info:(id)arg4 ;
-(void)addAlbum:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 info:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 ;
-(void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)setPublicAccessEnabled:(bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)setMultipleContributorsEnabled:(bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 ;
-(void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3 info:(id)arg4 ;
-(void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 ;
-(void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)forgetEverythingAboutPersonID:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)didDestroyStateMachineForPersonID:(id)arg1 ;
-(void)willDestroyStateMachineForPersonID:(id)arg1 ;
-(void)_postModelShutdownForPersonID:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)workQueueForgetEverythingAboutPersonID:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)workQueueForgetEverythingAboutPersonIDs:(id)arg1 index:(unsigned long long)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(id)daemonModel;
-(id)_delegateForPersonID:(id)arg1 ;
-(void)didCreateStateMachineForPersonID:(id)arg1 ;
-(void)setFocusAlbumGUID:(id)arg1 forPersonID:(id)arg2 ;
-(void)didReceiveAuthFailureForPersonID:(id)arg1 ;
-(void)didReceiveAuthSuccessForPersonID:(id)arg1 ;
-(bool)isWaitingForAuth;
-(void)stopAssetDownloadsForPersonID:(id)arg1 ;
-(void)cancelActivitiesForPersonID:(id)arg1 ;
-(void)sendServerSideConfigurationDidChangeNotificationForPersonID:(id)arg1 ;
-(int)assetsInDownloadQueueCountForPersonID:(id)arg1 ;
-(id)existingModelForPersonID:(id)arg1 ;
-(void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(bool)arg2 personID:(id)arg3 ;
-(void)refreshAccessControlListOfAlbumWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(bool)arg2 personID:(id)arg3 ;
-(void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 ;
-(void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2 personID:(id)arg3 ;
-(void)retrieveAssetsInAssetCollectionsWithGUIDs:(id)arg1 assetTypeFlags:(int)arg2 personID:(id)arg3 ;
-(void)forgetEverythingCompletionBlock:(/*^block*/ id)arg1 ;
-(id)persistentObjectForKey:(id)arg1 personID:(id)arg2 ;
-(void)setPersistentObject:(id)arg1 forKey:(id)arg2 personID:(id)arg3 ;
-(void)didReceiveTooManyAlbumsError:(id)arg1 personID:(id)arg2 ;
-(void)didReceiveTooManyPhotosError:(id)arg1 forAlbum:(id)arg2 personID:(id)arg3 ;
-(void)didReceiveTooManySubscriptionsError:(id)arg1 personID:(id)arg2 ;
-(void)didReceiveTooManyCommentsError:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 personID:(id)arg4 ;
-(void)didReceiveCommentTooLongError:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 personID:(id)arg4 ;
-(id)personIDToStateMachineMap;
-(void)setPersonIDToStateMachineMap:(id)arg1 ;
-(id)personIDToDelegateMap;
-(void)setPersonIDToDelegateMap:(id)arg1 ;
-(void)setDaemonModel:(id)arg1 ;
-(int)busyCount;
-(void)setBusyCount:(int)arg1 ;
-(void)setMapQueue:(id)arg1 ;
-(void)setWorkQueue:(id)arg1 ;
-(id)serverSideConfigurationForPersonID:(id)arg1 ;
-(void)refreshResetSync:(bool)arg1 personID:(id)arg2 ;
-(void)retryOutstandingActivitiesForPersonID:(id)arg1 ;
-(void)retryOutstandingActivities;
-(void)forgetEverythingAboutPersonID:(id)arg1 ;
-(void)addAlbum:(id)arg1 personID:(id)arg2 ;
-(void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2 ;
-(void)setPublicAccessEnabled:(bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)setMultipleContributorsEnabled:(bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 ;
-(void)deleteAssetCollectionsWithGUIDs:(id)arg1 personID:(id)arg2 ;
-(void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3 ;
-(void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 moveLastViewedAssetCollectionMarker:(bool)arg3 info:(id)arg4 ;
-(void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3 ;
-(void)setFocusAssetCollectionGUID:(id)arg1 forPersonID:(id)arg2 ;
-(void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 ;
@end
