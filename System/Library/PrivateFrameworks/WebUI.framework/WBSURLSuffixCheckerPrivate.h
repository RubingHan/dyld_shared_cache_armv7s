/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebUI/WebUI-Structs.h>
@class NSMutableArray;

@interface WBSURLSuffixCheckerPrivate : NSObject {

	SCD_Struct_WB11* _trie;
	unsigned _trieNodeCount;
	unsigned long long _maxLength;
	NSMutableArray* _failedSuffixes;

}
-(void)dealloc;
-(bool)hasSuffix:(id)arg1 ;
-(bool)insertString:(id)arg1 intoTrieWithCache:(SCD_Struct_WB13*)arg2 ;
-(void)addStringToFailedSuffixes:(id)arg1 ;
-(id)initWithSuffixes:(id)arg1 ;
@end

