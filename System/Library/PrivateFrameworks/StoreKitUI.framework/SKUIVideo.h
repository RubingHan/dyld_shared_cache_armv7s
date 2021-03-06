/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:51 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSString, SKUIArtworkList;

@interface SKUIVideo : NSObject {

	NSURL* _url;
	NSString* _title;
	NSString* _runtime;
	SKUIArtworkList* _artworks;

}

@property (nonatomic,readonly) NSURL * URL;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * runtime;                      //@synthesize runtime=_runtime - In the implementation block
@property (nonatomic,readonly) SKUIArtworkList * artworks;              //@synthesize artworks=_artworks - In the implementation block
-(id)title;
-(id)URL;
-(void).cxx_destruct;
-(id)artworks;
-(id)initWithVideoDictionary:(id)arg1 ;
-(id)runtime;
@end

