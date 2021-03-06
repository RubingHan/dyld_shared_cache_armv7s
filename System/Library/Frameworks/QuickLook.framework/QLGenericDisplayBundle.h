/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QLDisplayBundle.h>
#import <QuickLook/QLGenericViewDelegate.h>

@class QLGenericView, NSError;

@interface QLGenericDisplayBundle : QLDisplayBundle <QLGenericViewDelegate> {

	QLGenericView* _airplayView;
	NSError* _error;

}

@property (retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)setError:(id)arg1 ;
-(void)loadWithHints:(id)arg1 ;
-(id)airplayView;
-(void)setupAirPlayView;
-(void)discardAirPlayView;
-(void)genericViewDidClickOnArchiveButton:(id)arg1 ;
-(void)_loadPreviewItemInfos;
-(void)dealloc;
-(void)loadView;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)error;
@end

