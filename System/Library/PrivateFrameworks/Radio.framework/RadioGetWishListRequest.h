/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest;

@interface RadioGetWishListRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	unsigned long long _maxNumberOfTracks;

}

@property (assign,nonatomic) unsigned long long maxNumberOfTracks;              //@synthesize maxNumberOfTracks=_maxNumberOfTracks - In the implementation block
-(void)startWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)init;
-(void)cancel;
-(void).cxx_destruct;
-(unsigned long long)maxNumberOfTracks;
-(void)setMaxNumberOfTracks:(unsigned long long)arg1 ;
@end

