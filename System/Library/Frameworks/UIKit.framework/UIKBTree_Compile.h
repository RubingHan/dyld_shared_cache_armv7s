/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBTree.h>

@class NSMutableDictionary, NSArray;

@interface UIKBTree_Compile : UIKBTree {

	NSMutableDictionary* symbols;
	NSMutableDictionary* refs;

}

@property (nonatomic,retain) NSMutableDictionary * symbols; 
@property (nonatomic,retain) NSMutableDictionary * refs; 
@property (nonatomic,readonly) NSArray * refList; 
@property (assign,nonatomic) bool variable; 
+(id)treeOfType:(int)arg1 ;
+(id)uniqueNameWithType:(int)arg1 ;
+(id)stringEnumForType:(int)arg1 ;
+(int)typeForString:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithType:(int)arg1 ;
-(bool)isSameAsTree:(id)arg1 ;
-(bool)_needsScaling;
-(id)geometrySet:(bool)arg1 ;
-(id)attributeSet:(bool)arg1 ;
-(void)setSymbols:(id)arg1 ;
-(void)setRefs:(id)arg1 ;
-(id)symbols;
-(id)refs;
-(bool)variable;
-(void)setVariable:(bool)arg1 ;
-(void)mergePropertiesWithOthers:(id)arg1 ;
-(bool)usesSymbols;
-(id)symbolValues:(id)arg1 withSymbols:(id)arg2 ;
-(int)symbolHash:(id)arg1 ;
-(int)shapeHash;
-(id)simpleName;
-(void)uniquifyName;
-(bool)isSymbolType;
-(id)listAtIndex:(int)arg1 ;
-(void)setTarget:(id)arg1 forReference:(id)arg2 ;
-(int)indexOfSubtreeWithType:(int)arg1 ;
-(int)indexOfSubtreeWithName:(id)arg1 rows:(id)arg2 ;
-(void)mergeSubtreesWithOthers:(id)arg1 ;
-(void)mergeSymbolsWithOthers:(id)arg1 ;
-(void)mergePropertiesWithSubtreeRange:(NSRange)arg1 properties:(id)arg2 ;
-(int)subtreeHash;
-(void)setGeometrySet:(id)arg1 ;
-(void)setAttributeSet:(id)arg1 ;
-(id)refList;
@end
