/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AVMediaDataRequester : NSObject {

	id _mediaDataConsumer;
	NSObject<OS_dispatch_queue>* _requestQueue;
	/*^block*/ id _requestBlock;

}

@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,readonly) id requestBlock;                                         //@synthesize requestBlock=_requestBlock - In the implementation block
-(id)requestQueue;
-(id)initWithMediaDataConsumer:(id)arg1 requestQueue:(id)arg2 requestBlock:(/*^block*/ id)arg3 ;
-(void)_requestMediaDataIfReady;
-(void)startRequestingMediaData;
-(/*^block*/ id)requestBlock;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)finalize;
@end

