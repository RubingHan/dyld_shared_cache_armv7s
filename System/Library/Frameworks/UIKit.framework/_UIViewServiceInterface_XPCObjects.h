/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIViewServiceInterface.h>

@class _UIViewServiceSessionEndpoint;

@interface _UIViewServiceInterface_XPCObjects : _UIViewServiceInterface {

	_UIViewServiceSessionEndpoint* _serviceSessionEndpoint;

}
+(id)connectToViewServiceWithBundleIdentifier:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(id)connectToDeputyOfType:(id)arg1 connectionHandler:(/*^block*/ id)arg2 ;
-(id)_initWithConnectionInfo:(SCD_Struct_UI85)arg1 serviceBundleIdentifier:(id)arg2 deputyInterfaces:(id)arg3 ;
@end
