/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:50 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MFModernAtomView.h>

@protocol MFCorecipientsIndicatorAtomDelegate;
@class NSArray;

@interface MFCorecipientsIndicatorAtom : MFModernAtomView {

	bool _touchesWereCancelled;
	<MFCorecipientsIndicatorAtomDelegate>* _delegate;
	NSArray* _recipients;

}

@property (assign,nonatomic) <MFCorecipientsIndicatorAtomDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                          //@synthesize recipients=_recipients - In the implementation block
-(id)initWithRecipients:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)recipients;
-(void)setRecipients:(id)arg1 ;
@end

