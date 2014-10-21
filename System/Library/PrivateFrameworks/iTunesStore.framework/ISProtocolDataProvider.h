/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISDataProvider.h>
#import <CoreFoundation/NSCopying.h>

@interface ISProtocolDataProvider : ISDataProvider <NSCopying> {

	bool _shouldPostFooterSectionChanged;
	bool _shouldProcessAccount;
	bool _shouldProcessAuthenticationDialogs;
	bool _shouldProcessDialogs;
	bool _shouldProcessProtocol;
	bool _shouldTriggerDownloads;

}

@property (assign) bool shouldPostFooterSectionChanged;                  //@synthesize shouldPostFooterSectionChanged=_shouldPostFooterSectionChanged - In the implementation block
@property (assign) bool shouldProcessAccount;                            //@synthesize shouldProcessAccount=_shouldProcessAccount - In the implementation block
@property (assign) bool shouldProcessAuthenticationDialogs;              //@synthesize shouldProcessAuthenticationDialogs=_shouldProcessAuthenticationDialogs - In the implementation block
@property (assign) bool shouldProcessDialogs;                            //@synthesize shouldProcessDialogs=_shouldProcessDialogs - In the implementation block
@property (assign) bool shouldProcessProtocol;                           //@synthesize shouldProcessProtocol=_shouldProcessProtocol - In the implementation block
@property (assign) bool shouldTriggerDownloads;                          //@synthesize shouldTriggerDownloads=_shouldTriggerDownloads - In the implementation block
-(void)setShouldProcessProtocol:(bool)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setShouldTriggerDownloads:(bool)arg1 ;
-(bool)shouldProcessProtocol;
-(bool)processDialogFromDictionary:(id)arg1 error:(id*)arg2 ;
-(bool)processDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setShouldProcessAccount:(bool)arg1 ;
-(bool)_shouldFailWithTokenErrorForDialog:(id)arg1 dictionary:(id)arg2 error:(id*)arg3 ;
-(void)_performActionsForResponse:(id)arg1 ;
-(bool)_processFailureTypeFromDictionary:(id)arg1 error:(id*)arg2 ;
-(bool)shouldTriggerDownloads;
-(void)_checkDownloadQueues;
-(void)_selectFooterSection:(id)arg1 ;
-(bool)shouldProcessAccount;
-(void)_checkInAppPurchaseQueueForAction:(id)arg1 ;
-(bool)shouldPostFooterSectionChanged;
-(void)setShouldPostFooterSectionChanged:(bool)arg1 ;
-(bool)shouldProcessAuthenticationDialogs;
-(bool)shouldProcessDialogs;
-(void)setShouldProcessAuthenticationDialogs:(bool)arg1 ;
-(void)setShouldProcessDialogs:(bool)arg1 ;
-(bool)parseData:(id)arg1 returningError:(id*)arg2 ;
@end
