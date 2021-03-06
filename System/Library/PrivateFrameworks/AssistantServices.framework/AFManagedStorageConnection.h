/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFManagedStore.h>

@class NSXPCConnection;

@interface AFManagedStorageConnection : NSObject <AFManagedStore> {

	NSXPCConnection* _connection;

}
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(id)_connection;
-(id)_managedStoreServiceWithErrorHandler:(/*^block*/ id)arg1 ;
-(id)_managedStoreService;
-(id)domainObjectForKey:(id)arg1 ;
-(void)setDomainObject:(id)arg1 forKey:(id)arg2 ;
-(void)_clearConnection;
@end

