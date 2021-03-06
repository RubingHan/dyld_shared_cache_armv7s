/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSNumber, NSArray, NSString, NSURL;

@interface SAFmfLocationSnippet : SAUISnippet

@property (nonatomic,copy) NSNumber * atRequestedLocation; 
@property (nonatomic,copy) NSArray * locations; 
@property (nonatomic,copy) NSString * proximity; 
@property (nonatomic,copy) NSURL * searchContext; 
+(id)locationSnippet;
+(id)locationSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)proximity;
-(void)setProximity:(id)arg1 ;
-(id)groupIdentifier;
-(void)setLocations:(id)arg1 ;
-(void)setSearchContext:(id)arg1 ;
-(id)searchContext;
-(id)locations;
-(id)encodedClassName;
-(id)atRequestedLocation;
-(void)setAtRequestedLocation:(id)arg1 ;
@end

