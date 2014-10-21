/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSDate, NSString;

@interface MBRestoreInfo : NSObject <NSCoding, NSCopying> {

	NSDate* _date;
	bool _wasCloudRestore;
	NSString* _deviceBuildVersion;
	NSString* _backupBuildVersion;

}

@property (readonly) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (readonly) bool wasCloudRestore;                       //@synthesize wasCloudRestore=_wasCloudRestore - In the implementation block
@property (readonly) NSString * deviceBuildVersion;              //@synthesize deviceBuildVersion=_deviceBuildVersion - In the implementation block
@property (readonly) NSString * backupBuildVersion;              //@synthesize backupBuildVersion=_backupBuildVersion - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)date;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setDate:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setWasCloudRestore:(bool)arg1 ;
-(void)setDeviceBuildVersion:(id)arg1 ;
-(void)setBackupBuildVersion:(id)arg1 ;
-(bool)wasCloudRestore;
-(id)deviceBuildVersion;
-(id)backupBuildVersion;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
@end
