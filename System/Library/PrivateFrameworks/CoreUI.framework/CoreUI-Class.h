/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CoreUI : NSObject
+(void)_changeToLookGradation:(long long)arg1 forceRedraw:(bool)arg2 ;
+(void)changeToLookGradation:(long long)arg1 ;
+(long long)currentLookGradation;
+(long long)maximumLookGradation;
+(void)changeToLook:(themelook*)arg1 ;
+(themelook*)currentSystemThemeLook;
+(void)_setCurrentSystemThemeLook:(themelook*)arg1 ;
+(void)_updateMenuBarDrawingStyleForLook:(themelook*)arg1 ;
+(bool)_isCurrentLook:(themelook*)arg1 ;
+(long long)lookCongruencyForObject:(id)arg1 ;
+(void)_invalidateVisibleWindows;
+(id)_themeLookDelegate;
+(void)_setThemeLookDelegate:(id)arg1 ;
+(bool)_hasDarkMenuBarForLook:(themelook*)arg1 ;
+(bool)defaultExistsForKey:(id)arg1 ;
+(id)stringForDefaultsKey:(id)arg1 ;
+(void)_determineCompatibilityMode;
+(void)setValue:(id)arg1 forDefaultsKey:(id)arg2 ;
+(id)defaultsDomainName;
+(long long)integerForDefaultsKey:(id)arg1 ;
+(void)_setCustomLookDelegate:(id)arg1 ;
+(bool)boolForDefaultsKey:(id)arg1 ;
+(void)setBool:(bool)arg1 forDefaultsKey:(id)arg2 ;
+(bool)_isInIBCocoaSimulator;
+(void)install;
+(id)_customLookDelegate;
+(void)installForCustomLook:(id)arg1 ;
+(id)versionCreditsString;
+(bool)isSharedCacheSizeTestEnabled;
@end
