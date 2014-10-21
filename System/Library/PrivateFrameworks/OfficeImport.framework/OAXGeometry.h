/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXGeometry : NSObject
+(id)readPresetGeometryFromXmlNode:(xmlNode*)arg1 ;
+(void)readAdjustValuesFromCustomGeometryXmlNode:(xmlNode*)arg1 toCustomGeometry:(id)arg2 adjustValueNameToIndexMap:(id)arg3 ;
+(void)addFormulasFromFile:(id)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 ;
+(void)readFormulasFromCustomGeometryXmlNode:(xmlNode*)arg1 toCustomGeometry:(id)arg2 adjustValueNameToIndexMap:(id)arg3 formulaNameToIndexMap:(id)arg4 ;
+(void)readTextRectFromCustomGeometryXmlNode:(xmlNode*)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 ;
+(void)readPathsFromCustomGeometryXmlNode:(xmlNode*)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 ;
+(id)shapeTypeEnumMap;
+(int)adjustValueWithGuideXmlNode:(xmlNode*)arg1 ;
+(id)formulaTypeEnumMap;
+(id)formulaKeywordEnumMap;
+(OADAdjustCoord)readAdjustCoordFromXmlNode:(xmlNode*)arg1 name:(const char*)arg2 formulaNameToIndexMap:(id)arg3 ;
+(id)pathFillModeEnumMap;
+(int)shapeTypeForString:(id)arg1 ;
+(id)stringForShapeType:(int)arg1 ;
+(id)readCustomGeometryFromXmlNode:(xmlNode*)arg1 hasImplicitFormulas:(bool)arg2 ;
+(id)readFromParentXmlNode:(xmlNode*)arg1 ;
@end
