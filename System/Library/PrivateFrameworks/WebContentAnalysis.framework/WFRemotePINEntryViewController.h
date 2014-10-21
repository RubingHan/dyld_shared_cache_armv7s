/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <WebContentAnalysis/WFPINEntryViewControllerProtocol.h>

@protocol WFPINEntryViewControllerProtocol;
@class NSObject;

@interface WFRemotePINEntryViewController : _UIRemoteViewController <WFPINEntryViewControllerProtocol> {

	NSObject<WFPINEntryViewControllerProtocol>* _delegate;

}

@property (assign,nonatomic) NSObject<WFPINEntryViewControllerProtocol> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setURL:(id)arg1 ;
-(void)userDidCancel;
-(void)setPageTitle:(id)arg1 ;
-(void)userEnteredCorrectPIN;
@end
