/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:15 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardMenuView.h>

@class NSMutableArray, NSArray;

@interface UIInputSwitcherView : UIKeyboardMenuView {

	int m_currentInputModeIndex;
	bool m_keyboardSettingsFromSwitcher;
	NSMutableArray* m_inputModes;

}

@property (nonatomic,retain) NSArray * inputModes; 
@property (assign,nonatomic) bool keyboardSettingsFromSwitcher; 
+(id)sharedInstance;
+(id)activeInstance;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)show;
-(void)setInputMode:(id)arg1 ;
-(long long)numberOfItems;
-(id)selectedInputMode;
-(id)previousInputMode;
-(id)inputModes;
-(id)nextInputMode;
-(void)selectInputMode:(id)arg1 ;
-(CGSize)preferredSize;
-(long long)defaultSelectedIndex;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(id)titleForItemAtIndex:(int)arg1 ;
-(id)subtitleForItemAtIndex:(int)arg1 ;
-(void)setKeyboardSettingsFromSwitcher:(bool)arg1 ;
-(void)setInputModes:(id)arg1 ;
-(bool)keyboardSettingsFromSwitcher;
-(void)selectRowForInputMode:(id)arg1 ;
-(void)selectNextInputMode;
-(void)selectPreviousInputMode;
@end
