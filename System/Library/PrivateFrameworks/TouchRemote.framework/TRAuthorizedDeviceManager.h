/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface TRAuthorizedDeviceManager : NSObject {

	NSMutableDictionary* _authorizationList;

}

@property (nonatomic,readonly) NSArray * deviceIdentifiers; 
+(id)sharedDeviceManager;
+(id)currentDeviceIdentifier;
+(id)_dataForDeviceIdentifier:(id)arg1 ;
+(id)_deviceIdentifierForData:(id)arg1 ;
-(id)init;
-(void).cxx_destruct;
-(id)_deviceAuthorizationDirectory;
-(id)_deviceAuthorizationFilePath;
-(bool)isAuthorizedDeviceWithIdentifier:(id)arg1 ;
-(bool)addDeviceWithIdentifier:(id)arg1 forDeviceName:(id)arg2 error:(id*)arg3 ;
-(id)deviceIdentifiers;
-(id)deviceNameForIdentifier:(id)arg1 ;
-(bool)removeDeviceWithIdentifier:(id)arg1 error:(id*)arg2 ;
@end
