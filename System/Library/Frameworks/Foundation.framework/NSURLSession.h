/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/__NSCFURLSession.h>

@protocol NSURLSessionDelegate;
@class NSOperationQueue, NSURLSessionConfiguration, NSString;

@interface NSURLSession : __NSCFURLSession {

	NSOperationQueue* _delegateQueue;
	<NSURLSessionDelegate>* _delegate;
	NSURLSessionConfiguration* _configuration;
	NSString* _sessionDescription;

}

@property (readonly) NSOperationQueue * delegateQueue;                       //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) <NSURLSessionDelegate> * delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSURLSessionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (copy) NSString * sessionDescription;                              //@synthesize sessionDescription=_sessionDescription - In the implementation block
+(void)initialize;
-(id)delegateQueue;
-(id)sessionDescription;
-(void)setSessionDescription:(id)arg1 ;
-(id)delegate;
-(id)configuration;
@end
