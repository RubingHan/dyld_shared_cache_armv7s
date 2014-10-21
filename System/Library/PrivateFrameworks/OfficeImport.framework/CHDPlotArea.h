/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CHDChartTypesCollection, CHDAxesCollection, OADGraphicProperties;

@interface CHDPlotArea : NSObject {

	CHDChartTypesCollection* mChartTypes;
	CHDAxesCollection* mAxes;
	OADGraphicProperties* mGraphicProperties;
	bool mCategoryAxesReversed;
	bool mCategoryAxesReversedOverridden;
	bool mContainsVolumeStockType;

}
-(bool)isCategoryAxesReversed:(bool)arg1 ;
-(void)dealloc;
-(id)graphicProperties;
-(id)axes;
-(id)initWithChart:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setContainsVolumeStockType:(bool)arg1 ;
-(id)chartTypes;
-(bool)hasSecondaryAxis;
-(bool)hasSecondaryYAxisDeleted;
-(void)markSecondaryAxes;
-(bool)containsVolumeStockType;
@end
