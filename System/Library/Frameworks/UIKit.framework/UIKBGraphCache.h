/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIScreenBasedObject.h>

@class UIScreen, NSMutableDictionary;

@interface UIKBGraphCache : NSObject <_UIScreenBasedObject> {

	UIScreen* _screen;
	NSMutableDictionary* _graphCache;

}

@property (nonatomic,readonly) NSMutableDictionary * graphCache;              //@synthesize graphCache=_graphCache - In the implementation block
@property (readonly) UIScreen * _intendedScreen; 
+(id)graphCacheForScreen:(id)arg1 ;
-(void)dealloc;
-(id)_initWithScreen:(id)arg1 options:(id)arg2 ;
-(bool)_matchingOptions:(id)arg1 ;
-(id)_intendedScreen;
-(id)graphCache;
@end

