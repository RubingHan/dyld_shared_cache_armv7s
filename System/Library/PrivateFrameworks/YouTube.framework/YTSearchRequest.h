/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <YouTube/YTFeedRequest.h>

@interface YTSearchRequest : YTFeedRequest
+(unsigned)videosPerRequest;
+(id)_formatFilter;
+(id)feedCountryCode;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(void)searchForVideosWithFeedURLBase:(id)arg1 startingAtIndex:(unsigned)arg2 maxResults:(unsigned)arg3 withTimeQualifier:(id)arg4 withFormatFilter:(bool)arg5 authenticationRequired:(bool)arg6 withDelegate:(id)arg7 ;
-(void)searchForVideoWithID:(id)arg1 withDelegate:(id)arg2 ;
-(void)searchForVideosWithIDs:(id)arg1 withDelegate:(id)arg2 ;
-(void)searchForVideosMatchingString:(id)arg1 startingAtIndex:(unsigned)arg2 maxResults:(unsigned)arg3 withDelegate:(id)arg4 ;
-(void)searchForStandardFeedVideosOfType:(id)arg1 startIndex:(unsigned)arg2 maxResults:(unsigned)arg3 timeQualifier:(id)arg4 withDelegate:(id)arg5 ;
-(void)searchForRecentVideosStartingAtIndex:(unsigned)arg1 maxResults:(unsigned)arg2 withDelegate:(id)arg3 ;
-(void)searchForVideosRelatedToVideo:(id)arg1 startingAtIndex:(unsigned)arg2 maxResults:(unsigned)arg3 withDelegate:(id)arg4 ;
-(void)searchForVideosByAuthor:(id)arg1 startingAtIndex:(unsigned)arg2 maxResults:(unsigned)arg3 withDelegate:(id)arg4 ;
-(void)searchForFavoriteVideosStartingAtIndex:(unsigned)arg1 maxResults:(unsigned)arg2 withDelegate:(id)arg3 ;
-(void)searchForMyVideosStartingAtIndex:(unsigned)arg1 maxResults:(unsigned)arg2 withDelegate:(id)arg3 ;
-(void)searchForVideosFromWatchLaterPlaylistStartingAtIndex:(unsigned)arg1 maxResults:(unsigned)arg2 withDelegate:(id)arg3 ;
-(bool)receivedValidResponse:(id)arg1 ;
@end

