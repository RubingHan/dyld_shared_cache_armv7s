/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreData/NSManagedObject.h>

@class NSString, TDSchemaCategory, NSSet;

@interface TDSchemaDefinition : NSManagedObject

@property (nonatomic,@dynamic,retain) NSString * name; 
@property (@dynamic) bool published; 
@property (nonatomic,@dynamic,retain) TDSchemaCategory * category; 
@property (nonatomic,@dynamic,retain) NSSet * parts; 
+(const SCD_Struct_TD2*)elementDefinitionWithName:(id)arg1 withSchema:(id)arg2 ;
+(unsigned long long)elementDefinitionCountWithSchema:(id)arg1 ;
+(const SCD_Struct_TD2*)sortedElementDefinitionAtIndex:(unsigned long long)arg1 withSchema:(id)arg2 ;
-(id)displayName;
-(id)previewImage;
@end

