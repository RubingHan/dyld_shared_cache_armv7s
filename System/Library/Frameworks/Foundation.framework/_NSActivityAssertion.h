/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLock, NSString;

@interface _NSActivityAssertion : NSObject {

	unsigned long long _options;
	NSLock* _lock;
	bool _ended;
	NSString* _reason;

}
-(void)_end;
-(id)_initWithActivityOptions:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)dealloc;
-(id)debugDescription;
@end

