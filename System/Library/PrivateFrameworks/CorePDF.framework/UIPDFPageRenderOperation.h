/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class UIPDFPageRenderJob;

@interface UIPDFPageRenderOperation : NSOperation {

	UIPDFPageRenderJob* _job;
	bool executing;
	bool finished;

}

@property (retain) UIPDFPageRenderJob * job;              //@synthesize job=_job - In the implementation block
-(bool)isConcurrent;
-(void)completeOperation;
-(void)dealloc;
-(void)start;
-(void)main;
-(id)initWithJob:(id)arg1 ;
-(bool)isFinished;
-(bool)isExecuting;
-(id)job;
-(void)setJob:(id)arg1 ;
@end

