/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKRequest.h>

@class SBKSyncTransaction;

@interface SBKSyncRequest : SBKRequest {

	SBKSyncTransaction* _transaction;

}

@property (nonatomic,retain) SBKSyncTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
+(id)requestForTransaction:(id)arg1 ;
+(long long)bodyContentEncodingType;
+(long long)bodyContentType;
-(void).cxx_destruct;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(void)setTransaction:(id)arg1 ;
-(id)transaction;
-(id)newURLOperation;
@end

