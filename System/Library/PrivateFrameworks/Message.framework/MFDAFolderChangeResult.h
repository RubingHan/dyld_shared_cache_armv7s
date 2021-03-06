/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSError, NSString;

@interface MFDAFolderChangeResult : NSObject {

	NSError* _error;
	NSString* _folderID;
	NSString* _folderName;
	int _statusCode;

}

@property (readonly) int statusCode;                     //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSError * error;                    //@synthesize error=_error - In the implementation block
@property (readonly) NSString * folderID;                //@synthesize folderID=_folderID - In the implementation block
@property (readonly) NSString * folderName;              //@synthesize folderName=_folderName - In the implementation block
-(void)dealloc;
-(id)description;
-(int)statusCode;
-(id)folderID;
-(id)folderName;
-(bool)wasSuccessful;
-(id)initWithStatusCode:(int)arg1 error:(id)arg2 folderID:(id)arg3 folderName:(id)arg4 ;
-(id)error;
@end

