/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/SLMicroBlogUserRecord.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSNumber, NSURL;

@interface SLWeiboUserRecord : SLMicroBlogUserRecord <NSSecureCoding> {

	NSNumber* _uid;
	NSURL* _objectID;

}

@property (nonatomic,copy) NSNumber * uid;                  //@synthesize uid=_uid - In the implementation block
@property (nonatomic,retain) NSURL * objectID;              //@synthesize objectID=_objectID - In the implementation block
+(id)userRecordWithDictionaryRepresentation:(id)arg1 ;
+(bool)supportsSecureCoding;
-(void)setObjectID:(id)arg1 ;
-(void)setValuesWithUserDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)uid;
-(void).cxx_destruct;
-(void)setUid:(id)arg1 ;
-(id)objectID;
@end
