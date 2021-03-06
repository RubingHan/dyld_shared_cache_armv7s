/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUAddressRange.h>

@interface VMURangeValue : VMUAddressRange {

	long long _value;

}
+(id)rangeValueWithRange:(VMURange)arg1 value:(long long)arg2 ;
-(id)description;
-(long long)value;
-(long long)compare:(id)arg1 ;
-(VMURange)addressRange;
-(id)initWithRange:(VMURange)arg1 value:(long long)arg2 ;
@end

