/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ISUDownload, NSNumber, NSString;

@interface SUScriptDownload : SUScriptObject {

	ISUDownload* _download;

}

@property (readonly) NSNumber * adamID; 
@property (readonly) NSString * phase; 
@property (readonly) float progress; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)phaseStringForDownload:(id)arg1 ;
-(id)adamID;
-(void)dealloc;
-(id)phase;
-(float)progress;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)initWithISUDownload:(id)arg1 ;
-(id)initWithSSDownload:(id)arg1 ;
@end

