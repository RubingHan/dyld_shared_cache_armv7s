/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUInputSource.h>

@class NSURL;

@interface SUFileInputSource : SUInputSource {

	long long _expectedLength;
	int _fd;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * fileURL;              //@synthesize url=_url - In the implementation block
-(bool)open:(id*)arg1 ;
-(bool)hasBytesAvailable;
-(void)dealloc;
-(id)init;
-(void)close;
-(id)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(long long)expectedLength;
-(void)_close;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 error:(id*)arg3 ;
@end

