/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSMutableArray;

@interface MPShuffledItemGroup : NSObject <NSSecureCoding> {

	long long _groupPersistentID;
	NSMutableArray* _mutableItems;

}
+(bool)supportsSecureCoding;
-(id)initWithGroupPersistentID:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void).cxx_destruct;
@end

