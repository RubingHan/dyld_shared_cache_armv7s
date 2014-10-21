/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DACalDAV/MobileCalDAVCalendar.h>

@class CalDiagNotificationCollectionSync;

@interface MobileCalDAVNotificationCalendar : MobileCalDAVCalendar {

	int _mostRecentNotificationChangeIndex;
	CalDiagNotificationCollectionSync* _notificationCollectionSyncDiagnostics;

}

@property (nonatomic,readonly) CalDiagNotificationCollectionSync * notificationCollectionSyncDiagnostics;              //@synthesize notificationCollectionSyncDiagnostics=_notificationCollectionSyncDiagnostics - In the implementation block
-(void)dealloc;
-(id)initWithCalendarURL:(id)arg1 calendar:(void*)arg2 principal:(id)arg3 title:(id)arg4 ;
-(bool)setEtag:(id)arg1 forItemAtURL:(id)arg2 ;
-(bool)_removeCalendarItemWithURL:(id)arg1 ;
-(id)etagsForItemURLs:(id)arg1 ;
-(bool)setScheduleTag:(id)arg1 forItemAtURL:(id)arg2 ;
-(bool)setURL:(id)arg1 forResourceWithUUID:(id)arg2 ;
-(bool)updateResourcesFromServer:(id)arg1 ;
-(Class)appSpecificCalendarItemClass;
-(void)prepareMergeSyncActionsWithCompletionBlock:(/*^block*/ id)arg1 ;
-(bool)isNotification;
-(id)allItemURLs;
-(void)clearEventChanges;
-(void)prepareSyncActionsWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)recordDiagnosticsForAccountSync:(id)arg1 ;
-(void*)_copyNotificationWithExternalID:(id)arg1 ;
-(void*)_copyNotificationWithUniqueIdentifier:(id)arg1 inCalendar:(void*)arg2 orStore:(void*)arg3 ;
-(bool)_handleInviteNotification:(id)arg1 withResource:(id)arg2 uid:(id)arg3 ;
-(bool)_handleInviteReply:(id)arg1 withResource:(id)arg2 owningNotification:(id)arg3 uid:(id)arg4 ;
-(bool)_handleResourceChanged:(id)arg1 withResource:(id)arg2 uid:(id)arg3 ;
-(id)notificationCollectionSyncDiagnostics;
-(void*)_copyCalItemFromAnyCalendarWithExternalID:(id)arg1 ;
-(void*)_createResourceChange:(id)arg1 withType:(unsigned)arg2 forNotification:(void*)arg3 withRecurrenceID:(id)arg4 ;
-(void*)_createResourceChange:(id)arg1 withType:(unsigned)arg2 forNotification:(void*)arg3 ;
-(id)_changedAttributesFromCalendarChanges:(id)arg1 ;
@end
