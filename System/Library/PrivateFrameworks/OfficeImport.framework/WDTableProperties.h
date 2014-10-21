/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class WDDocument;

@interface WDTableProperties : NSObject <NSCopying> {

	WDDocument* mDocument;
	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	SCD_Struct_WD68 mOriginalProperties;
	SCD_Struct_WD68 mTrackedProperties;

}
-(void)moveOrignalToTracked;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setAlignment:(int)arg1 ;
-(long long)width;
-(int)alignment;
-(id).cxx_construct;
-(void)setWidth:(long long)arg1 ;
-(id)document;
-(id)initWithDocument:(id)arg1 ;
-(bool)isDeletedOverridden;
-(int)deleted;
-(bool)isBaseStyleOverridden;
-(id)baseStyle;
-(bool)isHorizontalAnchorOverridden;
-(int)horizontalAnchor;
-(bool)isVerticalAnchorOverridden;
-(int)verticalAnchor;
-(bool)isHorizontalPositionOverridden;
-(long long)horizontalPosition;
-(bool)isVerticalPositionOverridden;
-(long long)verticalPosition;
-(bool)isJustificationOverridden;
-(int)justification;
-(bool)isShadingOverridden;
-(id)shading;
-(bool)isBottomBorderOverridden;
-(id)bottomBorder;
-(bool)isWidthOverridden;
-(bool)isTopBorderOverridden;
-(bool)isLeftBorderOverridden;
-(bool)isRightBorderOverridden;
-(id)topBorder;
-(id)leftBorder;
-(id)rightBorder;
-(long long)leftDistanceFromText;
-(bool)isInsideHorizontalBorderOverridden;
-(id)insideHorizontalBorder;
-(bool)isInsideVerticalBorderOverridden;
-(id)insideVerticalBorder;
-(bool)isWidthTypeOverridden;
-(int)widthType;
-(void)setIndent:(short)arg1 ;
-(short)indent;
-(bool)isIndentOverridden;
-(void)setDeleted:(int)arg1 ;
-(bool)isAlignmentOverridden;
-(void)setResolveMode:(int)arg1 ;
-(id)mutableShading;
-(void)setDeletionDate:(id)arg1 ;
-(void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1 ;
-(id)deletionDate;
-(unsigned short)indexToAuthorIDOfDeletion;
-(void)setEditDate:(id)arg1 ;
-(void)setIndexToAuthorIDOfEdit:(unsigned short)arg1 ;
-(id)editDate;
-(unsigned short)indexToAuthorIDOfEdit;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1 ;
-(void)setBaseStyle:(id)arg1 ;
-(void)setEdited:(int)arg1 ;
-(void)setFormattingChanged:(int)arg1 ;
-(int)resolveMode;
-(void)setJustification:(int)arg1 ;
-(void)setHorizontalPosition:(long long)arg1 ;
-(void)setVerticalPosition:(long long)arg1 ;
-(id)mutableTopBorder;
-(id)mutableLeftBorder;
-(id)mutableBottomBorder;
-(id)mutableRightBorder;
-(void)setHorizontalAnchor:(int)arg1 ;
-(void)setVerticalAnchor:(int)arg1 ;
-(void)setFormattingChangeDate:(id)arg1 ;
-(bool)isFormattingChangedOverridden;
-(int)formattingChanged;
-(bool)isIndexToAuthorIDOfFormattingChangeOverridden;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(bool)isFormattingChangeDateOverridden;
-(id)formattingChangeDate;
-(bool)isTableFloating;
-(void)clearShading;
-(void)setWidthType:(int)arg1 ;
-(id)mutableInsideHorizontalBorder;
-(id)mutableInsideVerticalBorder;
-(void)setIndentType:(int)arg1 ;
-(void)setLeftDistanceFromText:(long long)arg1 ;
-(void)setTopDistanceFromText:(long long)arg1 ;
-(void)setRightDistanceFromText:(long long)arg1 ;
-(void)setBottomDistanceFromText:(long long)arg1 ;
-(int)edited;
-(bool)isEditedOverridden;
-(bool)isIndexToAuthorIDOfDeletionOverridden;
-(bool)isIndexToAuthorIDOfEditOverridden;
-(bool)isDeletionDateOverridden;
-(bool)isEditDateOverridden;
-(void)clearTopBorder;
-(void)clearLeftBorder;
-(void)clearBottomBorder;
-(void)clearRightBorder;
-(void)clearInsideHorizontalBorder;
-(void)clearInsideVerticalBorder;
-(int)indentType;
-(bool)isIndentTypeOverridden;
-(bool)isCellSpacingOverridden;
-(int)cellSpacingType;
-(void)setCellSpacingType:(int)arg1 ;
-(bool)isCellSpacingTypeOverridden;
-(bool)isLeftDistanceFromTextOverridden;
-(long long)topDistanceFromText;
-(bool)isTopDistanceFromTextOverridden;
-(long long)rightDistanceFromText;
-(bool)isRightDistanceFromTextOverridden;
-(long long)bottomDistanceFromText;
-(bool)isBottomDistanceFromTextOverridden;
-(short)cellSpacing;
-(void)setCellSpacing:(short)arg1 ;
@end
