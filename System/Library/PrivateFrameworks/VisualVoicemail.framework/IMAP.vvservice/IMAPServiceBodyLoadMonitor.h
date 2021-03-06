/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:15 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.vvservice/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMAP/IMAP-Structs.h>
@class IMAPService, NSMutableData;

@interface IMAPServiceBodyLoadMonitor : NSObject {

	IMAPService* _service;
	CFDictionaryRef _loadContextsByLibraryId;
	NSMutableData* _headerData;

}

@property (retain) NSMutableData * headerData;              //@synthesize headerData=_headerData - In the implementation block
+(id)_headersToPreserve;
-(void)dealloc;
-(id)headerData;
-(void)progressiveMimeParser:(id)arg1 finishedMimePart:(id)arg2 ;
-(void)progressiveMimeParser:(id)arg1 beganDataForMimePart:(id)arg2 ;
-(void)progressiveMimeParser:(id)arg1 failedWithError:(id)arg2 ;
-(bool)progressiveBodyLoadHasStartedForRecord:(void*)arg1 ;
-(void)lengthsOfBodyLoadForRecord:(void*)arg1 expected:(unsigned*)arg2 current:(unsigned*)arg3 ;
-(void)bodyLoadStartedForRemoteUid:(unsigned)arg1 inStore:(id)arg2 data:(id)arg3 ;
-(void)bodyLoadContinuedForRemoteUid:(unsigned)arg1 inStore:(id)arg2 data:(id)arg3 ;
-(void)bodyLoadEndedForRemoteUid:(unsigned)arg1 inStore:(id)arg2 data:(id)arg3 ;
-(void)_activityCompleted:(id)arg1 ;
-(int)_libraryIdForRemoteUid:(unsigned)arg1 inStore:(id)arg2 ;
-(void)setHeaderData:(id)arg1 ;
-(id)_createHeaderDictionaryForData:(id)arg1 ;
-(void)_postDataAvailableWithUserInfo:(id)arg1 ;
-(id)initForService:(id)arg1 ;
@end

