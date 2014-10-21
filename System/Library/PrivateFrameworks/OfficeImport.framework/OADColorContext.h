/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:51 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OADColorPalette;
@class OADColorScheme, OADColorMap;

@interface OADColorContext : NSObject {

	OADColorScheme* mScheme;
	OADColorMap* mMap;
	<OADColorPalette>* mPalette;

}

@property (nonatomic,readonly) OADColorScheme * scheme; 
@property (nonatomic,readonly) OADColorMap * map; 
@property (nonatomic,readonly) <OADColorPalette> * palette; 
+(id)colorContextWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3 ;
-(void)dealloc;
-(id)scheme;
-(id)map;
-(id)initWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3 ;
-(id)palette;
@end
