/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:28 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSHashTable, NSError, NSDictionary;

@interface NSFileWrapperMoreIVars : NSObject {

	NSURL* contentsURL;
	bool contentsMustBeReadWithoutMapping;
	bool attributesMustBeWrittenSoNoHardLinking;
	NSHashTable* parents;
	NSError* contentsLazyReadingError;
	NSDictionary* cachedDirectoryChildrenAsDictionary;

}
@end

