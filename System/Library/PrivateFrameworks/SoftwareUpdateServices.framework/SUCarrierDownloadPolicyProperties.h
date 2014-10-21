/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@interface SUCarrierDownloadPolicyProperties : NSObject <NSSecureCoding>
+(bool)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_numberForKey:(id)arg1 ;
-(bool)_boolForKey:(id)arg1 defaultValue:(bool)arg2 ;
-(long long)_longLongForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(bool)_isValidHour:(long long)arg1 ;
-(id)_carrierSUProperties;
-(bool)isDownloadFree;
-(bool)isDownloadAllowable;
-(bool)isDownloadAllowableOver2G;
-(bool)isAutoDownloadAllowable;
-(long long)maximumDownloadSizeInBytes;
-(unsigned long long)numberOfDaysToWaitForCellularAutoDownload;
-(long long)peakStartHour;
-(long long)peakEndHour;
-(unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(long long)arg2 ;
@end
