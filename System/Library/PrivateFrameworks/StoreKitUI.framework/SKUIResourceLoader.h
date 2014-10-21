/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUIResourceLoaderDelegate;
@class SKUIClientContext, NSOperationQueue, NSMutableDictionary;

@interface SKUIResourceLoader : NSObject {

	SKUIClientContext* _clientContext;
	<SKUIResourceLoaderDelegate>* _delegate;
	NSOperationQueue* _operationQueue;
	NSMutableDictionary* _operationsByRequestID;
	NSMutableDictionary* _resourcesByRequestID;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;                         //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                         //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic,__weak) <SKUIResourceLoaderDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isIdle,nonatomic,readonly) bool idle; 
-(id)operationQueue;
-(bool)isIdle;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void).cxx_destruct;
-(id)clientContext;
-(id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2 ;
-(bool)loadResourceWithRequest:(id)arg1 reason:(long long)arg2 ;
-(id)cachedResourceForRequestIdentifier:(unsigned long long)arg1 ;
-(void)_finishLoadForRequest:(id)arg1 withResource:(id)arg2 ;
-(void)_sendDidIdleIfNecessary;
-(void)addResource:(id)arg1 forRequestIdentifier:(unsigned long long)arg2 ;
-(void)cancelRequestWithIdentifier:(unsigned long long)arg1 ;
-(void)removeAllCachedResources;
-(void)setReason:(long long)arg1 forRequestWithIdentifier:(unsigned long long)arg2 ;
-(void)cancelAllRequests;
-(id)initWithOperationQueue:(id)arg1 ;
@end
