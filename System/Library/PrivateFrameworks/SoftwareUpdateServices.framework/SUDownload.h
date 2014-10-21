/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@class SUDescriptor, SUOperationProgress, SUDownloadMetadata;

@interface SUDownload : NSObject <NSSecureCoding, NSCopying> {

	SUDescriptor* _descriptor;
	SUOperationProgress* _progress;
	SUDownloadMetadata* _metadata;

}

@property (nonatomic,retain) SUDescriptor * descriptor;                   //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) SUOperationProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) SUDownloadMetadata * metadata;               //@synthesize metadata=_metadata - In the implementation block
+(bool)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setProgress:(id)arg1 ;
-(id)progress;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(void)setDescriptor:(id)arg1 ;
-(id)descriptor;
-(unsigned long long)totalSpaceConsumed;
@end
