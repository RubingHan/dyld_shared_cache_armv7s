/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFXPreferencesSource.h>

@interface CFXPreferencesSearchListSource : CFXPreferencesSource {

	CFArrayRef _sourceList;

}
-(void*)getValueForKey:(CFStringRef)arg1 ;
-(CFArrayRef)copyKeyList;
-(CFDictionaryRef)copyDictionary;
-(void)_removeValueForKey:(CFStringRef)arg1 ;
-(void)synchronizeInBackgroundWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)addSource:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(unsigned char)synchronize;
-(long long)generationCount;
-(void)removeSource:(id)arg1 ;
@end
