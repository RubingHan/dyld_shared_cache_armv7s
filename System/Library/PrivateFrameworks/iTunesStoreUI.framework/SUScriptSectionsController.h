/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptSection;

@interface SUScriptSectionsController : SUScriptObject

@property (readonly) id sections; 
@property (retain) SUScriptSection * selectedSection; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)selectedSection;
-(id)sections;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)_tabBarConfigurationChangedNotification:(id)arg1 ;
-(id)_copySectionWithIdentifier:(id)arg1 ;
-(id)_fixedSelectedIdentifier;
-(void)_setSelectedIdentifier:(id)arg1 ;
-(id)sectionWithIdentifier:(id)arg1 ;
-(void)setRootViewController:(id)arg1 forSection:(id)arg2 ;
-(void)setSelectedSection:(id)arg1 ;
@end
