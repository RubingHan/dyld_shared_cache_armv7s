/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber;

@interface ASPingItem : ASItem {

	NSArray* _folders;
	NSNumber* _heartBeatInterval;
	NSNumber* _maxFolders;
	NSNumber* _status;

}

@property (retain) NSArray * folders;                         //@synthesize folders=_folders - In the implementation block
@property (retain) NSNumber * heartBeatInterval;              //@synthesize heartBeatInterval=_heartBeatInterval - In the implementation block
@property (retain) NSNumber * maxFolders;                     //@synthesize maxFolders=_maxFolders - In the implementation block
@property (retain) NSNumber * status;                         //@synthesize status=_status - In the implementation block
+(bool)acceptsTopLevelLeaves;
+(bool)parsingLeafNode;
+(bool)parsingWithSubItems;
+(bool)frontingBasicTypes;
+(bool)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)dealloc;
-(id)description;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)folders;
-(void)setHeartBeatInterval:(id)arg1 ;
-(void)setMaxFolders:(id)arg1 ;
-(void)setFolders:(id)arg1 ;
-(id)heartBeatInterval;
-(id)maxFolders;
@end
