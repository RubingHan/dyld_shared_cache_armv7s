/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <CoreFoundation/NSCoding.h>

@class NSDate, NSArray, NSURL;

@interface PUFeedViewControllerRestorableState : NSObject <NSCoding> {

	bool _scrolledToNewest;
	NSDate* _date;
	long long _interfaceOrientation;
	NSArray* _centerAssetUUIDs;
	NSArray* _centerAssetFrames;
	NSURL* _centerSectionEntryURIRepresentation;
	CGRect _centerSectionFrame;

}

@property (nonatomic,copy) NSDate * date;                                            //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                         //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) bool scrolledToNewest;                                  //@synthesize scrolledToNewest=_scrolledToNewest - In the implementation block
@property (nonatomic,copy) NSArray * centerAssetUUIDs;                               //@synthesize centerAssetUUIDs=_centerAssetUUIDs - In the implementation block
@property (nonatomic,copy) NSArray * centerAssetFrames;                              //@synthesize centerAssetFrames=_centerAssetFrames - In the implementation block
@property (nonatomic,copy) NSURL * centerSectionEntryURIRepresentation;              //@synthesize centerSectionEntryURIRepresentation=_centerSectionEntryURIRepresentation - In the implementation block
@property (assign,nonatomic) CGRect centerSectionFrame;                              //@synthesize centerSectionFrame=_centerSectionFrame - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)interfaceOrientation;
-(id)date;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setDate:(id)arg1 ;
-(void).cxx_destruct;
-(bool)scrolledToNewest;
-(id)centerAssetUUIDs;
-(id)centerAssetFrames;
-(id)centerSectionEntryURIRepresentation;
-(CGRect)centerSectionFrame;
-(void)setScrolledToNewest:(bool)arg1 ;
-(void)setCenterAssetUUIDs:(id)arg1 ;
-(void)setCenterAssetFrames:(id)arg1 ;
-(void)setCenterSectionEntryURIRepresentation:(id)arg1 ;
-(void)setCenterSectionFrame:(CGRect)arg1 ;
@end
