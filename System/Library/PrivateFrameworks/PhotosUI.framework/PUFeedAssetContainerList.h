/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetContainerList.h>

@class NSOrderedSet;

@interface PUFeedAssetContainerList : NSObject <PLAssetContainerList> {

	NSOrderedSet* _sectionInfos;

}

@property (nonatomic,retain) NSOrderedSet * sectionInfos;                       //@synthesize sectionInfos=_sectionInfos - In the implementation block
@property (nonatomic,readonly) unsigned long long containersCount; 
-(bool)isEmpty;
-(void).cxx_destruct;
-(id)managedObjectContext;
-(id)photoLibrary;
-(id)containers;
-(bool)canEditContainers;
-(id)containersRelationshipName;
-(unsigned long long)containersCount;
-(void)setSectionInfos:(id)arg1 ;
-(id)sectionInfos;
@end

