/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface WFTagFactory : NSObject {

	NSMutableDictionary* sharedTags;

}
+(id)tagsForWebpage:(id)arg1 ;
+(id)defaultFactory;
-(void)dealloc;
-(id)init;
-(id)tagWithClass:(Class)arg1 webpage:(id)arg2 ;
@end

