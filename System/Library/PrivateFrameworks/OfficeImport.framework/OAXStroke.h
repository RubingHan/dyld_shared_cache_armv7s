/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXStroke : NSObject
+(id)lineCapEnumMap;
+(id)compoundLineEnumMap;
+(id)penAlignmentEnumMap;
+(id)readPresetDashFromXmlNode:(xmlNode*)arg1 ;
+(id)readCustomDashFromXmlNode:(xmlNode*)arg1 ;
+(void)readLineEnd:(id)arg1 fromXmlNode:(xmlNode*)arg2 ;
+(id)lineEndTypeEnumMap;
+(id)lineEndWidthEnumMap;
+(id)lineEndLengthEnumMap;
+(id)presetDashEnumMap;
+(id)readStrokeFromXmlNode:(xmlNode*)arg1 packagePart:(id)arg2 drawingState:(id)arg3 ;
@end
