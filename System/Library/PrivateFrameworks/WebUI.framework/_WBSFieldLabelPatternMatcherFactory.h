/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebUI/WebUI-Structs.h>
@class NSMutableDictionary;

@interface _WBSFieldLabelPatternMatcherFactory : NSObject {

	NSMutableDictionary* _trie;

}
+(WBSFieldLabelPatternMatcherArrayRef)createFieldLabelPatternMatcherArrayFromWordArrays:(id)arg1 allowingEndOfWordMatches:(bool)arg2 ;
-(void)dealloc;
-(id)init;
-(void)_addWord:(id)arg1 allowingEndOfWordMatch:(bool)arg2 ;
@end
