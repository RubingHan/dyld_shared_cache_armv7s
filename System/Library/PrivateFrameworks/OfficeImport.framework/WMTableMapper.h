/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class WDTable, WMBordersProperty, WMTableStyle, WMTableColumnInfo;

@interface WMTableMapper : CMMapper {

	WDTable* mWdTable;
	WMBordersProperty* mInsideBorders;
	WMTableStyle* mStyle;
	WMTableColumnInfo* mColumnInfo;

}
+(bool)isTableDeleted:(id)arg1 ;
-(id)copyColumnInfo;
-(id)copyStopArrayForRow:(unsigned)arg1 ;
-(void)dealloc;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDTable:(id)arg1 parent:(id)arg2 ;
-(id)columnInfo;
-(id)insideBorders;
-(void)setInsideBorders:(id)arg1 ;
@end

