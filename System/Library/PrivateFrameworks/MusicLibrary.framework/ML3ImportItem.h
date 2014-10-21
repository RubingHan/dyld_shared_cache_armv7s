/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ML3ImportItem : NSObject {

	int _sourceType;
	long long _persistentIdentifier;

}

@property (assign,nonatomic) int sourceType;                              //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) long long persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
-(int)sourceType;
-(void)setSourceType:(int)arg1 ;
-(id)valueForProperty:(unsigned)arg1 ;
-(long long)persistentIdentifier;
-(id)sortTitle;
-(id)sanitizedStringValueForProperty:(unsigned)arg1 ;
-(id)sortArtist;
-(id)sortSeries;
-(id)sortAlbum;
-(id)effectiveSortAlbumArtist;
-(id)effectiveAlbumArtist;
-(id)sortComposer;
-(id)sortGenre;
-(unsigned)sanitizedMediaType;
-(id)sortEpisodeId;
-(bool)hasSortEpisodeId;
-(bool)hasValueForProperty:(unsigned)arg1 ;
-(id)deduplicationPredicates;
-(id)allPropertyValues;
-(bool)canInsertIntoPurchasePlaylist;
-(id)sortAlbumArtist;
-(void)setPersistentIdentifier:(long long)arg1 ;
@end
