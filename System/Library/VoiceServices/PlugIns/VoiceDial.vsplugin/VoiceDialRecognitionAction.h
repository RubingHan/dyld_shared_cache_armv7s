/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceServices/VSRecognitionURLAction.h>

@class NSString;

@interface VoiceDialRecognitionAction : VSRecognitionURLAction {

	NSString* _phoneNumber;
	int _uid;

}
-(void)dealloc;
-(id)perform;
-(id)initWithPhoneNumber:(id)arg1 uid:(int)arg2 ;
@end

