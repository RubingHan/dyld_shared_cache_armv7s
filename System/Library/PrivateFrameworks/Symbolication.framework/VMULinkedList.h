/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class VMULinkedListEntry;

@interface VMULinkedList : NSObject {

	VMULinkedListEntry* _head;
	VMULinkedListEntry* _tail;

}
+(id)linkedList;
-(id)init;
-(void)removeAllObjects;
-(id)tail;
-(void)pushHead:(id)arg1 ;
-(id)popTail;
-(id)head;
-(void)remove:(id)arg1 ;
@end

