/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VKModelObject.h>
#import <VectorKit/VKMapLayer.h>
#import <VectorKit/VKStylesheetObserver.h>

@class VKStylesheet, NSMutableSet, VKMapModel, NSSet;

@interface VKMapTileModel : VKModelObject <VKMapLayer, VKStylesheetObserver> {

	NSMutableSet* _tilesWillEnterScene;
	NSMutableSet* _tilesInScene;
	NSMutableSet* _tilesInScenePlusExitingTiles;
	NSMutableSet* _tilesWillExitScene;
	NSMutableSet* _tilesExitingScene;
	NSMutableSet* _previousTilesInScene;
	VKMapModel* _mapModel;
	unsigned char _minimumZ;
	unsigned char _maximumZ;

}

@property (assign,nonatomic) VKMapModel * mapModel;                    //@synthesize mapModel=_mapModel - In the implementation block
@property (nonatomic,readonly) NSSet * tilesInScene;                   //@synthesize tilesInScene=_tilesInScene - In the implementation block
@property (nonatomic,readonly) VKStylesheet * stylesheet; 
+(bool)reloadOnStylesheetChange;
+(bool)reloadOnActiveTileGroupChange;
-(void)dealloc;
-(id)init;
-(void)reset;
-(unsigned long long)mapLayerPosition;
-(id)stylesheet;
-(void)setMapModel:(id)arg1 ;
-(void)didMoveToSupermodel;
-(void)stylesheetWillChange;
-(void)stylesheetDidChange;
-(void)activeTileGroupChanged;
-(bool)minimumZoomLevelBoundsCamera;
-(bool)maximumZoomLevelBoundsCamera;
-(void)updateTilesInScene:(id)arg1 withContext:(id)arg2 categorize:(bool)arg3 ;
-(id)mapModel;
-(void)createCollections;
-(void)clearCollections;
-(void)createCollectionsIfNecessary;
-(void)removePersistingExitingTiles:(id)arg1 ;
-(void)willStartDrawingTiles:(id)arg1 ;
-(void)willStopDrawingTiles:(id)arg1 ;
-(id)tilesInScene;
@end
