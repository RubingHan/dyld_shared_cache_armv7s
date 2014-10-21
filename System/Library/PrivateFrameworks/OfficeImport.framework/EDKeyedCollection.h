/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:47 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDCollection.h>

@class TSUPointerKeyDictionary;

@interface EDKeyedCollection : EDCollection {

	TSUPointerKeyDictionary* mMap;

}
-(bool)isOverwritingKeyOK;
-(void)insertIntoMap:(id)arg1 ;
-(void)removeFromMap:(id)arg1 ;
-(bool)isObjectInMap:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)objectWithKey:(long long)arg1 ;
@end
