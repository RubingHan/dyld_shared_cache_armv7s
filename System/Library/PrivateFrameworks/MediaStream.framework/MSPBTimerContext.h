/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:28 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface MSPBTimerContext : NSObject {

	bool _isValid;
	NSDate* _date;

}

@property (assign,nonatomic) bool isValid;               //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(id)contextWithDate:(id)arg1 ;
-(id)init;
-(bool)isValid;
-(id)date;
-(void)setDate:(id)arg1 ;
-(void).cxx_destruct;
-(void)setIsValid:(bool)arg1 ;
@end

