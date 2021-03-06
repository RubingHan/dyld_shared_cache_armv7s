/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray;

@interface AVInternalDeviceList : NSObject {

	/*^block*/ id changeListener;
	NSMutableArray* deviceList;
	opaque_pthread_mutex_t listLock;

}

@property (nonatomic,copy) id changeListener; 
+(id)newDeviceList;
+(id)defaultDeviceOfType:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(void)cleanup;
-(id)deviceList;
-(void)setChangeListener:(/*^block*/ id)arg1 ;
-(/*^block*/ id)changeListener;
@end

