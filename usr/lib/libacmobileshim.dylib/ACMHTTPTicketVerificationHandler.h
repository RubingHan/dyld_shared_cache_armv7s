/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:47 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMHTTPHandler.h>

@class ACMTicketVerificationRequestImpl;

@interface ACMHTTPTicketVerificationHandler : ACMHTTPHandler {

	ACMTicketVerificationRequestImpl* _request;

}

@property (retain) ACMTicketVerificationRequestImpl * request;              //@synthesize request=_request - In the implementation block
+(id)handlerWithRequest:(id)arg1 ;
-(void)setRequest:(id)arg1 ;
-(void)dealloc;
-(id)request;
-(id)requestBody;
@end

