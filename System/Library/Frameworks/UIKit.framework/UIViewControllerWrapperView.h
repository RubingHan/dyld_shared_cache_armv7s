/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:02 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@interface UIViewControllerWrapperView : UIView {

	bool _tightWrappingDisabled;

}

@property (assign,nonatomic) bool tightWrappingDisabled;              //@synthesize tightWrappingDisabled=_tightWrappingDisabled - In the implementation block
+(id)existingWrapperViewForView:(id)arg1 ;
+(id)wrapperViewForView:(id)arg1 frame:(CGRect)arg2 ;
+(id)wrapperViewForView:(id)arg1 wrapperFrame:(CGRect)arg2 viewFrame:(CGRect)arg3 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTightWrappingDisabled:(bool)arg1 ;
-(bool)tightWrappingDisabled;
-(void)unwrapView;
-(void)unwrapView:(id)arg1 ;
@end
