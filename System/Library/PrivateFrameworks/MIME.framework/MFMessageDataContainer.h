/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface MFMessageDataContainer : NSObject {

	NSData* _data;
	bool _partial;
	bool _incomplete;

}
-(void)dealloc;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 partial:(bool)arg2 incomplete:(bool)arg3 ;
@end

