/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface RTFNSFont : NSObject {

	NSString* _fontName;
	double _fontSize;
	double _pointSize;

}

@property (retain) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (assign) double fontSize;                  //@synthesize fontSize=_fontSize - In the implementation block
@property (assign) double pointSize;                 //@synthesize pointSize=_pointSize - In the implementation block
+(id)userFixedPitchFontOfSize:(double)arg1 ;
+(id)systemFontOfSize:(double)arg1 ;
+(id)fontWithName:(id)arg1 size:(double)arg2 ;
+(id)userFontOfSize:(double)arg1 ;
-(double)pointSize;
-(id)fontName;
-(void)setFontSize:(double)arg1 ;
-(void)setFontName:(id)arg1 ;
-(double)fontSize;
-(void)setPointSize:(double)arg1 ;
-(id)initWithName:(id)arg1 size:(double)arg2 ;
-(unsigned long long)mostCompatibleStringEncoding;
@end

