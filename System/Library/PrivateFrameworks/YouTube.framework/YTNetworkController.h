/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer;

@interface YTNetworkController : NSObject {

	bool _registered;
	bool _isCellular;
	bool _isReachable;
	NSTimer* _notificationTimer;
	int _networkType;

}
+(id)sharedNetworkController;
-(int)networkType;
-(void)start;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)_checkForNetworkWithDataStatus:(id)arg1 ;
-(bool)serviceIsReachable;
-(void)recheckNetwork;
-(bool)allowsHighQuality3GPlayback;
-(void)_carrierBundleChangeNotification:(id)arg1 ;
@end

