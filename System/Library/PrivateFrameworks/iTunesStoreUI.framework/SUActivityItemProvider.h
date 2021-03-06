/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:35 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivityItemProvider.h>

@protocol SUActivityItemProviderDelegate, OS_dispatch_queue;
@class UIActivity, NSObject, UIImage;

@interface SUActivityItemProvider : UIActivityItemProvider {

	UIActivity* _activity;
	<SUActivityItemProviderDelegate>* _delegate;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	id _lastProvidedItem;
	UIImage* _previewImage;

}

@property (__weak) <SUActivityItemProviderDelegate> * delegate; 
@property (setter=setSUActivity:,retain) UIActivity * suActivity; 
@property (readonly) id suLastProvidedItem; 
@property (setter=setSUPreviewImage:,retain) UIImage * suPreviewImage; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)item;
-(id)initWithPlaceholderItem:(id)arg1 ;
-(void)setSUActivity:(id)arg1 ;
-(id)suLastProvidedItem;
-(id)suPreviewImage;
-(id)suActivity;
-(void)setSUPreviewImage:(id)arg1 ;
@end

