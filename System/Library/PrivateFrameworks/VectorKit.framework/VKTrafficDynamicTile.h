/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTile.h>

@interface VKTrafficDynamicTile : VKTile {

	GEOTileKey _downloadKey;
	shared_ptr<zilch::TrafficDynamicTile>* _tile;
	unordered_multimap<long long, const zilch::TrafficDynamicTile::Flow *, std::__1::hash<long long>, std::__1::equal_to<long long>, vk_allocator<std::__1::pair<const long long, const zilch::TrafficDynamicTile::Flow *> > >* _flows;

}

@property (nonatomic,readonly) long long updateTime; 
@property (nonatomic,readonly) unsigned incidentCount; 
-(void)dealloc;
-(id).cxx_construct;
-(void).cxx_destruct;
-(int)flowForRoadId:(long long)arg1 buffer:(const Flow*)arg2 maxSize:(int)arg3 ;
-(unsigned)incidentCount;
-(const Incident*)incidentAtIndex:(unsigned)arg1 ;
-(id)initWithKey:(const VKTileKey*)arg1 downloadKey:(const GEOTileKey*)arg2 data:(id)arg3 ;
-(long long)updateTime;
@end

