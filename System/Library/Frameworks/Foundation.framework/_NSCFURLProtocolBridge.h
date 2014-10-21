/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSURLProtocolClient.h>

@class NSURLProtocol, NSURLAuthenticationChallenge;

@interface _NSCFURLProtocolBridge : NSObject <NSURLProtocolClient> {

	NSURLProtocol* _nsProt;
	CFURLProtocolRef _cfProt;
	CFURLAuthChallengeRef _cfChallenge;
	NSURLAuthenticationChallenge* _nsChallenge;
	bool _loading;

}
+(void)barRequest:(CFURLRequestRef)arg1 ;
+(void)permitRequest:(CFURLRequestRef)arg1 ;
+(void)registerWithCFURLProtocol;
+(void)_fillinProtocolImplementation:(CFURLProtocolImplementation_V0*)arg1 ;
-(void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3 ;
-(void)URLProtocolDidFinishLoading:(id)arg1 ;
-(void)URLProtocol:(id)arg1 didFailWithError:(id)arg2 ;
-(void)URLProtocol:(id)arg1 didLoadData:(id)arg2 lengthReceived:(long long)arg3 ;
-(void)URLProtocol:(id)arg1 didLoadData:(id)arg2 ;
-(void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2 ;
-(void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)initWithCFURLProtocol:(CFURLProtocolRef)arg1 request:(id)arg2 protocolClass:(Class)arg3 ;
-(void)schedule:(CFRunLoopRef)arg1 mode:(CFStringRef)arg2 ;
-(void)unschedule:(CFRunLoopRef)arg1 mode:(CFStringRef)arg2 ;
-(void)pushEvent:(/*^block*/ id)arg1 from:(const char*)arg2 ;
-(void)wasRedirectedToRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(void)cachedResponseIsValid:(id)arg1 ;
-(void)didReceiveResponse:(id)arg1 ;
-(void)didLoadData:(id)arg1 lengthReceived:(long long)arg2 ;
-(void)didFinishLoading;
-(void)didFailWithError:(id)arg1 ;
-(void)didReceiveAuthenticationChallenge:(id)arg1 ;
-(void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
-(void)halt;
-(void)_forgetClient;
-(void)useCredential:(CFURLCredentialRef)arg1 forChallenge:(CFURLAuthChallengeRef)arg2 ;
-(void)bridgeRetain;
-(void)bridgeRelease;
-(void)dealloc;
-(id)description;
-(void)start;
-(void)resume;
-(void)stop;
@end
