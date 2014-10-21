/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <StoreServices/SSXPCCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSSet;

@interface SSDownloadPolicyRule : NSObject <NSCoding, SSXPCCoding, NSCopying> {

	NSSet* _applicationStates;
	float _batteryLevel;
	long long _cellularDataStates;
	long long _downloadSizeLimit;
	NSSet* _networkTypes;
	long long _powerStates;
	long long _registrationStates;
	long long _timeLimitStates;

}

@property (assign,nonatomic) long long downloadSizeLimit;                                  //@synthesize downloadSizeLimit=_downloadSizeLimit - In the implementation block
@property (nonatomic,copy) NSSet * applicationStates;                                      //@synthesize applicationStates=_applicationStates - In the implementation block
@property (nonatomic,copy) NSSet * networkTypes;                                           //@synthesize networkTypes=_networkTypes - In the implementation block
@property (getter=isCellularAllowed,nonatomic,readonly) bool cellularAllowed; 
@property (getter=isWiFiAllowed,nonatomic,readonly) bool wiFiAllowed; 
@property (assign,nonatomic) float batteryLevel;                                           //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (assign,nonatomic) long long cellularDataStates;                                 //@synthesize cellularDataStates=_cellularDataStates - In the implementation block
@property (assign,nonatomic) long long powerStates;                                        //@synthesize powerStates=_powerStates - In the implementation block
@property (assign,nonatomic) long long registrationStates;                                 //@synthesize registrationStates=_registrationStates - In the implementation block
@property (assign,nonatomic) long long timeLimitStates;                                    //@synthesize timeLimitStates=_timeLimitStates - In the implementation block
-(long long)downloadSizeLimit;
-(void)setCellularDataStates:(long long)arg1 ;
-(void)unionPolicyRule:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(float)batteryLevel;
-(id)networkTypes;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)applicationStates;
-(void)addApplicationState:(id)arg1 ;
-(void)setApplicationStates:(id)arg1 ;
-(long long)cellularDataStates;
-(long long)powerStates;
-(long long)registrationStates;
-(long long)timeLimitStates;
-(void)addNetworkType:(long long)arg1 ;
-(bool)isCellularAllowed;
-(bool)isWiFiAllowed;
-(void)setBatteryLevel:(float)arg1 ;
-(void)setDownloadSizeLimit:(long long)arg1 ;
-(void)setNetworkTypes:(id)arg1 ;
-(void)setPowerStates:(long long)arg1 ;
-(void)setRegistrationStates:(long long)arg1 ;
-(void)setTimeLimitStates:(long long)arg1 ;
@end
