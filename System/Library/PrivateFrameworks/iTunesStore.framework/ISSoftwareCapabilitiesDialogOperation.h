/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSDictionary;

@interface ISSoftwareCapabilitiesDialogOperation : ISOperation {

	NSDictionary* _mismatches;
	id _requiredCapabilities;

}

@property (readonly) NSDictionary * mismatches; 
@property (readonly) id requiredCapabilities; 
-(void)dealloc;
-(void)run;
-(id)requiredCapabilities;
-(void)_postDefaultDialog;
-(id)mismatches;
-(id)initWithRequiredCapabilities:(id)arg1 mismatches:(id)arg2 ;
@end

