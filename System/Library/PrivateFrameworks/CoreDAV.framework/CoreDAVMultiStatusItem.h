/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableArray, CoreDAVLeafItem, NSSet;

@interface CoreDAVMultiStatusItem : CoreDAVItem {

	NSMutableArray* _orderedResponses;
	CoreDAVLeafItem* _responseDescription;

}

@property (readonly) NSSet * responses; 
@property (retain) NSMutableArray * orderedResponses;                  //@synthesize orderedResponses=_orderedResponses - In the implementation block
@property (retain) CoreDAVLeafItem * responseDescription;              //@synthesize responseDescription=_responseDescription - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)orderedResponses;
-(id)responseDescription;
-(void)setResponseDescription:(id)arg1 ;
-(void)setOrderedResponses:(id)arg1 ;
-(id)responses;
-(void)addResponse:(id)arg1 ;
@end

