/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperation, NSObject;

@interface __NSOperationQueueInternal : NSObject {

	int __queueLock;
	NSOperation* __firstOperation;
	NSOperation* __lastOperation;
	NSOperation* __pendingFirstOperation;
	NSOperation* __pendingLastOperation;
	NSOperation* __firstPriOperation[5];
	NSOperation* __lastPriOperation[5];
	NSObject<OS_dispatch_queue>* __pending_barrier;
	long long __maxNumOps;
	int __actualMaxNumOps;
	int __numExecOps;
	unsigned __unused2;
	unsigned char __mainQ;
	unsigned char __suspended;
	unsigned char __overcommit;
	unsigned char __pad1[1];
	NSObject<OS_dispatch_queue>* __dispatchQueue;
	BOOL __nameBuffer[160];

}
-(void)dealloc;
-(id)init;
-(void)finalize;
@end

