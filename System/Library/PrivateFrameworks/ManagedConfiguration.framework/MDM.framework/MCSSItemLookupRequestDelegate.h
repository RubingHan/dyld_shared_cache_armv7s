/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MDM/MCSSRequestDelegate.h>
#import <MDM/SSItemLookupRequestDelegate.h>

@class NSArray, SSItemLookupRequest;

@interface MCSSItemLookupRequestDelegate : MCSSRequestDelegate <SSItemLookupRequestDelegate> {

	NSArray* _items;

}

@property (nonatomic,@dynamic,readonly) SSItemLookupRequest * request; 
+(id)instance;
-(void).cxx_destruct;
-(void)startCompletionBlock:(/*^block*/ id)arg1 ;
-(void)itemLookupRequest:(id)arg1 didFindItems:(id)arg2 ;
@end
