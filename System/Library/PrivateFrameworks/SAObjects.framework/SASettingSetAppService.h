/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASettingSetBool.h>
#import <SAObjects/SASettingAppSettingCommand.h>

@class NSString, NSArray;

@interface SASettingSetAppService : SASettingSetBool <SASettingAppSettingCommand>

@property (nonatomic,copy) NSString * appWithSettingsId; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
@property (nonatomic,@dynamic,copy) NSString * appId; 
@property (nonatomic,@dynamic,copy) NSArray * callbacks; 
+(id)setAppService;
+(id)setAppServiceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)location;
-(id)encodedClassName;
-(bool)requiresResponse;
-(id)appWithSettingsId;
-(void)setAppWithSettingsId:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
@end
