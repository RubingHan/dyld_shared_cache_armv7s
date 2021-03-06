/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface UIMenuItem : NSObject {

	NSString* _title;
	SEL _action;
	bool _dontDismiss;

}

@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) bool dontDismiss;              //@synthesize dontDismiss=_dontDismiss - In the implementation block
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(SEL)action;
-(id)title;
-(void)setAction:(SEL)arg1 ;
-(id)initWithTitle:(id)arg1 action:(SEL)arg2 ;
-(void)setDontDismiss:(bool)arg1 ;
-(bool)dontDismiss;
@end

