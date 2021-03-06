/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface MSLibraryLinkItem : NSObject {

	long long _fallbackSectionType;
	bool _isComplete;
	NSDictionary* _queryStringDictionary;

}

@property (assign,getter=isComplete,nonatomic) bool complete;                   //@synthesize isComplete=_isComplete - In the implementation block
@property (assign,nonatomic) long long fallbackSectionType;                     //@synthesize fallbackSectionType=_fallbackSectionType - In the implementation block
@property (nonatomic,retain) NSDictionary * queryStringDictionary;              //@synthesize queryStringDictionary=_queryStringDictionary - In the implementation block
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)setComplete:(bool)arg1 ;
-(bool)isComplete;
-(long long)fallbackSectionType;
-(id)_copyFieldNamesFromURLBag;
-(void)_parseURL:(id)arg1 withFields:(id)arg2 ;
-(void)setFallbackSectionType:(long long)arg1 ;
-(bool)_parseKind:(id)arg1 ;
-(id)queryStringDictionary;
-(void)setQueryStringDictionary:(id)arg1 ;
@end

