/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:47 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDCollection;

@interface EDPivotItem : NSObject {

	unsigned mRepeatedItemCounts;
	int mType;
	EDCollection* mItemIndexes;

}
+(id)pivotItem;
-(void)dealloc;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(unsigned)repeatedItemCounts;
-(void)setRepeatedItemCounts:(unsigned)arg1 ;
-(id)itemIndexes;
@end

