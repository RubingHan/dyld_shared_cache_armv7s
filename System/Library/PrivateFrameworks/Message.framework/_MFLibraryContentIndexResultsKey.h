/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MFMessageCriterion, NSIndexSet;

@interface _MFLibraryContentIndexResultsKey : NSObject {

	MFMessageCriterion* _criterion;
	NSIndexSet* _mailboxIDs;

}

@property (nonatomic,retain) MFMessageCriterion * criterion;              //@synthesize criterion=_criterion - In the implementation block
@property (nonatomic,copy) NSIndexSet * mailboxIDs;                       //@synthesize mailboxIDs=_mailboxIDs - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)criterion;
-(void)setCriterion:(id)arg1 ;
-(void)setMailboxIDs:(id)arg1 ;
-(id)mailboxIDs;
@end

