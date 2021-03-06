/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ExFAT.framework/ExFAT
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UserFSItem <NSObject>
@property (nonatomic,readonly) <UserFSVolume> * volume; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) bool isDirectory; 
@property (getter=isLocked,nonatomic,readonly) bool locked; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,readonly) long long createdDate; 
@property (nonatomic,readonly) long long modifiedDate; 
@required
-(bool)isDirectory;
-(unsigned long long)length;
-(bool)isLocked;
-(id)name;
-(long long)createdDate;
-(long long)modifiedDate;
-(id)volume;
@end

