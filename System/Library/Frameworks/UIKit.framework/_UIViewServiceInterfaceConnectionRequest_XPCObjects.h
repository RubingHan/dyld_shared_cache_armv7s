/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIViewServiceInterfaceConnectionRequest.h>

@protocol OS_xpc_object;
@class _UIViewServiceSessionEndpoint, NSObject;

@interface _UIViewServiceInterfaceConnectionRequest_XPCObjects : _UIViewServiceInterfaceConnectionRequest {

	_UIViewServiceSessionEndpoint* _serviceSessionEndpoint;
	NSObject<OS_xpc_object>* _serviceSessionManagerConnection;

}
-(void)dealloc;
-(void)_establishConnection;
-(void)_didConnectToService;
-(void)_connectToServiceSessionViaEndpoint:(id)arg1 ;
@end

