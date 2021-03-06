/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotosUI/PhotosUI-Structs.h>
@interface PUPhotosSharingViewControllerSpec : NSObject {

	bool _maximizeImageHeight;
	double _interItemSpacing;

}

@property (nonatomic,readonly) double interItemSpacing;                              //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (nonatomic,readonly) bool maximizeImageHeight;                             //@synthesize maximizeImageHeight=_maximizeImageHeight - In the implementation block
@property (nonatomic,readonly) CGSize selectionBadgeSize; 
@property (nonatomic,readonly) UIOffset selectionBadgeOffset; 
@property (nonatomic,readonly) unsigned long long selectionBadgeCorner; 
-(double)interItemSpacing;
-(bool)embedsActivityViewForOrientation:(long long)arg1 ;
-(CGSize)selectionBadgeSize;
-(UIOffset)selectionBadgeOffset;
-(bool)maximizeImageHeight;
-(int)fastImageFormatForOrientation:(long long)arg1 ;
-(int)zoomingImageFormatForOrientation:(long long)arg1 ;
-(int)qualityImageFormatForOrientation:(long long)arg1 ;
-(unsigned long long)selectionBadgeCorner;
-(UIEdgeInsets)collectionViewLayoutContentInsetForOrientation:(long long)arg1 ;
@end

