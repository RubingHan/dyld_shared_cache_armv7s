/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SUDownloadPolicyFactory : NSObject
+(int)downloadPolicyTypeForClass:(id)arg1 ;
+(id)downloadPolicyForType:(int)arg1 forDescriptor:(id)arg2 ;
+(id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2 ;
+(id)_userDownloadPolicyFromCurrentPolicy:(id)arg1 descriptor:(id)arg2 networkMonitor:(id)arg3 ;
+(id)userDownloadPolicyForDescriptor:(id)arg1 ;
@end

