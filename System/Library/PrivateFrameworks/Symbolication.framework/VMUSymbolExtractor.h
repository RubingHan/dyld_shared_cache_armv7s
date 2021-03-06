/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface VMUSymbolExtractor : NSObject {

	NSMutableArray* _symbols;
	NSMutableArray* _sourceInfos;

}
+(id)extractSymbolOwnerFromHeader:(id)arg1 ;
+(unsigned)extractSymbolOwnerFlagsFromHeader:(id)arg1 ;
+(id)expandSourceInfos:(id)arg1 usingSymbols:(id)arg2 ;
+(id)extractLazySymbolOwnerFromHeader:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)symbols;
-(id)sourceInfos;
@end

