/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVBulkRequestsItem, NSDictionary;

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem {

	CoreDAVBulkRequestsItem* _crudItem;
	CoreDAVBulkRequestsItem* _simpleItem;

}

@property (readonly) NSDictionary * dictRepresentation; 
@property (retain) CoreDAVBulkRequestsItem * crudItem;                //@synthesize crudItem=_crudItem - In the implementation block
@property (retain) CoreDAVBulkRequestsItem * simpleItem;              //@synthesize simpleItem=_simpleItem - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)dictRepresentation;
-(id)crudItem;
-(id)simpleItem;
-(void)setCrudItem:(id)arg1 ;
-(void)setSimpleItem:(id)arg1 ;
@end
