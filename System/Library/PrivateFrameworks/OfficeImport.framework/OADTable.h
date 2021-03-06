/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:52 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADDrawable.h>

@class OADTableGrid, NSMutableArray;

@interface OADTable : OADDrawable {

	OADTableGrid* mGrid;
	NSMutableArray* mRows;

}
-(id)cellAtPos:(OADTMatrixPos)arg1 ;
-(OADTMatrixPos)masterPosOfPos:(OADTMatrixPos)arg1 ;
-(id)masterCellOfPos:(OADTMatrixPos)arg1 ;
-(void)dealloc;
-(id)init;
-(id)addRow;
-(unsigned long long)rowCount;
-(id)grid;
-(id)tableProperties;
-(id)rowAtIndex:(unsigned long long)arg1 ;
-(void)setParentTextListStyle:(id)arg1 ;
@end

