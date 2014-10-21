/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSError;

@interface CalDAVRefreshContext : NSObject {

	bool _isForced;
	bool _wasUserRequested;
	bool _wasDueToPush;
	bool _isCalendarsOnly;
	bool _didDownloadEvents;
	bool _didSaveDatabase;
	bool _shouldSave;
	bool _shouldSaveAccounts;
	bool _calendarFailedToSync;
	double _startTime;
	int _numDownloadedElements;
	bool _shouldRetry;
	int _retryTime;
	NSError* _error;
	unsigned long long _localItems;

}

@property (assign,nonatomic) bool isForced;                              //@synthesize isForced=_isForced - In the implementation block
@property (assign,nonatomic) bool wasUserRequested;                      //@synthesize wasUserRequested=_wasUserRequested - In the implementation block
@property (assign,nonatomic) bool wasDueToPush;                          //@synthesize wasDueToPush=_wasDueToPush - In the implementation block
@property (assign,nonatomic) bool isCalendarsOnly;                       //@synthesize isCalendarsOnly=_isCalendarsOnly - In the implementation block
@property (assign,nonatomic) bool didDownloadEvents;                     //@synthesize didDownloadEvents=_didDownloadEvents - In the implementation block
@property (assign,nonatomic) bool didSaveDatabase;                       //@synthesize didSaveDatabase=_didSaveDatabase - In the implementation block
@property (assign,nonatomic) bool shouldSave;                            //@synthesize shouldSave=_shouldSave - In the implementation block
@property (assign,nonatomic) bool shouldSaveAccounts;                    //@synthesize shouldSaveAccounts=_shouldSaveAccounts - In the implementation block
@property (assign,nonatomic) bool calendarFailedToSync;                  //@synthesize calendarFailedToSync=_calendarFailedToSync - In the implementation block
@property (assign,nonatomic) double startTime;                           //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) int numDownloadedElements;                  //@synthesize numDownloadedElements=_numDownloadedElements - In the implementation block
@property (assign,nonatomic) bool shouldRetry;                           //@synthesize shouldRetry=_shouldRetry - In the implementation block
@property (assign,nonatomic) int retryTime;                              //@synthesize retryTime=_retryTime - In the implementation block
@property (nonatomic,retain) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long localItems;              //@synthesize localItems=_localItems - In the implementation block
+(id)defaultContext;
-(void)setError:(id)arg1 ;
-(unsigned long long)localItems;
-(void)dealloc;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(void)setShouldSave:(bool)arg1 ;
-(bool)shouldSaveAccounts;
-(bool)isCalendarsOnly;
-(bool)calendarFailedToSync;
-(bool)shouldSave;
-(void)setLocalItems:(unsigned long long)arg1 ;
-(void)setIsCalendarsOnly:(bool)arg1 ;
-(void)setNumDownloadedElements:(int)arg1 ;
-(void)setShouldSaveAccounts:(bool)arg1 ;
-(void)setCalendarFailedToSync:(bool)arg1 ;
-(int)retryTime;
-(void)setRetryTime:(int)arg1 ;
-(void)setShouldRetry:(bool)arg1 ;
-(void)setIsForced:(bool)arg1 ;
-(bool)wasUserRequested;
-(void)setWasUserRequested:(bool)arg1 ;
-(bool)wasDueToPush;
-(void)setWasDueToPush:(bool)arg1 ;
-(bool)didDownloadEvents;
-(void)setDidDownloadEvents:(bool)arg1 ;
-(bool)didSaveDatabase;
-(void)setDidSaveDatabase:(bool)arg1 ;
-(bool)shouldRetry;
-(int)numDownloadedElements;
-(id)error;
-(bool)isForced;
@end
