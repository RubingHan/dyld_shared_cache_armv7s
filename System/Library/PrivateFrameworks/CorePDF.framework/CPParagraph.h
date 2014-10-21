/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@class CPListItem;

@interface CPParagraph : CPRegion {

	bool noIndentation;
	bool below;
	unsigned long long alignment;
	bool hasDropCap;
	id flowProperties;
	CPListItem* listItem;
	double preformatWidth;

}

@property (nonatomic,retain) CPListItem * listItem; 
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setAlignment:(unsigned long long)arg1 ;
-(unsigned long long)alignment;
-(unsigned long long)index;
-(void)accept:(id)arg1 ;
-(void)setListItem:(id)arg1 ;
-(double)selectionBottom;
-(bool)isBoxRegion;
-(bool)isGraphicalRegion;
-(bool)isRowRegion;
-(void)setIsImageRegion:(bool)arg1 ;
-(bool)isImageRegion;
-(bool)isShapeRegion;
-(id)flowProperties;
-(void)setFlowProperties:(id)arg1 ;
-(bool)isParagraphRegion;
-(bool)isListItemRegion;
-(bool)isTextRegion;
-(void)setIsTextRegion:(bool)arg1 ;
-(void)setNoIndentation:(bool)arg1 ;
-(bool)noIndentation;
-(bool)hasDropCap;
-(void)setHasDropCap:(bool)arg1 ;
-(void)explode;
-(CGRect)reducedBounds;
-(void)setBelow:(bool)arg1 ;
-(bool)below;
-(bool)isPreformattedWithUnitWidth:(double*)arg1 ;
-(id)listItem;
@end
