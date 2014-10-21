/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:06 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSURLRequest, NSURLResponse, NSString, NSError;

@interface __NSCFURLSessionTask : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _taskIdentifier;
	NSURLRequest* _originalRequest;
	NSURLRequest* _currentRequest;
	NSURLResponse* _response;
	long long _countOfBytesReceived;
	long long _countOfBytesSent;
	long long _countOfBytesExpectedToSend;
	long long _countOfBytesExpectedToReceive;
	NSString* _taskDescription;
	long long _state;
	NSError* _error;
	double _startTime;

}

@property (assign) unsigned long long taskIdentifier;                    //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (copy) NSURLRequest * originalRequest;                         //@synthesize originalRequest=_originalRequest - In the implementation block
@property (copy) NSURLRequest * currentRequest;                          //@synthesize currentRequest=_currentRequest - In the implementation block
@property (copy) NSURLResponse * response;                               //@synthesize response=_response - In the implementation block
@property (assign) long long countOfBytesReceived;                       //@synthesize countOfBytesReceived=_countOfBytesReceived - In the implementation block
@property (assign) long long countOfBytesSent;                           //@synthesize countOfBytesSent=_countOfBytesSent - In the implementation block
@property (assign) long long countOfBytesExpectedToSend;                 //@synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend - In the implementation block
@property (assign) long long countOfBytesExpectedToReceive;              //@synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive - In the implementation block
@property (copy) NSString * taskDescription;                             //@synthesize taskDescription=_taskDescription - In the implementation block
@property (assign) long long state;                                      //@synthesize state=_state - In the implementation block
@property (copy) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (assign) double startTime;                                     //@synthesize startTime=_startTime - In the implementation block
+(bool)supportsSecureCoding;
-(void)setResponse:(id)arg1 ;
-(void)_onqueue_connection_suspend;
-(id)initWithRequest:(id)arg1 ident:(unsigned long long)arg2 ;
-(id)initWithTask:(id)arg1 ;
-(void)setCurrentRequest:(id)arg1 ;
-(void)_onqueue_connection_cancel;
-(void)_onqueue_connection_resume;
-(void)setCountOfBytesExpectedToReceive:(long long)arg1 ;
-(void)setCountOfBytesReceived:(long long)arg1 ;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(void)setCountOfBytesExpectedToSend:(long long)arg1 ;
-(void)setOriginalRequest:(id)arg1 ;
-(void)setTaskIdentifier:(unsigned long long)arg1 ;
-(id)originalRequest;
-(id)currentRequest;
-(unsigned long long)taskIdentifier;
-(long long)countOfBytesReceived;
-(long long)countOfBytesSent;
-(long long)countOfBytesExpectedToSend;
-(long long)countOfBytesExpectedToReceive;
-(id)taskDescription;
-(void)setTaskDescription:(id)arg1 ;
-(void)setError:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)state;
-(void)setStartTime:(double)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)suspend;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)cancel;
-(void)resume;
-(id)response;
-(double)startTime;
-(id)error;
@end
