/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@class UITransitionView, NSDictionary;

@interface PLUIController : NSObject {

	id _delegate;
	UITransitionView* _fullScreenTransitionView;
	NSDictionary* _configuration;

}
+(id)sharedInstance;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)setConfiguration:(id)arg1 ;
-(id)configuration;
-(id)contentViewWithFrame:(CGRect)arg1 ;
@end

