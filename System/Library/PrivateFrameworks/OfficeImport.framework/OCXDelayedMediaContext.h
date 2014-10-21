/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OCDDelayedMediaContext.h>

@class OCPPackage, NSURL;

@interface OCXDelayedMediaContext : NSObject <OCDDelayedMediaContext> {

	OCPPackage* mPackage;
	NSURL* mTargetLocation;

}
-(void)dealloc;
-(bool)loadDelayedNode:(id)arg1 ;
-(bool)saveDelayedMedia:(id)arg1 toFile:(id)arg2 ;
-(id)dataRep;
-(id)initWithTargetLocation:(id)arg1 package:(id)arg2 ;
@end
