/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WebDeviceOrientationInternal;

@interface WebDeviceOrientation : NSObject {

	WebDeviceOrientationInternal* m_internal;

}
-(id)initWithCoreDeviceOrientation:(PassRefPtr<WebCore::DeviceOrientationData>*)arg1 ;
-(void)dealloc;
-(id)initWithCanProvideAlpha:(bool)arg1 alpha:(double)arg2 canProvideBeta:(bool)arg3 beta:(double)arg4 canProvideGamma:(bool)arg5 gamma:(double)arg6 ;
@end

