/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSSetupController.h>
#import <UIKit/UIActionSheetDelegate.h>

@class UIActionSheet;

@interface PhoneSettingsMyNumberSetupController : PSSetupController <UIActionSheetDelegate> {

	UIActionSheet* _errorActionSheet;

}
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(bool)arg1 ;
-(void)_saveMyNumberDidFinish:(id)arg1 ;
@end
