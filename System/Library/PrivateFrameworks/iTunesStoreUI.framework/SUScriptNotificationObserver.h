/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSLock;

@interface SUScriptNotificationObserver : NSObject {

	NSLock* _lock;
	CFSetRef _receivers;

}
-(void)_networkTypeChangedNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addEventReceiver:(id)arg1 ;
-(void)removeEventReceiver:(id)arg1 ;
-(void)_memoryWarningNotification:(id)arg1 ;
-(void)_endObservingNotifications;
-(void)_beginObservingNotifications;
-(void)_dispatchEvent:(id)arg1 forName:(id)arg2 ;
-(void)_dispatchEventWithDictionary:(id)arg1 forName:(id)arg2 ;
-(void)_restrictionsChangedNotification:(id)arg1 ;
-(void)_audioSessionsChangedNotification:(id)arg1 ;
-(void)_purchaseRequestDidSucceedNotification:(id)arg1 ;
-(void)_softwareMapChangedNotification:(id)arg1 ;
-(void)_enumerateReceiversUsingBlock:(/*^block*/ id)arg1 ;
-(void)_accessibilityPerformScrollUp;
-(void)_accessibilityPerformScrollDown;
-(void)_accessibilityPerformScrollLeft;
-(void)_accessibilityPerformScrollRight;
-(void)_accessibilityPerformEscape;
@end
