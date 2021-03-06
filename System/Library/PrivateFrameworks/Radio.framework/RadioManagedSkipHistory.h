/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSArray;

@interface RadioManagedSkipHistory : NSManagedObject

@property (nonatomic,copy) NSString * skipIdentifier; 
@property (nonatomic,copy) NSArray * skipTimestamps; 
@property (nonatomic,copy) NSString * stationHash; 
@property (assign,nonatomic) long long stationID; 
-(id)stationHash;
-(long long)stationID;
-(void)setStationHash:(id)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)setSkipIdentifier:(id)arg1 ;
-(void)setSkipTimestamps:(id)arg1 ;
-(id)skipIdentifier;
-(id)skipTimestamps;
@end

