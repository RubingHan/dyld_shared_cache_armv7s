/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVMultiStatusItem.h>

@class NSString;

@interface CoreDAVSyncReportItem : CoreDAVMultiStatusItem {

	NSString* _syncToken;

}

@property (readonly) NSString * syncToken;              //@synthesize syncToken=_syncToken - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)description;
-(id)syncToken;
-(void)_setSyncTokenItem:(id)arg1 ;
@end

