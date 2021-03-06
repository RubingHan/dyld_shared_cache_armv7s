/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString;

@interface SLFacebookUpload : NSObject <NSSecureCoding> {

	NSString* _uploadID;
	long long _uploadType;
	unsigned long long _totalBytes;
	unsigned long long _transferredBytes;

}

@property (nonatomic,retain) NSString * uploadID;                              //@synthesize uploadID=_uploadID - In the implementation block
@property (assign,nonatomic) long long uploadType;                             //@synthesize uploadType=_uploadType - In the implementation block
@property (assign,nonatomic) unsigned long long totalBytes;                    //@synthesize totalBytes=_totalBytes - In the implementation block
@property (assign,nonatomic) unsigned long long transferredBytes;              //@synthesize transferredBytes=_transferredBytes - In the implementation block
+(bool)supportsSecureCoding;
-(id)uploadID;
-(void)setUploadID:(id)arg1 ;
-(long long)uploadType;
-(void)setUploadType:(long long)arg1 ;
-(unsigned long long)transferredBytes;
-(void)setTransferredBytes:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void).cxx_destruct;
-(void)setTotalBytes:(unsigned long long)arg1 ;
-(unsigned long long)totalBytes;
@end

