/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/SearchBundles/MobileMail.searchBundle/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/MSSearchDelegate.h>

@protocol OS_dispatch_semaphore;
@class MSSearch, NSString, NSDictionary, NSObject;

@interface _MessageDatastoreContentResultSearchContext : NSObject <MSSearchDelegate> {

	MSSearch* _search;
	NSString* _identifier;
	NSDictionary* _results;
	NSObject<OS_dispatch_semaphore>* _semaphore;

}
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(bool)search:(id)arg1 didFindResults:(id)arg2 ;
-(void)search:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)search;
@end

