/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/RTFTextBlock.h>

@interface RTFTextTable : RTFTextBlock {

	unsigned long long _numCols;
	unsigned long long _tableFlags;
	id _lcache;
	void* _tablePrimary;
	void* _tableSecondary;

}
-(void)dealloc;
-(id)init;
-(unsigned long long)numberOfColumns;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(void)_takeValuesFromTextBlock:(id)arg1 ;
-(bool)collapsesBorders;
-(bool)hidesEmptyCells;
-(void)setCollapsesBorders:(bool)arg1 ;
-(void)setHidesEmptyCells:(bool)arg1 ;
-(unsigned long long)layoutAlgorithm;
-(void)setLayoutAlgorithm:(unsigned long long)arg1 ;
-(unsigned long long)_tableFlags;
-(void)_setTableFlags:(unsigned long long)arg1 ;
@end

