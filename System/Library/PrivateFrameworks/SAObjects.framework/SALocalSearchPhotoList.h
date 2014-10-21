/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SALocalSearchPhotoList : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * photos; 
@property (nonatomic,copy) NSString * providerId; 
+(id)photoList;
+(id)photoListWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)photos;
-(void)setPhotos:(id)arg1 ;
-(void)setProviderId:(id)arg1 ;
-(id)providerId;
-(id)encodedClassName;
@end
