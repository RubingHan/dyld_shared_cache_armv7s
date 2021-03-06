/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CLDeviceMotionProperties : NSObject {

	int fMode;
	bool fWantsPowerConservativeDeviceMotion;

}

@property (assign,nonatomic) int mode; 
@property (nonatomic,readonly) bool wantsPowerConservativeDeviceMotion; 
-(id)initWithMode:(int)arg1 andPowerConservation:(bool)arg2 ;
-(bool)wantsPowerConservativeDeviceMotion;
-(id)description;
-(void)setMode:(int)arg1 ;
-(int)mode;
@end

