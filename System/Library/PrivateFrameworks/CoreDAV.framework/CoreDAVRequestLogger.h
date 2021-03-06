/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:52 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CoreDAVAccountInfoProvider;
@class NSArray;

@interface CoreDAVRequestLogger : NSObject {

	<CoreDAVAccountInfoProvider>* _provider;
	NSArray* _headerSortDescriptors;
	int _snippetsLogged;

}

@property (retain) NSArray * headerSortDescriptors;              //@synthesize headerSortDescriptors=_headerSortDescriptors - In the implementation block
-(void)dealloc;
-(void)logCoreDAVRequest:(id)arg1 withTaskIdentifier:(id)arg2 ;
-(void)finishCoreDAVResponse;
-(void)logCoreDAVResponseSnippet:(id)arg1 ;
-(void)logCoreDAVResponseSnippet:(id)arg1 withTaskIdentifier:(id)arg2 ;
-(void)logCoreDAVResponseHeaders:(id)arg1 andStatusCode:(long long)arg2 withTaskIdentifier:(id)arg3 ;
-(void)setHeaderSortDescriptors:(id)arg1 ;
-(id)_inflateRequestBody:(id)arg1 ;
-(id)headerSortDescriptors;
-(id)initWithProvider:(id)arg1 ;
@end

