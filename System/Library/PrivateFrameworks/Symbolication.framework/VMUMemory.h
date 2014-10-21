/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VMUMemory <NSObject>
@required
-(id)view;
-(VMURange*)addressRange;
-(id)architecture;
-(id)memoryFromSubRange:(VMURange)arg1 mapToAddress:(unsigned long long)arg2 architecture:(id)arg3;
-(bool)isContiguous;
-(id)memoryAtAddress:(unsigned long long)arg1 maxSize:(unsigned long long)arg2;
-(id)swappedView;
@end
