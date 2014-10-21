/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:38 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppleAccount/AppleAccount-Structs.h>
@class NSString;

@interface AADeviceProvisioningSession : NSObject {

	NSString* _dsid;
	OpaqueCFHTTPCookieStorageRef _cookieStorageRef;

}
-(void).cxx_destruct;
-(id)deviceProvisioningInfo;
-(id)initWithDSID:(id)arg1 ;
-(void)setCookieStorageRef:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(int)provisionDeviceWithData:(id)arg1 ;
-(int)synchronizeProvisioningWithData:(id)arg1 ;
-(int)eraseProvisioning;
-(id)initWithAccount:(id)arg1 ;
@end
