/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@interface HSBulkAddPlaylistRequest : HSRequest
+(id)requestWithDatabaseID:(unsigned)arg1 sessionID:(unsigned)arg2 playlistName:(id)arg3 ;
+(id)requestWithDatabaseID:(unsigned)arg1 sessionID:(unsigned)arg2 playlistName:(id)arg3 seedItemIDs:(id)arg4 itemIDs:(id)arg5 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)_bodyDataForSessionID:(unsigned)arg1 playlistName:(id)arg2 seedItemIDs:(id)arg3 itemIDs:(id)arg4 ;
-(id)initWithDatabaseID:(unsigned)arg1 sessionID:(unsigned)arg2 playlistName:(id)arg3 seedItemIDs:(id)arg4 itemIDs:(id)arg5 ;
@end
