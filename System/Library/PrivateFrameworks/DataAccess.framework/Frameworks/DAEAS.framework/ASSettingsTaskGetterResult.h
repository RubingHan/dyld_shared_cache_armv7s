/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ASSettingsTaskGetterResult : NSObject {

	int _key;
	int _status;
	id _result;

}

@property (readonly) int key;                 //@synthesize key=_key - In the implementation block
@property (readonly) int status;              //@synthesize status=_status - In the implementation block
@property (readonly) id result;               //@synthesize result=_result - In the implementation block
-(void)dealloc;
-(int)key;
-(int)status;
-(id)initWithKey:(int)arg1 status:(int)arg2 result:(id)arg3 ;
-(id)result;
@end
