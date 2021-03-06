/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CalendarLabelTextMetrics
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,copy) NSString * text; 
@required
-(void)setTextColor:(id)arg1;
-(void)setFont:(id)arg1;
-(void)setTextAlignment:(long long)arg1;
-(id)text;
-(void)setText:(id)arg1;
-(void)setLineBreakMode:(long long)arg1;
-(id)font;
-(id)textColor;
-(long long)textAlignment;
-(void)setNumberOfLines:(long long)arg1;
-(long long)lineBreakMode;
-(CGRect*)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
-(long long)numberOfLines;
@end

