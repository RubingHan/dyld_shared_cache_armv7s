/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:00 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface DAMessageMoveRequest : NSObject {

	NSString* _message;
	NSString* _fromFolder;
	NSString* _toFolder;
	id _context;

}

@property (readonly) NSString * message;                 //@synthesize message=_message - In the implementation block
@property (readonly) NSString * fromFolder;              //@synthesize fromFolder=_fromFolder - In the implementation block
@property (readonly) NSString * toFolder;                //@synthesize toFolder=_toFolder - In the implementation block
@property (retain) id context;                           //@synthesize context=_context - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)context;
-(void)setContext:(id)arg1 ;
-(id)message;
-(id)fromFolder;
-(id)toFolder;
-(id)initMoveRequestWithMessage:(id)arg1 fromFolder:(id)arg2 toFolder:(id)arg3 ;
@end

