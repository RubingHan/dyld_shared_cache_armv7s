/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSURLRequestProperties, SUMescalSession;

@interface SUSetupMescalSessionOperation : ISOperation {

	SSURLRequestProperties* _requestProperties;
	SUMescalSession* _session;

}

@property (readonly) SUMescalSession * mescalSession; 
-(void)dealloc;
-(void)run;
-(id)initWithURLRequestProperties:(id)arg1 ;
-(id)mescalSession;
-(bool)_isMescalEnabled;
-(id)_setupSAPCertificate:(id*)arg1 ;
-(id)_setupSAPWithData:(id)arg1 error:(id*)arg2 ;
@end

