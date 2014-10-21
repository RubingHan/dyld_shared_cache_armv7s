/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet;

@interface MPVolumeHUDController : NSObject {

	NSMutableArray* _contexts;
	NSMutableSet* _categories;

}

@property (nonatomic,readonly) id mainContext; 
+(id)sharedInstance;
-(void)setNeedsUpdate;
-(id)mainContext;
-(void)registerView:(id)arg1 inContext:(id)arg2 ;
-(void)unregisterView:(id)arg1 inContext:(id)arg2 ;
-(id)pushContext;
-(void)_updateVisibility;
-(void)popContext;
-(id)init;
-(void).cxx_destruct;
@end

