/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, UIAlertView, UIPrintingProgressViewController;

@interface UIPrintingProgress : NSObject {

	NSString* _printerName;
	/*^block*/ id _cancelHandler;
	double _startTime;
	double _displayTime;
	UIAlertView* _alert;
	UIPrintingProgressViewController* _viewController;
	bool _donePrinting;

}
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)didPresentAlertView:(id)arg1 ;
-(id)initWithPrinterName:(id)arg1 cancelHandler:(/*^block*/ id)arg2 ;
-(void)setPrintInfoState:(int)arg1 ;
-(void)setPage:(long long)arg1 ofPage:(long long)arg2 ;
-(double)nextPrintDelay;
-(void)endProgress;
-(void)hideProgressAnimated:(bool)arg1 ;
-(bool)progressVisible;
-(void)progressCancel;
-(void)showProgress:(id)arg1 immediately:(bool)arg2 ;
@end
