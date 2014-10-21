/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface GKJavascriptEnvironment : NSObject

@property (nonatomic,readonly) NSString * udid; 
@property (nonatomic,readonly) NSString * platform; 
@property (nonatomic,readonly) NSString * device; 
@property (nonatomic,readonly) int osMajorVersion; 
@property (nonatomic,readonly) int osMinorVersion; 
@property (nonatomic,readonly) NSString * client; 
@property (nonatomic,readonly) NSString * dateFieldsOrder; 
+(bool)isKeyExcludedFromWebScript:(const char*)arg1 ;
-(id)platform;
-(id)udid;
-(int)osMajorVersion;
-(int)osMinorVersion;
-(id)dateFieldsOrder;
-(id)device;
-(id)client;
-(id)attributeKeys;
@end
