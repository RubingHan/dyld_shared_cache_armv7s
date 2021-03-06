/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKLRUCache.h>

@interface VKTileCache : VKLRUCache
-(id)objectForKey:(const VKTileKey*)arg1 ;
-(void)setObject:(id)arg1 forKey:(const VKTileKey*)arg2 ;
-(id)objectWithoutPromotingForKey:(const VKTileKey*)arg1 ;
-(id)tileWithoutTouchingForKey:(const VKTileKey*)arg1 ;
@end

