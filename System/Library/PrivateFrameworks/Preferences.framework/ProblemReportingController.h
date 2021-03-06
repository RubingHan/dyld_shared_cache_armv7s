/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PrefsUILinkLabel, PSSpecifier;

@interface ProblemReportingController : PSListController {

	PrefsUILinkLabel* _aboutDiagnosticsLinkLabel;
	PSSpecifier* _diagnosticDataGroupSpecifier;

}
+(bool)isProblemReportingEnabled;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(id)specifiers;
-(Class)tableViewClass;
-(void)showAboutDiagnosticsSheet:(id)arg1 ;
-(void)diagnosticsDonePressed:(id)arg1 ;
-(bool)shouldEnableProblemReportingForCheckedSpecifier;
-(void)setProblemReportingEnabled:(bool)arg1 ;
@end

