/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/EDCollection.h>

@interface EDReferenceCollection : EDCollection {

	bool mCoalesce;

}
+(id)noCoalesceCollection;
+(id)coalesceCollection;
-(void)coalesce;
-(bool)coalesceReferenceAtIndex1:(unsigned long long)arg1 index2:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)addObject:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(unsigned long long)countOfCellsBeingReferenced;
-(id)reverseReferencesByRow:(bool)arg1 ;
-(id)referenceToCellWithIndex:(unsigned long long)arg1 byRow:(bool)arg2 ;
-(id)initWihNoCoalesce;
@end
