/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIColor, NSString;

@interface PT2DGraphAxisStyle : NSObject {

	bool _showsGridlines;
	bool _showsHashmarks;
	bool _showsTitle;
	UIColor* _color;
	double _lineWidth;
	double _hashmarkInterval;
	NSString* _title;
	UIColor* _gridlineColor;
	UIColor* _titleColor;
	unsigned long long _gridlineCount;

}

@property (nonatomic,retain) UIColor * color;                               //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double lineWidth;                              //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double hashmarkInterval;                       //@synthesize hashmarkInterval=_hashmarkInterval - In the implementation block
@property (assign,nonatomic) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIColor * gridlineColor;                       //@synthesize gridlineColor=_gridlineColor - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;                          //@synthesize titleColor=_titleColor - In the implementation block
@property (assign,nonatomic) unsigned long long gridlineCount;              //@synthesize gridlineCount=_gridlineCount - In the implementation block
@property (assign,nonatomic) bool showsGridlines;                           //@synthesize showsGridlines=_showsGridlines - In the implementation block
@property (assign,nonatomic) bool showsHashmarks;                           //@synthesize showsHashmarks=_showsHashmarks - In the implementation block
@property (assign,nonatomic) bool showsTitle;                               //@synthesize showsTitle=_showsTitle - In the implementation block
-(id)init;
-(void)setTitle:(id)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(id)title;
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)titleColor;
-(void)setTitleColor:(id)arg1 ;
-(void).cxx_destruct;
-(void)setGridlineCount:(unsigned long long)arg1 ;
-(void)setGridlineColor:(id)arg1 ;
-(void)setShowsGridlines:(bool)arg1 ;
-(double)hashmarkInterval;
-(void)setHashmarkInterval:(double)arg1 ;
-(id)gridlineColor;
-(unsigned long long)gridlineCount;
-(bool)showsGridlines;
-(bool)showsHashmarks;
-(void)setShowsHashmarks:(bool)arg1 ;
-(bool)showsTitle;
-(void)setShowsTitle:(bool)arg1 ;
@end

